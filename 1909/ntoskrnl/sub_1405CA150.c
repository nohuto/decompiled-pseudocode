/*
 * XREFs of sub_1405CA150 @ 0x1405CA150
 * Callers:
 *     WbHeapExecuteCall @ 0x1405CA6C8 (WbHeapExecuteCall.c)
 * Callees:
 *     sub_1405CA1E8 @ 0x1405CA1E8 (sub_1405CA1E8.c)
 *     WbReAlloc @ 0x1406B1394 (WbReAlloc.c)
 */

__int64 __fastcall sub_1405CA150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 result; // rax

  v7 = *(unsigned int *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 20);
  if ( (int)v7 + 1 < v10 )
    goto LABEL_2;
  result = WbReAlloc(*(PVOID *)(a1 + 24), 32 * v10, 32 * (v10 + *(_DWORD *)(a1 + 32)));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
    v7 = *(unsigned int *)(a1 + 16);
LABEL_2:
    v11 = *(_QWORD *)(a1 + 24) + 32 * v7;
    *(_QWORD *)v11 = a2;
    *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 24) = a5;
    ++*(_DWORD *)(a1 + 16);
    return sub_1405CA1E8(a2);
  }
  return result;
}
