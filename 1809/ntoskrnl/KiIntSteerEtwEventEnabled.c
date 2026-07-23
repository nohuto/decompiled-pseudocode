/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14005B8E0
 * Callers:
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogState @ 0x14016E32C (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x14029AB98 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 */

bool __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int8 v3; // r10

  return KiIntSteerEtwHandle
      && ((unsigned __int8)EtwpLevelKeywordEnabled(
                             *(_QWORD *)(KiIntSteerEtwHandle + 32) + 96LL,
                             *(unsigned __int8 *)(a1 + 4),
                             *(_QWORD *)(a1 + 8))
       || *(_BYTE *)(v2 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, v3, v1));
}
