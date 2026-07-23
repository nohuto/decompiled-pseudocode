/*
 * XREFs of sub_180063420 @ 0x180063420
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQuerySystemInformationEx @ 0x18009F230 (ZwQuerySystemInformationEx.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180063420(__int64 a1)
{
  char *Heap; // rbx
  NTSTATUS v3; // edi
  char *i; // rdx
  ULONG SystemInformationLength; // [rsp+48h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+50h] [rbp+18h] BYREF

  InputBuffer = 1;
  SystemInformationLength = 80 * dword_180166074;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   (dword_180166080 + 786432) | 8,
                   (unsigned int)(80 * dword_180166074));
  if ( Heap )
  {
    v3 = ZwQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap,
           SystemInformationLength,
           &SystemInformationLength);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)dword_180166074);
      for ( i = Heap; i < &Heap[SystemInformationLength]; i += *((unsigned int *)i + 1) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *((unsigned int *)i + 2)) = *((_OWORD *)i + 2);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
