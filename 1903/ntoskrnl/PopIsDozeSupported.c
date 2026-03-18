/*
 * XREFs of PopIsDozeSupported @ 0x1406A203C
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140303EBC (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x1406A1D00 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140745314 (PopInitSIdle.c)
 *     PopDeferDoze @ 0x1408AC290 (PopDeferDoze.c)
 *     PopUpdateSystemIdleContext @ 0x1408B34D8 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1406A2078 (PopIsHibernateSupported.c)
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
