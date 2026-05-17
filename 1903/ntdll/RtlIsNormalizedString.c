/*
 * XREFs of RtlIsNormalizedString @ 0x1800FA250
 * Callers:
 *     sub_18002BFC0 @ 0x18002BFC0 (sub_18002BFC0.c)
 * Callees:
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 */

__int64 __fastcall RtlIsNormalizedString(unsigned int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !a1 )
    return 3221225485LL;
  result = sub_18007DC6C(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v5 = v7 + 1;
    }
    return sub_1800F9D5C(v9, a2, v5, a4);
  }
  return result;
}
