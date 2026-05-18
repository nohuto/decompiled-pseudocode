/*
 * XREFs of sub_18003C7C4 @ 0x18003C7C4
 * Callers:
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 * Callees:
 *     sub_18003C538 @ 0x18003C538 (sub_18003C538.c)
 */

__int64 __fastcall sub_18003C7C4(_QWORD *a1, __int64 a2, char a3, float *a4, _QWORD *a5)
{
  _QWORD *v8; // r9
  __int64 *v9; // rax
  char v10; // r8
  float v11; // xmm1_4
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v10 = 1;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v11 = *a4;
    do
    {
      v8 = v9;
      if ( a3 )
        v10 = *((float *)v9 + 8) <= v11;
      else
        v10 = v11 > *((float *)v9 + 8);
      if ( v10 )
        v9 = (__int64 *)*v9;
      else
        v9 = (__int64 *)v9[2];
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  try
  {
    *(_QWORD *)a2 = *sub_18003C538(a1, &v14, v10, v8, (int)a4, a5);
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    sub_18003D888(a1, a5);
    throw;
  }
  return result;
}
