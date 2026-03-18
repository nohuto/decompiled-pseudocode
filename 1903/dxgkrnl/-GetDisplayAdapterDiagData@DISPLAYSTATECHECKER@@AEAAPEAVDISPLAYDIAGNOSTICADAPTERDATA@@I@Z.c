/*
 * XREFs of ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C
 * Callers:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049BF8 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294AB0 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C0294FC8 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295810 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z @ 0x1C0295C48 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296570 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4Dx.c)
 * Callees:
 *     <none>
 */

struct DISPLAYDIAGNOSTICADAPTERDATA *__fastcall DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(
        DISPLAYSTATECHECKER *this,
        __int64 a2)
{
  __int64 v3; // rax

  if ( (unsigned int)a2 < 4 )
    return (DISPLAYSTATECHECKER *)((char *)this + 1008 * (unsigned int)a2 + 1848);
  v3 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v3 + 24) = 427LL;
  WdLogEvent5_WdAssertion(v3);
  return 0LL;
}
