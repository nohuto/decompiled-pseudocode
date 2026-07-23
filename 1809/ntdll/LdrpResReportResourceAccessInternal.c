/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x18007DFF4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D2490 (_TlgCreateWsz.c)
 */

char __fastcall LdrpResReportResourceAccessInternal(PVOID BaseOfImage, __int64 a2, __int64 *a3, int a4)
{
  _DWORD *RcConfig; // rax
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // r9
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // r10
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r10
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 v24; // r10
  __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int16 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int16 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+F0h] [rbp-10h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(RcConfig) = RtlRunOnceExecuteOnce(&stru_180166100, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( (int)RcConfig >= 0 )
  {
    v10 = (unsigned __int16)dword_180166010;
    LOBYTE(RcConfig) = ++dword_180166010;
    if ( !v10 )
    {
      v27 = 0LL;
      if ( a2 )
      {
        LODWORD(RcConfig) = LdrResGetRCConfig(BaseOfImage, a2, &v27, 4096, 0);
        if ( (int)RcConfig < 0 )
          v11 = 0LL;
        else
          v11 = v27;
      }
      else
      {
        RcConfig = LdrpGetRcConfig(BaseOfImage, v9, 0, 1);
        v11 = RcConfig;
      }
      if ( v11 )
      {
        if ( a4 < 2 )
        {
          if ( dword_18015F520 > 5u )
          {
            LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x400000000000uLL);
            if ( (_BYTE)RcConfig )
            {
              TlgCreateWsz(&pDesc, L"ResIdCount less than 2.");
              LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C0B1, v17, v18, 3u, &v47);
            }
          }
        }
        else if ( a4 == 2 )
        {
          if ( dword_18015F520 > 5u )
          {
            LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x400000000000uLL);
            if ( (_BYTE)RcConfig )
            {
              v28 = *a3;
              v29 = a3[1];
              v26 = 4;
              v38 = 4LL;
              v39 = &v26;
              v33 = &v28;
              v41 = (__int16 *)&v20[1].Data4[4];
              LODWORD(v27) = a2 != 0;
              v34 = 8LL;
              v35 = &v29;
              v36 = 8LL;
              v37 = (__int64 *)&v27;
              v40 = v21;
              v42 = 16LL;
              LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C675, v19, v20, 7u, &pData);
            }
          }
        }
        else if ( a4 == 3 )
        {
          if ( dword_18015F520 > 5u )
          {
            LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x400000000000uLL);
            if ( (_BYTE)RcConfig )
            {
              v29 = *a3;
              v28 = a3[1];
              v30 = a3[2];
              v26 = 4;
              v40 = 4LL;
              v35 = &v28;
              v41 = &v26;
              v33 = &v29;
              v37 = &v30;
              v43 = (__int16 *)&v13[1].Data4[4];
              LODWORD(v27) = a2 != 0;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 8LL;
              v39 = (__int16 *)&v27;
              v42 = v14;
              v44 = 16LL;
              LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C46C, v12, v13, 8u, &pData);
            }
          }
        }
        else if ( dword_18015F520 > 5u )
        {
          LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x400000000000uLL);
          if ( (_BYTE)RcConfig )
          {
            v30 = *a3;
            v29 = a3[1];
            v28 = a3[2];
            v31 = a3[3];
            v26 = 4;
            v42 = 4LL;
            v35 = &v29;
            v43 = &v26;
            v33 = &v30;
            v37 = &v28;
            v45 = &v23[1].Data4[4];
            LODWORD(v27) = a2 != 0;
            v34 = 8LL;
            v36 = 8LL;
            v38 = 8LL;
            v39 = (__int16 *)&v31;
            v40 = 8LL;
            v41 = (__int16 *)&v27;
            v44 = v24;
            v46 = 16LL;
            LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C1B4, v22, v23, 9u, &pData);
          }
        }
      }
      else if ( dword_18015F520 > 5u )
      {
        LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x400000000000uLL);
        if ( (_BYTE)RcConfig )
        {
          TlgCreateWsz(&pDesc, L"Failed to retrieve service checksum.");
          LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C2E9, v15, v16, 3u, &v47);
        }
      }
    }
  }
  return (char)RcConfig;
}
