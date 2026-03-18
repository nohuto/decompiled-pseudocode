/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C02C2F90
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C026EC58 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D81F0 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9898 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DAE84 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int16 v16; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v16) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v5 = 8;
  v16 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v5) >= v5 )
  {
    v11 = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &v16);
    if ( v11 != -1073741789 )
      goto LABEL_6;
    v5 = v16;
  }
  v13 = WdLogNewEntry5_WdError(v7, v6, v8);
  *(_QWORD *)(v13 + 24) = v5;
  WdLogEvent5_WdError(v13);
  v11 = -1073741801;
LABEL_6:
  if ( v11 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v14 + 24) = v11;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v11;
}
