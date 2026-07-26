/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C000BF50
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B6660 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E25B8 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r15
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // r13
  KIRQL v5; // r14
  int v6; // ebx
  KIRQL v7; // si
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // r10
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // al
  _BYTE *v20; // rdx
  bool v21; // zf
  char v22; // bl
  KSPIN_LOCK *v24; // r15
  char v25; // bp
  KIRQL v26; // r14
  __int64 v27; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v28; // rcx
  int v29; // ecx
  char v30; // cl
  ULONG_PTR v31; // rbx
  unsigned int v32; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v33; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  KIRQL v39; // [rsp+21h] [rbp-57h]
  unsigned __int8 v41; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  v41 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  do
  {
    if ( !v4 )
      break;
    v6 = 1;
    v7 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    if ( !v4->Ref.Closing )
    {
      ReferenceCount = v4->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v6 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v4->Ref.RefCountTracker;
        v4->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker);
        v6 = 0;
      }
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v7);
    if ( v6 )
    {
      NextDriver = v4->NextDriver;
      goto LABEL_24;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v10 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    MiniportQueue = v4->MiniportQueue;
    v39 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v1 )
      {
        v24 = (KSPIN_LOCK *)(v1 + 96);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v21 = (*(_DWORD *)(v1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1864) = 71056;
        if ( v21
          && (*(_DWORD *)(v1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(v1 + 1520) == 1
          && *(_DWORD *)(v1 + 3900) == 1 )
        {
          v25 = 1;
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
          v27 = a1;
          if ( !*(_BYTE *)(a1 + 4484) )
          {
            v28 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928);
            if ( v28 )
            {
              NdisReferenceWithTag(v28);
              v27 = a1;
            }
            v29 = *(_DWORD *)(a1 + 4480);
            *(_DWORD *)(a1 + 4480) = v29 + 1;
            if ( v29 != -1 )
            {
LABEL_34:
              if ( (unsigned __int8)byte_1C00A0263 >= 4u )
                WPP_SF_qD(12LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v27, *(unsigned int *)(v27 + 4480));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4472), v26);
              v21 = v25 == 0;
              v1 = a1;
              if ( !v21 )
              {
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4936));
                ++*(_DWORD *)(a1 + 3140);
                v41 = 1;
              }
              goto LABEL_38;
            }
            *(_DWORD *)(a1 + 4480) = -1;
          }
          v25 = 0;
          goto LABEL_34;
        }
LABEL_38:
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel(v24);
        v2 = 1;
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v39);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v4->NextDriver;
    v5 = v12;
    v14 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    v15 = (ULONG_PTR)v4->Ref.RefCountTracker;
    v16 = v14;
    if ( v15 - 2 <= 1 )
      goto LABEL_20;
    if ( v15 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v15, 0LL);
    if ( *(_BYTE *)(v15 + 2) <= 7u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v15, 7uLL);
    if ( *(_BYTE *)(v15 + 1) )
    {
      if ( *(_BYTE *)(v15 + 1) != 1 )
        goto LABEL_20;
      v31 = v15 + 456;
      v32 = *(_DWORD *)(v15 + 512);
      if ( v32 >> 17 < 0x3FFE && (unsigned __int16)v32 >> 1 == (v32 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 456));
        *(_DWORD *)(v31 + 56) &= 0x10001u;
        goto LABEL_20;
      }
      if ( (unsigned __int16)v32 >> 1 != 0 || (v32 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 456), 0);
        goto LABEL_20;
      }
LABEL_69:
      ndisBugCheckEx(0x1EuLL, 0LL, v15, 7uLL);
    }
    v17 = *(_QWORD *)(v15 + 8);
    if ( !v17 || (v18 = *(_BYTE *)(v15 + 3), v19 = 0, !v18) )
    {
LABEL_19:
      if ( _bittestandreset((signed __int32 *)(v15 + 16), 7u) )
        goto LABEL_20;
      goto LABEL_69;
    }
    while ( 1 )
    {
      v20 = (_BYTE *)(v17 + 2LL * v19);
      if ( *v20 == 7 )
      {
        v30 = v20[1];
        if ( v30 )
          break;
      }
      if ( ++v19 >= v18 )
        goto LABEL_19;
    }
    v20[1] = v30 - 1;
LABEL_20:
    v21 = v4->Ref.ReferenceCount-- == 1;
    if ( v21 )
    {
      v22 = 1;
      if ( !v4->Ref.ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v4->Ref.RefCountTracker);
        v4->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v22 = 0;
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v16);
    if ( v22 )
    {
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(23LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v4);
      v33 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v33 != v4 )
        {
          p_NextDriver = &v33->NextDriver;
          v33 = v33->NextDriver;
          if ( !v33 )
            goto LABEL_59;
        }
        *p_NextDriver = v4->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_59:
      Buffer = v4->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v4->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v4->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v4->NdisDriverInfo = 0LL;
      }
      if ( (v4->Flags & 1) != 0 )
      {
        PendingDeviceList = v4->PendingDeviceList;
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
      KeSetEvent(&v4->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(24LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v4);
    }
    v1 = a1;
LABEL_24:
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v41;
}
