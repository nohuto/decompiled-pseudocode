/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1406D80F8
 * Callers:
 *     PiSwIrpStartCreate @ 0x1406D8F10 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x140837190 (PiSwStartCreate.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x14015F050 (IoInvalidateDeviceRelations.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwInstanceInfoInit @ 0x1406D8070 (PiSwInstanceInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x1406D84D0 (PnpCopyDevPropertyArray.c)
 *     PiSwDeviceCreate @ 0x1406D8594 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x1406D8610 (PiSwValidateCreateData.c)
 *     PiSwPropertySet @ 0x1406D8BF0 (PiSwPropertySet.c)
 *     PiSwBusRelationAdd @ 0x1406D9010 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x1406D9174 (PiSwPnPInfoInit.c)
 *     PiSwFreeInterfaceList @ 0x1406D95A8 (PiSwFreeInterfaceList.c)
 *     PiSwDeviceDereference @ 0x1406D9CB0 (PiSwDeviceDereference.c)
 *     PiSwIrpCleanup @ 0x1406D9CE8 (PiSwIrpCleanup.c)
 *     PiSwPnPInfoFree @ 0x1406D9F44 (PiSwPnPInfoFree.c)
 *     PiSwBusRelationRemove @ 0x1406D9FF4 (PiSwBusRelationRemove.c)
 *     PiSwFindPdoAssociation @ 0x1406DA26C (PiSwFindPdoAssociation.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1407631A8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14083700C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x140837120 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r15
  int Data; // ebx
  struct _KTHREAD *CurrentThread; // rax
  void **inserted; // rax
  void *v10; // rax
  int v11; // r8d
  void *v13; // rcx
  PVOID *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  _DWORD *v18; // rcx
  char *v19; // rdx
  __int64 v20; // r8
  struct _DEVICE_OBJECT *v21; // rax
  __int64 v22; // r8
  _DWORD *v23; // rbx
  void *v24; // rdx
  char *v25; // rcx
  char *v26; // rdx
  int v27; // r8d
  void *v28; // rcx
  int v29; // eax
  PVOID Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v34; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !a2 )
    goto LABEL_92;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
    Data = -1073741637;
  if ( Data >= 0 )
  {
LABEL_92:
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit((__int64)Buffer + 8, a1);
      if ( Data >= 0 )
      {
        inserted = (void **)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
        if ( !inserted )
        {
          Data = -1073741670;
LABEL_24:
          if ( Data >= 0 )
            goto LABEL_25;
          goto LABEL_57;
        }
        v10 = *inserted;
        P = v10;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v10);
          Data = PiSwPnPInfoInit((char *)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_57;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v13 = (void *)*((_QWORD *)P + 19);
            if ( !v13 )
            {
              Data = -1073741670;
              goto LABEL_57;
            }
            memmove(v13, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v11,
                   (int)P + 176,
                   (__int64)P + 168);
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8)), Data < 0) )
          {
LABEL_57:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
              PiSwDeviceDereference(P);
              if ( *((_QWORD *)P + 14) )
                PiSwBusRelationRemove(P);
            }
            goto LABEL_25;
          }
LABEL_14:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_15:
          v5 = 1;
LABEL_16:
          if ( a2 )
          {
            if ( v5 )
            {
              _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
              if ( *(_BYTE *)(a2 + 68) )
              {
                Data = -1073741536;
                goto LABEL_57;
              }
              *((_QWORD *)P + 18) = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            }
            else
            {
              Data = RtlStringCbCopyW(
                       *(NTSTRSAFE_PWSTR *)(a2 + 24),
                       *(unsigned int *)(v3 + 8),
                       *((NTSTRSAFE_PCWSTR *)P + 10));
              if ( Data < 0 )
                goto LABEL_57;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
              if ( Data < 0 )
                goto LABEL_57;
            }
          }
          *((_DWORD *)P + 1) |= 1u;
          if ( a2 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = P;
            P = 0LL;
          }
          if ( v4 )
            IoInvalidateDeviceRelations(v4, SingleBusRelations);
          goto LABEL_24;
        }
        _InterlockedIncrement((volatile signed __int32 *)v10);
        v14 = (PVOID *)P;
        v15 = *((_DWORD *)P + 1);
        if ( (v15 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_25;
        }
        if ( (v15 & 2) == 0 )
        {
          v16 = *((_QWORD *)P + 15);
          if ( v16 && (*(_DWORD *)(*(_QWORD *)(v16 + 64) + 8LL) & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(P, a1) )
            {
              Data = PnpCopyDevPropertyArray(
                       *(_DWORD *)(a1 + 104),
                       *(_QWORD *)(a1 + 112),
                       v17,
                       (unsigned int)&v34,
                       (__int64)&v32);
              if ( Data < 0 )
                goto LABEL_25;
              v18 = P;
              v19 = (char *)*((_QWORD *)P + 21);
              if ( v19 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v19, 0x57706E50u);
                v18 = P;
              }
              v18[44] = v34;
              *((_QWORD *)P + 21) = v32;
              goto LABEL_16;
            }
            v14 = (PVOID *)P;
          }
          if ( v14[11] )
          {
            PiSwQueuedCreateInfoFree(v14[11]);
            *((_QWORD *)P + 11) = 0LL;
            v14 = (PVOID *)P;
          }
          Data = PiSwQueuedCreateInfoCreate(v14 + 11, a1);
          if ( Data < 0 )
            goto LABEL_25;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_14;
        }
        v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
        v23 = P;
        v4 = v21;
        if ( v21 )
        {
          LOBYTE(v22) = 1;
          if ( PiSwFindPdoAssociation(P, v21, v22) )
          {
            ObfDereferenceObject(v24);
            v4 = 0LL;
            Data = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
            if ( Data < 0 )
              goto LABEL_25;
            goto LABEL_15;
          }
        }
        v23[1] &= ~4u;
        PiSwBusRelationRemove(P);
        PiSwPnPInfoFree((char *)P + 24);
        v25 = (char *)P;
        if ( *((_QWORD *)P + 19) )
        {
          ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
          *((_QWORD *)P + 19) = 0LL;
          *((_DWORD *)P + 40) = 0;
          v25 = (char *)P;
        }
        v26 = (char *)*((_QWORD *)v25 + 21);
        if ( v26 )
        {
          PnpFreeDevPropertyArray(*((_DWORD *)v25 + 44), v26, 0x57706E50u);
          *((_DWORD *)P + 44) = 0;
          *((_QWORD *)P + 21) = 0LL;
          v25 = (char *)P;
        }
        PiSwFreeInterfaceList(v25 + 184);
        Data = PiSwPnPInfoInit((char *)P + 24, a1);
        if ( Data < 0 )
          goto LABEL_25;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
          v28 = (void *)*((_QWORD *)P + 19);
          if ( !v28 )
          {
            Data = -1073741670;
            goto LABEL_25;
          }
          memmove(v28, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(
                 *(_DWORD *)(a1 + 104),
                 *(_QWORD *)(a1 + 112),
                 v27,
                 (int)P + 176,
                 (__int64)P + 168);
        if ( Data >= 0 )
        {
          Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8));
          if ( Data >= 0 )
          {
            *((_DWORD *)P + 1) &= ~2u;
            goto LABEL_15;
          }
        }
      }
    }
  }
LABEL_25:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Data >= 0 && !v5 )
  {
    v20 = *(_QWORD *)(a1 + 112);
    if ( v20 )
    {
      v29 = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v20, *(unsigned int *)(a1 + 104));
      Data = v29;
      if ( v29 == -1073741772 )
        Data = 0;
    }
  }
LABEL_27:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_31;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup(P);
  }
LABEL_31:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
