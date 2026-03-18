/*
 * XREFs of ExGetHeapFromVA @ 0x14000331C
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140002FF0 (ExpHpCompactionRoutine.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037A20 (IopVerifierExAllocatePoolWithQuota.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14011CFDC (ExReturnPoolQuota.c)
 *     ExpResizeBigPageTable @ 0x140157548 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x1401660EC (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x14019D610 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x14033ECB4 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x140003384 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x140061B00 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = MiDeterminePoolType();
  v3 = 0;
  v6 = 0uLL;
  if ( v2 != 32 )
    v3 = v2;
  *(_WORD *)((char *)&v6 + 1) = 1;
  v4 = 5;
  if ( v3 != 33 )
    v4 = 3;
  LOBYTE(v6) = v4;
  result = RtlpHpGetOwnerHeap(BugCheckParameter3, &v6);
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
