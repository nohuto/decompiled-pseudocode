/*
 * XREFs of rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8
 * Callers:
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00E1508 (RIMDoMobileKeyboardInvalidation.c)
 *     rimProcessHidKeyboardInput @ 0x1C010422C (rimProcessHidKeyboardInput.c)
 * Callees:
 *     rimDispatchHidKeyboardInputData @ 0x1C0103AD4 (rimDispatchHidKeyboardInputData.c)
 *     rimFillKeyboardInputData @ 0x1C0103E0C (rimFillKeyboardInputData.c)
 *     rimIsHidUsageAllowedInLowPowerMode @ 0x1C01041A8 (rimIsHidUsageAllowedInLowPowerMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInvalidateHidKeyboardDeviceKeys(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int i; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a3 + 164) = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 292); ++i )
  {
    if ( *(_WORD *)(a3 + 252) && (a4 || !(unsigned int)rimIsHidUsageAllowedInLowPowerMode(a3)) )
    {
      if ( (int)rimFillKeyboardInputData(
                  (__int64)&v11,
                  *(_WORD *)(a3 + 252),
                  (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL))) < 0 )
        return;
      v10 = *(unsigned int *)(a3 + 336);
      *(_WORD *)(a3 + 2 * v10 + 296) = *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 164) + 124);
      ++*(_DWORD *)(a3 + 336);
      if ( ++*(_DWORD *)(a3 + 164) > 0x14u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      *(_WORD *)(a3 + 252) = 0;
    }
  }
  rimDispatchHidKeyboardInputData(a1, a2, a3);
  *(_DWORD *)(a3 + 356) = 1;
}
