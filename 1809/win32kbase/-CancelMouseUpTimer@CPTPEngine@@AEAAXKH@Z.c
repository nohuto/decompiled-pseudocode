/*
 * XREFs of ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0159FE4
 * Callers:
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C015C754 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C015D6F0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C015ED50 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C015EF74 (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::CancelMouseUpTimer(CPTPEngine *this, unsigned int a2, int a3)
{
  unsigned int *v3; // rdi

  v3 = (unsigned int *)((char *)this + 3276);
  if ( *((_DWORD *)this + 819) )
  {
    if ( *((_DWORD *)this + 817) )
    {
      CBasePTPEngine::SendTimerOutput(this, 1LL);
      *((_DWORD *)this + 817) = 0;
    }
    if ( a3 )
      CPTPEngine::SendMouseUpIfPending(this, v3, a2);
  }
}
