/*
 * XREFs of ?GetCurrentSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x180126B40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 52) + 48LL))(
           *((_QWORD *)this + 52),
           a2);
    if ( v7 < 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
                             this,
                             a2);
    v8 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a2->Data1 )
      v8 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
                             this,
                             a2);
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId";
      v16 = &v10;
      v19 = &v11;
      v14 = 66;
      v10 = 807;
      v17 = 4;
      v11 = -2147024809;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v5, v6, 5u, &pData);
    }
  }
  return (unsigned int)v7;
}
