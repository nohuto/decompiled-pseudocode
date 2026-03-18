/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0016C10
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0036B60 (UserDeleteW32Thread.c)
 *     FreeQueue @ 0x1C009EF6C (FreeQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B5364 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C010A180 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C010A4B0 (NullifyLookasideRef.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0112FAC (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
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
