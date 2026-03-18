/*
 * XREFs of NVMeHwAdapterControl @ 0x1C00046D0
 * Callers:
 *     <none>
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004430 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000AC54 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000AD58 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000B448 (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000B600 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 *     NVMeMaxOperationalPower @ 0x1C000CC2C (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C000D504 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000D62C (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000D798 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000DCA0 (NVMeSystemPowerHint.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v6; // eax
  int v7; // eax
  const char *v8; // r8
  int v9; // eax
  __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned __int8 v16; // r9
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v21; // [rsp+70h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-10h] BYREF

  v3 = 0;
  switch ( (int)a2 )
  {
    case 0:
      v6 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
        *(_BYTE *)(a3 + 4) = 1;
      if ( v6 > 1 )
      {
        *(_BYTE *)(a3 + 5) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 2 )
      {
        *(_BYTE *)(a3 + 6) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 6 )
      {
        *(_BYTE *)(a3 + 10) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 8 )
      {
        *(_BYTE *)(a3 + 12) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 9 )
      {
        *(_BYTE *)(a3 + 13) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xC )
      {
        *(_BYTE *)(a3 + 16) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xD )
      {
        *(_BYTE *)(a3 + 17) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xE )
      {
        *(_BYTE *)(a3 + 18) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xF )
      {
        *(_BYTE *)(a3 + 19) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0x10 )
      {
        *(_BYTE *)(a3 + 20) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 5 )
      {
        *(_BYTE *)(a3 + 9) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0x11 )
        *(_BYTE *)(a3 + 21) = 1;
      return v3;
    case 1:
      v18 = *(_DWORD *)(a1 + 20);
      if ( (v18 & 8) != 0 )
      {
        NVMeControllerRemove(a1);
      }
      else if ( (v18 & 2) != 0 )
      {
        NVMeControllerStop(a1);
      }
      return v3;
    case 2:
      return v3;
    case 5:
      NVMePowerSettingChangeNotification(a1, a3);
      return v3;
    case 6:
      v7 = *(_DWORD *)(a3 + 20);
      if ( v7 == 1 )
      {
        v21 = 0LL;
        StorPortExtendedFunction(47LL, a1, &v21);
        NVMeControllerPowerUp(a1);
        StorPortExtendedFunction(47LL, a1, &v21);
        CalculateTimeDurationIn100ns(0LL, v21);
LABEL_34:
        StorPortExtendedFunction(85LL, a1, 0LL);
        return v3;
      }
      if ( v7 == 4 && ((*(_DWORD *)(a1 + 20) & 0x40) == 0 || *(_DWORD *)(a3 + 16) != 3) )
      {
        v22 = 0LL;
        StorPortExtendedFunction(47LL, a1, &v22);
        NVMeControllerPowerDown(a1);
        StorPortExtendedFunction(47LL, a1, &v22);
        CalculateTimeDurationIn100ns(0LL, v22);
        goto LABEL_34;
      }
      return v3;
    case 8:
      v8 = "ACTIVE";
      if ( !*(_BYTE *)(a3 + 20) )
        v8 = "IDLE";
      StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v8);
      v9 = *(_DWORD *)(a1 + 1576) ^ (*(_DWORD *)(a1 + 1576) ^ (4 * *(unsigned __int8 *)(a3 + 20))) & 4;
      *(_DWORD *)(a1 + 1576) = v9;
      if ( *(_BYTE *)(a3 + 20) )
      {
        if ( (v9 & 0x20) != 0 )
        {
          v10 = *(_QWORD *)(a1 + 1616);
          *(_DWORD *)(a1 + 1576) = v9 & 0xFFFFFFDF;
          StorPortExtendedFunction(33LL, a1, v10);
        }
        StorPortExtendedFunction(51LL, a1, 0LL);
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1624), 0) )
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
        }
        else if ( (*(_DWORD *)(a1 + 1576) & 2) == 0
               || (v11 = *(_BYTE *)(a1 + 1584), *(_BYTE *)(a1 + 1583) == v11)
               || (StorPortDebugPrint(3LL, "StorNVMe - POWER: Requesting transition to P%u\n", v11),
                   (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL)) )
        {
          *(_DWORD *)(a1 + 1624) &= ~1u;
        }
      }
      else
      {
        v12 = *(_BYTE *)(a1 + 1585);
        if ( v12 <= 1u )
          return v3;
        v13 = *(_DWORD *)(a1 + 1588);
        v14 = *(_DWORD *)(a1 + 1592);
        if ( v13 == 1 )
        {
          v15 = *(_DWORD *)(a1 + 100);
          if ( v15 == -1 )
            v15 = *(_DWORD *)(a1 + 1596);
        }
        else
        {
          v15 = *(_DWORD *)(a1 + 96);
          if ( v15 == -1 )
          {
            v16 = *(_BYTE *)(a1 + 1586);
            if ( !v16 || v16 >= v12 - 1 || (v15 = *(_DWORD *)(a1 + 1608), v14 > v15) )
              v15 = *(_DWORD *)(a1 + 1600);
          }
        }
        *(_DWORD *)(a1 + 1592) = v15;
        if ( v14 != v15 )
        {
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n",
            v14,
            v15);
          v13 = *(_DWORD *)(a1 + 1588);
        }
        if ( v13 == 1 )
        {
          v17 = *(_DWORD *)(a1 + 84);
        }
        else
        {
          v17 = *(_DWORD *)(a1 + 80);
          if ( v17 == -1 )
          {
            if ( *(_BYTE *)(a1 + 1586) )
            {
              if ( *(_BYTE *)(a1 + 1585) <= 2u )
                return v3;
              v17 = *(_DWORD *)(a1 + 1612);
            }
            else
            {
              v17 = *(_DWORD *)(a1 + 1604);
            }
          }
        }
        if ( v17 )
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v17);
          *(_DWORD *)(a1 + 1576) |= 0x20u;
          StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1616));
        }
      }
      return v3;
    case 9:
      NVMePowerSetFState(a1);
      return v3;
    case 12:
      NVMeSystemPowerHint(a1, a3);
      return v3;
    case 13:
      if ( !*(_DWORD *)a3 )
        return 1;
      NVMeControllerFilterResouceRequirements(a1, a3);
      return v3;
    case 14:
      NVMeMaxOperationalPower(a1, a3);
      return v3;
    case 15:
      NVMePowerSetPerfState(a1);
      return v3;
    case 16:
      LOBYTE(a2) = 17;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
      NVMeControllerCompleteAllIORequests(a1, a2);
      *(_DWORD *)(a1 + 20) &= ~0x10u;
      return v3;
    case 17:
      if ( !a3 )
        return 1;
      v19 = *(_QWORD *)(a1 + 1536);
      if ( !v19 || *(_DWORD *)a3 != 1 )
        return 1;
      *(_OWORD *)(a3 + 9) = *(_OWORD *)(v19 + 4);
      *(_DWORD *)(a3 + 25) = *(_DWORD *)(v19 + 20);
      *(_BYTE *)(a3 + 29) = 0;
      *(_BYTE *)(a3 + 8) = 0;
      return v3;
    default:
      return 1;
  }
}
