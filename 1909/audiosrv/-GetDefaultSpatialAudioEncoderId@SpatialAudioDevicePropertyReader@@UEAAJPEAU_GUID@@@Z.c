/*
 * XREFs of ?GetDefaultSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x180130250
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // edi
  int v10; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  int *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      *a2 = *(struct _GUID *)((char *)this + 476);
      return v5;
    }
    v8 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v14 = 66LL;
      v13 = "SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId";
      v11[0] = 837;
      v15 = v11;
      v16 = 4LL;
      v10 = -2147024809;
      v17 = &v10;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v6, v7, 5u, &pData);
    }
  }
  else
  {
    v8 = -2147418113;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v14 = 66LL;
      v13 = "SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId";
      v10 = 836;
      v15 = &v10;
      v16 = 4LL;
      v11[0] = -2147418113;
      v17 = v11;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v6, v7, 5u, &pData);
    }
  }
  return v8;
}
