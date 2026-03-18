/*
 * XREFs of NVMePowerInitialize @ 0x1C000CE20
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C00086E0 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000BB4C (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000D88C (NVMePowerStateGetMaxPower.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014DE4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0018068 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  int v3; // ecx
  unsigned int v4; // r14d
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // r12
  __int64 PowerState; // rax
  __int64 v9; // r10
  char v10; // r9
  unsigned int MaxPower; // r11d
  int v12; // r13d
  unsigned int v13; // ebx
  const char *v14; // rdx
  unsigned int v16; // edx
  int v17; // eax
  unsigned __int8 v18; // r9
  __int64 v19; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // edx
  int v27; // eax
  unsigned __int8 v28; // r10
  __int64 v29; // rbx
  _DWORD *v30; // r9
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r11
  char v35; // r10
  const char *v36; // r8
  unsigned __int8 v37; // [rsp+130h] [rbp+67h]
  unsigned __int8 v38; // [rsp+138h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1536);
  v3 = *(_DWORD *)(a1 + 76);
  v4 = -1;
  v5 = 0;
  v38 = 0;
  v6 = 0;
  v37 = 0;
  if ( v3 != 4 && (*(_DWORD *)(a1 + 3748) & 0x100) == 0 )
  {
    if ( v3 == 3 )
    {
      NVMeGetAutoPowerStateTransition(a1);
      if ( (*(_DWORD *)(a1 + 1576) & 0x40) == 0 )
      {
        NVMeSetAutoPowerStateTransition(a1);
        NVMeGetAutoPowerStateTransition(a1);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
      return 1;
    }
    if ( (*(_DWORD *)(a1 + 1576) & 1) == 0 )
    {
      v7 = 0;
      if ( *(unsigned __int8 *)(v1 + 263) != -1 )
      {
        do
        {
          PowerState = NVMeGetPowerState(a1, v7);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
          {
            v37 = v10 + 1;
            if ( MaxPower < v4 )
              v4 = MaxPower;
          }
          else
          {
            ++v5;
            v38 = v7;
          }
          StorPortExtendedFunction(87LL, a1, 0LL);
          ++v7;
          v6 = v37;
        }
        while ( v7 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
      }
      v12 = v6;
      v13 = 32 * (v6 + 3);
      if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v13) )
      {
        v14 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
      }
      else
      {
        NVMeZeroMemory(0LL, v13);
        v16 = 1;
        MEMORY[0] = 2;
        MEMORY[4] = 24;
        MEMORY[8] = 1;
        MEMORY[0xC] |= 0x40u;
        MEMORY[0x18] = 2;
        MEMORY[0x1C] = 40;
        MEMORY[0x28] = xmmword_1C001D358;
        if ( *(_DWORD *)(a1 + 76) != 5 )
          v16 = v12 + 1;
        MEMORY[0x20] = v16;
        if ( v16 > 1 )
        {
          MEMORY[0xC] |= 0x100u;
          v16 = MEMORY[0x20];
        }
        if ( v16 > 8 )
          MEMORY[0x20] = 8;
        MEMORY[0xC] |= 0x10u;
        MEMORY[0x10] = -1;
        v17 = *(_DWORD *)(a1 + 76);
        if ( (v17 || v4 <= 0x2710) && v17 != 2 )
        {
          if ( v17 == 5 )
          {
            MEMORY[0xC] |= 4u;
            MEMORY[0x10] = *(_DWORD *)(a1 + 88);
          }
        }
        else
        {
          MEMORY[0xC] |= 4u;
          *(_DWORD *)(a1 + 1576) |= 0x10u;
        }
        MEMORY[0xC] |= 8u;
        v18 = v38 + 1;
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
            v19 = NVMeGetPowerState(a1, v18);
            v18 = v20 + 1;
            v22 = 32LL * v21;
            *(_DWORD *)(32 * (v21 + 2LL) + 0x18) = v23;
            *(_DWORD *)(v22 + 64) = 1;
            *(_DWORD *)(v22 + 68) = 32;
            v24 = (unsigned int)(*(_DWORD *)(v19 + 4) + *(_DWORD *)(v19 + 8));
            *(_QWORD *)(v22 + 80) = 0LL;
            *(_QWORD *)(v22 + 72) = 10 * v24;
          }
          while ( v21 + 1 < MEMORY[0x20] );
        }
        if ( !(unsigned int)StorPortExtendedFunction(48LL, a1, 0LL) )
        {
          v26 = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(a1 + 1576) = (*(_DWORD *)(a1 + 1576) | 5) ^ *(_DWORD *)(a1 + 1576) & 8;
          *(_BYTE *)(a1 + 1585) = MEMORY[0x20];
          *(_QWORD *)(a1 + 1560) = 0LL;
          v27 = 15;
          *(_DWORD *)(a1 + 1600) = 15;
          if ( v26 != -1 )
            v27 = v26;
          *(_DWORD *)(a1 + 1592) = v27;
          *(_BYTE *)(a1 + 1586) = 0;
          *(_WORD *)(a1 + 1582) = 0;
          *(_DWORD *)(a1 + 1588) = 0;
          *(_BYTE *)(a1 + 1581) = v38;
          *(_DWORD *)(a1 + 1604) = 200;
          *(_DWORD *)(a1 + 1612) = 2000;
          *(_DWORD *)(a1 + 1608) = 100;
          if ( v37 )
          {
            StorPortExtendedFunction(32LL, a1, a1 + 1616);
            StorPortExtendedFunction(51LL, a1, 0LL);
            StorPortExtendedFunction(52LL, a1, 0LL);
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v5 + 40) )
          {
            v28 = 0;
            MEMORY[0] = 1;
            MEMORY[4] = 40;
            MEMORY[0x10] = 3LL;
            MEMORY[0x18] = v5;
            MEMORY[0x1C] = 40;
            if ( v5 )
            {
              v29 = 0LL;
              do
              {
                v30 = (_DWORD *)(v29 + MEMORY[0x1C]);
                *v30 = 1;
                v30[1] = 24;
                v31 = NVMeGetPowerState(a1, v28);
                v32 = NVMePowerStateGetMaxPower(v31);
                *(_QWORD *)(v33 + 16) = v34;
                v28 = v35 + 1;
                v29 += 24LL;
                *(_QWORD *)(v33 + 8) = v32 / 0x3E8;
              }
              while ( v28 < v5 );
            }
            if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL) )
            {
              StorPortExtendedFunction(1LL, a1, 0LL);
              v36 = "Failed";
            }
            else
            {
              v36 = "Succeeded";
              *(_DWORD *)(a1 + 1576) |= 2u;
              *(_QWORD *)(a1 + 1568) = 0LL;
              *(_BYTE *)(a1 + 1582) = v5;
              *(_BYTE *)(a1 + 1583) = 0;
            }
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v36);
            NVMeGetAutoPowerStateTransition(a1);
            if ( (*(_DWORD *)(a1 + 1576) & 0x40) != 0 )
            {
              NVMeSetAutoPowerStateTransition(a1);
              NVMeGetAutoPowerStateTransition(a1);
            }
            return 1;
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
          return 0;
        }
        StorPortExtendedFunction(1LL, a1, 0LL);
        v14 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
        v25 = *(_DWORD *)(a1 + 1576) & 0xFFFFFFFA;
        *(_QWORD *)(a1 + 1560) = 0LL;
        *(_DWORD *)(a1 + 1576) = v25;
      }
      StorPortDebugPrint(3LL, v14);
      return 0;
    }
  }
  return 1;
}
