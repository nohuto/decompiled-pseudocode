/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x180076C10
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x180076BDC (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rbx
  int *v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  int v10; // eax

  v4 = (unsigned int)(LdrpInvertedFunctionTable[0] - 1);
  if ( LdrpInvertedFunctionTable[0] != 1 )
  {
    v5 = &LdrpInvertedFunctionTable[6 * v4 + 6];
    do
    {
      if ( a2 == *(_QWORD *)v5 )
        break;
      v5 -= 6;
      v6 = (_DWORD)v4 == 1;
      v4 = (unsigned int)(v4 - 1);
    }
    while ( !v6 );
  }
  if ( (_DWORD)v4 )
  {
    LdrProtectMrdata(0, a2, a3, a4);
    _InterlockedIncrement(&dword_1801784F8);
    v10 = LdrpInvertedFunctionTable[0];
    if ( LdrpInvertedFunctionTable[0] != 2 )
    {
      memmove(
        &LdrpInvertedFunctionTable[4 * v4 + 4 + 2 * v4],
        &LdrpInvertedFunctionTable[4 * (unsigned int)(v4 + 1) + 4 + 2 * (unsigned int)(v4 + 1)],
        24LL * (unsigned int)(LdrpInvertedFunctionTable[0] - v4 - 1));
      v10 = LdrpInvertedFunctionTable[0];
    }
    LdrpInvertedFunctionTable[0] = v10 - 1;
    _InterlockedIncrement(&dword_1801784F8);
    LdrProtectMrdata(1, v7, v8, v9);
  }
}
