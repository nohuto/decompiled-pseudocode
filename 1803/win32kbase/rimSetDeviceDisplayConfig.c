/*
 * XREFs of rimSetDeviceDisplayConfig @ 0x1C0058974
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C0058B70 (RIMUpdatePointerDeviceScalingInfo.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C00E9E28 (rimNotifyPointerDeviceChangeClients.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimSetDeviceDisplayConfig(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _BOOL8 v9; // r9
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 && *(_DWORD *)(a2 + 24) == 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( a2
    && a3
    && (*(_DWORD *)(a1 + 1408) != *(_DWORD *)(a4 + 16)
     || *(_DWORD *)(a1 + 1412) != *(_DWORD *)(a4 + 20)
     || *(_DWORD *)(a1 + 1416) != *(_DWORD *)(a4 + 24)
     || *(_DWORD *)(a1 + 1420) != *(_DWORD *)(a4 + 28)
     || *(_DWORD *)(a1 + 1508) != *(_DWORD *)(a4 + 116)
     || *(_DWORD *)(a1 + 1512) != *(_DWORD *)(a4 + 120)
     || *(_DWORD *)(a1 + 1516) != *(_DWORD *)(a4 + 124)
     || *(_DWORD *)(a1 + 1520) != *(_DWORD *)(a4 + 128)
     || *(_DWORD *)(a1 + 1480) != *(_DWORD *)(a4 + 88)
     || *(_DWORD *)(a1 + 1484) != *(_DWORD *)(a4 + 92)
     || *(_DWORD *)(a1 + 1448) != *(_DWORD *)(a4 + 56)
     || *(_DWORD *)(a1 + 1452) != *(_DWORD *)(a4 + 60)
     || *(_DWORD *)(a1 + 1496) != *(_DWORD *)(a4 + 104)
     || *(_DWORD *)(a1 + 1500) != *(_DWORD *)(a4 + 108)
     || RtlCompareMemory((const void *)(a1 + 1532), (const void *)(a4 + 140), 0x10uLL) != 16) )
  {
    v9 = *(_DWORD *)(a1 + 1408) != *(_DWORD *)(a4 + 16)
      || *(_DWORD *)(a1 + 1412) != *(_DWORD *)(a4 + 20)
      || *(_DWORD *)(a1 + 1420) != *(_DWORD *)(a4 + 28);
    rimNotifyPointerDeviceChangeClients(a1, a2, a4, v9);
  }
  *(_OWORD *)(a1 + 1392) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 1408) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 1424) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 1440) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 1456) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 1472) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 1488) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 1504) = *(_OWORD *)(a4 + 112);
  *(_OWORD *)(a1 + 1520) = *(_OWORD *)(a4 + 128);
  *(_OWORD *)(a1 + 1536) = *(_OWORD *)(a4 + 144);
  *(_OWORD *)(a1 + 1552) = *(_OWORD *)(a4 + 160);
  *(_OWORD *)(a1 + 1568) = *(_OWORD *)(a4 + 176);
  result = *(_QWORD *)(a4 + 192);
  *(_QWORD *)(a1 + 1584) = result;
  if ( a2 )
    return RIMUpdatePointerDeviceScalingInfo((int)a2 + 140, a4, 0, (int)a1 + 1592, (__int64)v10);
  return result;
}
