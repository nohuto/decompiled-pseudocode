/*
 * XREFs of ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180127E10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     AudioEncoderIdToRenderingMode @ 0x1801263E4 (AudioEncoderIdToRenderingMode.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdx
  const GUID *v7; // r8
  const GUID *v8; // r9
  char *v9; // rcx
  int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  int *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 108) )
    {
      v9 = (char *)this + 444;
      if ( !*((_DWORD *)this + 128) )
        v9 = (char *)this + 108;
      *a2 = AudioEncoderIdToRenderingMode(v9, v6, v7, v8);
    }
    else
    {
      *a2 = 0;
    }
  }
  else
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v15 = 75LL;
      v14 = "SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioRenderingMode";
      v16 = &v11;
      v18 = &v12;
      v11 = 871;
      v17 = 4LL;
      v12 = -2147024809;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v7, v8, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
