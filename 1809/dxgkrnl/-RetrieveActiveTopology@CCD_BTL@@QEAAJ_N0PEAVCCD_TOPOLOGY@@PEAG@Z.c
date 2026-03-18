/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00C94A4
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00C95D8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9978 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00CA828 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        char a2,
        bool a3,
        struct CCD_TOPOLOGY *a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rax
  struct CCD_TOPOLOGY *v18; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v19; // [rsp+28h] [rbp-48h]
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int16 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a4);
  v18 = a4;
  v19 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v18, a3);
  LODWORD(v10) = result;
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)a4 + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v19 > v12 )
      LODWORD(v10) = -1073741789;
    if ( a5 )
      *a5 = v19;
    if ( (int)v10 >= 0 && !a2 )
    {
      v20 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v13 = *this;
      v23 = 0LL;
      v24 = 0;
      v14 = (*v13)((CCD_BTL *)this, &v20);
      v10 = v14;
      if ( v14 < 0
        || (v16 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v20), v10 = v16, v16 < 0) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v17[3] = v10;
        v17[4] = &v20;
        v17[5] = a4;
        v17[6] = *((_QWORD *)a4 + 8);
        WdLogEvent5_WdError(v17);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v20);
    }
    return (unsigned int)v10;
  }
  return result;
}
