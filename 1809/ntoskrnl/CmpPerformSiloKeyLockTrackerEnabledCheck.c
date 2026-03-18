/*
 * XREFs of CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x14068E54C
 * Callers:
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformSiloKeyLockTrackerEnabledCheck(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 2) != 0 )
    return 3221225865LL;
  else
    return (v1 & 1) == 0 ? 0xC00000BB : 0;
}
