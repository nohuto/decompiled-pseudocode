/*
 * XREFs of ndisMediaDisconnectComplete @ 0x1C00A6980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 */

void __fastcall ndisMediaDisconnectComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        KSPIN_LOCK *Context)
{
  KIRQL v5; // al
  KIRQL v6; // si
  int v7; // ecx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      17,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)Context);
  v5 = KeAcquireSpinLockRaiseToDpc(Context + 12);
  v6 = v5;
  Context[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v7 = *((_DWORD *)Context + 31);
  if ( (v7 & 0x200) != 0 )
  {
    Context[65] = 0LL;
    *((_DWORD *)Context + 31) = v7 & 0xFFFFFDFF;
    KeReleaseSpinLock(Context + 12, v5);
    if ( (*((_DWORD *)Context + 31) & 0x800) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          19,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)Context);
      ndisRequestDevicePowerD0((__int64)Context, 9u);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        18,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)Context);
    Context[65] = 0LL;
    KeReleaseSpinLock(Context + 12, v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      20,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)Context);
}
