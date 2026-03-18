/*
 * XREFs of ACPIEcLogAction @ 0x1C0053D80
 * Callers:
 *     ACPIEcQueueEcIrp @ 0x1C0053230 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C00533B4 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcServiceDevice @ 0x1C0053FDC (ACPIEcServiceDevice.c)
 *     ACPIEcServiceIoLoop @ 0x1C00540F0 (ACPIEcServiceIoLoop.c)
 *     ACPIEcWatchdogDpc @ 0x1C0054700 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  LARGE_INTEGER result; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v16; // cx
  char v17; // cl
  unsigned __int8 v18; // r9
  __int16 v19; // cx

  v3 = *(unsigned __int8 *)(a1 + 505);
  v6 = v3;
  v7 = *(_BYTE *)(a1 + 4 * v3 + 648);
  if ( (v7 & 0xF0) == 0xA0
    && (v8 = a2 | *(_BYTE *)(a1 + 488), v9 = ((_BYTE)v3 - 1) & 0x1F, *(_BYTE *)(a1 + 4 * v9 + 648) == v8)
    && *(_BYTE *)(a1 + 4 * v9 + 649) == a3 )
  {
    v10 = (*(_BYTE *)(a1 + 4 * v3 + 649))++ == 0xFF;
    v11 = *(_BYTE *)(a1 + 4 * v3 + 649);
    if ( v10 )
      v11 = -1;
    *(_BYTE *)(a1 + 4 * v3 + 649) = v11;
    result = KeQueryPerformanceCounter(0LL);
    v13 = result.QuadPart + *(unsigned __int16 *)(a1 + 4 * v6 + 650) - ACPIEcLastActionTime;
    if ( v13 > 0xFFFF )
      LOWORD(v13) = -1;
    *(_WORD *)(a1 + 4 * v6 + 650) = v13;
  }
  else
  {
    if ( v7 == (a2 | *(_BYTE *)(a1 + 488)) && *(_BYTE *)(a1 + 4 * v3 + 649) == a3 )
    {
      v14 = (v3 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v14;
      *(_BYTE *)(a1 + 4LL * v14 + 649) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v16 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v16 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v16;
      v17 = *(_BYTE *)(a1 + 488) | 0xA0;
    }
    else
    {
      v18 = (v3 + 1) & 0x1F;
      *(_BYTE *)(a1 + 505) = v18;
      *(_BYTE *)(a1 + 4LL * v18 + 649) = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v19 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
      if ( PerformanceCounter.QuadPart - ACPIEcLastActionTime > 0xFFFF )
        v19 = -1;
      *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v19;
      v17 = a2 | *(_BYTE *)(a1 + 488);
    }
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    result.QuadPart = *(unsigned __int8 *)(a1 + 505);
    *(_BYTE *)(a1 + 4 * result.QuadPart + 648) = v17;
  }
  return result;
}
