/*
 * XREFs of SymCryptParallelSha256AppendBytes_serial @ 0x1401B2268
 * Callers:
 *     SymCryptParallelSha256Append @ 0x1401B0DF0 (SymCryptParallelSha256Append.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x1401AF590 (SymCryptSha256AppendBlocks.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBytes_serial(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 i; // rbx
  __int64 result; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      SymCryptSha256AppendBlocks(
        **(_QWORD **)(a1 + 8 * i) + 96LL,
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * i) + 32LL),
        a3,
        (__int64)&v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * i) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * i);
      *(_QWORD *)(result + 40) -= a3;
    }
  }
  return result;
}
