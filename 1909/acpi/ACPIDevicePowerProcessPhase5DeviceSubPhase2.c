/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0029800
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0015594 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rbp
  __int64 v5; // rdx
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  _OWORD *v15; // rax
  size_t v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  const char *v19; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C006FE7D;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0LL;
  v7 = (const char *)&unk_1C006FE7D;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = (const char *)&unk_1C006FE7D;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      0xAu,
      0x4Au,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      5,
      v5,
      v7,
      v8);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1397904223)) == 0LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(v1 + 640);
  v14 = v12;
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v13 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v15 = *(_OWORD **)(v1 + 640);
      *PoolWithTag = *v15;
      PoolWithTag[1] = v15[1];
      v16 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 640) + 32LL), v16);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v17 = AMLIAsyncEvalObject(v10, 0LL, 1u, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    v18 = *(_QWORD *)(v1 + 8);
    v3 = v17;
    v19 = (const char *)&unk_1C006FE7D;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v18 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(v1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x4Bu,
        (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
        a1,
        v3,
        v1,
        v2,
        v19);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_8;
  return result;
}
