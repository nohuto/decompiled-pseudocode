/*
 * XREFs of IsCapturedBySystem @ 0x1C0151340
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  char v4; // bl

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  v4 = 0;
  if ( v2 )
    return CInputDest::operator==((unsigned int *)(v2 + 2552), a1, v3) != 0;
  return v4;
}
