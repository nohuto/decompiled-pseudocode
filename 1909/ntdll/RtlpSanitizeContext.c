/*
 * XREFs of RtlpSanitizeContext @ 0x18001EC04
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x18001ED88 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContext(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r10
  int v3; // r8d
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  int v6; // ecx

  result = RtlpValidateContextFlags(*(unsigned int *)(a1 + 48), 0LL);
  if ( (int)result >= 0 && (v2[12] & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    v2[12] = v2[12] & 0xD800001F | 0x100000;
    result = 0LL;
  }
  if ( (int)result < 0 )
  {
    v2[12] = 1048587;
  }
  else
  {
    result = v2[12] & 0x100040;
    if ( (_DWORD)result == 1048640 )
    {
      result = (unsigned int)v2[308];
      v3 = v2[312];
      if ( (int)result > v3
        || (v4 = v2[309], v5 = v2[313], v6 = v4 + result, result = v5 + v3, v6 < (int)result)
        || v4 < 0x528
        || v2[311] != 1232
        || v5 < 0x40
        || (result = (int)v2[310], (_DWORD *)((char *)v2 + result + 1232) != v2) )
      {
        v2[12] &= ~0x40u;
      }
    }
  }
  return result;
}
