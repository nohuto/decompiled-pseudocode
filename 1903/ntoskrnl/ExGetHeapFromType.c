/*
 * XREFs of ExGetHeapFromType @ 0x140118264
 * Callers:
 *     ExAllocateHeapPages @ 0x140116424 (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x140118034 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x14033EF28 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(int a1, unsigned int a2, int a3)
{
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v3 = (char *)&unk_14046FA40 + 8384 * (a2 < dword_14046FA10 ? a2 : 0);
  if ( a1 < 0 )
    return *((_QWORD *)v3 + 3);
  if ( (a1 & 0x21) == 0x21 )
  {
    v6 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672);
    if ( a3 )
      return *(_QWORD *)(v6 + 14568);
    else
      return *(_QWORD *)(v6 + 14560);
  }
  else
  {
    if ( (a1 & 1) != 0 )
      v4 = 2LL;
    else
      v4 = (a1 & 0x200) != 0;
    if ( a3 )
      return qword_1404F2A40[v4];
    else
      return *(_QWORD *)&v3[8 * v4];
  }
}
