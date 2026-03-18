/*
 * XREFs of HasCapture @ 0x1C012E5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

char HasCapture()
{
  __int64 v0; // rax
  char v1; // cl

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( !v0 )
    return 0;
  v1 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v0 + 2736), 1, 1) )
    return 0;
  return v1;
}
