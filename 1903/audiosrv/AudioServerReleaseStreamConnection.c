/*
 * XREFs of AudioServerReleaseStreamConnection @ 0x1800E9B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x1800E6270 (-ReleaseStreamConnection@@YAJPEAX@Z.c)
 */

__int64 __fastcall AudioServerReleaseStreamConnection(_QWORD **a1)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = ReleaseStreamConnection(*a1);
    *a1 = 0LL;
  }
  return result;
}
