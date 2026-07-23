/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x180068F70
 * Callers:
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180068E24 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x18009C1C8 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     ?IsEmpty@RTLP_FLS_CALLBACK_ENTRY@@SA_NPEAU1@@Z @ 0x18009C2B4 (-IsEmpty@RTLP_FLS_CALLBACK_ENTRY@@SA_NPEAU1@@Z.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(_QWORD **a1)
{
  int v2; // ebx
  _QWORD *Heap; // r8
  RTLP_FLS_CALLBACK_ENTRY *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // edx
  int v9; // edx
  int *v10; // r8
  int v11; // r9d
  int v12; // r10d
  int v13; // r10d

  v2 = 4;
  while ( 1 )
  {
    Heap = *a1;
    if ( !*a1 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 * (1 << v2) + 8));
      if ( Heap )
      {
        *Heap = 0LL;
        Heap[1] = 0LL;
        Heap[2] = 0LL;
        if ( 1 << v2 )
        {
          v4 = (RTLP_FLS_CALLBACK_ENTRY *)(Heap + 1);
          do
          {
            RTLP_FLS_CALLBACK_ENTRY::RTLP_FLS_CALLBACK_ENTRY(v4);
            v4 = (RTLP_FLS_CALLBACK_ENTRY *)(v5 + 16);
          }
          while ( v6 != 1 );
        }
        *a1 = Heap;
      }
      if ( !Heap )
        return (unsigned int)-1;
    }
    v7 = *(unsigned int *)Heap;
    if ( (unsigned int)v7 < 1 << v2 )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 8 )
      return (unsigned int)-1;
  }
  if ( !RTLP_FLS_CALLBACK_ENTRY::IsEmpty((struct RTLP_FLS_CALLBACK_ENTRY *)&Heap[2 * v7 + 1]) )
  {
    v13 = v11 - 1;
    while ( !RTLP_FLS_CALLBACK_ENTRY::IsEmpty((struct RTLP_FLS_CALLBACK_ENTRY *)&v10[4 * (v13 & (v9 + 1)) + 2]) )
      ;
    v12 = *v10;
  }
  v8 = v11 | v9;
  *v10 = v12 + 1;
  return v8;
}
