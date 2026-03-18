/*
 * XREFs of _AllowForegroundActivation @ 0x1C01D6E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowForegroundActivation(int a1)
{
  gdwPUDFlags |= 0x8000000u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 2, 10, (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids);
  return 1LL;
}
