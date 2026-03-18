/*
 * XREFs of rimSetDeviceDisplayConfig @ 0x1C0114428
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C003BDCC (RIMUpdatePointerDeviceScalingInfo.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C01142EC (rimNotifyPointerDeviceChangeClients.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimSetDeviceDisplayConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  BOOL v8; // r9d
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 result; // rax

  v5 = a3;
  if ( a2 && *(_DWORD *)(a2 + 24) == 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a2
    && v5
    && (*(_DWORD *)(a1 + 1760) != *(_DWORD *)(a4 + 16)
     || *(_DWORD *)(a1 + 1764) != *(_DWORD *)(a4 + 20)
     || *(_DWORD *)(a1 + 1768) != *(_DWORD *)(a4 + 24)
     || *(_DWORD *)(a1 + 1772) != *(_DWORD *)(a4 + 28)
     || *(_DWORD *)(a1 + 1860) != *(_DWORD *)(a4 + 116)
     || *(_DWORD *)(a1 + 1864) != *(_DWORD *)(a4 + 120)
     || *(_DWORD *)(a1 + 1868) != *(_DWORD *)(a4 + 124)
     || *(_DWORD *)(a1 + 1872) != *(_DWORD *)(a4 + 128)
     || *(_DWORD *)(a1 + 1832) != *(_DWORD *)(a4 + 88)
     || *(_DWORD *)(a1 + 1836) != *(_DWORD *)(a4 + 92)
     || *(_DWORD *)(a1 + 1800) != *(_DWORD *)(a4 + 56)
     || *(_DWORD *)(a1 + 1804) != *(_DWORD *)(a4 + 60)
     || *(_DWORD *)(a1 + 1848) != *(_DWORD *)(a4 + 104)
     || *(_DWORD *)(a1 + 1852) != *(_DWORD *)(a4 + 108)
     || RtlCompareMemory((const void *)(a1 + 1884), (const void *)(a4 + 140), 0x10uLL) != 16) )
  {
    v8 = *(_DWORD *)(a1 + 1760) != *(_DWORD *)(a4 + 16)
      || *(_DWORD *)(a1 + 1764) != *(_DWORD *)(a4 + 20)
      || *(_DWORD *)(a1 + 1772) != *(_DWORD *)(a4 + 28);
    rimNotifyPointerDeviceChangeClients((_DWORD *)a1, a2, (_DWORD *)a4, v8);
  }
  *(_OWORD *)(a1 + 1744) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 1760) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 1776) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 1792) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 1808) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 1824) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 1840) = *(_OWORD *)(a4 + 96);
  v9 = *(_OWORD *)(a4 + 112);
  v10 = a4 + 128;
  *(_OWORD *)(a1 + 1856) = v9;
  *(_OWORD *)(a1 + 1872) = *(_OWORD *)v10;
  *(_OWORD *)(a1 + 1888) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(a1 + 1904) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a1 + 1920) = *(_OWORD *)(v10 + 48);
  result = *(_QWORD *)(v10 + 64);
  *(_QWORD *)(a1 + 1936) = result;
  if ( a2 )
    return RIMUpdatePointerDeviceScalingInfo((_DWORD *)(a2 + 140), (_DWORD *)(a1 + 1744), (int *)(a1 + 1944), 0LL);
  return result;
}
