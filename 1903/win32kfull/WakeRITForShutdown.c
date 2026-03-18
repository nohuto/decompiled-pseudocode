/*
 * XREFs of WakeRITForShutdown @ 0x1C0111DA0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C0111FF0 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS || !gpkeRITEvent )
    return 3221225473LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(2LL, v4);
  return 0LL;
}
