/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x18000A590
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800062B0 (_TlgKeywordOn.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     LdrpGetRcConfig @ 0x180018940 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x180058EF0 (LdrResGetRCConfig.c)
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D0C60 (_TlgCreateWsz.c)
 */

char __fastcall LdrpResReportResourceAccessInternal(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 RcConfig; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r15d
  __int64 v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // r10
  const GUID *v21; // r8
  const GUID *v22; // r9
  __int64 v23; // r10
  const GUID *v24; // r8
  const GUID *v25; // r9
  __int64 v26; // r10
  __int16 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int16 *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int16 *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int16 *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(RcConfig) = RtlRunOnceExecuteOnce(&unk_1801660D0, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( (int)RcConfig >= 0 )
  {
    v11 = (unsigned __int16)dword_180166010;
    LOBYTE(RcConfig) = ++dword_180166010;
    if ( !v11 )
    {
      v29 = 0LL;
      if ( a2 )
      {
        v12 = 1;
        LODWORD(RcConfig) = LdrResGetRCConfig(a1, a2, (unsigned int)&v29, 4096, 0);
        if ( (int)RcConfig >= 0 )
          v13 = v29;
        else
          v13 = 0LL;
      }
      else
      {
        LOBYTE(v10) = 1;
        v12 = 0;
        RcConfig = LdrpGetRcConfig(a1, v9, 0LL, v10);
        v13 = RcConfig;
      }
      if ( v13 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( dword_18015F450 > 5u )
            {
              LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x400000000000uLL);
              if ( (_BYTE)RcConfig )
              {
                v30 = *a3;
                v31 = a3[1];
                v28 = 4;
                v40 = 4LL;
                v41 = &v28;
                v35 = &v30;
                v43 = (__int16 *)&v19[1].Data4[4];
                LODWORD(v29) = v12;
                v36 = 8LL;
                v37 = &v31;
                v38 = 8LL;
                v39 = &v29;
                v42 = v20;
                v44 = 16LL;
                LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F450, &unk_18012BDA5, v18, v19, 7u, &v34);
              }
            }
          }
          else if ( a4 == 3 )
          {
            if ( dword_18015F450 > 5u )
            {
              LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x400000000000uLL);
              if ( (_BYTE)RcConfig )
              {
                v31 = *a3;
                v30 = a3[1];
                v32 = a3[2];
                v28 = 4;
                v42 = 4LL;
                v37 = &v30;
                v43 = &v28;
                v35 = &v31;
                v39 = &v32;
                v45 = (__int16 *)&v22[1].Data4[4];
                LODWORD(v29) = v12;
                v36 = 8LL;
                v38 = 8LL;
                v40 = 8LL;
                v41 = (__int16 *)&v29;
                v44 = v23;
                v46 = 16LL;
                LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F450, &unk_18012BB9C, v21, v22, 8u, &v34);
              }
            }
          }
          else if ( dword_18015F450 > 5u )
          {
            LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x400000000000uLL);
            if ( (_BYTE)RcConfig )
            {
              v32 = *a3;
              v31 = a3[1];
              v30 = a3[2];
              v33 = a3[3];
              v28 = 4;
              v44 = 4LL;
              v37 = &v31;
              v45 = &v28;
              v35 = &v32;
              v39 = &v30;
              v47 = &v25[1].Data4[4];
              LODWORD(v29) = v12;
              v36 = 8LL;
              v38 = 8LL;
              v40 = 8LL;
              v41 = (__int16 *)&v33;
              v42 = 8LL;
              v43 = (__int16 *)&v29;
              v46 = v26;
              v48 = 16LL;
              LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F450, &unk_18012B8E4, v24, v25, 9u, &v34);
            }
          }
        }
        else if ( dword_18015F450 > 5u )
        {
          LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x400000000000uLL);
          if ( (_BYTE)RcConfig )
          {
            TlgCreateWsz(&pDesc, L"ResIdCount less than 2.");
            LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F450, &unk_18012B7E1, v16, v17, 3u, &pData);
          }
        }
      }
      else if ( dword_18015F450 > 5u )
      {
        LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x400000000000uLL);
        if ( (_BYTE)RcConfig )
        {
          TlgCreateWsz(&pDesc, L"Failed to retrieve service checksum.");
          LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F450, &unk_18012BA19, v14, v15, 3u, &pData);
        }
      }
    }
  }
  return RcConfig;
}
