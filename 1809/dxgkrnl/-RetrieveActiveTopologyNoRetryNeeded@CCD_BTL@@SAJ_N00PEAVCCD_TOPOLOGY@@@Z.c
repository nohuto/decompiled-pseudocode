/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C028AB44
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0239E28 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9978 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // bx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v14; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v14) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v7 = 8;
  v14 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v7, v5, v6) >= v7 )
  {
    v10 = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &v14);
    if ( v10 != -1073741789 )
      goto LABEL_6;
    v7 = v14;
  }
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = v7;
  WdLogEvent5_WdError(v11);
  v10 = -1073741801;
LABEL_6:
  if ( v10 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = v10;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v10;
}
