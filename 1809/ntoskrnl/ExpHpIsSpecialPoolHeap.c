/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14000E5C4
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  __int64 v3; // r10
  unsigned int v4; // eax
  __int64 *v5; // rax

  v1 = MiDeterminePoolType(a1);
  v4 = v2;
  if ( v1 != 32 )
    v4 = v1;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = v3 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3424)
                                 + 12512LL);
  }
  else
  {
    v5 = &qword_1404C7500;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_1404C7518 )
        return v2;
    }
    return 1;
  }
  return v2;
}
