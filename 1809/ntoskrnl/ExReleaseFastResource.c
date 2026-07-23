/*
 * XREFs of ExReleaseFastResource @ 0x140165010
 * Callers:
 *     ExpFastResourceLegacyRelease @ 0x140164C28 (ExpFastResourceLegacyRelease.c)
 * Callees:
 *     ExpReleaseFastResourceShared @ 0x1401650A0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401664B8 (ExpReleaseFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v5; // r9

  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v5 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v5, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v2 & 0x80u) != 0 )
    return ExpReleaseFastResourceExclusive(BugCheckParameter2);
  else
    return ExpReleaseFastResourceShared(BugCheckParameter2);
}
