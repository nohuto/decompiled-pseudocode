/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C00243E0
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C007F5CC (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00244E8 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0024724 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C011D3E4 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  unsigned int v7; // r15d
  __int64 i; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  int v11; // r14d
  unsigned int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-60h] BYREF

  v7 = (a3 == 2) | 2;
  if ( a3 != 3 )
    v7 = a3 == 2;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 1LL;
    v10 = *(_QWORD **)(i + 8);
    if ( v10 )
    {
      if ( (*(_DWORD *)(i + 32) & 2) == 0 )
        break;
    }
LABEL_6:
    ;
  }
  v11 = 0;
  *((_DWORD *)a4 + 7) = 1;
  memset(v15, 0, sizeof(v15));
  *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 24);
  while ( 1 )
  {
    v9 = v10[1];
    v14 = v9;
    if ( (unsigned int)PFEOBJ::bFilteredOut((PFEOBJ *)&v14, a4) )
      goto LABEL_5;
    if ( a3 != 1 )
      break;
    v13 = efstyCompute(v15, &v14);
    if ( !v11 || v13 == 5 )
    {
      if ( !(unsigned int)EFSOBJ::bAdd(a2, v9, v13, 0LL, 1) )
        return 0LL;
      v11 = 1;
    }
LABEL_5:
    v10 = (_QWORD *)*v10;
    if ( !v10 )
      goto LABEL_6;
  }
  if ( (unsigned int)EFSOBJ::bAdd(a2, v9, 0LL, v7, *((_DWORD *)a4 + 9)) )
    goto LABEL_6;
  return 0LL;
}
