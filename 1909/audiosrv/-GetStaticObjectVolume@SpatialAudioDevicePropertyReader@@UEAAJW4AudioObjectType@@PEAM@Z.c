/*
 * XREFs of ?GetStaticObjectVolume@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM@Z @ 0x180130FE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetStaticObjectVolume(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-39h] BYREF
  double v13; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  int *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  double *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v10 = *((_QWORD *)this + 6);
    v13 = (double)(a2 | 1);
    *a3 = *(float *)(v10 + 16LL * (unsigned int)((HIDWORD(v13) >> 20) - 1024) + 12);
  }
  else
  {
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v16 = 56LL;
      v15 = "SpatialAudioDevicePropertyReader::GetStaticObjectVolume";
      v17 = &v12;
      v19 = &v13;
      v12 = 630;
      v18 = 4LL;
      LODWORD(v13) = -2147024809;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v8, v9, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
