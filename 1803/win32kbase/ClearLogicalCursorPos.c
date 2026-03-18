/*
 * XREFs of ClearLogicalCursorPos @ 0x1C012DD50
 * Callers:
 *     InitLoadResources @ 0x1C0054BBC (InitLoadResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 ClearLogicalCursorPos()
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( result )
  {
    *(_QWORD *)(result + 100) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 108) = 18;
  }
  return result;
}
