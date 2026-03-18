/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C011AFDC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RIMIsParentCommon @ 0x1C011B30C (RIMIsParentCommon.c)
 *     RIMCAUsageToLegacyFlag @ 0x1C011CAB4 (RIMCAUsageToLegacyFlag.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFindSiblingMouseDevice(int a1, unsigned __int16 a2, int a3)
{
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = (__int64)(i + 9);
    v8 = v7 & -(__int64)(i != (__int64 *)16);
    if ( !*(_BYTE *)(v8 + 0x30)
      && (*(_DWORD *)((v7 & -(__int64)(i != (__int64 *)16)) + 0xB8) & 0x400) == 0
      && (unsigned int)RIMIsParentCommon(
                         a3,
                         i != (__int64 *)16 ? v7 : 0,
                         a1,
                         *(unsigned __int16 *)((v7 & -(__int64)(i != (__int64 *)16)) + 0x2EA),
                         *(_WORD *)((v7 & -(__int64)(i != (__int64 *)16)) + 0x2EC)) )
    {
      if ( ((a2 - 2) & 0xFFFC) != 0 || a2 == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(65532LL, v9, v10);
      *(_WORD *)(v8 + 744) = (*(_WORD *)(v8 + 744) | RIMCAUsageToLegacyFlag(a2)) & 0xFFFE;
      if ( a2 == 5 )
        *(_DWORD *)(v8 + 184) |= 0x6000000u;
      break;
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
