/*
 * XREFs of ACPIDockIrpQueryCapabilities @ 0x1C00AB1F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIDockIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 SecurityContext; // rdi
  __int64 v8; // rax
  const char *v9; // rdi
  const char *v10; // rcx
  unsigned int v11; // esi
  __int64 *v12; // rsi
  int DeviceCapabilities; // eax
  __int64 v14; // rcx
  const char *v15; // rdi
  __int64 v16; // rax
  char *v17; // rdx
  char *IrpText; // rax
  const char *v19; // r8
  unsigned __int8 MinorFunction; // [rsp+98h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( v6 )
  {
    v12 = *(__int64 **)(v6 + 712);
    *(_DWORD *)(SecurityContext + 4) |= 0x1F0u;
    if ( AMLIIsNamedChildPresent(v12, 810173791) )
      *(_DWORD *)(SecurityContext + 4) |= 8u;
    if ( AMLIIsNamedChildPresent(v12, 826951007)
      || AMLIIsNamedChildPresent(v12, 843728223)
      || AMLIIsNamedChildPresent(v12, 860505439)
      || AMLIIsNamedChildPresent(v12, 877282655) )
    {
      *(_DWORD *)(SecurityContext + 4) |= 0x10000u;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)v5, SecurityContext);
    *(_DWORD *)(SecurityContext + 24) = 4;
    v11 = DeviceCapabilities;
    *(_DWORD *)(SecurityContext + 28) = 4;
    *(_DWORD *)(SecurityContext + 32) = 4;
    *(_OWORD *)(v5 + 460) = *(_OWORD *)SecurityContext;
    *(_QWORD *)(v5 + 476) = *(_QWORD *)(SecurityContext + 16);
    v14 = *(unsigned int *)(SecurityContext + 24);
    v15 = byte_1C006FE7D;
    *(_DWORD *)(v5 + 484) = v14;
    if ( DeviceCapabilities < 0 )
    {
      v16 = *(_QWORD *)(v5 + 8);
      v17 = byte_1C006FE7D;
      v14 = (__int64)byte_1C006FE7D;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(char **)(v5 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v14 = *(_QWORD *)(v5 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xDu,
          (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
          v11,
          v5,
          (__int64)v17,
          v14);
    }
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
      v15 = *(const char **)(v5 + 560);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v14, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xEu,
        (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
        (char)a2,
        IrpText,
        v11,
        v5,
        v15,
        v19);
    }
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C006FE7D;
    v10 = byte_1C006FE7D;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v5 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v5 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xCu,
        (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
        (char)a2,
        v5,
        v9,
        v10);
    v11 = -1073741823;
  }
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return v11;
}
