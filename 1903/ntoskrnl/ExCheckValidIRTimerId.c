/*
 * XREFs of ExCheckValidIRTimerId @ 0x140180AB8
 * Callers:
 *     KeInitializeIRTimer @ 0x140180A64 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x140745DF4 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < *((unsigned __int8 *)&unk_140370290 + 24 * a1);
}
