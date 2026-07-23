/*
 * XREFs of sub_1800484A8 @ 0x1800484A8
 * Callers:
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

unsigned __int64 __fastcall sub_1800484A8(__int64 a1)
{
  struct _PEB *v1; // rbx
  unsigned __int64 result; // rax
  unsigned int v4; // edi
  ULONG MaximumNumberOfHeaps; // ecx
  PVOID *v6; // rbp
  PVOID *ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  result = v1->NumberOfHeaps;
  v4 = result + (unsigned __int16)word_180166040;
  if ( v4 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v4 == MaximumNumberOfHeaps )
    {
      v1->MaximumNumberOfHeaps = 2 * MaximumNumberOfHeaps;
      result = (unsigned __int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * MaximumNumberOfHeaps);
      v6 = (PVOID *)result;
      if ( !result )
      {
        v1->MaximumNumberOfHeaps = v4;
        return result;
      }
      memmove((void *)result, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
      ProcessHeaps = v1->ProcessHeaps;
      if ( ProcessHeaps != (PVOID *)&unk_180163C40 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessHeaps);
      LODWORD(result) = v1->NumberOfHeaps;
      v1->ProcessHeaps = v6;
    }
    v1->ProcessHeaps[(unsigned int)result] = (PVOID)a1;
    ++v1->NumberOfHeaps;
    result = LOWORD(v1->NumberOfHeaps);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 28) = result;
    else
      *(_WORD *)(a1 + 208) = result;
  }
  return result;
}
