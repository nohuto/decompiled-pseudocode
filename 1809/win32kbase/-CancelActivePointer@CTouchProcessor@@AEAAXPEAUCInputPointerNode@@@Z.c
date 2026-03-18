/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0134BD0
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0062FF0 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0138F08 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0143990 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C0147F80 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  unsigned int v6; // edi
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r8
  CInputDest *v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rbx

  v6 = 0;
  v7 = *((_DWORD *)a2 + 9) - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      v6 = 0x40000;
    else
      WPP_RECORDER_SF_LHH(*((_QWORD *)this + 1), v7, a3, a4);
  }
  else
  {
    v6 = 0x20000;
  }
  CTouchProcessor::SetNewValidState(this, v6, a2);
  v10 = (struct CInputPointerNode *)((char *)a2 + 48);
  if ( *((_DWORD *)a2 + 12) )
  {
    CInputDest::SetEmpty(v10);
    *((_DWORD *)a2 + 82) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 9) == 3
    && *((struct CInputPointerNode **)a2 + 36) == (struct CInputPointerNode *)((char *)a2 + 288) )
  {
    CTouchProcessor::ProcessLostCaptureList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v11 = (__int64 *)((char *)a2 + 288);
    v12 = *((_QWORD *)a2 + 36);
    if ( (__int64 *)v12 == v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
      v12 = *v11;
    }
    if ( (*(_DWORD *)(v12 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("CTouchProcessor::CancelActivePointer");
    CTouchProcessor::UnreferenceMsgData(this, v12, 1LL);
  }
}
