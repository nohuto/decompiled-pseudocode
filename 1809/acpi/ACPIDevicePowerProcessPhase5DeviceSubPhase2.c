/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // r14
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rbp
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 result; // rax
  KIRQL v14; // al
  __int64 v15; // rcx
  KIRQL v16; // r12
  _OWORD *v17; // rax
  size_t v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  void *v22; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006E28A;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0;
  v7 = &unk_1C006E28A;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = &unk_1C006E28A;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    74,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    5,
    v5,
    (__int64)v7,
    (__int64)v8);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v12 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397904223LL, v10, v11)) == 0LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_6:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v15 = *(_QWORD *)(v1 + 640);
  v16 = v14;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v15 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v17 = *(_OWORD **)(v1 + 640);
      *PoolWithTag = *v17;
      PoolWithTag[1] = v17[1];
      v18 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 640) + 32LL), v18);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v19 = AMLIAsyncEvalObject(v12, 0LL, 1u, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    v20 = *(_QWORD *)(v1 + 8);
    v21 = 0;
    v3 = v19;
    v22 = &unk_1C006E28A;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = *(void **)(v1 + 568);
    }
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      10,
      75,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      a1,
      v3,
      v1,
      (__int64)v2,
      (__int64)v22);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx((__int64)v12);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_6;
  return result;
}
