/*
 * XREFs of sub_1405CAB3C @ 0x1405CAB3C
 * Callers:
 *     sub_1405C9F80 @ 0x1405C9F80 (sub_1405C9F80.c)
 *     WbHeapExecuteCall @ 0x1405CA6C8 (WbHeapExecuteCall.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1406AFA70 (WbFreeWarbirdProcess.c)
 *     sub_1406F12CC @ 0x1406F12CC (sub_1406F12CC.c)
 * Callees:
 *     sub_1405CA02C @ 0x1405CA02C (sub_1405CA02C.c)
 *     sub_1405CAD80 @ 0x1405CAD80 (sub_1405CAD80.c)
 */

signed __int64 __fastcall sub_1405CAB3C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_1405CA02C(a1, a2, -1) >= 0 )
    {
      sub_1405CAD80(*(_QWORD *)(a2 + 24));
      sub_1405CAD80(a2);
    }
  }
  return v2;
}
