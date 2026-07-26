/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C0004090
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0113F28 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
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
  int v23; // edx
  KSPIN_LOCK *v25; // r15
  char v26; // bp
  KIRQL v27; // r14
  __int64 v28; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v29; // rcx
  int v30; // ecx
  char v31; // cl
  ULONG_PTR v32; // rbx
  unsigned int v33; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v34; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v40; // edx
  char v41; // [rsp+28h] [rbp-70h]
  char v42[4]; // [rsp+30h] [rbp-68h]
  KIRQL v43; // [rsp+41h] [rbp-57h]
  struct _NDIS_M_DRIVER_BLOCK *v44; // [rsp+48h] [rbp-50h]
  unsigned __int8 v46; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  v46 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  v44 = ndisMiniDriverList;
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
    v43 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v1 )
      {
        v25 = (KSPIN_LOCK *)(v1 + 96);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v21 = (*(_DWORD *)(v1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        if ( v21
          && (*(_DWORD *)(v1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(v1 + 1520) == 1
          && *(_DWORD *)(v1 + 3868) == 1 )
        {
          v26 = 1;
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
          v28 = a1;
          if ( !*(_BYTE *)(a1 + 4444) )
          {
            v29 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4888);
            if ( v29 )
            {
              NdisReferenceWithTag(v29);
              v28 = a1;
            }
            v30 = *(_DWORD *)(a1 + 4440);
            *(_DWORD *)(a1 + 4440) = v30 + 1;
            if ( v30 != -1 )
            {
LABEL_34:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v42 = *(_DWORD *)(v28 + 4440);
                v41 = v28;
                LOBYTE(v28) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v28,
                  20,
                  12,
                  (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                  v41,
                  v42[0]);
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4432), v27);
              v21 = v26 == 0;
              v1 = a1;
              if ( !v21 )
              {
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4896));
                ++*(_DWORD *)(a1 + 3124);
                v46 = 1;
              }
              goto LABEL_38;
            }
            *(_DWORD *)(a1 + 4440) = -1;
          }
          v26 = 0;
          goto LABEL_34;
        }
LABEL_38:
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel(v25);
        v2 = 1;
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(&v44->Ref.SpinLock, v43);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v44->NextDriver;
    v5 = v12;
    v14 = KeAcquireSpinLockRaiseToDpc(&v44->Ref.SpinLock);
    v15 = (ULONG_PTR)v44->Ref.RefCountTracker;
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
      v32 = v15 + 456;
      v33 = *(_DWORD *)(v15 + 512);
      if ( v33 >> 17 < 0x3FFE && (unsigned __int16)v33 >> 1 == (v33 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 456));
        *(_DWORD *)(v32 + 56) &= 0x10001u;
        goto LABEL_20;
      }
      if ( (unsigned __int16)v33 >> 1 != 0 || (v33 & 1) != 0 )
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
        v31 = v20[1];
        if ( v31 )
          break;
      }
      if ( ++v19 >= v18 )
        goto LABEL_19;
    }
    v20[1] = v31 - 1;
LABEL_20:
    v21 = v44->Ref.ReferenceCount-- == 1;
    if ( v21 )
    {
      v22 = 1;
      if ( !v44->Ref.ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v44->Ref.RefCountTracker);
        v44->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v22 = 0;
    }
    KeReleaseSpinLock(&v44->Ref.SpinLock, v16);
    if ( v22 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          20,
          23,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          (char)v44);
      }
      v34 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v34 != v44 )
        {
          p_NextDriver = &v34->NextDriver;
          v34 = v34->NextDriver;
          if ( !v34 )
            goto LABEL_59;
        }
        *p_NextDriver = v44->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_59:
      Buffer = v44->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v44->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v44->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v44->NdisDriverInfo = 0LL;
      }
      if ( (v44->Flags & 1) != 0 )
      {
        PendingDeviceList = v44->PendingDeviceList;
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
      KeSetEvent(&v44->MiniportsRemovedEvent, 0, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          20,
          24,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          (char)v44);
      }
    }
    v1 = a1;
LABEL_24:
    v44 = NextDriver;
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v46;
}
