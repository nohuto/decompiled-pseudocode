/*
 * XREFs of sub_18002D75C @ 0x18002D75C
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180073D60 (LdrEnumerateLoadedModules.c)
 *     LdrUnlockLoaderLock @ 0x18007CC60 (LdrUnlockLoaderLock.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180085040 @ 0x180085040 (sub_180085040.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

__int64 __fastcall sub_18002D75C(__int64 a1, char a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v10; // r9d
  __int64 v11; // rcx

  v6 = RtlLeaveCriticalSection(&off_18015F4F8);
  if ( a3 < 0 )
  {
    LOBYTE(v7) = a2;
    sub_18007E384((unsigned int)a3, 5282LL, v7, 0LL);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v5) )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8) )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    else
      v11 = 2147353477LL;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
    {
      LOBYTE(v10) = a2;
      sub_1800CFA48(5282, 0, 0, v10, 0LL, 0LL);
    }
  }
  return v6;
}
