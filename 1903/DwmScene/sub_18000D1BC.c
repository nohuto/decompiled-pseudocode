/*
 * XREFs of sub_18000D1BC @ 0x18000D1BC
 * Callers:
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 *     sub_18000D380 @ 0x18000D380 (sub_18000D380.c)
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 */

char __fastcall sub_18000D1BC(__int64 a1, __int64 a2, __int64 a3)
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
      if ( !_InterlockedDecrement(v6) )
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
      sub_18000D458(v9 + 1, a3, a2, a3);
    if ( *(_QWORD *)a1 && !_InterlockedDecrement(*(volatile signed __int32 **)a1) )
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
