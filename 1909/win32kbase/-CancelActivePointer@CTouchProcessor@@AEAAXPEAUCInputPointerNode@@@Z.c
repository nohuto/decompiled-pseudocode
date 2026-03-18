/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C015FE64
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00B7600 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0165030 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C016F0A0 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0170604 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C0174CE8 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  CInputDest *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx

  v6 = *((_DWORD *)a2 + 13);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 0x20000;
  }
  else if ( v6 == 2 )
  {
    v7 = 0x40000;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LHH(v6, v6 - 1, a3, a4);
  }
  CTouchProcessor::SetNewValidState(this, v7, a2);
  v10 = (struct CInputPointerNode *)((char *)a2 + 64);
  if ( *((_DWORD *)a2 + 16) )
  {
    CInputDest::SetEmpty(v10, v8, v9);
    *((_DWORD *)a2 + 72) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 13) == 3
    && *((struct CInputPointerNode **)a2 + 31) == (struct CInputPointerNode *)((char *)a2 + 248) )
  {
    CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v11 = (_QWORD *)((char *)a2 + 248);
    v12 = (_QWORD *)*v11;
    if ( (_QWORD *)*v11 == v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, v9);
      v12 = (_QWORD *)*v11;
    }
    CTouchProcessor::UnreferenceMsgData(this, v12, 1LL);
  }
}
