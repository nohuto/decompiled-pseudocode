/*
 * XREFs of PopIsDozeSupported @ 0x1405B0814
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4B2C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14071C5DC (PopInitSIdle.c)
 *     PopDeferDoze @ 0x14086F730 (PopDeferDoze.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1405B0850 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v4; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v4 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v4 = 1;
    LOBYTE(v2) = v4;
  }
  return v2;
}
