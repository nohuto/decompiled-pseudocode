/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002EA28 (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C00602DC (WPP_RECORDER_SF_LsLLqss.c)
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
  void **v15; // rcx
  char v16; // r11
  void *v17; // r14
  void *v18; // r10
  __int64 v19; // rax
  int v20; // r9d
  int v21; // r8d
  char v22; // cl
  const char *v23; // rax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r14
  char v29; // cl
  unsigned int v30; // ebx
  void *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-A8h]
  _QWORD v35[13]; // [rsp+60h] [rbp-68h] BYREF
  KIRQL NewIrql; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = &unk_1C006E28A;
  LOBYTE(v6) = 0;
  LOBYTE(v9) = 0;
  v10 = &unk_1C006E28A;
  v11 = &unk_1C006E28A;
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
  NewIrql = v13;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v15 = (void **)a4[1], *v15 != a4) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  if ( a2 < 0 )
  {
    v16 = 0;
    v17 = &unk_1C006E28A;
    v18 = &unk_1C006E28A;
    if ( v4 )
    {
      v19 = *(_QWORD *)(v4 + 8);
      v16 = v4;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v17 = *(void **)(v4 + 560);
        if ( (v19 & 0x400000000000LL) != 0 )
          v18 = *(void **)(v4 + 568);
      }
    }
    v20 = *(_DWORD *)(v4 + 504);
    v21 = *((_DWORD *)a4 + 7);
    LOBYTE(v14) = *((_BYTE *)a4 + 24);
    v22 = v20 - v21;
    if ( !(_BYTE)v14 )
      v22 = v21 + v20;
    v23 = "-";
    if ( !(_BYTE)v14 )
      v23 = "+";
    WPP_RECORDER_SF_LsLLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      v21,
      v20,
      v34,
      v20,
      (__int64)v23,
      v21,
      v22,
      v16,
      (__int64)v17,
      (__int64)v18);
    v24 = *(_DWORD *)(v4 + 504);
    v25 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      v26 = v24 - v25;
    else
      v26 = v25 + v24;
    *(_DWORD *)(v4 + 504) = v26;
  }
  v27 = *(_QWORD *)(v4 + 512);
  v28 = v27;
  if ( v27 == v4 + 512 )
    v28 = 0LL;
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
    ACPIWakeEnableDisablePciDevice(v4, 1);
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v27 != v4 + 512 )
  {
    memset(v35, 0, 0x28uLL);
    v29 = *(_BYTE *)(v28 + 24);
    WORD1(v35[0]) = 1;
    v35[2] = v29 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v29 )
      ACPIWakeEnableDisablePciDevice(v4, 0);
    v30 = AMLIAsyncEvalObject(a1, 0LL, 1u, v35, ACPIWakeEnableDisableAsyncCallBack, v28);
    v31 = &unk_1C006E28A;
    v32 = *(_QWORD *)(v28 + 16);
    if ( v32 )
    {
      v6 = *(_QWORD *)(v28 + 16);
      v33 = *(_QWORD *)(v32 + 8);
      if ( (v33 & 0x200000000000LL) != 0 )
      {
        v5 = *(void **)(v6 + 560);
        if ( (v33 & 0x400000000000LL) != 0 )
          v31 = *(void **)(v6 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x16u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v30,
      v6,
      (__int64)v5,
      (__int64)v31);
    if ( v30 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v30, 0LL, v28);
  }
}
