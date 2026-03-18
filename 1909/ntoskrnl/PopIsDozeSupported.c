/*
 * XREFs of PopIsDozeSupported @ 0x14067092C
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14030396C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x140670540 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 *     PopDeferDoze @ 0x1408ABAF0 (PopDeferDoze.c)
 *     PopUpdateSystemIdleContext @ 0x1408B2DA4 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140670968 (PopIsHibernateSupported.c)
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
