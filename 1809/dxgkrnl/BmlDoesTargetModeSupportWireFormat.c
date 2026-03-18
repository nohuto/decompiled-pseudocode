/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C00D6A68
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C5F24 (BmlDoesTargetModeObeyConstraint.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00D7018 (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // dl
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 128);
  if ( !v2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_QWORD *)(v2 + 112);
  v7 = *(_QWORD *)(v6 + 40);
  if ( !v7 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v13);
    v7 = *(_QWORD *)(v6 + 40);
  }
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v7 + 64) + 48);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v14);
    v9 = *(_QWORD *)(v8 + 8);
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v9 + 16)) )
    return (a2 & v4) >= 0x4000000
        || (((unsigned __int8)(v10 & (v4 >> 2)) | (unsigned __int8)((unsigned __int16)(a2 & v4 | ((a2 & v4 | ((a2 & v4) >> 6)) >> 6)) >> 8)) & 0x3F) != 0;
  else
    return (v10 & 0x3F) == 2;
}
