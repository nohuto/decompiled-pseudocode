/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C00B3430
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B2884 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C00B2F08 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32FreePagedLookasideList(__int64 a1)
{
  __int64 result; // rax

  result = IsWin32FreePagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreePagedLookasideListImpl(a1);
  return result;
}
