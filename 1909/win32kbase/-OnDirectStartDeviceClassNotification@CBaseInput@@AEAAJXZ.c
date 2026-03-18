/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00B69C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B6A00 (RIMDirectStartDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  int v1; // edx
  int started; // ebx

  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  started = RIMDirectStartDeviceClassNotifications(*((_QWORD *)this + 1), gpWin32kDriverObject);
  if ( started < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v1, 3, 14, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids, started);
  }
  return (unsigned int)started;
}
