/*
 * XREFs of ExGetHeapFromType @ 0x1400E76B8
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     ExAllocateHeapSpecialPool @ 0x14031EBAC (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(int a1, unsigned int a2, int a3)
{
  char *v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v3 = (char *)&unk_140444500 + 8384 * (a2 < dword_1404444C8 ? a2 : 0);
  if ( a1 < 0 )
    return *((_QWORD *)v3 + 3);
  if ( (a1 & 0x21) == 0x21 )
  {
    v5 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
    if ( a3 )
      return *(_QWORD *)(v5 + 12512);
    else
      return *(_QWORD *)(v5 + 12504);
  }
  else
  {
    if ( (a1 & 1) != 0 )
      v6 = 2LL;
    else
      v6 = (a1 & 0x200) != 0;
    if ( a3 )
      return qword_1404C7500[v6];
    else
      return *(_QWORD *)&v3[8 * v6];
  }
}
