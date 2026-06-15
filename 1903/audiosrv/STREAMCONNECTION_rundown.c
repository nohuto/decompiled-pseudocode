/*
 * XREFs of STREAMCONNECTION_rundown @ 0x1800EB6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall STREAMCONNECTION_rundown(_QWORD *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, a1);
  }
  return ReleaseStreamConnection(a1);
}
