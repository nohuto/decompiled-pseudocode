/*
 * XREFs of ndisNicAutoPowerInsertIntoSortedArray @ 0x1C007248C
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C00766E4 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

__int64 __fastcall ndisNicAutoPowerInsertIntoSortedArray(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v5; // r10
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx

  v5 = a3;
  v6 = 0;
  while ( 1 )
  {
    result = v5[1];
    v8 = result + (*v5 << 16);
    if ( a1[1] + (*a1 << 16) > v8 )
      break;
    ++v6;
    v5 += 8;
    if ( v6 >= 8 )
      return result;
  }
  result = 7LL;
  if ( v8 || v6 < 7 )
  {
    v9 = v6;
    result = (__int64)memmove(&a3[8 * v6 + 8], &a3[8 * v6], 7 - v6);
  }
  else
  {
    v9 = v6;
  }
  *(_OWORD *)&a3[8 * v9] = *(_OWORD *)a1;
  return result;
}
