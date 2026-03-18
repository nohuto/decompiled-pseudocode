/*
 * XREFs of HasCapture @ 0x1C01512D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char HasCapture()
{
  __int64 v0; // rax
  char v1; // cl

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( !v0 )
    return 0;
  v1 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v0 + 2736), 1, 1) )
    return 0;
  return v1;
}
