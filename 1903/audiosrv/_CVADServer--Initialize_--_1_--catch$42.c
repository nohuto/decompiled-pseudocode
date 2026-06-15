/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$42 @ 0x180070390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVADServer::Initialize_::_1_::catch_42(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 240);
  *(_DWORD *)(a2 + 120) = v2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v2);
  }
  return &loc_180024535;
}
