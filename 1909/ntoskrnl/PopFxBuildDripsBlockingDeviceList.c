/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x1402F204C
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x1408AA5C0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AA980 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA018 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PopFxIsDripsBlockingDevice @ 0x1402F3698 (PopFxIsDripsBlockingDevice.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140626F10 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14085E16C (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  NTSTATUS DevicePropertyData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r14
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rax
  unsigned int v26; // r15d
  __int64 *v27; // rbx
  __int64 *v28; // rax
  __int64 *v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *PoolWithTag; // r9
  __int64 *v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rcx
  int v35; // eax
  __int64 *v36; // rax
  _DWORD v38[2]; // [rsp+48h] [rbp-19h] BYREF
  ULONG Type; // [rsp+50h] [rbp-11h] BYREF
  ULONG RequiredSize; // [rsp+54h] [rbp-Dh] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-9h] BYREF
  __int64 Data; // [rsp+68h] [rbp+7h] BYREF
  __int64 v43; // [rsp+70h] [rbp+Fh]
  __int64 v44; // [rsp+78h] [rbp+17h] BYREF
  wchar_t v45; // [rsp+80h] [rbp+1Fh]

  Data = 0LL;
  v2 = a1;
  v43 = 0LL;
  DevicePropertyData = 0;
  v45 = aUsb_0[4];
  String1.Buffer = (wchar_t *)&v44;
  v44 = *(_QWORD *)L"USB\\";
  LOBYTE(a1) = 1;
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v7 = i + 108;
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, i + 110) )
    {
      PopFxAddRefDevice((ULONG_PTR)i);
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v8 != a2 )
        __fastfail(3u);
      *v7 = a2;
      i[109] = (ULONG_PTR)v8;
      *v8 = v7;
      a2[1] = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v38[0] = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v12);
    v38[1] = v17;
    if ( v16 )
      goto LABEL_20;
    v13 = 1 << v17;
    v14 = v17;
    v15 = &v9->LockEntries[v14];
    v12 &= ~v13;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
        break;
    }
  }
  if ( !v15 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  v15->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v15->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v9->LockEntries[v14].TreeNode);
  v18 = v15->BoostBitmap.AllFields & 0x1FFFF;
  v19 = v15->BoostBitmap.AllFields & 0xFFFE0000;
  v15->ThreadLocalFlags &= ~1u;
  v38[0] = v18;
  v15->BoostBitmap.AllFields = v19;
  v15->LockState.0 = 0LL;
  v20 = ((char *)v15 - (char *)v9 - 800) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v20);
LABEL_27:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&PopFxDeviceListLock, v38);
  v16 = v9->SpecialApcDisable++ == -1;
  if ( v16 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v21);
  v22 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    do
    {
      v23 = (__int64 *)*(v22 - 102);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v23[4],
                             &DEVPKEY_Device_ClassGuid,
                             0,
                             0,
                             0x10u,
                             &Data,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 || Type != 13 || RequiredSize != 16 )
        goto LABEL_69;
      v24 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - Data;
      if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == Data )
        v24 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - v43;
      if ( !v24 )
      {
        v25 = (__int64 *)v23[1];
        v26 = 0;
        v27 = v23;
        while ( v25 )
        {
          v27 = v25;
          v25 = (__int64 *)v25[1];
        }
        if ( v27 != v23 )
        {
          do
          {
            if ( *((_DWORD *)v27 + 35) == 1 )
            {
              *((_DWORD *)v27 + 74) &= ~0x20u;
              if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v27 + 5), 0) )
              {
                v28 = v27;
                if ( v27 == v23 )
                {
LABEL_47:
                  *((_DWORD *)v27 + 74) |= 0x20u;
                  if ( v26 + 1 < v26 )
                    goto LABEL_75;
                  ++v26;
                  DevicePropertyData = 0;
                }
                else
                {
                  while ( *((_DWORD *)v28 + 35) == 1 )
                  {
                    v28 = (__int64 *)v28[2];
                    if ( v28 == v23 )
                      goto LABEL_47;
                  }
                }
              }
            }
            v29 = (__int64 *)*v27;
            if ( *v27 )
            {
              do
              {
                v27 = v29;
                v29 = (__int64 *)v29[1];
              }
              while ( v29 );
            }
            else
            {
              v27 = (__int64 *)v27[2];
            }
          }
          while ( v27 != v23 );
          if ( !v26 )
            goto LABEL_70;
          v30 = 8LL * v26;
          if ( v30 > 0xFFFFFFFF )
          {
LABEL_75:
            DevicePropertyData = -1073741675;
            goto LABEL_72;
          }
          DevicePropertyData = 0;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x4D584650u);
          if ( !PoolWithTag )
          {
            DevicePropertyData = -1073741670;
            break;
          }
          v32 = (__int64 *)v23[1];
          v33 = 0LL;
          v34 = v23;
          while ( v32 )
          {
            v34 = v32;
            v32 = (__int64 *)v32[1];
          }
          while ( v34 != v23 )
          {
            v35 = *((_DWORD *)v34 + 74);
            if ( (v35 & 0x20) != 0 )
            {
              *((_DWORD *)v34 + 74) = v35 & 0xFFFFFFDF;
              PoolWithTag[v33] = v34;
              v33 = (unsigned int)(v33 + 1);
            }
            v36 = (__int64 *)*v34;
            if ( *v34 )
            {
              do
              {
                v34 = v36;
                v36 = (__int64 *)v36[1];
              }
              while ( v36 );
            }
            else
            {
              v34 = (__int64 *)v34[2];
            }
          }
          v22[3] = PoolWithTag;
          *((_DWORD *)v22 + 8) = v26;
        }
      }
      else
      {
LABEL_69:
        DevicePropertyData = 0;
      }
LABEL_70:
      v22 = (_QWORD *)*v22;
    }
    while ( v22 != a2 );
    if ( DevicePropertyData < 0 )
LABEL_72:
      PopFxDestroyDripsBlockingDeviceList(a2);
  }
  return (unsigned int)DevicePropertyData;
}
