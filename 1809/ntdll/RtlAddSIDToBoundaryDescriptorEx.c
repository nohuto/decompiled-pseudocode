/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x180082BF0
 * Callers:
 *     RtlAddSIDToBoundaryDescriptor @ 0x180082BE0 (RtlAddSIDToBoundaryDescriptor.c)
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800EB910 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180081D34 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, _BYTE *a2, char a3)
{
  _DWORD *v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  _DWORD *Heap; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // edi
  void *ProcessHeap; // rcx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = *(_DWORD **)a1;
  v7 = (4 * (unsigned __int8)a2[1] + 23) & 0xFFFFFFF8;
  v8 = v7 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v8 < v7 )
    return 3221225843LL;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8);
  v10 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, v6, (unsigned int)v6[2]);
  v10[2] = v7 + v6[2];
  v10[1] = v6[1] + 1;
  v11 = (_DWORD *)((char *)v10 + (unsigned int)v6[2]);
  v11[1] = v7;
  *v11 = (a3 != 0) + 2;
  memmove(v11 + 2, a2, 4LL * (unsigned __int8)a2[1] + 8);
  v12 = RtlEnumerateBoundaryDescriptorEntries(v10);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v12 < 0 )
  {
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v10);
    return (unsigned int)v12;
  }
  else
  {
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v6);
    result = 0LL;
    *(_QWORD *)a1 = v10;
  }
  return result;
}
