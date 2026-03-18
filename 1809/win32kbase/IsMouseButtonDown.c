/*
 * XREFs of IsMouseButtonDown @ 0x1C01513E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char IsMouseButtonDown()
{
  __int64 v0; // rax

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v0 )
    LOBYTE(v0) = *(_DWORD *)(v0 + 2544) != 0;
  return v0;
}
