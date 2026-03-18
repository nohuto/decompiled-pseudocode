/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0006160
 * Callers:
 *     <none>
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0002070 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000D694 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D798 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000DD5C (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000DE90 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 *     NVMeMaxOperationalPower @ 0x1C000EA00 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C000F2D8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F400 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000F56C (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000FA74 (NVMeSystemPowerHint.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  const char *v6; // r8
  int v7; // eax
  __int64 v8; // r8
  unsigned __int8 v9; // al
  unsigned __int8 v11; // al
  int v12; // edx
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  unsigned __int8 v15; // r8
  int v16; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdi
  int v23; // ecx
  __int64 v24; // rdi
  int v25; // eax
  unsigned __int64 v26; // [rsp+70h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 != 8 )
  {
    v18 = 0x1C0000000uLL;
    switch ( a2 )
    {
      case 0:
        v20 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 )
          *(_BYTE *)(a3 + 4) = 1;
        if ( v20 > 1 )
        {
          *(_BYTE *)(a3 + 5) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 2 )
        {
          *(_BYTE *)(a3 + 6) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 6 )
        {
          *(_BYTE *)(a3 + 10) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 8 )
        {
          *(_BYTE *)(a3 + 12) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 9 )
        {
          *(_BYTE *)(a3 + 13) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0xC )
        {
          *(_BYTE *)(a3 + 16) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0xD )
        {
          *(_BYTE *)(a3 + 17) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0xE )
        {
          *(_BYTE *)(a3 + 18) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0xF )
        {
          *(_BYTE *)(a3 + 19) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0x10 )
        {
          *(_BYTE *)(a3 + 20) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 5 )
        {
          *(_BYTE *)(a3 + 9) = 1;
          v20 = *(_DWORD *)a3;
        }
        if ( v20 > 0x11 )
          *(_BYTE *)(a3 + 21) = 1;
        return v3;
      case 1:
        v25 = *(_DWORD *)(a1 + 20);
        if ( (v25 & 8) != 0 )
        {
          NVMeControllerRemove(a1);
        }
        else if ( (v25 & 2) != 0 )
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
        v21 = *(_DWORD *)(a3 + 20);
        if ( v21 == 1 )
        {
          v28 = 0LL;
          v26 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v26, &v28);
          v22 = v28;
          NVMeControllerPowerUp(a1);
          StorPortExtendedFunction(47LL, a1, &v26, &v28);
          CalculateTimeDurationIn100ns(v28 - v22, v26);
        }
        else
        {
          if ( v21 != 4 )
            return v3;
          v23 = *(_DWORD *)(a3 + 16);
          if ( v23 == 5 || (*(_DWORD *)(a1 + 20) & 0x40) != 0 && v23 == 3 )
            return v3;
          v29 = 0LL;
          v27 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v27, &v29);
          v24 = v29;
          NVMeControllerPowerDown(a1);
          StorPortExtendedFunction(47LL, a1, &v27, &v29);
          CalculateTimeDurationIn100ns(v29 - v24, v27);
        }
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return v3;
      case 9:
        NVMePowerSetFState(a1, a3);
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
        NVMePowerSetPerfState(a1, a3);
        return v3;
      case 16:
        LOBYTE(v18) = 17;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
        NVMeControllerCompleteAllIORequests(a1, v18);
        *(_DWORD *)(a1 + 20) &= ~0x10u;
        return v3;
      case 17:
        if ( !a3 )
          return 1;
        v19 = *(_QWORD *)(a1 + 1528);
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
  v6 = "ACTIVE";
  if ( !*(_BYTE *)(a3 + 20) )
    v6 = "IDLE";
  StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v6);
  v7 = *(_DWORD *)(a1 + 1568) ^ (*(_DWORD *)(a1 + 1568) ^ (4 * *(unsigned __int8 *)(a3 + 20))) & 4;
  *(_DWORD *)(a1 + 1568) = v7;
  if ( *(_BYTE *)(a3 + 20) )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 1608);
      *(_DWORD *)(a1 + 1568) = v7 & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v8, NVMeFStateIdleTimerCallback);
    }
    StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1616), 0) )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
    }
    else if ( (*(_DWORD *)(a1 + 1568) & 2) == 0
           || (v9 = *(_BYTE *)(a1 + 1576), *(_BYTE *)(a1 + 1575) == v9)
           || (StorPortDebugPrint(3LL, "StorNVMe - POWER: Requesting transition to P%u\n", v9),
               (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL)) )
    {
      *(_DWORD *)(a1 + 1616) &= ~1u;
    }
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 1577);
    if ( v11 > 1u )
    {
      v12 = *(_DWORD *)(a1 + 1580);
      v13 = *(_DWORD *)(a1 + 1584);
      if ( v12 == 1 )
      {
        v14 = *(_DWORD *)(a1 + 100);
        if ( v14 == -1 )
          v14 = *(_DWORD *)(a1 + 1588);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 96);
        if ( v14 == -1 )
        {
          v15 = *(_BYTE *)(a1 + 1578);
          if ( !v15 || v15 >= v11 - 1 || (v14 = *(_DWORD *)(a1 + 1600), v13 > v14) )
            v14 = *(_DWORD *)(a1 + 1592);
        }
      }
      *(_DWORD *)(a1 + 1584) = v14;
      if ( v13 != v14 )
      {
        StorPortDebugPrint(
          3LL,
          "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n",
          v13,
          v14);
        v12 = *(_DWORD *)(a1 + 1580);
      }
      if ( v12 == 1 )
      {
        v16 = *(_DWORD *)(a1 + 84);
      }
      else
      {
        v16 = *(_DWORD *)(a1 + 80);
        if ( v16 == -1 )
        {
          if ( *(_BYTE *)(a1 + 1578) )
          {
            if ( *(_BYTE *)(a1 + 1577) <= 2u )
              return v3;
            v16 = *(_DWORD *)(a1 + 1604);
          }
          else
          {
            v16 = *(_DWORD *)(a1 + 1596);
          }
        }
      }
      if ( v16 )
      {
        StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v16);
        *(_DWORD *)(a1 + 1568) |= 0x20u;
        StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1608), NVMeFStateIdleTimerCallback);
      }
    }
  }
  return v3;
}
