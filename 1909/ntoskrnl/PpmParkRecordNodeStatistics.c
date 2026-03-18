/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x1400F38F0
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1400F3600 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     PpmParkComputeSnapStatistics @ 0x1400F3A70 (PpmParkComputeSnapStatistics.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140302154 (PpmEventParkNodeClassRecordedStats.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  int v0; // r15d
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned __int16 v3; // di
  unsigned __int8 v4; // r12
  unsigned __int8 i; // r13
  __int64 v6; // rbx
  __int64 v7; // r8
  REGHANDLE v8; // r10
  int v9; // ecx
  unsigned __int8 v10; // si
  char *v11; // r14
  int v12; // edi
  int v13; // r9d
  char v14; // [rsp+48h] [rbp-69h] BYREF
  char v15; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int16 v16; // [rsp+58h] [rbp-59h]
  __int16 v17; // [rsp+60h] [rbp-51h] BYREF
  __int64 v18; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  char *v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+C0h] [rbp+Fh]
  int v28; // [rsp+C4h] [rbp+13h]
  char *v29; // [rsp+C8h] [rbp+17h]
  __int64 v30; // [rsp+D0h] [rbp+1Fh]

  v0 = PpmCheckMakeupCount;
  v1 = 341LL * dword_140443A2C;
  result = 0LL;
  v3 = 0;
  v16 = 0;
  v4 = BYTE5(PpmCurrentProfile[v1 + 20]);
  for ( i = HIBYTE(PpmCurrentProfile[v1 + 20]); v3 < (unsigned int)PpmParkNumNodes; v16 = v3 )
  {
    v6 = PpmParkNodes + 272LL * v3;
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v0, v4, i, (int)v6 + 80, v6 + 140, v6 + 141, v6 + 142) )
    {
      v15 = *(_BYTE *)(v6 + 142);
      v14 = *(_BYTE *)(v6 + 140);
      v18 = *(_QWORD *)(v6 + 8);
      v17 = *(_WORD *)(v6 + 4);
      if ( PpmEtwRegistered )
      {
        if ( PpmEtwHandle
          && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 5u, 2LL)
           || *(_BYTE *)(v8 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v8 + 40) + 96LL, 5u, v7)) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v17;
          v21 = 8LL;
          v20 = &v18;
          v23 = 1LL;
          v22 = &v14;
          v25 = 4LL;
          v24 = v6 + 120;
          v9 = *(_DWORD *)(v6 + 120);
          v26 = *(_QWORD *)(v6 + 88);
          v28 = 0;
          v30 = 1LL;
          v27 = 8 * v9;
          v29 = &v15;
          EtwWriteEx(v8, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( *(_BYTE *)(v6 + 6) != *(_BYTE *)(v6 + 128) )
    {
      v10 = 0;
      v11 = (char *)(v6 + 264);
      v12 = v6 + 168;
      do
      {
        if ( (unsigned __int8)PpmParkComputeSnapStatistics(v0, v4, i, v12, 0LL, 0LL, (__int64)v11) )
          PpmEventParkNodeClassRecordedStats(*(unsigned __int16 *)(v6 + 4), *(_QWORD *)(v6 + 8), v10, v13, *v11);
        ++v10;
        v12 += 48;
        ++v11;
      }
      while ( v10 < 2u );
      v3 = v16;
    }
    result = ++v3;
  }
  return result;
}
