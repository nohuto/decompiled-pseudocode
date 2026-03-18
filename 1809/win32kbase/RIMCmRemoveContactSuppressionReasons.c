/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0128FE8 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0129224 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C012B09C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C012B17C (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C012E2BC (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    ++*(_DWORD *)(a1 + 948);
  }
  if ( (v10 & v4) != 0 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], v4, (unsigned int)a2[2], v9);
  v13 = *(unsigned int *)(a1 + 948);
  if ( *(_DWORD *)(a1 + 944) < (unsigned int)v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v8);
  return v9;
}
