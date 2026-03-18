/*
 * XREFs of sub_1405CA63C @ 0x1405CA63C
 * Callers:
 *     sub_1405C9A80 @ 0x1405C9A80 (sub_1405C9A80.c)
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 *     WbGetWarbirdThread @ 0x1405CA698 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1406ADB40 (WbFreeWarbirdProcess.c)
 *     sub_1406EF65C @ 0x1406EF65C (sub_1406EF65C.c)
 * Callees:
 *     sub_1405C9B2C @ 0x1405C9B2C (sub_1405C9B2C.c)
 *     sub_1405CA880 @ 0x1405CA880 (sub_1405CA880.c)
 */

signed __int64 __fastcall sub_1405CA63C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_1405C9B2C(a1, a2, -1) >= 0 )
    {
      sub_1405CA880(*(_QWORD *)(a2 + 24));
      sub_1405CA880(a2);
    }
  }
  return v2;
}
