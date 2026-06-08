/*
 * XREFs of QueryPepCapabilites @ 0x1C0033AB8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001E5AC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001E718 (ProcLibTraceGetPlatformIdleStates.c)
 *     PepQueryVetoList @ 0x1C0030FF8 (PepQueryVetoList.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0031EE0 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCapabilities @ 0x1C0033D88 (PepNotifyQueryCapabilities.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  int VetoList; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+80h] [rbp+38h] BYREF
  char v9; // [rsp+88h] [rbp+40h] BYREF
  char v10; // [rsp+90h] [rbp+48h] BYREF
  int v11; // [rsp+98h] [rbp+50h] BYREF

  VetoList = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x300000300LL) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1104);
      v8 = 0;
      if ( (int)PoFxProcessorNotification(v3, 16LL, &v8) >= 0 )
        dword_1C0013970 = v8;
      ProcLibTraceGetPlatformIdleStates(0);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  if ( VetoList >= 0 )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      PepNotifyProcessorLpiStates(a1);
    VetoList = PepNotifyQueryCapabilities(
                 a1,
                 (unsigned int)&v7,
                 (unsigned int)&v10,
                 (unsigned int)&v11,
                 (__int64)&v9,
                 (__int64)&v8);
    if ( VetoList >= 0 )
    {
      *(_BYTE *)(a1 + 1122) = v8;
      *(_BYTE *)(a1 + 1121) = v9;
      *(_DWORD *)(a1 + 1112) = v11;
      *(_DWORD *)(a1 + 1116) = v7;
      *(_BYTE *)(a1 + 1120) = v10;
      ProcLibTraceQueryCapabilities(a1, 0);
      v4 = *(_QWORD *)(a1 + 264);
      v5 = *(_DWORD *)(a1 + 1116);
      if ( (v4 & 0x100000000000LL) != 0 )
      {
        if ( v5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0xCu,
              (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids);
          *(_DWORD *)(a1 + 1116) = 0;
        }
      }
      else if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xDu,
            (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids);
          v4 = *(_QWORD *)(a1 + 264);
        }
        *(_QWORD *)(a1 + 264) = v4 & 0xFFFFFFFCFFFFFCFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1121) && !*(_DWORD *)(a1 + 1112) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xEu,
            (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids);
        *(_QWORD *)(a1 + 264) &= ~0x1000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
