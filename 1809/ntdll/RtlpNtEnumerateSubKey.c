/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x180084550
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtEnumerateKey @ 0x1800A0940 (NtEnumerateKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(HANDLE KeyHandle, __int64 a2, ULONG a3)
{
  _DWORD *Heap; // rbx
  ULONG Length; // edi
  NTSTATUS v8; // edi
  unsigned int v9; // eax
  void *v10; // rcx
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF

  Heap = 0LL;
  Length = 0;
  if ( *(_WORD *)(a2 + 2) )
  {
    Length = *(unsigned __int16 *)(a2 + 2) + 16;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
    if ( !Heap )
      return 3221225495LL;
  }
  v8 = NtEnumerateKey(KeyHandle, a3, KeyBasicInformation, Heap, Length, &ResultLength);
  if ( v8 >= 0 && Heap )
  {
    v9 = Heap[3];
    if ( *(unsigned __int16 *)(a2 + 2) < v9 )
    {
      v8 = -2147483643;
    }
    else
    {
      v10 = *(void **)(a2 + 8);
      *(_WORD *)a2 = v9;
      memmove(v10, Heap + 4, (unsigned __int16)v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = ResultLength - 16;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v8;
}
