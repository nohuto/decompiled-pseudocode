/*
 * XREFs of ClearLogicalCursorPos @ 0x1C0095660
 * Callers:
 *     InitLoadResources @ 0x1C003BB24 (InitLoadResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 ClearLogicalCursorPos()
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( result )
  {
    *(_QWORD *)(result + 84) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 92) = 18;
  }
  return result;
}
