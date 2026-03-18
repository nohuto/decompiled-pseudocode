/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x140720DAC
 * Callers:
 *     PiSwIrpStartCreate @ 0x14072199C (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x14087000C (PiSwStartCreate.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1405BB33C (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwFindPdoAssociation @ 0x14071F2F0 (PiSwFindPdoAssociation.c)
 *     PiSwInstanceInfoInit @ 0x140720D24 (PiSwInstanceInfoInit.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PnpCopyDevPropertyArray @ 0x140721540 (PnpCopyDevPropertyArray.c)
 *     PiSwDeviceCreate @ 0x140721604 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x140721680 (PiSwValidateCreateData.c)
 *     PiSwBusRelationAdd @ 0x140721FC8 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x140722120 (PiSwPnPInfoInit.c)
 *     PiSwFreeInterfaceList @ 0x140722538 (PiSwFreeInterfaceList.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     PiSwIrpCleanup @ 0x14074DE7C (PiSwIrpCleanup.c)
 *     PiSwBusRelationRemove @ 0x140782CD4 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140782D54 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x140782E28 (PiSwPnPInfoFree.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14078B368 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwAllocMem @ 0x14086FE18 (PiSwAllocMem.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14086FE88 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x14086FF9C (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r15
  int Data; // ebx
  void **inserted; // rax
  void *v9; // rax
  int v10; // r8d
  void *v12; // rcx
  PVOID *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // r8d
  _DWORD *v17; // rcx
  char *v18; // rdx
  __int64 v19; // r8
  struct _DEVICE_OBJECT *v20; // rax
  _DWORD *v21; // rbx
  void *v22; // rdx
  char *v23; // rcx
  char *v24; // rdx
  int v25; // r8d
  void *v26; // rcx
  int v27; // eax
  PVOID *Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A0h] [rbp+50h] BYREF
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
  PiSwLock();
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
      Data = PiSwInstanceInfoInit(Buffer + 1, a1);
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
        v9 = *inserted;
        P = v9;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v9);
          Data = PiSwPnPInfoInit((char *)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_57;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = PiSwAllocMem(*(unsigned int *)(a1 + 88));
            v12 = (void *)*((_QWORD *)P + 19);
            if ( !v12 )
            {
              Data = -1073741670;
              goto LABEL_57;
            }
            memmove(v12, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v10,
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
        _InterlockedIncrement((volatile signed __int32 *)v9);
        v13 = (PVOID *)P;
        v14 = *((_DWORD *)P + 1);
        if ( (v14 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_25;
        }
        if ( (v14 & 2) == 0 )
        {
          v15 = *((_QWORD *)P + 15);
          if ( v15 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v15 + 64) + 8LL) & 2) == 0 )
            {
              if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(P, a1) )
              {
                Data = PnpCopyDevPropertyArray(
                         *(_DWORD *)(a1 + 104),
                         *(_QWORD *)(a1 + 112),
                         v16,
                         (unsigned int)&v32,
                         (__int64)&v30);
                if ( Data < 0 )
                  goto LABEL_25;
                v17 = P;
                v18 = (char *)*((_QWORD *)P + 21);
                if ( v18 )
                {
                  PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v18, 0x57706E50u);
                  v17 = P;
                }
                v17[44] = v32;
                *((_QWORD *)P + 21) = v30;
                goto LABEL_16;
              }
              v13 = (PVOID *)P;
            }
            if ( v13[11] )
            {
              PiSwQueuedCreateInfoFree(v13[11]);
              *((_QWORD *)P + 11) = 0LL;
              v13 = (PVOID *)P;
            }
            Data = PiSwQueuedCreateInfoCreate(v13 + 11, a1);
            if ( Data < 0 )
              goto LABEL_25;
            *((_DWORD *)P + 1) |= 2u;
            goto LABEL_14;
          }
        }
        v20 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
        v21 = P;
        v4 = v20;
        if ( v20 && PiSwFindPdoAssociation((__int64)P, (__int64)v20, 1) )
        {
          ObfDereferenceObject(v22);
          v4 = 0LL;
          Data = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
          if ( Data < 0 )
            goto LABEL_25;
          goto LABEL_15;
        }
        v21[1] &= ~4u;
        PiSwBusRelationRemove(P);
        PiSwPnPInfoFree((char *)P + 24);
        v23 = (char *)P;
        if ( *((_QWORD *)P + 19) )
        {
          ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
          *((_QWORD *)P + 19) = 0LL;
          *((_DWORD *)P + 40) = 0;
          v23 = (char *)P;
        }
        v24 = (char *)*((_QWORD *)v23 + 21);
        if ( v24 )
        {
          PnpFreeDevPropertyArray(*((_DWORD *)v23 + 44), v24, 0x57706E50u);
          *((_DWORD *)P + 44) = 0;
          *((_QWORD *)P + 21) = 0LL;
          v23 = (char *)P;
        }
        PiSwFreeInterfaceList(v23 + 184);
        Data = PiSwPnPInfoInit((char *)P + 24, a1);
        if ( Data < 0 )
          goto LABEL_25;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)P + 19) = PiSwAllocMem(*(unsigned int *)(a1 + 88));
          v26 = (void *)*((_QWORD *)P + 19);
          if ( !v26 )
          {
            Data = -1073741670;
            goto LABEL_25;
          }
          memmove(v26, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(
                 *(_DWORD *)(a1 + 104),
                 *(_QWORD *)(a1 + 112),
                 v25,
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
  PiSwUnlock();
  if ( Data >= 0 && !v5 )
  {
    v19 = *(_QWORD *)(a1 + 112);
    if ( v19 )
    {
      v27 = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v19, *(unsigned int *)(a1 + 104));
      Data = v27;
      if ( v27 == -1073741772 )
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
