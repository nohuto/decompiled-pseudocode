/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x18007F700
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(HANDLE KeyHandle, __int64 a2, ULONG a3)
{
  unsigned __int16 *Heap; // rbx
  ULONG Length; // esi
  NTSTATUS v8; // esi
  unsigned int v9; // ecx
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF

  Heap = 0LL;
  Length = 0;
  if ( *(_WORD *)(a2 + 2) )
  {
    Length = *(unsigned __int16 *)(a2 + 2) + 16;
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
    if ( !Heap )
      return 3221225495LL;
  }
  v8 = ZwEnumerateKey(KeyHandle, a3, KeyBasicInformation, Heap, Length, &ResultLength);
  if ( v8 >= 0 && Heap )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) < *((_DWORD *)Heap + 3) )
    {
      v8 = -2147483643;
    }
    else
    {
      v9 = Heap[6];
      *(_WORD *)a2 = v9;
      memmove(*(void **)(a2 + 8), Heap + 8, v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = ResultLength - 16;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v8;
}
