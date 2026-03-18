/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C0196D00
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C019212C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01938F8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01953F8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01957F8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0196CB0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpIfPending(CPTPEngine *this, unsigned int *a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *a2;
  if ( *a2 )
  {
    if ( v2 == 4 )
    {
      *((_DWORD *)this + 814) &= ~8u;
    }
    else if ( v2 == 16 )
    {
      *((_DWORD *)this + 814) &= ~0x10u;
    }
    *a2 = 0;
    v3 = 2;
    if ( v2 != 4 )
      v3 = 4;
    CBasePTPEngine::SendMouseOutput((__int64)this, v3, *((_QWORD *)this + 406));
  }
}
