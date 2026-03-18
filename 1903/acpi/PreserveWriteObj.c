/*
 * XREFs of PreserveWriteObj @ 0x1C001EE00
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 */

__int64 __fastcall PreserveWriteObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v10; // rcx

  v3 = a3;
  if ( a3 )
    v5 = 2;
  else
    v5 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v5 )
  {
    ++*(_DWORD *)(a2 + 16);
    return (unsigned int)PushAccFieldObj(
                           a1,
                           ReadFieldObj,
                           *(_QWORD *)(a2 + 32),
                           *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                           a2 + 56,
                           4);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a2 + 48) & *(_QWORD *)(a2 + 56);
    ++*(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 40) |= v7;
    return (unsigned int)PushAccFieldObj(
                           a1,
                           WriteFieldObj,
                           *(_QWORD *)(a2 + 32),
                           *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                           a2 + 40,
                           4);
  }
  if ( v6 == 1 )
  {
    v10 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
    HeapFree(v10);
  }
  return v3;
}
