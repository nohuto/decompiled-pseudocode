/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0018F84
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C009F63C (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     ACPIBuildPdo @ 0x1C0010D74 (ACPIBuildPdo.c)
 *     ACPIBuildMissingChildren @ 0x1C0017160 (ACPIBuildMissingChildren.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C00C (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIDetectPdoMatch @ 0x1C009A6BC (ACPIDetectPdoMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C009AD30 (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  ULONG_PTR v3; // r13
  unsigned int *v4; // r14
  unsigned int v5; // r15d
  __int64 DeviceExtension; // rdi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // bl
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rbx
  KIRQL v13; // dl
  __int64 v14; // rsi
  ULONG_PTR v15; // rsi
  KIRQL v16; // dl
  char v17; // bp
  char v18; // r12
  KIRQL v19; // al
  __int64 v20; // rcx
  KIRQL v21; // bl
  _QWORD *PoolWithTag; // rax
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int *v27; // rax
  unsigned int *v28; // rbx
  unsigned int v29; // ebp
  KIRQL v30; // al
  KIRQL v31; // dl
  __int64 v32; // rcx
  __int64 i; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // esi
  __int64 v37; // r12
  NTSTATUS v38; // eax
  int v39; // edx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // ecx
  __int64 v44; // r9
  void *v45; // rcx
  int v46; // edx
  void *v47; // r8
  int v48; // r9d
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r8d
  __int64 j; // rbp
  __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v60; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(DeviceExtension + 8);
  v9 = v7;
  if ( (v8 & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
    v8 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v8 & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 952), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  LOBYTE(v10) = 1;
  v11 = ACPIBuildFlushQueue(DeviceExtension, v10);
  if ( v11 < 0 )
  {
    v44 = *(_QWORD *)(DeviceExtension + 8);
    v45 = &unk_1C006E28A;
    v46 = 0;
    v47 = &unk_1C006E28A;
    if ( (v44 & 0x200000000000LL) != 0 )
    {
      v45 = *(void **)(DeviceExtension + 560);
      if ( (v44 & 0x400000000000LL) != 0 )
        v47 = *(void **)(DeviceExtension + 568);
    }
    v48 = 20;
    goto LABEL_78;
  }
  v11 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v11 < 0 )
  {
    v49 = *(_QWORD *)(DeviceExtension + 8);
    v45 = &unk_1C006E28A;
    v46 = 0;
    v47 = &unk_1C006E28A;
    if ( (v49 & 0x200000000000LL) != 0 )
    {
      v45 = *(void **)(DeviceExtension + 560);
      if ( (v49 & 0x400000000000LL) != 0 )
        v47 = *(void **)(DeviceExtension + 568);
    }
    v48 = 21;
LABEL_78:
    LOBYTE(v46) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v46,
      10,
      v48,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v11,
      DeviceExtension,
      (__int64)v45,
      (__int64)v47);
    return (unsigned int)v11;
  }
  v12 = DeviceExtension + 752;
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v14 = *(_QWORD *)(DeviceExtension + 752);
  if ( v14 == DeviceExtension + 752 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
    if ( v4 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( PoolWithTag )
    {
      *a2 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *(_DWORD *)PoolWithTag = 0;
      return 0LL;
    }
    return 3221225626LL;
  }
  v15 = v14 - 768;
  ACPIInitReferenceDeviceExtension(v15);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v15 + 8), 0x100uLL);
    v60 = 0LL;
    if ( (int)ACPIGet((__int64 *)v15, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v60, 0LL) >= 0
      && ((*(_QWORD *)(v15 + 8) & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v15 + 952) & 0x200000LL) != 0) )
    {
      if ( (unsigned __int8)ACPIDetectPdoMatch(v15, v4) )
      {
        if ( (*(_BYTE *)(v15 + 8) & 0x20) != 0 )
        {
          v24 = *(_QWORD *)(v15 + 720);
          if ( v24 )
          {
            if ( !v4 || (v43 = 0, !*v4) )
            {
LABEL_34:
              if ( (*(_DWORD *)(v15 + 952) & 0x20000000) != 0 )
                goto LABEL_18;
              ++v5;
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 8), 0xFFFFFFFFFFFFFEFFuLL);
              goto LABEL_36;
            }
            while ( *(_QWORD *)&v4[2 * v43 + 2] != v24 )
            {
              if ( ++v43 >= *v4 )
                goto LABEL_34;
            }
            if ( (*(_DWORD *)(v15 + 952) & 0x20000000) != 0 )
            {
              --v5;
              goto LABEL_36;
            }
          }
        }
      }
      else if ( ACPIBuildPdo(
                  *(struct _DRIVER_OBJECT **)(a1 + 8),
                  v15,
                  *(struct _DEVICE_OBJECT **)(DeviceExtension + 736),
                  (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0) >= 0 )
      {
        ++v5;
LABEL_36:
        v18 = 1;
      }
    }
LABEL_18:
    v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v20 = *(_QWORD *)(v15 + 768);
    if ( v20 == v12 )
    {
      v17 = 1;
    }
    else
    {
      v3 = v20 - 768;
      if ( *(_DWORD *)(v20 - 768 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 684));
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
    v21 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIInitDereferenceDeviceExtensionLocked(v15);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v21);
    if ( v17 )
      break;
    v15 = v3;
    v12 = DeviceExtension + 752;
    v17 = 0;
  }
  if ( v18 )
  {
    v25 = 16;
    if ( v5 )
      v25 = 8 * v5 + 8;
    v26 = v25;
    v27 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x44706341u);
    v28 = v27;
    if ( !v27 )
      return 3221225626LL;
    memset(v27, 0, v26);
    if ( v4 )
    {
      memmove(v28 + 2, v4 + 2, 8LL * *v4);
      v29 = *v4;
    }
    else
    {
      v29 = 0;
    }
    v30 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v31 = v30;
    v32 = *(_QWORD *)(DeviceExtension + 752);
    if ( v32 == DeviceExtension + 752 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v30);
      ExFreePoolWithTag(v28, 0);
    }
    else
    {
      for ( i = v32 - 768; i; i = v35 - 768 )
      {
        v34 = *(_QWORD *)(i + 8);
        if ( (v34 & 0x20) != 0 )
        {
          v40 = *(_QWORD *)(i + 720);
          if ( v40 )
          {
            if ( ((v34 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(i + 952) & 0x200000) != 0)
              && (*(_DWORD *)(i + 952) & 0x20000000) == 0 )
            {
              if ( v29 >= v5 )
                break;
              v41 = v29++;
              *(_QWORD *)&v28[2 * v41 + 2] = v40;
              _InterlockedAnd64((volatile signed __int64 *)(i + 8), 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v5 == v29 )
          break;
        v35 = *(_QWORD *)(i + 768);
        if ( v35 == DeviceExtension + 752 )
          break;
      }
      *v28 = v29;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
      if ( v4 )
        v36 = *v4;
      else
        v36 = 0;
      for ( ; v36 < v29; ++v36 )
      {
        v37 = v36;
        v38 = ObReferenceObjectByPointer(*(PVOID *)&v28[2 * v36 + 2], 0, 0LL, 0);
        if ( v38 < 0 )
        {
          LOBYTE(v39) = 2;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v39,
            22,
            22,
            (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
            *(_QWORD *)&v28[2 * v36 + 2],
            v38);
          --*v28;
          --v36;
          v50 = *v28;
          --v29;
          v51 = *(_QWORD *)&v28[2 * v50 + 2];
          *(_QWORD *)&v28[2 * v50 + 2] = *(_QWORD *)&v28[2 * v37 + 2];
          *(_QWORD *)&v28[2 * v37 + 2] = v51;
        }
      }
      if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
      {
        v52 = *v28;
        for ( j = 0LL; (unsigned int)j < v52; j = (unsigned int)(j + 1) )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v28[2 * j + 2] + 64LL) + 8LL);
          if ( (v54 & 0x12000000000LL) != 0 && (v54 & 0x40000000000000LL) != 0 )
          {
            IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 720));
            v52 = *v28;
          }
          if ( (v54 & 0x3000000000LL) != 0 )
          {
            v55 = 0LL;
            if ( v52 )
            {
              v56 = v54 & 0x1000000000LL;
              do
              {
                v57 = *(_QWORD *)&v28[2 * v55 + 2];
                if ( (_DWORD)v55 != (_DWORD)j
                  && (((-(__int64)(v56 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v57 + 64)
                                                                                              + 8LL)) != 0
                  && (*(_QWORD *)(*(_QWORD *)(v57 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                {
                  IoSetDependency(*(_QWORD *)&v28[2 * j + 2], v57, 2LL);
                }
                v52 = *v28;
                v55 = (unsigned int)(v55 + 1);
              }
              while ( (unsigned int)v55 < *v28 );
            }
          }
        }
      }
      if ( v4 )
        ExFreePoolWithTag(*a2, 0);
      *a2 = v28;
    }
    return 0LL;
  }
  else
  {
    if ( v4 )
      return 0LL;
    v42 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( v42 )
    {
      *v42 = 0LL;
      v42[1] = 0LL;
      *(_DWORD *)v42 = 0;
      *a2 = v42;
      return 0LL;
    }
    return 3221225626LL;
  }
}
