/*
 * XREFs of sub_18002D7BC @ 0x18002D7BC
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180073D60 (LdrEnumerateLoadedModules.c)
 *     LdrLockLoaderLock @ 0x18007BF50 (LdrLockLoaderLock.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_1800850C0 @ 0x1800850C0 (sub_1800850C0.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

__int64 __fastcall sub_18002D7BC(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rcx
  struct _PEB *v6; // rcx
  int v8; // r8d
  int v9; // r9d
  char *v10; // rcx
  int v11; // r8d
  int v12; // r9d

  v1 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v2 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v10 = (unsigned int)RtlGetCurrentServiceSessionId(v2)
        ? (char *)NtCurrentPeb()->HotpatchInformation + 555
        : (char *)2147353477;
    if ( (*v10 & 0x20) != 0 )
    {
      LOBYTE(v9) = -1;
      LOBYTE(v8) = -1;
      sub_1800CFA48(5248, -1, v8, v9, 0LL, 0LL);
    }
  }
  v4 = RtlEnterCriticalSection((__int64)&off_18015F4F8);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v5) )
  {
    v6 = NtCurrentPeb();
    v1 = (__int64)v6->HotpatchInformation + 554;
  }
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
      v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
    {
      LOBYTE(v12) = -1;
      LOBYTE(v11) = -1;
      sub_1800CFA48(5249, -1, v11, v12, 0LL, 0LL);
    }
  }
  return v4;
}
