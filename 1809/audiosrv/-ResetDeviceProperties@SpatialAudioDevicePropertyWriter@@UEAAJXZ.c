/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1801259F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180126220 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned int v5; // edi
  const GUID *v6; // r8
  const GUID *v7; // r9
  char v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  struct tagPROPVARIANT v12; // [rsp+40h] [rbp-59h] BYREF
  struct _tagpropertykey v13; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  const char *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  int *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  *(_QWORD *)&v12.vt = 2LL;
  *(_OWORD *)&v12.decVal.Lo32 = 0u;
  v13.pid = 2;
  v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v11 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v12);
  v5 = v11;
  if ( v11 >= 0 )
  {
    v9 = 0;
    *(_QWORD *)&v12.vt = 65LL;
    v12.hVal.QuadPart = 1LL;
    v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v12.bstrblobVal.pData = (BYTE *)&v9;
    v13.pid = 2;
    v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v12);
    v5 = v10;
    if ( v10 >= 0 )
    {
      if ( !*((_DWORD *)this + 24) )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
    }
    else if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v16 = 56LL;
      v15 = "SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
      v11 = 232;
      v17 = &v11;
      v18 = 4LL;
      v19 = &v10;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v6, v7, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v16 = 56LL;
    v15 = "SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    v10 = 222;
    v17 = &v10;
    v18 = 4LL;
    v19 = &v11;
    v20 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v3, v4, 5u, &pData);
  }
  return v5;
}
