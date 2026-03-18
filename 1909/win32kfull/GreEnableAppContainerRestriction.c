/*
 * XREFs of GreEnableAppContainerRestriction @ 0x1C0270868
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreEnableAppContainerRestriction(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( result )
    *(_DWORD *)(result + 328) = *(_DWORD *)(result + 328) & 0xFFFFFFFB | (a1 == 0 ? 4 : 0);
  return result;
}
