/*
 * XREFs of PspValidateMitigationAuditOptions @ 0x1406B9F08
 * Callers:
 *     PspReadIFEOMitigationAuditOptions @ 0x14064F8D4 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationAuditOptions(__int128 *a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r8
  int v4; // edx
  __int64 v5; // r10
  char v6; // r9
  _DWORD v8[4]; // [rsp+0h] [rbp-78h]
  __int128 v9; // [rsp+10h] [rbp-68h]
  _DWORD v10[3]; // [rsp+20h] [rbp-58h]
  char v11; // [rsp+2Ch] [rbp-4Ch] BYREF
  __m128i si128; // [rsp+3Ch] [rbp-3Ch]
  __m128i v13; // [rsp+4Ch] [rbp-2Ch]

  v10[0] = 1;
  v10[1] = 7;
  v1 = &v11;
  v10[2] = 9;
  v2 = 11;
  v3 = 4LL;
  do
  {
    *(_DWORD *)v1 = v2++;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8[0] = 11;
  v9 = *a1;
  v13 = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    v6 = (*(_QWORD *)&v10[2 * ((unsigned __int64)(unsigned int)(4 * v4) >> 6) - 4] >> ((4 * v4) & 0x3F)) & 3;
    if ( (unsigned int)v5 < 0xF && v10[v5] == v4 )
    {
      v5 = (unsigned int)(v5 + 1);
    }
    else if ( v6 )
    {
      return 3221225485LL;
    }
    if ( !(_DWORD)v3 && v8[v3] == v4 )
    {
      v3 = 1LL;
      goto LABEL_10;
    }
    if ( v6 == 3 )
      return 3221225485LL;
LABEL_10:
    if ( (unsigned int)++v4 >= 0x20 )
      return 0LL;
  }
}
