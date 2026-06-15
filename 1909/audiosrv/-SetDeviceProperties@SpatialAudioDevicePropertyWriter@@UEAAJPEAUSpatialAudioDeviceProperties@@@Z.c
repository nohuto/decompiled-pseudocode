/*
 * XREFs of ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x18012F620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000D760 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceProperties(
        SpatialAudioDevicePropertyWriter *this,
        BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // edi
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  struct tagPROPVARIANT v13; // [rsp+38h] [rbp-51h] BYREF
  struct _tagpropertykey v14; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  const char *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  int *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  int *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_DWORD *)a2 = 1509949441;
    *(_QWORD *)&v13.vt = 65LL;
    v13.hVal.QuadPart = 146LL;
    v14.pid = 2;
    v13.bstrblobVal.pData = a2;
    v14.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v11 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v14, &v13);
    v7 = v11;
    if ( v11 >= 0 )
    {
      if ( !*((_DWORD *)this + 24) )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      v19 = &v12;
      v20 = 4;
      v23 = 4;
      v17 = 54;
      v12 = 339;
      v22 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      v19 = &v11;
      v20 = 4;
      v23 = 4;
      v17 = 54;
      v11 = 328;
      v12 = -2147024809;
      v22 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v5, v6, 5u, &pData);
    }
  }
  return v7;
}
