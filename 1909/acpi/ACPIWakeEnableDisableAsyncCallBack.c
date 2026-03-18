/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C002F19C (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeDisableAsync @ 0x1C0061528 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002F38C (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C548 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C006225C (WPP_RECORDER_SF_LsLLqss.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  void *v5; // rbp
  __int64 v6; // rdi
  __int64 v9; // r11
  void *v10; // r14
  void *v11; // r10
  __int64 v12; // rax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // r8
  void **v16; // rcx
  char v17; // r11
  void *v18; // r14
  void *v19; // r10
  __int64 v20; // rax
  int v21; // r9d
  int v22; // r8d
  char v23; // cl
  const char *v24; // rax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r14
  char v30; // cl
  unsigned int v31; // ebx
  void *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-A8h]
  _QWORD v36[13]; // [rsp+60h] [rbp-68h] BYREF
  KIRQL v39; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = &unk_1C006FE7D;
  LOBYTE(v6) = 0;
  LOBYTE(v9) = 0;
  v10 = &unk_1C006FE7D;
  v11 = &unk_1C006FE7D;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 8);
    v9 = a4[2];
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(v4 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(void **)(v4 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x14u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      a2,
      v9,
      (__int64)v10,
      (__int64)v11);
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v14 = (_QWORD *)*a4;
  v15 = v13;
  v39 = v13;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v16 = (void **)a4[1], *v16 != a4) )
    __fastfail(3u);
  *v16 = v14;
  v14[1] = v16;
  if ( a2 < 0 )
  {
    v17 = 0;
    v18 = &unk_1C006FE7D;
    v19 = &unk_1C006FE7D;
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 8);
      v17 = v4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v18 = *(void **)(v4 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(void **)(v4 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_DWORD *)(v4 + 504);
      v22 = *((_DWORD *)a4 + 7);
      LOBYTE(v14) = *((_BYTE *)a4 + 24);
      v23 = v21 - v22;
      if ( !(_BYTE)v14 )
        v23 = v22 + v21;
      v24 = "-";
      if ( !(_BYTE)v14 )
        v24 = "+";
      WPP_RECORDER_SF_LsLLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        v22,
        v21,
        v35,
        v21,
        (__int64)v24,
        v22,
        v23,
        v17,
        (__int64)v18,
        (__int64)v19);
      v15 = v39;
    }
    v25 = *(_DWORD *)(v4 + 504);
    v26 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      v27 = v25 - v26;
    else
      v27 = v26 + v25;
    *(_DWORD *)(v4 + 504) = v27;
  }
  v28 = *(_QWORD *)(v4 + 512);
  v29 = v28;
  if ( v28 == v4 + 512 )
    v29 = 0LL;
  KeReleaseSpinLock(&AcpiPowerLock, v15);
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
    ACPIWakeEnableDisablePciDevice(v4, 1);
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v28 != v4 + 512 )
  {
    memset(v36, 0, 0x28uLL);
    v30 = *(_BYTE *)(v29 + 24);
    WORD1(v36[0]) = 1;
    v36[2] = v30 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v30 )
      ACPIWakeEnableDisablePciDevice(v4, 0);
    v31 = AMLIAsyncEvalObject(a1, 0LL, 1u, v36, ACPIWakeEnableDisableAsyncCallBack, v29);
    v32 = &unk_1C006FE7D;
    v33 = *(_QWORD *)(v29 + 16);
    if ( v33 )
    {
      v6 = *(_QWORD *)(v29 + 16);
      v34 = *(_QWORD *)(v33 + 8);
      if ( (v34 & 0x200000000000LL) != 0 )
      {
        v5 = *(void **)(v6 + 560);
        if ( (v34 & 0x400000000000LL) != 0 )
          v32 = *(void **)(v6 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x16u,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        v31,
        v6,
        (__int64)v5,
        (__int64)v32);
    if ( v31 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v31, 0LL, v29);
  }
}
