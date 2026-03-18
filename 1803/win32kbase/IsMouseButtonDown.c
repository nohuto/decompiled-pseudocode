/*
 * XREFs of IsMouseButtonDown @ 0x1C012E720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

char IsMouseButtonDown()
{
  __int64 v0; // rax

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v0 )
    LOBYTE(v0) = *(_DWORD *)(v0 + 2544) != 0;
  return v0;
}
