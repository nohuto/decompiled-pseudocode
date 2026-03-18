/*
 * XREFs of ?ivRegisterChildNotification@CBaseInput@@IEAAJK@Z @ 0x1C018ED4C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0060E70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A9360 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A95E0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::ivRegisterChildNotification(void **this, unsigned int a2)
{
  unsigned int v2; // ebx
  struct _ETHREAD *CurrentThread; // rdx
  int v5; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      12,
      10,
      (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
  }
  CurrentThread = KeGetCurrentThread();
  if ( gpfnIVRegisterChildNotification )
    v5 = gpfnIVRegisterChildNotification(
           (struct _ETHREAD *)gpIVThread,
           CurrentThread,
           this,
           (int (*)(void *, void *))CBaseInput::_ivOnChildNotification,
           v2,
           this + 148);
  else
    v5 = -1073741637;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    LOBYTE(CurrentThread) = 2;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gBaseLog,
      (_DWORD)CurrentThread,
      12,
      11,
      (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
      (char)KeGetCurrentThread(),
      (char)this,
      v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(CurrentThread) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)CurrentThread,
      12,
      12,
      (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
  }
  return (unsigned int)v5;
}
