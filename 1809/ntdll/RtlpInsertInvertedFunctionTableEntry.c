/*
 * XREFs of RtlpInsertInvertedFunctionTableEntry @ 0x1800275B8
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpInsertInvertedFunctionTableEntry(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rcx

  result = (unsigned int)LdrpInvertedFunctionTable[0];
  if ( LdrpInvertedFunctionTable[0] == dword_1801784F4 )
  {
    byte_1801784FC = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_1801784F8);
    v9 = 1;
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      if ( LdrpInvertedFunctionTable[0] > 1u )
      {
        v10 = (unsigned __int64 *)&unk_180178520;
        do
        {
          if ( a2 < *v10 )
            break;
          ++v9;
          v10 += 3;
        }
        while ( v9 < LdrpInvertedFunctionTable[0] );
      }
      if ( v9 != LdrpInvertedFunctionTable[0] )
        memmove(
          &LdrpInvertedFunctionTable[4 * v9 + 10 + 2 * v9],
          &LdrpInvertedFunctionTable[4 * v9 + 4 + 2 * v9],
          24LL * (LdrpInvertedFunctionTable[0] - v9));
    }
    v11 = 3LL * v9;
    result = a5;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v11 + 4] = a3;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v11 + 6] = a2;
    LdrpInvertedFunctionTable[2 * v11 + 8] = a4;
    LdrpInvertedFunctionTable[2 * v11 + 9] = a5;
    ++LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_1801784F8);
  }
  return result;
}
