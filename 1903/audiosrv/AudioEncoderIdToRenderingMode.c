/*
 * XREFs of AudioEncoderIdToRenderingMode @ 0x18012FC00
 * Callers:
 *     ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1801304A0 (-GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180131650 (-GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioEncoderIdToRenderingMode(_QWORD *a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp-19h] BYREF
  int v15; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v17; // [rsp+60h] [rbp+17h]
  __int64 v18; // [rsp+68h] [rbp+1Fh]
  int *v19; // [rsp+70h] [rbp+27h]
  __int64 v20; // [rsp+78h] [rbp+2Fh]
  int *v21; // [rsp+80h] [rbp+37h]
  __int64 v22; // [rsp+88h] [rbp+3Fh]

  v4 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  v5 = 0;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v4 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( v4 )
  {
    v6 = *a1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
    if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
      v6 = a1[1] - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
    if ( v6 )
    {
      v7 = *a1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
      if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
        v7 = a1[1] - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
      if ( v7 )
      {
        v8 = *a1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
        if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
          v8 = a1[1] - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
        if ( v8 )
        {
          v9 = *a1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
          if ( *a1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
            v9 = a1[1] - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
          if ( v9 )
          {
            v10 = *a1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
            if ( *a1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
              v10 = a1[1] - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
            if ( v10 )
            {
              v11 = *a1 - MULTICHANNEL_SPATIAL_ENCODER;
              if ( *a1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                v11 = a1[1] - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
              if ( v11 )
              {
                v12 = *a1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
                if ( *a1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                  v12 = a1[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
                if ( v12 && (unsigned int)dword_1801B63C0 > 2 )
                {
                  v18 = 30LL;
                  v17 = "AudioEncoderIdToRenderingMode";
                  v19 = &v14;
                  v21 = &v15;
                  v14 = 453;
                  v20 = 4LL;
                  v15 = -2147418113;
                  v22 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CD07, a3, a4, 5u, &pData);
                }
              }
            }
            else
            {
              return 6;
            }
          }
          else
          {
            return 5;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
