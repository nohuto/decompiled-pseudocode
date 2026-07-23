/*
 * XREFs of sub_18002507C @ 0x18002507C
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_180025164 @ 0x180025164 (sub_180025164.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

void __fastcall sub_18002507C(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&stru_1801661B8);
  v4 = sub_180025164(a2);
  RtlReleaseSRWLockShared(&stru_1801661B8);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1060,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        sub_180024FBC(v6, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
}
