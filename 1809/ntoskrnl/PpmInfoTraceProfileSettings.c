/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x140876B04
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmEventTraceProfileSetting @ 0x140757988 (PpmEventTraceProfileSetting.c)
 */

char PpmInfoTraceProfileSettings()
{
  unsigned __int8 v0; // r14
  __int64 *v1; // rdi
  char *v2; // rsi
  __int64 *v3; // r14
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int128 *v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rbp
  unsigned __int8 v10; // [rsp+40h] [rbp-58h]
  __int64 v11; // [rsp+48h] [rbp-50h]
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF

  v0 = 0;
  v1 = PpmDefaultProfile;
  while ( 1 )
  {
    v10 = v0;
    v2 = (char *)&unk_140541A48;
    v3 = v1 + 346;
    v11 = 52LL;
    do
    {
      v4 = v1 + 5;
      v5 = 1LL << v2[12];
      v6 = (__int128 *)*((_QWORD *)v2 - 2);
      v7 = ((v2[13] & 4) != 0) + 1;
      v8 = 0LL;
      v12 = *v6;
      do
      {
        if ( (v5 & v4[v8]) != 0 )
          LOBYTE(v6) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v1 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v12,
                         v8,
                         (__int64)v4 + *(_QWORD *)v2 + (unsigned int)(v8 * *((_DWORD *)v2 + 2)),
                         *((_DWORD *)v2 + 2),
                         0,
                         1);
        if ( (v5 & v3[v8]) != 0 )
          LOBYTE(v6) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v1 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v12,
                         v8,
                         (__int64)v3 + *(_QWORD *)v2 + (unsigned int)(v8 * *((_DWORD *)v2 + 2)),
                         *((_DWORD *)v2 + 2),
                         1,
                         1);
        ++HIBYTE(v12);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v7 );
      v2 += 40;
      --v11;
    }
    while ( v11 );
    if ( v10 == PpmProfileCount )
      break;
    v1 = (__int64 *)(PpmProfiles + 5536LL * v10);
    v0 = v10 + 1;
  }
  return (char)v6;
}
