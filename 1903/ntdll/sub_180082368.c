/*
 * XREFs of sub_180082368 @ 0x180082368
 * Callers:
 *     sub_1800820B0 @ 0x1800820B0 (sub_1800820B0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

int __fastcall sub_180082368(const void **a1, _RTL_USER_PROCESS_PARAMETERS *a2, void *a3, void *a4)
{
  struct _PEB *Heap; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // esi
  struct _PEB *v12; // rdi

  LODWORD(Heap) = RtlGetCurrentServiceSessionId();
  v9 = 2147353476LL;
  if ( (_DWORD)Heap )
  {
    Heap = NtCurrentPeb();
    v10 = (__int64)&Heap->SharedData->UserModeGlobalLogger[2];
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 )
  {
    v11 = *(unsigned __int16 *)a1 + 64;
    Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, v11);
    v12 = Heap;
    if ( Heap )
    {
      Heap->ProcessParameters = a2;
      Heap->SubSystemData = a3;
      *(_WORD *)(&Heap->3 + 3) = 5152;
      Heap->ProcessHeap = a4;
      memmove(&Heap->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *((_WORD *)&v12->FastPebLock + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, v11 - 32, v12);
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  return (int)Heap;
}
