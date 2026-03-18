/*
 * XREFs of ?ivUnregisterChildNotification@CBaseInput@@IEAAXXZ @ 0x1C018D2E8
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C005B550 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::ivUnregisterChildNotification(CBaseInput *this)
{
  void *v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      13,
      (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
  v2 = (void *)*((_QWORD *)this + 148);
  if ( v2 )
  {
    if ( gpfnIVUnregisterChildNotification )
      gpfnIVUnregisterChildNotification(v2);
    *((_QWORD *)this + 148) = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        12,
        14,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
  }
}
