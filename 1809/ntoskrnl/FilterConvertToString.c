/*
 * XREFs of FilterConvertToString @ 0x14090612C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     ExpressionConvertToString @ 0x140905D2C (ExpressionConvertToString.c)
 */

__int64 __fastcall FilterConvertToString(unsigned int a1, __int64 a2, unsigned int a3, wchar_t *a4, unsigned int *a5)
{
  unsigned int v6; // edi
  wchar_t *v7; // r14
  unsigned int v8; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r12d
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 2;
  v7 = a4;
  v8 = a3;
  if ( a3 >= 2 )
    *a4 = 0;
  v11 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v12 = v6;
      result = ExpressionConvertToString((_DWORD *)(a2 + 56LL * v11), v8, v7, &v17);
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
        break;
      v14 = -1;
      v15 = v6;
      v16 = v6 + v17 - 2;
      if ( v16 >= v6 )
        v14 = v6 + v17 - 2;
      v6 = v14;
      result = v16 < v15 ? 0xC0000095 : 0;
      if ( v16 < v12 )
        break;
      if ( v8 >= (unsigned __int64)v17 - 2 )
      {
        v8 += 2 - v17;
        v7 += ((unsigned __int64)v17 - 2) >> 1;
      }
      if ( ++v11 >= a1 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    result = 0LL;
    if ( a5 )
      *a5 = v6;
    if ( v6 > a3 )
      return 3221225507LL;
  }
  return result;
}
