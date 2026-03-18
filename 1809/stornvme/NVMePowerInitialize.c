/*
 * XREFs of NVMePowerInitialize @ 0x1C000EBF4
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C000B280 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000E4B8 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F660 (NVMePowerStateGetMaxPower.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00154FC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0017228 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  int v3; // ecx
  unsigned int v4; // r14d
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // r12
  __int64 PowerState; // rax
  __int64 v10; // r10
  char v11; // r9
  unsigned int MaxPower; // r11d
  int v13; // r13d
  unsigned int v14; // ebx
  const char *v15; // rdx
  unsigned int v17; // edx
  int v18; // eax
  unsigned __int8 v19; // r9
  __int64 v20; // rax
  char v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // edx
  int v29; // eax
  unsigned __int8 v30; // r10
  __int64 v31; // rbx
  _DWORD *v32; // r9
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r11
  char v37; // r10
  __int64 v38; // r9
  const char *v39; // r8
  unsigned __int8 v40; // [rsp+130h] [rbp+67h]
  unsigned __int8 v41; // [rsp+138h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1528);
  v3 = *(_DWORD *)(a1 + 76);
  v4 = -1;
  v5 = 0;
  v41 = 0;
  v6 = 0;
  v40 = 0;
  if ( v3 != 4 && (*(_DWORD *)(a1 + 3740) & 0x100) == 0 )
  {
    if ( v3 == 3 )
    {
      NVMeGetAutoPowerStateTransition(a1);
      v7 = *(unsigned int *)(a1 + 1568);
      if ( (v7 & 0x40) == 0 )
      {
        LOBYTE(v7) = 1;
        NVMeSetAutoPowerStateTransition(a1, v7);
        NVMeGetAutoPowerStateTransition(a1);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
      return 1;
    }
    if ( (*(_DWORD *)(a1 + 1568) & 1) == 0 )
    {
      v8 = 0;
      if ( *(unsigned __int8 *)(v1 + 263) != -1 )
      {
        do
        {
          PowerState = NVMeGetPowerState(a1, v8);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          if ( (*(_BYTE *)(v10 + 3) & 2) != 0 )
          {
            v40 = v11 + 1;
            if ( MaxPower < v4 )
              v4 = MaxPower;
          }
          else
          {
            ++v5;
            v41 = v8;
          }
          StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
          ++v8;
          v6 = v40;
        }
        while ( v8 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
      }
      v13 = v6;
      v14 = 32 * (v6 + 3);
      if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v14, 1701672526LL) )
      {
        v15 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
      }
      else
      {
        NVMeZeroMemory(0LL, v14);
        v17 = 1;
        MEMORY[0] = 2;
        MEMORY[4] = 24;
        MEMORY[8] = 1;
        MEMORY[0xC] |= 0x40u;
        MEMORY[0x18] = 2;
        MEMORY[0x1C] = 40;
        MEMORY[0x28] = xmmword_1C001B838;
        if ( *(_DWORD *)(a1 + 76) != 5 )
          v17 = v13 + 1;
        MEMORY[0x20] = v17;
        if ( v17 > 1 )
        {
          MEMORY[0xC] |= 0x100u;
          v17 = MEMORY[0x20];
        }
        if ( v17 > 8 )
          MEMORY[0x20] = 8;
        MEMORY[0xC] |= 0x10u;
        MEMORY[0x10] = -1;
        v18 = *(_DWORD *)(a1 + 76);
        if ( (v18 || v4 <= 0x2710) && v18 != 2 )
        {
          if ( v18 == 5 )
          {
            MEMORY[0xC] |= 4u;
            MEMORY[0x10] = *(_DWORD *)(a1 + 88);
          }
        }
        else
        {
          MEMORY[0xC] |= 4u;
          *(_DWORD *)(a1 + 1568) |= 0x10u;
        }
        MEMORY[0xC] |= 8u;
        v19 = v41 + 1;
        MEMORY[0x3C] = MEMORY[0x20] - 1;
        MEMORY[0x40] = 1;
        MEMORY[0x44] = 32;
        MEMORY[0x48] = 0LL;
        MEMORY[0x50] = 0LL;
        MEMORY[0x58] = -1;
        if ( MEMORY[0x20] > 1u )
        {
          do
          {
            v20 = NVMeGetPowerState(a1, v19);
            v19 = v21 + 1;
            v23 = 32LL * v22;
            *(_DWORD *)(32 * (v22 + 2LL) + 0x18) = v24;
            *(_DWORD *)(v23 + 64) = 1;
            *(_DWORD *)(v23 + 68) = 32;
            v25 = (unsigned int)(*(_DWORD *)(v20 + 4) + *(_DWORD *)(v20 + 8));
            *(_QWORD *)(v23 + 80) = 0LL;
            *(_QWORD *)(v23 + 72) = 10 * v25;
          }
          while ( v22 + 1 < MEMORY[0x20] );
        }
        if ( !(unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
        {
          v28 = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(a1 + 1568) = (*(_DWORD *)(a1 + 1568) | 5) ^ *(_DWORD *)(a1 + 1568) & 8;
          *(_BYTE *)(a1 + 1577) = MEMORY[0x20];
          *(_QWORD *)(a1 + 1552) = 0LL;
          v29 = 15;
          *(_DWORD *)(a1 + 1592) = 15;
          if ( v28 != -1 )
            v29 = v28;
          *(_DWORD *)(a1 + 1584) = v29;
          *(_BYTE *)(a1 + 1578) = 0;
          *(_WORD *)(a1 + 1574) = 0;
          *(_DWORD *)(a1 + 1580) = 0;
          *(_BYTE *)(a1 + 1573) = v41;
          *(_DWORD *)(a1 + 1596) = 200;
          *(_DWORD *)(a1 + 1604) = 2000;
          *(_DWORD *)(a1 + 1600) = 100;
          if ( v40 )
          {
            StorPortExtendedFunction(32LL, a1, a1 + 1608, v26);
            StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
            StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v5 + 40, 1701672526LL) )
          {
            v30 = 0;
            MEMORY[0] = 1;
            MEMORY[4] = 40;
            MEMORY[0x10] = 3LL;
            MEMORY[0x18] = v5;
            MEMORY[0x1C] = 40;
            if ( v5 )
            {
              v31 = 0LL;
              do
              {
                v32 = (_DWORD *)(v31 + MEMORY[0x1C]);
                *v32 = 1;
                v32[1] = 24;
                v33 = NVMeGetPowerState(a1, v30);
                v34 = NVMePowerStateGetMaxPower(v33);
                *(_QWORD *)(v35 + 16) = v36;
                v30 = v37 + 1;
                v31 += 24LL;
                *(_QWORD *)(v35 + 8) = v34 / 0x3E8;
              }
              while ( v30 < v5 );
            }
            if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL, 0LL) )
            {
              StorPortExtendedFunction(1LL, a1, 0LL, v38);
              v39 = "Failed";
            }
            else
            {
              v39 = "Succeeded";
              *(_DWORD *)(a1 + 1568) |= 2u;
              *(_QWORD *)(a1 + 1560) = 0LL;
              *(_BYTE *)(a1 + 1574) = v5;
              *(_BYTE *)(a1 + 1575) = 0;
            }
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v39);
            NVMeGetAutoPowerStateTransition(a1);
            if ( (*(_DWORD *)(a1 + 1568) & 0x40) != 0 )
            {
              NVMeSetAutoPowerStateTransition(a1, 0LL);
              NVMeGetAutoPowerStateTransition(a1);
            }
            return 1;
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
          return 0;
        }
        StorPortExtendedFunction(1LL, a1, 0LL, v26);
        v15 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
        v27 = *(_DWORD *)(a1 + 1568) & 0xFFFFFFFA;
        *(_QWORD *)(a1 + 1552) = 0LL;
        *(_DWORD *)(a1 + 1568) = v27;
      }
      StorPortDebugPrint(3LL, v15);
      return 0;
    }
  }
  return 1;
}
