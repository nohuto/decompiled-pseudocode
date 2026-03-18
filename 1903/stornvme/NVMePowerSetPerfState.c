/*
 * XREFs of NVMePowerSetPerfState @ 0x1C000D62C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00046D0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000BB4C (NVMeGetPowerState.c)
 *     NVMePerfStateTransition @ 0x1C000CD34 (NVMePerfStateTransition.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000D88C (NVMePowerStateGetMaxPower.c)
 *     NVMeSetPowerState @ 0x1C001883C (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // al
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v11; // r10d
  int v12; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Succeeded";
    if ( !*(_BYTE *)(a2 + 12) )
      v5 = "Failed";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", *(unsigned __int8 *)(a2 + 16), v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      v6 = *(_BYTE *)(a1 + 1581);
      if ( (unsigned __int8)v4 <= v6 )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          NVMeGetPowerState(a1, v4);
          PowerState = NVMeGetPowerState(v8, v7);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            MaxPower,
            v11);
          NVMeSetPowerState(a1);
          *(_BYTE *)(a1 + 1583) = v4;
          *(_BYTE *)(a1 + 1580) = v4;
        }
        else
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Power state index %u is invalid\n", v4);
        }
      }
      else
      {
        StorPortDebugPrint(3LL, "StorNVMe - POWER: PS%u is greater than deepest operational power state PS%u\n", v4, v6);
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 1576);
  if ( (v12 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1576) = v12 & 0xFFFFFF7F, LOBYTE(v12) = NVMePerfStateTransition(a1), !(_BYTE)v12) )
  {
    *(_DWORD *)(a1 + 1624) &= ~1u;
  }
  return v12;
}
