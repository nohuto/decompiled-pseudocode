/*
 * XREFs of MonitorFromHdev @ 0x1C003DAC8
 * Callers:
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 104); result && *(_QWORD *)(result + 232) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
