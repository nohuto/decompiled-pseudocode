/*
 * XREFs of IsCapturedBySystem @ 0x1C0073900
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 v2; // rax
  char v3; // bl

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  v3 = 0;
  if ( v2 )
    return CInputDest::operator==((unsigned int *)(v2 + 2552), a1) != 0;
  return v3;
}
