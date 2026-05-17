/*
 * XREFs of RtlpNtQueryValueKey @ 0x180080580
 * Callers:
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(__int64 a1, _DWORD *a2, void *a3, int *a4)
{
  int v8; // eax
  unsigned __int64 Heap; // rbx
  int v10; // edi
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  if ( a4 )
    v8 = *a4;
  v13 = v8 + 12;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v8 + 12));
  if ( !Heap )
    return 3221225626LL;
  v12[0] = 0;
  v10 = NtQueryValueKey(a1, v12, 2LL, Heap, v13, &v13);
  if ( v10 == -1073741772 )
  {
    v10 = 0;
    *(_QWORD *)(Heap + 4) = 0LL;
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    if ( a4 )
      *a4 = *(_DWORD *)(Heap + 8);
    if ( a2 )
      *a2 = *(_DWORD *)(Heap + 4);
  }
  if ( v10 >= 0 )
  {
    if ( a3 )
      memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v10;
}
