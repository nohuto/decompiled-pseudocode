/*
 * XREFs of ACPIDockIrpStartDevice @ 0x1C00A89A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C000238C (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C004A9B4 (ACPIBuildSynchronizationRequest.c)
 */

__int64 __fastcall ACPIDockIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  int v3; // edi
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // r8
  __int64 v10; // r9
  const char *v11; // rax
  __int64 v12; // rdx
  const char *v13; // r10
  const char *v14; // r8
  const char *v15; // r8
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v6 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_1C006E28A;
    v9 = byte_1C006E28A;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v5 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v5 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x1Bu,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      v5,
      v8,
      v9);
    v3 = -1073741823;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
  {
LABEL_32:
    *(_DWORD *)(v5 + 200) = 2;
    *(_DWORD *)(v5 + 320) = 2;
    goto LABEL_33;
  }
  KdDisableDebugger();
  v17 = 0LL;
  v3 = ACPIGet((__int64 *)v6, 1262699615, 277086210, 1LL, 4, 0LL, 0LL, (__int64)&v17, 0LL);
  if ( v3 >= 0 )
  {
    v18 = 0LL;
    v3 = ACPIGet((__int64 *)v6, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v18, 0LL);
  }
  KdEnableDebugger();
  if ( v3 >= 0 )
  {
    v11 = byte_1C006E28A;
    v12 = *(_QWORD *)(v5 + 8);
    if ( (*(_BYTE *)(v6 + 8) & 2) != 0 )
    {
      if ( v17 )
      {
        v13 = byte_1C006E28A;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v13 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x1Cu,
          (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
          (char)a2,
          v17,
          v5,
          v11,
          v13);
      }
      else
      {
        v14 = byte_1C006E28A;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v14 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x12u,
          0x1Du,
          (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
          (char)a2,
          v5,
          v11,
          v14);
      }
      v3 = -1073741823;
    }
    else
    {
      v15 = byte_1C006E28A;
      if ( v17 == 1 )
      {
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Fu,
          (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
          (char)a2,
          v3,
          v5,
          v11,
          v15);
      }
      else
      {
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x12u,
          0x1Eu,
          (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
          (char)a2,
          v5,
          v11,
          v15);
      }
    }
  }
  ACPIBuildSynchronizationRequest(
    RootDeviceExtension,
    (__int64)ACPIBuildIssueNotifyInvalidateRelations,
    RootDeviceExtension,
    v10,
    1);
  if ( v3 >= 0 )
  {
    ACPIInternalClearFlags((void *)(v5 + 8), 0x400000000LL);
    goto LABEL_32;
  }
LABEL_33:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
