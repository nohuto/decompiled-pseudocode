/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C002F19C
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000F008 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004FDF0 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0010D04 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002F38C (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50 (ACPIWakeEnableDisableAsyncCallBack.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64 *, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  int v7; // ecx
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // r8
  void *v11; // rsi
  const char *v12; // r10
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // rcx
  void *v18; // rax
  int v20; // ecx
  __int64 v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  KIRQL v24; // al
  __int64 v25; // r12
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // edi
  void *v35; // rax
  void *v36; // rax
  __int64 *v38; // [rsp+58h] [rbp-F0h]
  __int64 v40; // [rsp+60h] [rbp-E8h]
  _QWORD v42[16]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = 259;
  memset(v42, 0, 0x78uLL);
  v7 = *(_DWORD *)(a1 + 504);
  v8 = 0LL;
  v9 = a2 == 0;
  v10 = 0LL;
  v11 = &unk_1C006FE7D;
  v12 = (const char *)&unk_1C006FE7D;
  v13 = (__int64)&unk_1C006FE7D;
  if ( !v9 )
  {
    v14 = v7 + 1;
    *(_DWORD *)(a1 + 504) = v14;
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v10 = a1;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a1 + 560);
        if ( (v15 & 0x400000000000LL) != 0 )
          v13 = *(_QWORD *)(a1 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xFu,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        v14,
        v10,
        v12,
        (const char *)v13);
      v14 = *(_DWORD *)(a1 + 504);
    }
    if ( v14 == 1 )
      goto LABEL_9;
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
    {
LABEL_21:
      v16 = 0LL;
      goto LABEL_12;
    }
    LOBYTE(v13) = 1;
LABEL_20:
    ACPIWakeEnableDisablePciDevice(a1, v13, v10);
    goto LABEL_21;
  }
  v20 = v7 - 1;
  *(_DWORD *)(a1 + 504) = v20;
  if ( a1 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    v10 = a1;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v13 = *(_QWORD *)(a1 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x10u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v20,
      v10,
      v12,
      (const char *)v13);
    v20 = *(_DWORD *)(a1 + 504);
  }
  if ( v20 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
      goto LABEL_21;
    v13 = 1LL;
    goto LABEL_20;
  }
LABEL_9:
  v16 = *(__int64 **)(a1 + 408);
  v38 = v16;
  if ( !v16 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
    {
      LOBYTE(v13) = a2;
      ACPIWakeEnableDisablePciDevice(a1, v13, v10);
    }
    goto LABEL_12;
  }
  v22 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v23 = v22;
  if ( !v22 )
  {
    v16 = v38;
    v6 = -1073741670;
LABEL_12:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = &unk_1C006FE7D;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x13u,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        v6,
        a1,
        (__int64)v11,
        (__int64)v18);
    return a3(v16, v6, 0LL, a4);
  }
  v22[24] = a2;
  *((_QWORD *)v22 + 4) = a3;
  *((_QWORD *)v22 + 5) = a4;
  *((_QWORD *)v22 + 2) = a1;
  *((_DWORD *)v22 + 7) = 1;
  v24 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v25 = a1 + 512;
  v40 = *(_QWORD *)(a1 + 512);
  v26 = *(_QWORD **)(a1 + 520);
  if ( *v26 != a1 + 512 )
    __fastfail(3u);
  *((_QWORD *)v23 + 1) = v26;
  *(_QWORD *)v23 = v25;
  *v26 = v23;
  *(_QWORD *)(a1 + 520) = v23;
  KeReleaseSpinLock(&AcpiPowerLock, v24);
  v28 = *(_QWORD *)(a1 + 8);
  if ( v40 == v25 )
  {
    if ( (v28 & 0x800000000000000LL) != 0 && !v23[24] )
      ACPIWakeEnableDisablePciDevice(a1, 0LL, v27);
    v29 = *(_DWORD *)(a1 + 552);
    WORD1(v42[0]) = 1;
    if ( (v29 & 0x40) != 0 )
    {
      v31 = *(_DWORD *)(a1 + 492);
      v30 = 3;
      WORD1(v42[5]) = 1;
      v42[2] = a2 != 0;
      LOBYTE(v8) = AcpiPowerLeavingS0 != 0;
      WORD1(v42[10]) = 1;
      v42[7] = v8;
      if ( v31 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
        v42[12] = v31 - 1;
      else
        v42[12] = 4LL;
    }
    else
    {
      v30 = 1;
      LOBYTE(v8) = a2 != 0;
      v42[2] = v8;
    }
    v32 = AMLIAsyncEvalObject(v38, 0LL, v30, v42, ACPIWakeEnableDisableAsyncCallBack, v23);
    v33 = *(_QWORD *)(a1 + 8);
    v34 = v32;
    v35 = &unk_1C006FE7D;
    if ( (v33 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 560);
      if ( (v33 & 0x400000000000LL) != 0 )
        v35 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x11u,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        v34,
        a1,
        (__int64)v11,
        (__int64)v35);
    if ( v34 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v38, v34, 0LL, v23);
  }
  else
  {
    v36 = &unk_1C006FE7D;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 560);
      if ( (v28 & 0x400000000000LL) != 0 )
        v36 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x12u,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        3,
        a1,
        (__int64)v11,
        (__int64)v36);
  }
  return 259LL;
}
