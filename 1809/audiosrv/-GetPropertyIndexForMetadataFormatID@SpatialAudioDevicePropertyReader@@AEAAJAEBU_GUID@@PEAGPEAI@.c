/*
 * XREFs of ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180127498
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180126720 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 *     ?IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARIANT@@@Z @ 0x180128210 (-IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARI.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int16 v8; // si
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // ebx
  unsigned __int16 v12; // r15
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+34h] [rbp-75h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h]
  __int64 v21; // [rsp+48h] [rbp-61h]
  unsigned int *v22; // [rsp+50h] [rbp-59h]
  __int128 v23; // [rsp+58h] [rbp-51h] BYREF
  int v24; // [rsp+68h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  const char *v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]
  int *v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]

  v22 = a4;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
          *((_QWORD *)this + 51),
          &PKEY_SpatialAudio_Metadata_Count,
          &pvar);
  v11 = v18;
  if ( v18 >= 0 )
  {
    if ( (_WORD)pvar == 2 )
    {
      v12 = v20;
      v23 = PKEY_SpatialAudio_Metadata_Id_Array;
      v24 = 2;
      PropVariantClear(&pvar);
      pvar = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
                  *((_QWORD *)this + 51),
                  &v23,
                  &pvar);
          v11 = v17;
          if ( v17 < 0 )
            break;
          if ( (_WORD)pvar != 65 || (_DWORD)v20 != 18 )
          {
            v11 = -2147024809;
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v27 = 70LL;
              v26 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
              v18 = 468;
              v28 = &v18;
              v29 = 4LL;
              v17 = -2147024809;
              v30 = &v17;
              v31 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v13, v14, 5u, &pData);
            }
            goto LABEL_18;
          }
          v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)v21;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)v21 )
            v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v21 + 8);
          if ( !v15 )
          {
            if ( a3 )
              *a3 = *(_WORD *)(v21 + 16);
            *v22 = v8;
            goto LABEL_18;
          }
          PropVariantClear(&pvar);
          ++v24;
          if ( ++v8 >= v12 )
            goto LABEL_17;
        }
        if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v27 = 70LL;
          v26 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
          v18 = 466;
          v28 = &v18;
          v29 = 4LL;
          v30 = &v17;
          v31 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v13, v14, 5u, &pData);
        }
      }
      else
      {
LABEL_17:
        v11 = -2004286973;
      }
    }
    else
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v27 = 70LL;
        v26 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
        v18 = 455;
        v28 = &v18;
        v29 = 4LL;
        v17 = -2147024809;
        v30 = &v17;
        v31 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v9, v10, 5u, &pData);
      }
    }
  }
  else if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v27 = 70LL;
    v26 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    v17 = 453;
    v28 = &v17;
    v29 = 4LL;
    v30 = &v18;
    v31 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v9, v10, 5u, &pData);
  }
LABEL_18:
  PropVariantClear(&pvar);
  return v11;
}
