/*
 * XREFs of SmpCheckMemoryCoolingCompatibility @ 0x14000BC80
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000BBB0 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     <none>
 */

char SmpCheckMemoryCoolingCompatibility()
{
  unsigned int v0; // ebx
  int v1; // esi
  _DWORD *Heap; // rax
  _DWORD *v3; // rdi
  int v4; // ebp
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  v0 = (SmpMaximumNodeCount << 13) + 48;
  v1 = 0;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
    v3 = Heap;
    if ( !Heap )
      return (char)Heap;
    LODWORD(Heap) = NtQuerySystemInformation(SystemCallTimeInformation|0x80, Heap, v0, &ReturnLength);
    v4 = (int)Heap;
    if ( (int)Heap < 0 )
    {
      if ( (_DWORD)Heap != -1073741789 )
        goto LABEL_8;
      LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      v0 = ReturnLength;
      v3 = 0LL;
    }
    if ( (unsigned int)++v1 >= 2 )
    {
      if ( v4 >= 0 && v3[3] > 1u )
        LOBYTE(Heap) = NtUpdateWnfStateData(&WNF_SMSS_MEMORY_COOLING_COMPATIBLE, 0LL, 0LL, 0LL, 0LL, 0, 0);
LABEL_8:
      if ( v3 )
        LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      return (char)Heap;
    }
  }
}
