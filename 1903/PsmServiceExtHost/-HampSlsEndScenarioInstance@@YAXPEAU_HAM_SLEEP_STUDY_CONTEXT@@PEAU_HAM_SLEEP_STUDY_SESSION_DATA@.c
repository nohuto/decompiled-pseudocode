/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@@@Z @ 0x18007C700
 * Callers:
 *     ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007CC80 (-HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampSlsEndScenarioInstance(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _HAM_SLEEP_STUDY_SESSION_DATA *a2)
{
  _OWORD *Heap; // rax
  __int128 v5; // xmm0
  struct _HAM_SLEEP_STUDY_CONTEXT **v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v5 = *(_OWORD *)((char *)a1 + 24);
  if ( Heap )
  {
    Heap[1] = v5;
    Heap[2] = *(_OWORD *)((char *)a1 + 40);
    v6 = (struct _HAM_SLEEP_STUDY_CONTEXT **)*((_QWORD *)a1 + 8);
    if ( *v6 != (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a1 + 56) )
      __fastfail(3u);
    *(_QWORD *)Heap = (char *)a1 + 56;
    *((_QWORD *)Heap + 1) = v6;
    *v6 = (struct _HAM_SLEEP_STUDY_CONTEXT *)Heap;
    *((_QWORD *)a1 + 8) = Heap;
    v7 = *((_DWORD *)a1 + 25);
    if ( (v7 & 2) == 0 )
    {
      v8 = *((_QWORD *)a1 + 10);
      *((_DWORD *)a1 + 25) = v7 | 2;
      TpPostWork(v8);
    }
  }
  else
  {
    *(_OWORD *)a2 = v5;
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a1 + 40);
  }
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 3) = a1;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_DWORD *)a1 + 25) &= ~1u;
}
