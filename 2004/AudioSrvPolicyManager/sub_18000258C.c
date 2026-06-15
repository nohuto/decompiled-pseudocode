/*
 * XREFs of sub_18000258C @ 0x18000258C
 * Callers:
 *     sub_180002A40 @ 0x180002A40 (sub_180002A40.c)
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 */

char __fastcall sub_18000258C(__int64 a1, const void *a2, size_t a3)
{
  volatile signed __int32 *v6; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v8; // rax
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  HANDLE v11; // rax

  if ( !a3 )
  {
    v6 = *(volatile signed __int32 **)a1;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, *(LPVOID *)a1);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
    }
LABEL_13:
    LOBYTE(v9) = 1;
    return (char)v9;
  }
  v8 = GetProcessHeap();
  v9 = (volatile signed __int32 *)HeapAlloc(v8, 0, a3 + 4);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0;
    if ( a2 )
      sub_180001FD0((void *)(v9 + 1), a3, a2, a3);
    if ( *(_QWORD *)a1 && _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 )
    {
      v11 = GetProcessHeap();
      HeapFree(v11, 0, *(LPVOID *)a1);
    }
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = a3;
    _InterlockedIncrement(v10);
    goto LABEL_13;
  }
  return (char)v9;
}
