/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14019CEDC
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037620 (IopVerifierExAllocatePoolWithQuota.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14011CABC (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x14019CE90 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x14033F254 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140061A60 (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 *v5; // rax

  v1 = MiDeterminePoolType(a1);
  v4 = v2;
  if ( v1 != 32 )
    v4 = v1;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = v3 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672)
                                 + 14568LL);
  }
  else
  {
    v5 = qword_1404F2A40;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_1404F2A58 )
        return v2;
    }
    return 1;
  }
  return v2;
}
