/*
 * XREFs of ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800F8224
 * Callers:
 *     s_mmeNotifyDeviceAdded @ 0x1800F8580 (s_mmeNotifyDeviceAdded.c)
 * Callees:
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceAdded(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_318757207047345406f66bc846efc13e_Traceguids, a1);
  }
  return 0LL;
}
