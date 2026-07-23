/*
 * XREFs of PopIsDozeSupported @ 0x1405B1814
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4E1C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 *     PopDeferDoze @ 0x140870970 (PopDeferDoze.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1405B1850 (PopIsHibernateSupported.c)
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
