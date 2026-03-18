/*
 * XREFs of ACPIDockIrpQueryCapabilities @ 0x1C00A7D30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIDockIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 MinorFunction; // r13
  __int64 SecurityContext; // rdi
  __int64 v9; // rax
  const char *v10; // rdi
  const char *v11; // rcx
  unsigned int v12; // esi
  __int64 *v13; // rsi
  int DeviceCapabilities; // eax
  __int64 v15; // rcx
  const char *v16; // rdi
  __int64 v17; // rax
  char *v18; // rdx
  char *v19; // rcx
  char *IrpText; // rax
  const char *v21; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  MinorFunction = CurrentStackLocation->MinorFunction;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v6 )
  {
    v13 = *(__int64 **)(v6 + 712);
    *(_DWORD *)(SecurityContext + 4) |= 0x1F0u;
    if ( AMLIIsNamedChildPresent(v13, 810173791) )
      *(_DWORD *)(SecurityContext + 4) |= 8u;
    if ( AMLIIsNamedChildPresent(v13, 826951007)
      || AMLIIsNamedChildPresent(v13, 843728223)
      || AMLIIsNamedChildPresent(v13, 860505439)
      || AMLIIsNamedChildPresent(v13, 877282655) )
    {
      *(_DWORD *)(SecurityContext + 4) |= 0x10000u;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)v5, SecurityContext);
    *(_DWORD *)(SecurityContext + 24) = 4;
    v12 = DeviceCapabilities;
    *(_DWORD *)(SecurityContext + 28) = 4;
    *(_DWORD *)(SecurityContext + 32) = 4;
    *(_OWORD *)(v5 + 460) = *(_OWORD *)SecurityContext;
    *(_QWORD *)(v5 + 476) = *(_QWORD *)(SecurityContext + 16);
    v15 = *(unsigned int *)(SecurityContext + 24);
    v16 = byte_1C006E28A;
    *(_DWORD *)(v5 + 484) = v15;
    if ( DeviceCapabilities < 0 )
    {
      v17 = *(_QWORD *)(v5 + 8);
      v18 = byte_1C006E28A;
      v19 = byte_1C006E28A;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(char **)(v5 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(char **)(v5 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xDu,
        (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
        v12,
        v5,
        (__int64)v18,
        (__int64)v19);
    }
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
      v16 = *(const char **)(v5 + 560);
    IrpText = ACPIDebugGetIrpText(v15, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xEu,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      IrpText,
      v12,
      v5,
      v16,
      v21);
  }
  else
  {
    v9 = *(_QWORD *)(DeviceExtension + 8);
    v10 = byte_1C006E28A;
    v11 = byte_1C006E28A;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v5 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v5 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xCu,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      v5,
      v10,
      v11);
    v12 = -1073741823;
  }
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return v12;
}
