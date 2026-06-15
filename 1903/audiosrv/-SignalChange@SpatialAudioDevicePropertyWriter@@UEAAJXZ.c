/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180031AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180032290 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  struct tagPROPVARIANT v9; // [rsp+38h] [rbp-51h] BYREF
  struct _tagpropertykey v10; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  const char *v12; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  int *v14; // [rsp+A0h] [rbp+17h]
  __int64 v15; // [rsp+A8h] [rbp+1Fh]
  int *v16; // [rsp+B0h] [rbp+27h]
  __int64 v17; // [rsp+B8h] [rbp+2Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  memset(&v9, 0, sizeof(v9));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v9.iVal = 0;
  v10.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  v9.vt = 2;
  v10.pid = 2;
  v8 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v10, &v9);
  v5 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v13 = 47LL;
      v12 = "SpatialAudioDevicePropertyWriter::SignalChange";
      v14 = &v7;
      v16 = &v8;
      v7 = 187;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v3, v4, 5u, &pData);
    }
  }
  else
  {
    *((_DWORD *)this + 24) = 0;
  }
  return v5;
}
