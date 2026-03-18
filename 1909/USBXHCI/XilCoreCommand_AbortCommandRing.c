/*
 * XREFs of XilCoreCommand_AbortCommandRing @ 0x1C0047224
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilRegister_ReadUlong64 @ 0x1C0020D5C (XilRegister_ReadUlong64.c)
 *     XilRegister_WriteUlong64 @ 0x1C0020E44 (XilRegister_WriteUlong64.c)
 */

__int64 __fastcall XilCoreCommand_AbortCommandRing(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 Ulong64; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 88LL);
  Ulong64 = XilRegister_ReadUlong64(v2, a1[1]);
  return XilRegister_WriteUlong64(v2, (_DWORD *)a1[1], Ulong64 | 4);
}
