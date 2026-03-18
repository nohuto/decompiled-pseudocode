/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C001D8A0
 * Callers:
 *     UserDeleteW32Thread @ 0x1C002D540 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C005FD10 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     UnlockQueue @ 0x1C00A93E0 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00E41F0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C00E447C (NullifyLookasideRef.c)
 *     zzzDestroyQueue @ 0x1C00E48C0 (zzzDestroyQueue.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C00EC6E0 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
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
