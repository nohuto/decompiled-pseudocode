/*
 * XREFs of sub_180052FB8 @ 0x180052FB8
 * Callers:
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
 *     EtwEventWriteString @ 0x18010CB10 (EtwEventWriteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052FB8(int a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  unsigned int *v4; // r10
  __int64 result; // rax

  v2 = 0;
  while ( v2 < *(_DWORD *)(a2 + 128) )
  {
    v3 = 32LL * v2;
    v4 = *(unsigned int **)(v3 + a2);
    if ( a1 )
      **(_DWORD **)(v3 + a2 + 8) = v4[12] | **(_DWORD **)(v3 + a2 + 8) & v4[13];
    ++v2;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v3 + a2 + 16) + 12LL));
    result = qword_180163518;
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * v4[5] + 8));
  }
  return result;
}
