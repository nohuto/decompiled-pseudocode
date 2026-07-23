/*
 * XREFs of ExGetHeapFromVA @ 0x14000E644
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     ExpHpCompactionRoutine @ 0x1401B78D0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x14000E6C0 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = MiDeterminePoolType(BugCheckParameter3);
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
