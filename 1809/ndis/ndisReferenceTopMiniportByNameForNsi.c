/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E670 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023BE0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // r13d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // r14
  KIRQL v11; // bp
  _REFERENCE_EX *p_Ref; // r15
  int v13; // ebx
  KIRQL v14; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v17; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v19; // r12
  __int64 v20; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // si
  int v29; // ecx
  __int64 v30; // r10
  unsigned __int8 v31; // r9
  _BYTE *v32; // rdx
  char v34; // bl
  char v36; // al
  int v37; // eax
  char v38; // si
  KIRQL v39; // bp
  struct _NDIS_REFCOUNT_BLOCK *v40; // rcx
  unsigned int v41; // ecx
  unsigned int *p_Number; // rax
  ULONG_PTR v43; // rbx
  unsigned int v44; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v45; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v51; // [rsp+20h] [rbp-68h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  struct _NDIS_M_DRIVER_BLOCK *v53; // [rsp+30h] [rbp-58h]
  int v55; // [rsp+98h] [rbp+10h]
  KIRQL v56; // [rsp+A0h] [rbp+18h]

  v6 = 0LL;
  v7 = a1;
  v52 = 0LL;
  v51 = 0LL;
  v8 = 1;
  v55 = ~a2;
  if ( !*(_QWORD *)(a1 + 3800) )
    return 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v11 = v9;
  v53 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_30;
  do
  {
    p_Ref = &v10->Ref;
    v13 = 1;
    v14 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    if ( !v10->Ref.Closing )
    {
      ReferenceCount = v10->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v13 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v10->Ref.RefCountTracker;
        v10->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker);
        v13 = 0;
      }
    }
    KeReleaseSpinLock(&v10->Ref.SpinLock, v14);
    if ( v13 )
    {
      NextDriver = v10->NextDriver;
      goto LABEL_28;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
    v17 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    MiniportQueue = v10->MiniportQueue;
    v19 = v17;
    v56 = v17;
    if ( !MiniportQueue )
      goto LABEL_15;
    v20 = v52;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_13;
      if ( BindPaths->Number < v8 )
        goto LABEL_13;
      v22 = *(_QWORD *)(v7 + 3800);
      v23 = *(_WORD *)(v22 + 8);
      if ( v23 != BindPaths->Paths[0].Length || memcmp(*(const void **)(v22 + 16), BindPaths->Paths[0].Buffer, v23) )
        goto LABEL_13;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      v37 = v55 & MiniportQueue->Flags;
      MiniportQueue->LockDbg = 71198;
      if ( (v37 & 0x80200020) == 0
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
      {
        v38 = 1;
        v39 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v40 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v40 )
            NdisReferenceWithTag(v40);
          v41 = MiniportQueue->Ref.ReferenceCount;
          MiniportQueue->Ref.ReferenceCount = v41 + 1;
          if ( v41 != -1 )
            goto LABEL_41;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v38 = 0;
LABEL_41:
        if ( (unsigned __int8)byte_1C00A0263 >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids,
            MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v39);
        if ( v38 )
        {
          v51 = v20;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker);
          p_Number = &MiniportQueue->BindPaths->Number;
          v20 = (__int64)MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v8 = *p_Number;
        }
        v7 = a1;
      }
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v51 )
      {
        ndisDereferenceMiniportForNsi(v51, a5, a6);
        v51 = 0LL;
      }
LABEL_13:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    p_Ref = &v10->Ref;
    v10 = v53;
    v52 = v20;
    v19 = v56;
LABEL_15:
    KeReleaseSpinLock(&p_Ref->SpinLock, v19);
    v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v10->NextDriver;
    v11 = v24;
    v26 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v27 = (ULONG_PTR)p_Ref->RefCountTracker;
    v28 = v26;
    if ( v27 - 2 > 1 )
    {
      if ( v27 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
      if ( *(_BYTE *)(v27 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v27, 8uLL);
      v29 = *(unsigned __int8 *)(v27 + 1);
      if ( *(_BYTE *)(v27 + 1) )
      {
        if ( v29 != 1 )
          goto LABEL_24;
        v43 = v27 + 520;
        v44 = *(_DWORD *)(v27 + 576);
        if ( v44 >> 17 < 0x3FFE && (unsigned __int16)v44 >> 1 == (v44 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 520));
          *(_DWORD *)(v43 + 56) &= 0x10001u;
          goto LABEL_24;
        }
        if ( (unsigned __int16)v44 >> 1 != 0 || (v44 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 520), 0);
          goto LABEL_24;
        }
      }
      else
      {
        v30 = *(_QWORD *)(v27 + 8);
        if ( v30 )
        {
          v31 = *(_BYTE *)(v27 + 3);
          if ( v31 )
          {
            while ( 1 )
            {
              v32 = (_BYTE *)(v30 + 2LL * (unsigned __int8)v29);
              if ( *v32 == 8 )
              {
                v36 = v32[1];
                if ( v36 )
                  break;
              }
              LOBYTE(v29) = v29 + 1;
              if ( (unsigned __int8)v29 >= v31 )
                goto LABEL_23;
            }
            v32[1] = v36 - 1;
            goto LABEL_24;
          }
        }
LABEL_23:
        if ( _bittestandreset((signed __int32 *)(v27 + 16), 8u) )
          goto LABEL_24;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v27, 8uLL);
    }
LABEL_24:
    if ( p_Ref->ReferenceCount-- == 1 )
    {
      v34 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v34 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v28);
    if ( v34 )
    {
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(23LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v10);
      v45 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v45 != v10 )
        {
          p_NextDriver = &v45->NextDriver;
          v45 = v45->NextDriver;
          if ( !v45 )
            goto LABEL_69;
        }
        *p_NextDriver = v10->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_69:
      Buffer = v10->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v10->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v10->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v10->NdisDriverInfo = 0LL;
      }
      if ( (v10->Flags & 1) != 0 )
      {
        PendingDeviceList = v10->PendingDeviceList;
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
        }
      }
      KeSetEvent(&v10->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(24LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v10);
    }
    v7 = a1;
LABEL_28:
    v53 = NextDriver;
    v10 = NextDriver;
  }
  while ( NextDriver );
  v6 = v52;
LABEL_30:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  return v6;
}
