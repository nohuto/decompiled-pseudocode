/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x18012EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000D760 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v5; // rsi
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // edi
  const GUID *v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  LPVOID v15; // rax
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v23; // r15d
  const GUID *v24; // r8
  const GUID *v25; // r9
  const GUID *v26; // r8
  const GUID *v27; // r9
  const GUID *v28; // r8
  const GUID *v29; // r9
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v34[9]; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _tagpropertykey v35; // [rsp+60h] [rbp-A0h] BYREF
  GUID v36; // [rsp+80h] [rbp-80h] BYREF
  __int16 v37; // [rsp+90h] [rbp-70h]
  GUID v38; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  const char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v33[0] = 0;
  v34[0] = 0;
  v38 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = 0LL;
  v36 = GUID_00000000_0000_0000_0000_000000000000;
  v37 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v31 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v38);
    v8 = v31;
    if ( v31 >= 0 )
    {
      v31 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
              a2,
              v33);
      v8 = v31;
      if ( v31 >= 0 )
      {
        v31 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
                a2,
                v34);
        v8 = v31;
        if ( v31 >= 0 )
        {
          v15 = operator new[](v34[0], (const struct std::nothrow_t *)&std::nothrow);
          v5 = v15;
          if ( v15 )
          {
            v31 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, LPVOID, _QWORD))(*(_QWORD *)a2 + 48LL))(
                    a2,
                    v15,
                    v34[0]);
            v8 = v31;
            if ( v31 >= 0 )
            {
              v20 = *((_QWORD *)this + 11);
              memset(&v34[1], 0, 24);
              v31 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v20 + 40LL))(
                      v20,
                      &PKEY_SpatialAudio_Metadata_Count,
                      &v34[1]);
              v8 = v31;
              if ( v31 >= 0 )
              {
                if ( LOWORD(v34[1]) == 2 )
                {
                  v23 = SLOWORD(v34[3]);
                  v37 = v33[0];
                  *(_QWORD *)&v34[1] = 65LL;
                  *(_QWORD *)&v34[3] = 18LL;
                  v36 = v38;
                  *(_QWORD *)&v34[5] = &v36;
                  v35.pid = v23 + 2;
                  v35.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
                  v31 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v35, (struct tagPROPVARIANT *)&v34[1]);
                  v8 = v31;
                  if ( v31 >= 0 )
                  {
                    *(_QWORD *)&v34[5] = v5;
                    v35.pid = v23 + 2;
                    *(_QWORD *)&v34[1] = 65LL;
                    *(_QWORD *)&v34[3] = v34[0];
                    v35.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
                    v31 = SpatialAudioDevicePropertyWriter::SetPropertyValue(
                            this,
                            &v35,
                            (struct tagPROPVARIANT *)&v34[1]);
                    v8 = v31;
                    if ( v31 >= 0 )
                    {
                      v35.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
                      v35.pid = 2;
                      *(_QWORD *)&v34[1] = 2LL;
                      *(_OWORD *)&v34[3] = (unsigned __int16)(v23 + 1);
                      v31 = SpatialAudioDevicePropertyWriter::SetPropertyValue(
                              this,
                              &v35,
                              (struct tagPROPVARIANT *)&v34[1]);
                      v8 = v31;
                      if ( v31 < 0 && (unsigned int)dword_1801B53C0 > 2 )
                      {
                        v41 = 52LL;
                        v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                        v32 = 311;
                        v42 = &v32;
                        v43 = 4LL;
                        v44 = &v31;
                        v45 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v28, v29, 5u, &pData);
                      }
                    }
                    else if ( (unsigned int)dword_1801B53C0 > 2 )
                    {
                      v41 = 52LL;
                      v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                      v32 = 304;
                      v42 = &v32;
                      v43 = 4LL;
                      v44 = &v31;
                      v45 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v26, v27, 5u, &pData);
                    }
                  }
                  else if ( (unsigned int)dword_1801B53C0 > 2 )
                  {
                    v41 = 52LL;
                    v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                    v32 = 294;
                    v42 = &v32;
                    v43 = 4LL;
                    v44 = &v31;
                    v45 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v24, v25, 5u, &pData);
                  }
                }
                else
                {
                  v8 = -2147418113;
                  if ( (unsigned int)dword_1801B53C0 > 2 )
                  {
                    v41 = 52LL;
                    v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                    v32 = 281;
                    v42 = &v32;
                    v43 = 4LL;
                    v31 = -2147418113;
                    v44 = &v31;
                    v45 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v21, v22, 5u, &pData);
                  }
                }
              }
              else if ( (unsigned int)dword_1801B53C0 > 2 )
              {
                v41 = 52LL;
                v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
                v32 = 280;
                v42 = &v32;
                v43 = 4LL;
                v44 = &v31;
                v45 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v21, v22, 5u, &pData);
              }
            }
            else if ( (unsigned int)dword_1801B53C0 > 2 )
            {
              v41 = 52LL;
              v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
              v32 = 274;
              v42 = &v32;
              v43 = 4LL;
              v44 = &v31;
              v45 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v18, v19, 5u, &pData);
            }
          }
          else
          {
            v8 = -2147024882;
            v31 = -2147024882;
            if ( (unsigned int)dword_1801B53C0 > 2 )
            {
              v41 = 52LL;
              v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
              v32 = 271;
              v42 = &v32;
              v43 = 4LL;
              v44 = &v31;
              v45 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v16, v17, 5u, &pData);
            }
          }
        }
        else if ( (unsigned int)dword_1801B53C0 > 2 )
        {
          v41 = 52LL;
          v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
          v32 = 267;
          v42 = &v32;
          v43 = 4LL;
          v44 = &v31;
          v45 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v41 = 52LL;
        v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
        v32 = 264;
        v42 = &v32;
        v43 = 4LL;
        v44 = &v31;
        v45 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v11, v12, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v41 = 52LL;
      v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      v32 = 261;
      v42 = &v32;
      v43 = 4LL;
      v44 = &v31;
      v45 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v41 = 52LL;
      v40 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      v31 = 257;
      v42 = &v31;
      v43 = 4LL;
      v32 = -2147024809;
      v44 = &v32;
      v45 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v6, v7, 5u, &pData);
    }
  }
  operator delete(v5);
  return v8;
}
