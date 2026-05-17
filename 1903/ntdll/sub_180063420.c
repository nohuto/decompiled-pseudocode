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
  __int64 Heap; // rbx
  int v3; // edi
  unsigned __int64 i; // rdx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 1;
  v6 = 80 * dword_180166074;
  Heap = RtlAllocateHeap(
           (__int64)NtCurrentPeb()->ProcessHeap,
           (dword_180166080 + 786432) | 8u,
           (unsigned int)(80 * dword_180166074));
  if ( Heap )
  {
    v3 = ZwQuerySystemInformationEx(107LL, &v7, 4LL, Heap, v6, &v6);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)dword_180166074);
      for ( i = Heap; i < Heap + (unsigned __int64)v6; i += *(unsigned int *)(i + 4) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(i + 8)) = *(_OWORD *)(i + 32);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
