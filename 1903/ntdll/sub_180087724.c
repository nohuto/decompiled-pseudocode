/*
 * XREFs of sub_180087724 @ 0x180087724
 * Callers:
 *     sub_180049F08 @ 0x180049F08 (sub_180049F08.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall sub_180087724(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax
  BOOL v3; // r9d
  __int64 v4; // r8
  _BYTE *v7; // rcx
  __int64 v8; // rdx
  char v9; // cl
  signed __int64 v10; // rtt
  char v12; // cl
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = 0;
  v15 = *a1;
  v4 = a2 & 3;
  do
  {
    if ( *((unsigned __int8 *)&v15 + 2 * v4) == a2 )
    {
      v12 = *((_BYTE *)&v15 + 2 * v4 + 1);
      if ( v12 == 64 )
      {
        v13 = (char *)&v15 + 1;
        v14 = 4LL;
        do
        {
          *v13 >>= 1;
          v13 += 2;
          --v14;
        }
        while ( v14 );
        v12 = *((_BYTE *)&v15 + 2 * v4 + 1);
      }
      v9 = v12 + 1;
      v3 = (unsigned __int8)v9 > 8u;
    }
    else
    {
      v7 = (char *)&v15 + 1;
      v8 = 4LL;
      do
      {
        *v7 >>= 1;
        v7 += 2;
        --v8;
      }
      while ( v8 );
      *((_BYTE *)&v15 + 2 * v4) = a2;
      v9 = 1;
    }
    *((_BYTE *)&v15 + 2 * v4 + 1) = v9;
    v10 = v2;
    v2 = _InterlockedCompareExchange64(a1, v15, v2);
    v15 = v2;
  }
  while ( v10 != v2 );
  return v3;
}
