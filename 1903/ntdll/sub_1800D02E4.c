/*
 * XREFs of sub_1800D02E4 @ 0x1800D02E4
 * Callers:
 *     sub_18002A2F4 @ 0x18002A2F4 (sub_18002A2F4.c)
 *     sub_1800722A0 @ 0x1800722A0 (sub_1800722A0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

int __fastcall sub_1800D02E4(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rbp
  unsigned int v9; // esi
  _WORD *Heap; // rax
  _WORD *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, a4 + 54);
  v11 = Heap;
  if ( Heap )
  {
    v12 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v12 = 5297;
    v11[3] = v12;
    *((_DWORD *)v11 + 12) = a3;
    *((_QWORD *)v11 + 4) = a1;
    *((_QWORD *)v11 + 5) = a2;
    memmove(v11 + 26, Src, v6);
    v11[(v6 >> 1) + 26] = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v13 = 2147353476LL;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v13, 0x403u, v9 - 32, v11);
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return (int)Heap;
}
