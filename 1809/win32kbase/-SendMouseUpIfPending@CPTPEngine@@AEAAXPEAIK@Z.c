/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C015ED50
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0159FE4 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C015B89C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C015D3F8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C015ECF8 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpIfPending(CPTPEngine *this, unsigned int *a2, int a3)
{
  int v3; // eax
  int v4; // edx

  v3 = *a2;
  if ( *a2 )
  {
    if ( v3 == 4 )
    {
      *((_DWORD *)this + 824) &= ~8u;
    }
    else if ( v3 == 16 )
    {
      *((_DWORD *)this + 824) &= ~0x10u;
    }
    *a2 = 0;
    v4 = 2;
    if ( v3 != 4 )
      v4 = 4;
    CBasePTPEngine::SendMouseOutput((__int64)this, v4, *((_QWORD *)this + 411), a3);
  }
}
