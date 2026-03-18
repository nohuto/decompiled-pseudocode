/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C005F618
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0056E10 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0057258 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002EA28 (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0057410 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C00600A0 (WPP_RECORDER_SF_LLLqss.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD **a4)
{
  int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  void *v10; // rsi
  KIRQL v11; // r13
  __int64 v12; // r8
  void *v13; // r9
  void *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // r12
  __int64 v18; // rax
  void *v19; // rcx
  __int64 *v21; // rax
  __int64 *v22; // r14
  __int64 v23; // r15
  __int64 **v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edi
  void *v31; // rax
  void *v32; // rcx
  int v33; // [rsp+30h] [rbp-F8h]
  int v34; // [rsp+38h] [rbp-F0h]
  __int64 v35; // [rsp+40h] [rbp-E8h]
  void *v36; // [rsp+48h] [rbp-E0h]
  void *v37; // [rsp+50h] [rbp-D8h]
  _QWORD v38[16]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v38, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = &unk_1C006E28A;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = 0LL;
  v13 = &unk_1C006E28A;
  v14 = &unk_1C006E28A;
  if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v12 = a1;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = *(void **)(a1 + 560);
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = *(void **)(a1 + 568);
    }
  }
  v37 = v14;
  v36 = v13;
  v35 = v12;
  v34 = *(_DWORD *)(a1 + 504) - v9;
  v33 = v9;
  WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, v12, (_DWORD)v13);
  v16 = *(_DWORD *)(a1 + 504) - v9;
  *(_DWORD *)(a1 + 504) = v16;
  v17 = *(__int64 **)(a1 + 408);
  if ( !v17 )
    goto LABEL_12;
  if ( v16 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 1);
    goto LABEL_12;
  }
  v21 = (__int64 *)ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v22 = v21;
  if ( !v21 )
  {
    v4 = -1073741670;
LABEL_12:
    KeReleaseSpinLock(&AcpiPowerLock, v11);
    v18 = *(_QWORD *)(a1 + 8);
    v19 = &unk_1C006E28A;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 560);
      if ( (v18 & 0x400000000000LL) != 0 )
        v19 = *(void **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xEu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v4,
      a1,
      (__int64)v10,
      (__int64)v19);
    OSNotifyDeviceWakeCallBack((__int64)v17, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v21 + 24) = 0;
  v21[5] = (__int64)a4;
  v23 = a1 + 512;
  v21[4] = (__int64)OSNotifyDeviceWakeCallBack;
  v21[2] = a1;
  *((_DWORD *)v21 + 7) = v9;
  v24 = *(__int64 ***)(a1 + 520);
  v25 = *(_QWORD *)(a1 + 512);
  if ( *v24 != (__int64 *)(a1 + 512) )
    __fastfail(3u);
  *v22 = v23;
  v22[1] = (__int64)v24;
  *v24 = v22;
  *(_QWORD *)(a1 + 520) = v22;
  KeReleaseSpinLock(&AcpiPowerLock, v11);
  v26 = *(_QWORD *)(a1 + 8);
  if ( v25 == v23 )
  {
    if ( (v26 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0);
    v27 = (*(_DWORD *)(a1 + 552) & 0x40) == 0;
    v38[2] = 0LL;
    WORD1(v38[0]) = 1;
    if ( v27 )
    {
      v28 = AMLIAsyncEvalObject(v17, 0LL, 1u, v38, ACPIWakeEnableDisableAsyncCallBack, v22, v33, v34, v35, v36, v37);
    }
    else
    {
      WORD1(v38[5]) = 1;
      v38[7] = 0LL;
      WORD1(v38[10]) = 1;
      v38[12] = 0LL;
      v28 = AMLIAsyncEvalObject(v17, 0LL, 3u, v38, ACPIWakeEnableDisableAsyncCallBack, v22, v33, v34, v35, v36, v37);
    }
    v29 = *(_QWORD *)(a1 + 8);
    v30 = v28;
    v31 = &unk_1C006E28A;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 560);
      if ( (v29 & 0x400000000000LL) != 0 )
        v31 = *(void **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xCu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v30,
      a1,
      (__int64)v10,
      (__int64)v31);
    if ( v30 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v17, v30, 0LL, v22);
  }
  else
  {
    v32 = &unk_1C006E28A;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(a1 + 560);
      if ( (v26 & 0x400000000000LL) != 0 )
        v32 = *(void **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xDu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      3,
      a1,
      (__int64)v10,
      (__int64)v32);
  }
  return 259LL;
}
