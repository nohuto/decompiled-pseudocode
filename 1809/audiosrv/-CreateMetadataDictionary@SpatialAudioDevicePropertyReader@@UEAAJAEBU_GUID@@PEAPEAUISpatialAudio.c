/*
 * XREFs of ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180126720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180127498 (-GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@.c)
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x18012E1BC (Create_SpatialAudioMetadataDictionaryFromData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::CreateMetadataDictionary(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        struct ISpatialAudioMetadataDictionaryData **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const GUID *v7; // r8
  const GUID *v8; // r9
  signed int PropertyIndexForMetadataFormatID; // ebx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rdi
  unsigned int v15; // ebx
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned int v21; // [rsp+38h] [rbp-79h] BYREF
  int v22; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned __int16 v23[4]; // [rsp+40h] [rbp-71h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct ISpatialAudioMetadataDictionaryData **); // [rsp+48h] [rbp-69h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-61h] BYREF
  __int64 v26; // [rsp+58h] [rbp-59h]
  __int64 v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int128 v29; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+80h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  const char *v32; // [rsp+A8h] [rbp-9h]
  __int64 v33; // [rsp+B0h] [rbp-1h]
  unsigned int *v34; // [rsp+B8h] [rbp+7h]
  __int64 v35; // [rsp+C0h] [rbp+Fh]
  int *v36; // [rsp+C8h] [rbp+17h]
  __int64 v37; // [rsp+D0h] [rbp+1Fh]

  v28 = -2LL;
  v21 = 0;
  v23[0] = 0;
  v24 = 0LL;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( a3 )
  {
    PropertyIndexForMetadataFormatID = SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
                                         this,
                                         a2,
                                         v23,
                                         &v21);
    v22 = PropertyIndexForMetadataFormatID;
    if ( PropertyIndexForMetadataFormatID >= 0 )
    {
      v29 = PKEY_SpatialAudio_Metadata_Dictionary_Array;
      v30 = v21 + 2;
      PropertyIndexForMetadataFormatID = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
                                           *((_QWORD *)this + 51),
                                           &v29,
                                           &pvar);
      v21 = PropertyIndexForMetadataFormatID;
      if ( PropertyIndexForMetadataFormatID >= 0 )
      {
        if ( (_WORD)pvar == 65 )
        {
          v14 = v27;
          v15 = v26;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
          PropertyIndexForMetadataFormatID = Create_SpatialAudioMetadataDictionaryFromData(v23[0], v14, v15, &v24);
          v21 = PropertyIndexForMetadataFormatID;
          if ( PropertyIndexForMetadataFormatID >= 0 )
          {
            PropertyIndexForMetadataFormatID = (**v24)(v24, &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf, a3);
            v21 = PropertyIndexForMetadataFormatID;
            if ( PropertyIndexForMetadataFormatID < 0 && (unsigned int)dword_1801B1488 > 2 )
            {
              v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
              v33 = 59LL;
              v22 = 564;
              v34 = (unsigned int *)&v22;
              v35 = 4LL;
              v36 = (int *)&v21;
              v37 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v18, v19, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801B1488 > 2 )
          {
            v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
            v33 = 59LL;
            v22 = 561;
            v34 = (unsigned int *)&v22;
            v35 = 4LL;
            v36 = (int *)&v21;
            v37 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v16, v17, 5u, &pData);
          }
        }
        else
        {
          PropertyIndexForMetadataFormatID = -2147418113;
          if ( (unsigned int)dword_1801B1488 > 2 )
          {
            v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
            v33 = 59LL;
            v22 = 555;
            v34 = (unsigned int *)&v22;
            v35 = 4LL;
            v21 = -2147418113;
            v36 = (int *)&v21;
            v37 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v12, v13, 5u, &pData);
          }
        }
      }
      else if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
        v33 = 59LL;
        v22 = 553;
        v34 = (unsigned int *)&v22;
        v35 = 4LL;
        v36 = (int *)&v21;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v12, v13, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
      v33 = 59LL;
      v21 = 547;
      v34 = &v21;
      v35 = 4LL;
      v36 = &v22;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v10, v11, 5u, &pData);
    }
  }
  else
  {
    PropertyIndexForMetadataFormatID = -2147024809;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
      v33 = 59LL;
      v21 = 544;
      v34 = &v21;
      v35 = 4LL;
      *(_DWORD *)v23 = -2147024809;
      v36 = (int *)v23;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v7, v8, 5u, &pData);
    }
  }
  PropVariantClear(&pvar);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
  return (unsigned int)PropertyIndexForMetadataFormatID;
}
