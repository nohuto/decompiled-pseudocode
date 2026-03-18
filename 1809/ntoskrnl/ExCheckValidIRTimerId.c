/*
 * XREFs of ExCheckValidIRTimerId @ 0x14013AF54
 * Callers:
 *     KeInitializeIRTimer @ 0x14013AF00 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1406CFBCC (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0xFu && a2 < *((unsigned __int8 *)&unk_1403500B0 + 24 * a1);
}
