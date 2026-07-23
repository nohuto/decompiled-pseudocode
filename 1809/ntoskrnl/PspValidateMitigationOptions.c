/*
 * XREFs of PspValidateMitigationOptions @ 0x1406BB26C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationOptions @ 0x14064F860 (PspReadIFEOMitigationOptions.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  char *v2; // r8
  int v3; // eax
  __int64 v5; // r9
  __m128i v6; // xmm0
  int v7; // edx
  __int64 v8; // r8
  __m128i v10; // [rsp+0h] [rbp-48h]
  _DWORD v11[3]; // [rsp+10h] [rbp-38h]
  char v12; // [rsp+1Ch] [rbp-2Ch] BYREF
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+34h] [rbp-14h]

  v11[0] = 0;
  v2 = &v12;
  v3 = 9;
  v11[1] = 1;
  v11[2] = 2;
  v5 = 4LL;
  do
  {
    *(_DWORD *)v2 = v3++;
    v2 += 4;
    --v5;
  }
  while ( v5 );
  v6 = *a1;
  v7 = 0;
  v8 = 0LL;
  v10 = *a1;
  v13 = 17;
  v14 = 25;
  v15 = 27;
  while ( a2
       || (((unsigned __int64)v10.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 4) == 0 )
  {
    if ( (unsigned int)v8 < 0xA && v11[v8] == v7 )
    {
      v8 = (unsigned int)(v8 + 1);
    }
    else if ( (((unsigned __int64)v10.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 0xF) == 3 )
    {
      return 3221225485LL;
    }
    if ( (unsigned int)++v7 >= 0x20 )
    {
      if ( ((_mm_srli_si128(v6, 8).m128i_u64[0] >> 12) & 3) == 0 )
        return 0LL;
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
