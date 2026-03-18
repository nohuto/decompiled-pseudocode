/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C0159A60
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013983C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01538CC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0153B4C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0155D24 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C0155E24 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01590A8 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C01599E4 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v4; // ebp
  BOOL IsContactSuppressed; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  BOOL v9; // ebx
  unsigned int v10; // r14d
  BOOL v11; // r15d
  int v12; // ecx
  __int64 v13; // rcx

  v4 = a3;
  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2, (__int64)a2, a3);
  v9 = 0;
  v10 = a2[2];
  v11 = IsContactSuppressed;
  v12 = v10;
  if ( (a2[8] & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v8);
    v12 = a2[2];
  }
  a2[2] = v12 & ~v4;
  if ( v11 && !RIMCmIsContactSuppressed((__int64)a2, v7, v8) )
  {
    v9 = 1;
    ++*(_DWORD *)(a1 + 956);
  }
  if ( (v10 & v4) != 0 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], v4, (unsigned int)a2[2], v9);
  v13 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v8);
  return v9;
}
