/*
 * XREFs of TpAllocCleanupGroup @ 0x18007D960
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _PEB_LDR_DATA *Ldr; // rdx
  __int64 v2; // r8
  _QWORD *Heap; // rax
  _TP_CLEANUP_GROUP *v5; // rcx
  _QWORD *v6; // rax
  NTSTATUS result; // eax
  NTSTATUS v8; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+40h] [rbp+8h]

  if ( !CleanupGroupReturn || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(CleanupGroupReturn, Ldr, v2);
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v5 = (_TP_CLEANUP_GROUP *)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *((_DWORD *)Heap + 1) = 0;
      Heap[1] = 0LL;
      Heap[7] = 0LL;
      v6 = Heap + 2;
      v6[1] = v6;
      *v6 = v6;
      *((_QWORD *)v5 + 9) = (char *)v5 + 64;
      *((_QWORD *)v5 + 8) = (char *)v5 + 64;
      result = 0;
      *((_QWORD *)v5 + 4) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      v8 = 0;
      *CleanupGroupReturn = v5;
    }
    else
    {
      result = -1073741801;
      v8 = -1073741801;
    }
    if ( result < 0 )
    {
      if ( v5 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, BaseAddress);
        return v8;
      }
    }
  }
  return result;
}
