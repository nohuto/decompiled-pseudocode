/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015084 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

__int64 __fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // r15d
  int v9; // ebx
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // rsi
  KIRQL v12; // di
  KSPIN_LOCK *p_SpinLock; // rbp
  KIRQL v14; // r14
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v17; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  __int64 v19; // rbp
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  KIRQL v23; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  bool v25; // zf
  char v27; // r14
  int v28; // edx
  KIRQL v29; // r15
  struct _NDIS_REFCOUNT_BLOCK *v30; // rcx
  unsigned int v31; // ecx
  unsigned int *p_Number; // rax
  unsigned int v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  struct _NDIS_M_DRIVER_BLOCK *v35; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+B8h] [rbp+10h]
  KIRQL v38; // [rsp+C0h] [rbp+18h]

  v6 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v8 = ~a2;
  v37 = ~a2;
  v9 = 1;
  v33 = 1;
  if ( !*(_QWORD *)(a1 + 3768) )
    return 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v11 = ndisMiniDriverList;
  v12 = v10;
  v35 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_18;
  do
  {
    p_SpinLock = &v11->Ref.SpinLock;
    v14 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    if ( !v11->Ref.Closing )
    {
      ReferenceCount = v11->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v9 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v11->Ref.RefCountTracker;
        v11->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 8u);
        v9 = 0;
      }
    }
    KeReleaseSpinLock(&v11->Ref.SpinLock, v14);
    if ( v9 )
    {
      NextDriver = v11->NextDriver;
      goto LABEL_16;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
    v17 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    MiniportQueue = v11->MiniportQueue;
    v38 = v17;
    if ( !MiniportQueue )
      goto LABEL_15;
    v19 = v34;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( BindPaths )
      {
        if ( BindPaths->Number >= v33 )
        {
          v21 = *(_QWORD *)(a1 + 3768);
          v22 = *(_WORD *)(v21 + 8);
          if ( v22 == BindPaths->Paths[0].Length && !memcmp(*(const void **)(v21 + 16), BindPaths->Paths[0].Buffer, v22) )
          {
            KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
            MiniportQueue->MiniportThread = KeGetCurrentThread();
            if ( (v8 & MiniportQueue->Flags & 0x80200020) != 0
              || (MiniportQueue->PnPFlags & 0x1084110) != 0
              || MiniportQueue->PnPDeviceState != NdisPnPDeviceStarted
              || MiniportQueue->CurrentDevicePowerState != PowerDeviceD0 && !a4 )
            {
LABEL_32:
              MiniportQueue->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
              if ( v7 )
              {
                ndisDereferenceMiniportForNsi(v7, a5, a6);
                v7 = 0LL;
              }
              goto LABEL_13;
            }
            v27 = 1;
            v29 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
            if ( !MiniportQueue->Ref.Closing )
            {
              v30 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
              if ( v30 )
                NdisReferenceWithTag(v30, a6);
              v31 = MiniportQueue->Ref.ReferenceCount;
              MiniportQueue->Ref.ReferenceCount = v31 + 1;
              if ( v31 != -1 )
                goto LABEL_27;
              MiniportQueue->Ref.ReferenceCount = -1;
            }
            v27 = 0;
LABEL_27:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v28) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v28,
                20,
                12,
                (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                (char)MiniportQueue,
                MiniportQueue->Ref.ReferenceCount);
            }
            KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v29);
            if ( v27 )
            {
              v7 = v19;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, a5);
              p_Number = &MiniportQueue->BindPaths->Number;
              ++MiniportQueue->NsiOpenReferences;
              v19 = (__int64)MiniportQueue;
              v33 = *p_Number;
            }
            v8 = v37;
            goto LABEL_32;
          }
        }
      }
LABEL_13:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    v11 = v35;
    v17 = v38;
    v34 = v19;
    p_SpinLock = &v35->Ref.SpinLock;
LABEL_15:
    KeReleaseSpinLock(p_SpinLock, v17);
    v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v11->NextDriver;
    v12 = v23;
    ndisDereferenceDriver((char)v11);
LABEL_16:
    v11 = NextDriver;
    v35 = NextDriver;
    v25 = NextDriver == 0LL;
    v9 = 1;
  }
  while ( !v25 );
  v6 = v34;
LABEL_18:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  return v6;
}
