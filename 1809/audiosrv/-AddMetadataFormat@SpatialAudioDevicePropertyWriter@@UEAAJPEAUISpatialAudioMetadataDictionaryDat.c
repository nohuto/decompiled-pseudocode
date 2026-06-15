/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1801252A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180126220 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v5; // r15
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // edi
  const GUID *v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  int v20; // r14d
  const GUID *v21; // r8
  const GUID *v22; // r9
  const GUID *v23; // r8
  const GUID *v24; // r9
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v30[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v31[9]; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _tagpropertykey v32; // [rsp+60h] [rbp-A0h] BYREF
  GUID v33; // [rsp+80h] [rbp-80h] BYREF
  __int16 v34; // [rsp+90h] [rbp-70h]
  GUID v35; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  const char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v30[0] = 0;
  v31[0] = 0;
  v35 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = 0LL;
  v33 = GUID_00000000_0000_0000_0000_000000000000;
  v34 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v28 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v35);
    v8 = v28;
    if ( v28 >= 0 )
    {
      v28 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
              a2,
              v30);
      v8 = v28;
      if ( v28 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
                a2,
                v31);
        v8 = v28;
        if ( v28 >= 0 )
        {
          v5 = operator new(v31[0]);
          v28 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, void *, _QWORD))(*(_QWORD *)a2 + 48LL))(
                  a2,
                  v5,
                  v31[0]);
          v8 = v28;
          if ( v28 >= 0 )
          {
            v17 = *((_QWORD *)this + 11);
            memset(&v31[1], 0, 24);
            v28 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v17 + 40LL))(
                    v17,
                    &PKEY_SpatialAudio_Metadata_Count,
                    &v31[1]);
            v8 = v28;
            if ( v28 >= 0 )
            {
              if ( LOWORD(v31[1]) == 2 )
              {
                v20 = SLOWORD(v31[3]);
                v34 = v30[0];
                *(_QWORD *)&v31[1] = 65LL;
                *(_QWORD *)&v31[3] = 18LL;
                v33 = v35;
                *(_QWORD *)&v31[5] = &v33;
                v32.pid = v20 + 2;
                v32.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
                v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, (struct tagPROPVARIANT *)&v31[1]);
                v8 = v28;
                if ( v28 >= 0 )
                {
                  *(_QWORD *)&v31[5] = v5;
                  v32.pid = v20 + 2;
                  *(_QWORD *)&v31[1] = 65LL;
                  *(_QWORD *)&v31[3] = v31[0];
                  v32.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
                  v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, (struct tagPROPVARIANT *)&v31[1]);
                  v8 = v28;
                  if ( v28 >= 0 )
                  {
                    v32.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
                    v32.pid = 2;
                    *(_QWORD *)&v31[1] = 2LL;
                    *(_OWORD *)&v31[3] = (unsigned __int16)(v20 + 1);
                    v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(
                            this,
                            &v32,
                            (struct tagPROPVARIANT *)&v31[1]);
                    v8 = v28;
                    if ( v28 < 0 && (unsigned int)dword_1801B1488 > 2 )
                    {
                      v38 = 52LL;
                      v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                      v29 = 309;
                      v39 = &v29;
                      v40 = 4LL;
                      v41 = &v28;
                      v42 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v25, v26, 5u, &pData);
                    }
                  }
                  else if ( (unsigned int)dword_1801B1488 > 2 )
                  {
                    v38 = 52LL;
                    v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                    v29 = 302;
                    v39 = &v29;
                    v40 = 4LL;
                    v41 = &v28;
                    v42 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v23, v24, 5u, &pData);
                  }
                }
                else if ( (unsigned int)dword_1801B1488 > 2 )
                {
                  v38 = 52LL;
                  v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                  v29 = 292;
                  v39 = &v29;
                  v40 = 4LL;
                  v41 = &v28;
                  v42 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v21, v22, 5u, &pData);
                }
              }
              else
              {
                v8 = -2147418113;
                if ( (unsigned int)dword_1801B1488 > 2 )
                {
                  v38 = 52LL;
                  v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                  v29 = 279;
                  v39 = &v29;
                  v40 = 4LL;
                  v28 = -2147418113;
                  v41 = &v28;
                  v42 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v18, v19, 5u, &pData);
                }
              }
            }
            else if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v38 = 52LL;
              v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
              v29 = 278;
              v39 = &v29;
              v40 = 4LL;
              v41 = &v28;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v18, v19, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801B1488 > 2 )
          {
            v38 = 52LL;
            v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
            v29 = 272;
            v39 = &v29;
            v40 = 4LL;
            v41 = &v28;
            v42 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v15, v16, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v38 = 52LL;
          v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
          v29 = 267;
          v39 = &v29;
          v40 = 4LL;
          v41 = &v28;
          v42 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v38 = 52LL;
        v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
        v29 = 264;
        v39 = &v29;
        v40 = 4LL;
        v41 = &v28;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v11, v12, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v38 = 52LL;
      v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      v29 = 261;
      v39 = &v29;
      v40 = 4LL;
      v41 = &v28;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v38 = 52LL;
      v37 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      v28 = 257;
      v39 = &v28;
      v40 = 4LL;
      v29 = -2147024809;
      v41 = &v29;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v6, v7, 5u, &pData);
    }
  }
  operator delete(v5);
  return v8;
}
