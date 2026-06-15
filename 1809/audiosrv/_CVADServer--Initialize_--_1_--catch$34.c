/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$34 @ 0x18006C920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVADServer::Initialize_::_1_::catch_34(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 200);
  *(_DWORD *)(a2 + 112) = v2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, v2);
  }
  return &loc_180029DE7;
}
