/*
 * XREFs of ACPIFilterIrpStartDeviceWorker @ 0x1C009DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIWakeInitializePciDevice @ 0x1C002AD78 (ACPIWakeInitializePciDevice.c)
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C00B05B4 (PnpCmResourcesExcludeSidebandResources.c)
 */

void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  void *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // r14d
  const char *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char *v16; // rax
  int v17; // edx
  unsigned int v18; // r14d
  const char *v19; // r8
  const char *v20; // r10
  NTSTATUS v21; // r8d
  int v22; // eax
  char *IrpText; // rax
  int v24; // edx
  const char *v25; // r8
  const char *v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  char *v29; // rax
  __int16 v30; // dx
  char v31; // r8
  const char *v32; // r10
  char v33; // [rsp+38h] [rbp-80h]
  struct _KEVENT Event; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *v35; // [rsp+C0h] [rbp+8h] BYREF
  void *v36; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 40);
  v4 = DeviceExtension;
  v5 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = *(_QWORD *)(v3 + 184);
  v8 = *(_QWORD *)(DeviceExtension + 112);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(v7 + 8);
  v37 = v9;
  if ( v8 )
  {
    v22 = PnpCmResourcesExcludeSidebandResources(v8, v10, v9, (unsigned int)&v35, (__int64)&v36);
    v5 = v35;
    v11 = v22;
    v6 = v36;
  }
  else
  {
    v11 = -1073741772;
  }
  v12 = byte_1C006E28A;
  if ( v11 == -1073741772 )
  {
    LOBYTE(v11) = 0;
  }
  else if ( v11 >= 0 )
  {
    if ( *v5 != 1 || v5[4] )
    {
      *(_QWORD *)(v7 + 8) = v5;
      *(_QWORD *)(v7 + 16) = v6;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
  }
  else
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v24 + 5,
      v24 + 25,
      v27,
      *(_QWORD *)(a1 + 40),
      IrpText,
      v11,
      v4,
      v26,
      v25);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v13 - 72) = *(_OWORD *)v13;
  *(_OWORD *)(v13 - 56) = *(_OWORD *)(v13 + 16);
  *(_OWORD *)(v13 - 40) = *(_OWORD *)(v13 + 32);
  *(_QWORD *)(v13 - 24) = *(_QWORD *)(v13 + 48);
  *(_BYTE *)(v13 - 69) = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v14 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v14 - 8) = &Event;
  *(_BYTE *)(v14 - 69) = -32;
  v15 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v15 = 0x400000000000LL;
  v16 = ACPIDebugGetIrpText(v15, 0);
  v33 = v11;
  v18 = v17 + 5;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    v17 + 5,
    v17 + 26,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    *(_QWORD *)(a1 + 40),
    v16,
    v33,
    v4,
    v20,
    v19);
  v21 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), *(PIRP *)(a1 + 40));
  if ( v21 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v21 < 0 )
  {
    v28 = 0x200000000000LL;
    if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(v4 + 560);
      v28 = 0x400000000000LL;
    }
    v29 = ACPIDebugGetIrpText(v28, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v18,
      v30 + 27,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      *(_QWORD *)(a1 + 40),
      v29,
      v31,
      v4,
      v12,
      v32);
  }
  else
  {
    *(_QWORD *)(v7 + 16) = v37;
    *(_QWORD *)(v7 + 8) = v10;
    if ( (*(_QWORD *)(v4 + 8) & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v4 + 720));
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
