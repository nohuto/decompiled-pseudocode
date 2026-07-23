/*
 * XREFs of PopWin32CalloutWatchdogCallbackLiveDump @ 0x14087A5C0
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopWin32CalloutWatchdogCallbackLiveDump(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return DbgkWerCaptureLiveKernelDump(L"PoW32kWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
}
