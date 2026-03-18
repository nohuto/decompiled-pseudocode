/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0051C70
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00505A0 (RIMDirectStopDeviceClassNotifications.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0051D98 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0065D00 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  char *v3; // rcx
  __int64 v5; // rcx
  char *Handle; // [rsp+48h] [rbp+10h]

  Handle = 0LL;
  v2 = -1073741823;
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v3 = (char *)*((_QWORD *)this + 1);
    Handle = v3;
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
      RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL);
    v3 = 0LL;
  }
  if ( v3 )
  {
    v2 = RIMDirectStopDeviceClassNotifications(v3);
    if ( Handle != *((char **)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
