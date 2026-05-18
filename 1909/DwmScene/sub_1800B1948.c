/*
 * XREFs of sub_1800B1948 @ 0x1800B1948
 * Callers:
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 *     sub_1800B1D20 @ 0x1800B1D20 (sub_1800B1D20.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800FD664 @ 0x1800FD664 (sub_1800FD664.c)
 * Callees:
 *     sub_18008210C @ 0x18008210C (sub_18008210C.c)
 *     sub_1800AEB04 @ 0x1800AEB04 (sub_1800AEB04.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800B1948(__int64 a1)
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
      sub_1800AEB04(a1, (__int64)&v6);
      result = sub_18008210C(&v4, &v7, &v6);
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
