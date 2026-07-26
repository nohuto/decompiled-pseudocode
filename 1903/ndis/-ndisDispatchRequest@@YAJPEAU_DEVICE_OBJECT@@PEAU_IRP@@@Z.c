/*
 * XREFs of ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisCheckAccess @ 0x1C00199E8 (ndisCheckAccess.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E38 (-ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F99C (ndisReferenceMiniportByHandle.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA7F4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC648 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00BDF70 (McTemplateK0xqqq.c)
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v4; // ebx
  unsigned int v6; // eax
  char *FsContext; // rdi
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  __int64 v10; // rcx
  _BYTE *PoolWithTag; // rax
  _BYTE *v12; // rdi
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v14; // al
  KIRQL v15; // r12
  char **v16; // rdx
  void **v17; // rcx
  signed int v18; // r8d
  int v19; // edx
  int v20; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 259;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 2u:
LABEL_7:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 2);
        goto LABEL_8;
      case 0xEu:
        v6 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
        goto LABEL_7;
      case 0x12u:
        FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
        v9 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)FsContext + 4);
        if ( *((_DWORD *)FsContext + 6)
          && v9
          && (unsigned __int8)ndisReferenceMiniportByHandle(*((_QWORD *)FsContext + 4)) )
        {
          AoAc = v9->AoAc;
          v14 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
          v15 = v14;
          if ( *((_QWORD *)FsContext + 4) )
          {
            v16 = (char **)*((_QWORD *)FsContext + 1);
            if ( v16[1] != FsContext + 8 || (v17 = (void **)*((_QWORD *)FsContext + 2), *v17 != FsContext + 8) )
              __fastfail(3u);
            *v17 = v16;
            v16[1] = (char *)v17;
            --AoAc->HandleListCount;
            v18 = *((_DWORD *)FsContext + 7);
            if ( v18 > 0 )
            {
              ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)FsContext + 6), v18);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qdL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v19,
                  0xEu,
                  0x2Bu,
                  (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
                  (char)v9,
                  *((_DWORD *)FsContext + 6),
                  AoAc->ActiveRef);
              if ( (byte_1C00E8043 & 4) != 0 )
                McTemplateK0xqqq(
                  v20,
                  (unsigned int)&NicActiveReleased,
                  (_DWORD)v9 + 4008,
                  v9->NetLuid.Value,
                  *((_DWORD *)FsContext + 6),
                  0,
                  AoAc->ActiveRef);
            }
            KeReleaseSpinLock(&AoAc->Lock, v15);
            ndisNicQuietCheckRef(v9);
          }
          else
          {
            KeReleaseSpinLock(&AoAc->Lock, v14);
          }
          ndisDereferenceMiniport((__int64)v9, 3u);
        }
        v10 = *((_QWORD *)FsContext + 6);
        if ( v10 )
        {
          ndisIfDereferenceCompartmentForUser(v10);
          *((_QWORD *)FsContext + 6) = 0LL;
        }
        CurrentStackLocation->FileObject->FsContext = 0LL;
        ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C00E7EE0);
        goto LABEL_7;
      case 0x17u:
        v6 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v4 = -1073741822;
        goto LABEL_7;
    }
    v4 = v6;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_7;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *v12 = ndisCheckAccess(a2, CurrentStackLocation, ndisSecurityDescriptor);
    v12[1] = ndisCheckAccess(a2, CurrentStackLocation, &ndisPnpSecurityDescriptor);
    CurrentStackLocation->FileObject->FsContext = v12;
    _InterlockedIncrement(&dword_1C00E7EE0);
  }
  if ( v4 != 259 )
    goto LABEL_7;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
