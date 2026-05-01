/*
 * XREFs of _RmpClientWnfSubscriptionWorker@28 @ 0x10006A50
 * Callers:
 *     <none>
 * Callees:
 *     _CempListEntryIsNull@4 @ 0x10006B10 (_CempListEntryIsNull@4.c)
 *     _memcpy @ 0x1000D14E (_memcpy.c)
 */

int __stdcall RmpClientWnfSubscriptionWorker(int a1, int a2, int a3, int a4, _DWORD *a5, void *Src, size_t Size)
{
  int result; // eax
  _DWORD *Heap; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // [esp-Ch] [ebp-10h]

  if ( !Src )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesReceived);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size + 12);
  if ( Heap )
  {
    Heap[2] = Size;
    memcpy(Heap + 3, Src, Size);
    v9 = a5 + 2;
    RtlAcquireSRWLockExclusive(a5 + 4);
    if ( CempListEntryIsNull(a5 + 2) )
      __int2c();
    v10 = (_DWORD *)a5[3];
    if ( (_DWORD *)*v10 != v9 )
      __fastfail(3u);
    *Heap = v9;
    Heap[1] = v10;
    *v10 = Heap;
    a5[3] = Heap;
    v11 = a5[9];
    if ( (v11 & 1) == 0 )
    {
      v12 = a5[8];
      a5[9] = v11 | 1;
      TpPostWork(v12);
    }
    RtlReleaseSRWLockExclusive(a5 + 4);
    return 0;
  }
  else
  {
    result = -1073741801;
    _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesDropped);
  }
  return result;
}
