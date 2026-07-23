/*
 * XREFs of CmpGenerateFastLeafHintForUnicodeString @ 0x1405B0420
 * Callers:
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x1405D9BC0 (CmpCheckLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGenerateFastLeafHintForUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned __int16 v5; // dx
  unsigned int v6; // [rsp+8h] [rbp+8h]

  result = 0LL;
  v2 = *a1 >> 1;
  v6 = 0;
  v3 = 4;
  if ( v2 >= 4 || (v3 = v2) != 0 )
  {
    v4 = *((_QWORD *)a1 + 1);
    while ( 1 )
    {
      v5 = *(_WORD *)(v4 + 2 * result);
      if ( v5 > 0xFFu )
        break;
      *((_BYTE *)&v6 + result) = v5;
      result = (unsigned int)(result + 1);
      if ( (unsigned int)result >= v3 )
        return v6;
    }
    return 0LL;
  }
  return result;
}
