/*
 * XREFs of TpAllocTimer @ 0x18002C590
 * Callers:
 *     RtlCreateTimer @ 0x18002F2A0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x180080D90 (RtlpInitializeWnf.c)
 *     RtlInitializeHeapGC @ 0x180082644 (RtlInitializeHeapGC.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // ebp
  _PEB_LDR_DATA *v7; // r14
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v7 = Ldr;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8u, 360LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      result = TppInitializeTimer(
                 Heap,
                 0,
                 v5,
                 v4,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)TppTimerpTaskVFuncs);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *(_QWORD *)&v7->Length = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
