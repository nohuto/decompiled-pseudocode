/*
 * XREFs of ExecutePccCommand @ 0x1C002D8D0
 * Callers:
 *     ExecutePccWrite @ 0x1C000A230 (ExecutePccWrite.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutePccCommand(char a1, __int64 a2)
{
  LOBYTE(a2) = a1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C001A8B0 + 104))(*(_QWORD *)(qword_1C001A8B0 + 56), a2);
}
