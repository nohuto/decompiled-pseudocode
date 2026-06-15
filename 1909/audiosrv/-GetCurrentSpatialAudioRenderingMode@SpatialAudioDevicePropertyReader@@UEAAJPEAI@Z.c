/*
 * XREFs of ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180130080
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     AudioEncoderIdToRenderingMode @ 0x18012F7E0 (AudioEncoderIdToRenderingMode.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  int *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 52) + 48LL))(*((_QWORD *)this + 52), v15);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v11 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v15[0];
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == v15[0] )
        v11 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - v15[1];
      if ( v11 )
        *a2 = AudioEncoderIdToRenderingMode(v15, v8, v9, v10);
      else
        return (*(unsigned int (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)this
                                                                                                  + 192LL))(
                 this,
                 a2);
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v17 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      v20 = &v14;
      v21 = 4;
      v24 = 4;
      v18 = 70;
      v14 = 785;
      v23 = &v13;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v17 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      v20 = &v13;
      v21 = 4;
      v24 = 4;
      v18 = 70;
      v13 = 779;
      v14 = -2147024809;
      v23 = &v14;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v5, v6, 5u, &pData);
    }
  }
  return v7;
}
