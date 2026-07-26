/*
 * XREFs of ndisDispatchRequest @ 0x1C00CB980
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00140B4 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001F9B4 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisCheckAccess @ 0x1C00B818C (ndisCheckAccess.c)
 *     ndisDriverSystemDispatch @ 0x1C00CBD34 (ndisDriverSystemDispatch.c)
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  __int64 CurrentStackLocation; // rsi
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int *v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  BOOLEAN *PoolWithTag; // rax
  BOOLEAN *v12; // r14

  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(_BYTE *)CurrentStackLocation )
  {
    switch ( *(_BYTE *)CurrentStackLocation )
    {
      case 2:
        v9 = *(_QWORD *)(CurrentStackLocation + 48);
        v10 = *(void **)(v9 + 24);
        *(_QWORD *)(v9 + 24) = 0LL;
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        _InterlockedDecrement(&dword_1C00A1F54);
        goto LABEL_20;
      case 0xE:
        v6 = ndisHandlePnPRequest(a2);
        break;
      case 0xF:
LABEL_20:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 2);
        goto LABEL_21;
      case 0x12:
        v7 = *(_QWORD *)(*(_QWORD *)(CurrentStackLocation + 48) + 24LL);
        ndisNicActiveHandleCleanup((struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v7);
        v8 = *(unsigned int **)(v7 + 48);
        if ( v8 )
        {
          ndisIfDereferenceCompartmentForUser(v8);
          *(_QWORD *)(v7 + 48) = 0LL;
        }
        goto LABEL_20;
      case 0x17:
        v6 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v4 = -1073741822;
        goto LABEL_20;
    }
    v4 = v6;
  }
  else
  {
    PoolWithTag = (BOOLEAN *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_20;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *v12 = ndisCheckAccess((__int64)a2, CurrentStackLocation, ndisSecurityDescriptor);
    v12[1] = ndisCheckAccess((__int64)a2, CurrentStackLocation, &ndisPnpSecurityDescriptor);
    *(_QWORD *)(*(_QWORD *)(CurrentStackLocation + 48) + 24LL) = v12;
    _InterlockedIncrement(&dword_1C00A1F54);
  }
  if ( v4 != 259 )
    goto LABEL_20;
LABEL_21:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
