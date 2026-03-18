/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C001A250
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0010550 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     FreeQueue @ 0x1C009E49C (FreeQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B2884 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0107810 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C0107B40 (NullifyLookasideRef.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C011063C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IsWin32FreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl(a1, a2);
  return result;
}
