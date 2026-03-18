/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0054E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0054BDC (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0056A80 (RIMDirectStopDeviceClassNotifications.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00A0310 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this, __int64 a2)
{
  unsigned int v3; // edi
  void *v4; // rcx
  __int64 v6; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h]

  Handle = 0LL;
  v3 = -1073741823;
  if ( CBaseInput::ExecutingInSensorHostingProcess(this, a2) )
  {
    v4 = (void *)*((_QWORD *)this + 1);
    Handle = v4;
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
      RawInputManagerObjectCreateKernelHandle(v6, 3LL, 0LL);
    v4 = 0LL;
  }
  if ( v4 )
  {
    v3 = RIMDirectStopDeviceClassNotifications();
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v3;
}
