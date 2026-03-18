/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C00EF79C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMIsParentCommon @ 0x1C00EFE8C (RIMIsParentCommon.c)
 *     RIMCAUsageToLegacyFlag @ 0x1C00F1480 (RIMCAUsageToLegacyFlag.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFindSiblingMouseDevice(int a1, unsigned __int16 a2, int a3)
{
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = (__int64)(i + 8);
    v8 = v7 & -(__int64)(i != (__int64 *)16);
    if ( !*(_BYTE *)(v8 + 0x30)
      && (*(_DWORD *)((v7 & -(__int64)(i != (__int64 *)16)) + 0xB8) & 0x200) == 0
      && (unsigned int)RIMIsParentCommon(
                         a3,
                         i != (__int64 *)16 ? v7 : 0,
                         a1,
                         *(unsigned __int16 *)((v7 & -(__int64)(i != (__int64 *)16)) + 0x2E6),
                         *(_WORD *)((v7 & -(__int64)(i != (__int64 *)16)) + 0x2E8)) )
    {
      if ( ((a2 - 2) & 0xFFFC) != 0 || a2 == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(65532LL, v9);
      *(_WORD *)(v8 + 740) = (*(_WORD *)(v8 + 740) | RIMCAUsageToLegacyFlag(a2)) & 0xFFFE;
      if ( a2 == 5 )
        *(_DWORD *)(v8 + 184) |= 0xC000000u;
      break;
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
