/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C000EA00
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006160 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000E4B8 (NVMeGetPowerState.c)
 *     NVMePerfStateTransition @ 0x1C000EB08 (NVMePerfStateTransition.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F660 (NVMePowerStateGetMaxPower.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  signed __int8 v4; // r9
  __int64 PowerState; // rax
  unsigned int MaxPower; // kr00_4
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r10
  signed __int8 v9; // al
  int v10; // ebp

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = 0;
    do
    {
      PowerState = NVMeGetPowerState(a1, v4);
      MaxPower = NVMePowerStateGetMaxPower(PowerState);
      v7 = MaxPower / 0x3E8;
      if ( v7 <= v8 )
        break;
      ++v4;
    }
    while ( v4 <= (int)*(unsigned __int8 *)(a1 + 1573) );
    v9 = v4;
    v10 = v4;
    if ( (unsigned __int8)v4 > *(_BYTE *)(a1 + 1573) )
      v9 = *(_BYTE *)(a1 + 1573);
    *(_BYTE *)(a1 + 1576) = v9;
    StorPortDebugPrint(
      3LL,
      "StorNVMe - POWER: Max Op. Power is now %umW so choose PS%u (%umW)\n",
      *(_QWORD *)(a2 + 8),
      (unsigned int)v4,
      MaxPower / 0x3E8);
    if ( (*(_DWORD *)(a1 + 1568) & 4) != 0 && *(unsigned __int8 *)(a1 + 1575) != v10 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1616), 0) )
      {
        *(_DWORD *)(a1 + 1568) |= 0x80u;
      }
      else if ( !(unsigned __int8)NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1616) &= ~1u;
      }
    }
    *(_QWORD *)(a2 + 8) = v7;
  }
}
