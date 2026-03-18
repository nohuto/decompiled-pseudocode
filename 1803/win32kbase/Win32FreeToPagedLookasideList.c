/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0044A20
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0034990 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C00703F0 (zzzDestroyQueue.c)
 *     UnlockQueue @ 0x1C0075E10 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00A72FC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C00A7510 (NullifyLookasideRef.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00A96EC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
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
