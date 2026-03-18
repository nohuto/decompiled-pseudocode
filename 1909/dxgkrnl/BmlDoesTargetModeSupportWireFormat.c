/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C0128164
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00DB530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00DB800 (BmlCompareTargetModesWithConstraint.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C0126EC8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned int v4; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // dl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 128);
  if ( !v2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_QWORD *)(v2 + 112);
  v7 = *(_QWORD *)(v6 + 40);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v14);
    v7 = *(_QWORD *)(v6 + 40);
  }
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v7 + 64, a2) + 48);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, v8);
    WdLogEvent5_WdAssertion(v15);
    v10 = *(_QWORD *)(v9 + 8);
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v10 + 16)) )
    return (v3 & v4) >= 0x4000000
        || (((unsigned __int8)(v11 & (v4 >> 2)) | (unsigned __int8)((unsigned __int16)(v3 & v4 | ((v3 & v4 | ((v3 & v4) >> 6)) >> 6)) >> 8)) & 0x3F) != 0;
  else
    return (v11 & 0x3F) == 2;
}
