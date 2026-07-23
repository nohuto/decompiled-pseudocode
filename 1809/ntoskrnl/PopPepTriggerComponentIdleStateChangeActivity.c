/*
 * XREFs of PopPepTriggerComponentIdleStateChangeActivity @ 0x140177750
 * Callers:
 *     <none>
 * Callees:
 *     PopPepTryPowerUpComponent @ 0x140100130 (PopPepTryPowerUpComponent.c)
 */

void __fastcall PopPepTriggerComponentIdleStateChangeActivity(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    if ( a3 < 0 )
      PopPepTryPowerUpComponent(a1, a2);
    v5 = *(_QWORD *)(a2 + 64);
    if ( *(_DWORD *)(a2 + 176) )
      *(_DWORD *)(v5 + 4) = 0;
    else
      *(_DWORD *)(v5 + 4) = a3 & 0x7FFFFFFF;
  }
}
