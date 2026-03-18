/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00D8D00
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D81F0 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00D8E04 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9898 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00D9914 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DDF10 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  _QWORD *v19; // rax
  struct CCD_TOPOLOGY *v20; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v21; // [rsp+28h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int16 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a4);
  v20 = a4;
  v21 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v20, a3);
  LODWORD(v10) = result;
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)a4 + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v21 > v12 )
      LODWORD(v10) = -1073741789;
    if ( a5 )
      *a5 = v21;
    if ( (int)v10 >= 0 && !a2 )
    {
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v13 = *this;
      v25 = 0LL;
      v26 = 0;
      v14 = (*v13)((CCD_BTL *)this, &v22);
      v10 = v14;
      if ( v14 < 0
        || (v18 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v22), v10 = v18, v18 < 0) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
        v19[3] = v10;
        v19[4] = &v22;
        v19[5] = a4;
        v19[6] = *((_QWORD *)a4 + 8);
        WdLogEvent5_WdError(v19);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v22);
    }
    return (unsigned int)v10;
  }
  return result;
}
