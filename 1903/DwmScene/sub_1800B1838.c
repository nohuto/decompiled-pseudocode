/*
 * XREFs of sub_1800B1838 @ 0x1800B1838
 * Callers:
 *     sub_1800AE170 @ 0x1800AE170 (sub_1800AE170.c)
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800FD554 @ 0x1800FD554 (sub_1800FD554.c)
 * Callees:
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_1800AE9F4 @ 0x1800AE9F4 (sub_1800AE9F4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800B1838(__int64 a1)
{
  _DWORD *result; // rax
  float v3; // xmm0_4
  float v4; // [rsp+20h] [rbp-38h] BYREF
  float v5; // [rsp+24h] [rbp-34h]
  unsigned __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(a1 + 336) )
  {
    if ( *(_BYTE *)(a1 + 1612) )
    {
      sub_1800AE9F4(a1, (__int64)&v6);
      result = sub_180081FFC(&v4, &v7, &v6);
      if ( v5 != 0.0 )
      {
        v3 = v4 / v5;
        if ( (float)(v4 / v5) != *(float *)(a1 + 332) )
        {
          *(_DWORD *)(a1 + 544) |= 2u;
          *(float *)(a1 + 332) = v3;
        }
        *(_BYTE *)(a1 + 1612) = 0;
      }
    }
  }
  return result;
}
