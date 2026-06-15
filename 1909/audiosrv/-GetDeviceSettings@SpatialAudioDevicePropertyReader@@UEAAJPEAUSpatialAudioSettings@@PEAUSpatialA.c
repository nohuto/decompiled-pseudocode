/*
 * XREFs of ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180047B50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDeviceSettings(
        SpatialAudioDevicePropertyReader *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  size_t v5; // r12
  unsigned int v9; // ebx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const void *v12; // rdx
  unsigned int v14; // edi
  int v15; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  const char *v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  int *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !*((_DWORD *)this + 128) )
  {
    v14 = -2147418113;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v19 = 52LL;
      v18 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
      v15 = 687;
      v20 = &v15;
      v21 = 4LL;
      v16[0] = -2147418113;
      v22 = v16;
      v23 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v10, v11, 5u, &pData);
    }
    return v14;
  }
  if ( !a2 )
  {
    v14 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v19 = 52LL;
      v18 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
      v16[0] = 688;
      v20 = v16;
      v21 = 4LL;
      v15 = -2147024809;
      v22 = &v15;
      v23 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v10, v11, 5u, &pData);
    }
    return v14;
  }
  *(_OWORD *)a2 = *((_OWORD *)this + 27);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 28);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 29);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 30);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 62);
  if ( (_DWORD)v5 )
  {
    v12 = (const void *)*((_QWORD *)this + 63);
    if ( v12 )
    {
      if ( a3 )
      {
        v10 = (const GUID *)v5;
        v11 = (const GUID *)(834LL * *((unsigned int *)this + 106));
        if ( (const GUID *)v5 == v11 )
        {
          memcpy_0(a3, v12, v5);
          return v9;
        }
      }
      v14 = -2147024809;
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v19 = 52LL;
        v18 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
        v16[0] = 695;
        v20 = v16;
        v21 = 4LL;
        v15 = -2147024809;
        v22 = &v15;
        v23 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v10, v11, 5u, &pData);
      }
    }
    else
    {
      v14 = -2147418113;
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v19 = 52LL;
        v18 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
        v16[0] = 694;
        v20 = v16;
        v21 = 4LL;
        v15 = -2147418113;
        v22 = &v15;
        v23 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v10, v11, 5u, &pData);
      }
    }
    return v14;
  }
  return v9;
}
