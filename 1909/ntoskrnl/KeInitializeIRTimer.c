/*
 * XREFs of KeInitializeIRTimer @ 0x140181154
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140176980 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x14018C2B4 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140301080 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x1406811A0 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140759340 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x14075F1E0 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400E8CAC (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x1401811A8 (ExCheckValidIRTimerId.c)
 */

__int64 __fastcall KeInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}
