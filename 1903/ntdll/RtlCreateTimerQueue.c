/*
 * XREFs of RtlCreateTimerQueue @ 0x1800812F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCreateTimerQueue(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 Heap; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a1 = 0LL;
  v4 = sub_180030D7C(&v9, 0, a3);
  if ( v4 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 48LL);
    v6 = Heap;
    v10 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 16) = 0LL;
      v7 = (_QWORD *)(Heap + 24);
      v7[1] = v7;
      *v7 = v7;
      *(_QWORD *)(v6 + 40) = 0LL;
      *a1 = v6;
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
  }
  sub_1800310E4(v9);
  return (unsigned int)v4;
}
