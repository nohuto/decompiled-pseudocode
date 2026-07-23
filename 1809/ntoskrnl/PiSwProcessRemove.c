/*
 * XREFs of PiSwProcessRemove @ 0x1406D9DEC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406EE4D8 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x14015F050 (IoInvalidateDeviceRelations.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationAdd @ 0x1406D9010 (PiSwBusRelationAdd.c)
 *     PiSwFreeInterfaceList @ 0x1406D95A8 (PiSwFreeInterfaceList.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D9BE0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1406D9CB0 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x1406D9F44 (PiSwPnPInfoFree.c)
 *     PiSwBusRelationRemove @ 0x1406D9FF4 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1406DA054 (PiSwUnassociateDeviceObject.c)
 *     PiSwMakePdoInactive @ 0x1406DA414 (PiSwMakePdoInactive.c)
 *     PiSwQueuedCreateInfoFree @ 0x140837120 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  char **v2; // rbx
  int v5; // eax
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  char *v9; // rdx
  void *v10; // rcx
  char *v11; // r9
  char *v12; // rdx
  int v13; // edx
  struct _DEVICE_OBJECT *v14; // rax
  struct _DEVICE_OBJECT *v15; // rbx
  __int64 v16; // rcx
  char *Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(char ***)(a1 + 64);
  Buffer = *v2;
  v5 = *((_DWORD *)v2 + 2);
  if ( (v5 & 0x20) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = v5 & 0xFFFFFFFE;
      PiSwDeviceInterfacesUpdateState((__int64)Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( ((_DWORD)v2[1] & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      if ( (*((_DWORD *)Buffer + 1) & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer);
        v6 = Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          *((_DWORD *)Buffer + 1) &= ~4u;
          PiSwPnPInfoFree(Buffer + 24);
          v7 = Buffer;
          v8 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 24) = *(_OWORD *)(v8 + 8);
          *(_OWORD *)(v7 + 40) = *(_OWORD *)(v8 + 24);
          *(_OWORD *)(v7 + 56) = *(_OWORD *)(v8 + 40);
          memset((void *)(*((_QWORD *)Buffer + 11) + 8LL), 0, 0x30uLL);
          v9 = Buffer;
          v10 = (void *)*((_QWORD *)Buffer + 19);
          if ( v10 )
          {
            ExFreePoolWithTag(v10, 0x57706E50u);
            v9 = Buffer;
          }
          *((_DWORD *)v9 + 40) = *(_DWORD *)(*((_QWORD *)v9 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v11 = Buffer;
          v12 = (char *)*((_QWORD *)Buffer + 21);
          if ( v12 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)Buffer + 44), v12, 0x57706E50u);
            v11 = Buffer;
          }
          *((_DWORD *)v11 + 44) = *(_DWORD *)(*((_QWORD *)v11 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          PiSwFreeInterfaceList((_QWORD **)Buffer + 23);
          v13 = PiSwBusRelationAdd(**((NTSTRSAFE_PCWSTR **)Buffer + 11), (__int64)Buffer);
          if ( v13 < 0 )
          {
            v16 = *((_QWORD *)Buffer + 18);
            if ( v16 && _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v13;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            *((_DWORD *)Buffer + 1) &= ~2u;
            v14 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *((_QWORD *)Buffer + 14),
                                             0x746C6644u);
            v15 = v14;
            if ( v14 )
            {
              IoInvalidateDeviceRelations(v14, SingleBusRelations);
              ObfDereferenceObject(v15);
            }
          }
          PiSwQueuedCreateInfoFree(*((PVOID *)Buffer + 11));
          *((_QWORD *)Buffer + 11) = 0LL;
          v6 = Buffer;
        }
        if ( !*((_QWORD *)v6 + 14) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
}
