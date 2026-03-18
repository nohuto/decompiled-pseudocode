/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C009BB88
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIAssert @ 0x1C0023C30 (ACPIAssert.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 ACPIProcessHardwareInformation()
{
  __int64 v0; // rdi
  int v1; // r8d
  int v2; // r9d
  unsigned int v3; // ebx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // dx
  bool v7; // zf
  unsigned __int16 v8; // dx
  unsigned int v9; // ebp
  char *PoolWithTag; // rax
  char *v11; // rsi
  __int64 v12; // r8
  void *DeviceExtension; // rcx
  unsigned __int16 v14; // ax
  void *v15; // rcx
  unsigned __int16 v16; // ax

  v0 = *((_QWORD *)AcpiInformation + 1);
  *((_QWORD *)AcpiInformation + 13) = *(unsigned int *)(v0 + 48);
  *((_WORD *)AcpiInformation + 50) = -1;
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(6LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 85) = *(_BYTE *)(v0 + 92);
    ACPIAssert(*(_BYTE *)(v0 + 92) != 0, 4107, v1, v2);
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(7LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 96) = *(_BYTE *)(v0 + 93);
    *((_WORD *)AcpiInformation + 50) = *(unsigned __int8 *)(v0 + 94);
    ACPIAssert(*(_BYTE *)(v0 + 93) != 0, 4108, v4, v5);
  }
  *((_WORD *)AcpiInformation + 43) = *((_BYTE *)AcpiInformation + 85) >> 1;
  v6 = *((_BYTE *)AcpiInformation + 96) >> 1;
  *((_WORD *)AcpiInformation + 49) = v6;
  v7 = *((_WORD *)AcpiInformation + 43) + v6 == 0;
  v8 = *((_WORD *)AcpiInformation + 43) + v6;
  *((_WORD *)AcpiInformation + 51) = v8;
  if ( !v7 )
  {
    v9 = 21 * v8;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x67706341u);
    GpeTable = PoolWithTag;
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Fu,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        v9);
      return (unsigned int)-1073741670;
    }
    LODWORD(GpeTableSize) = v9;
    memset(PoolWithTag, 0, v9);
    GpeHandlerRegistered = v11;
    GpeEnable = &v11[*((unsigned __int16 *)AcpiInformation + 51)];
    GpeCurEnable = (char *)GpeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeIsLevel = (char *)GpeCurEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeHandlerType = (char *)GpeIsLevel + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeEnable = (char *)GpeHandlerType + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeHandler = (char *)GpeWakeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeSpecialHandler = (char *)GpeWakeHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpePending = (char *)GpeSpecialHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpeRunMethod = (char *)GpePending + *((unsigned __int16 *)AcpiInformation + 51);
    GpeComplete = (char *)GpeRunMethod + *((unsigned __int16 *)AcpiInformation + 51);
    v12 = *((unsigned __int16 *)AcpiInformation + 51);
    GpeSavedWakeMask = (char *)GpeComplete + v12;
    GpeSavedWakeStatus = (char *)GpeComplete + v12 + v12;
    GpeMap = (__int64)GpeComplete + v12 + v12 + v12;
  }
  *((_WORD *)AcpiInformation + 56) = 32;
  if ( (*(_BYTE *)(v0 + 112) & 0x10) != 0 )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    v14 = 33;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x100u;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    v14 = 32;
  }
  WPP_RECORDER_SF_((__int64)DeviceExtension, 4u, 6u, v14, (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
  if ( (*(_BYTE *)(v0 + 112) & 0x20) != 0 )
  {
    v15 = WPP_GLOBAL_Control->DeviceExtension;
    v16 = 35;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x200u;
    v15 = WPP_GLOBAL_Control->DeviceExtension;
    v16 = 34;
  }
  WPP_RECORDER_SF_((__int64)v15, 4u, 6u, v16, (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
  if ( (*(_DWORD *)(v0 + 112) & 0x4000) != 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x4000u;
  return v3;
}
