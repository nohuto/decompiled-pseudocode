/*
 * XREFs of RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x18010CC24
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180062088 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketSubsegmentStatsUpdate(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax
  BOOL v3; // r9d
  __int64 v4; // r8
  char v7; // cl
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  char v10; // cl
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rtt
  signed __int64 v15; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = 0;
  v15 = *a1;
  v4 = a2 & 3;
  do
  {
    if ( *((unsigned __int8 *)&v15 + 2 * v4) == a2 )
    {
      v7 = *((_BYTE *)&v15 + 2 * v4 + 1);
      if ( v7 == 64 )
      {
        v8 = (char *)&v15 + 1;
        v9 = 4LL;
        do
        {
          *v8 >>= 1;
          v8 += 2;
          --v9;
        }
        while ( v9 );
        v7 = *((_BYTE *)&v15 + 2 * v4 + 1);
      }
      v10 = v7 + 1;
      v3 = (unsigned __int8)v10 > 8u;
    }
    else
    {
      v11 = (char *)&v15 + 1;
      v12 = 4LL;
      do
      {
        *v11 >>= 1;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&v15 + 2 * v4) = a2;
      v10 = 1;
    }
    *((_BYTE *)&v15 + 2 * v4 + 1) = v10;
    v13 = v2;
    v2 = _InterlockedCompareExchange64(a1, v15, v2);
    v15 = v2;
  }
  while ( v13 != v2 );
  return v3;
}
