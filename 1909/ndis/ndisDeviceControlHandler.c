/*
 * XREFs of ndisDeviceControlHandler @ 0x1C0008BE0
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C0009CC0 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C009ECF0 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z @ 0x1C001203C (-ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z.c)
 *     ndisQueryDeviceOid @ 0x1C00121B0 (ndisQueryDeviceOid.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ndisGetAdapterRssInfo @ 0x1C0021168 (ndisGetAdapterRssInfo.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisMGetLogData @ 0x1C0091FC0 (ndisMGetLogData.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C0094744 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C009509C (ndisGetAdapterHardwareInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00952A8 (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C0095738 (ndisGetPerformanceCounters.c)
 *     ndisGetPowerInfo @ 0x1C0095924 (ndisGetPowerInfo.c)
 *     ndisSetPerfTrackParameters @ 0x1C0095FD0 (ndisSetPerfTrackParameters.c)
 *     ndisIovIoctlDetach @ 0x1C00B1D50 (ndisIovIoctlDetach.c)
 *     ndisIovIoctlInvalidate @ 0x1C00B1DA8 (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C00B1EAC (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00BF618 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C0119988 (ndisGetRdmaCapabilities.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  PIRP v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  PVOID MappedSystemVa; // r12
  int v7; // edx
  signed __int32 v8; // eax
  int v9; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _FILE_OBJECT *FileObject; // rax
  UCHAR Type; // cl
  unsigned int v13; // r14d
  struct _NDIS_USER_OPEN_CONTEXT *FsContext; // rbx
  struct _NDIS_MINIPORT_BLOCK *v15; // r13
  KIRQL v16; // al
  struct _NDIS_M_DRIVER_BLOCK *v17; // r12
  KIRQL v18; // r15
  _REFERENCE_EX *p_Ref; // rdi
  int v20; // ebx
  KIRQL v21; // si
  unsigned __int16 ReferenceCount; // cx
  KIRQL v23; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v25; // r13
  __int64 v26; // rdi
  __int64 v27; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v29; // rcx
  unsigned __int16 Length; // ax
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v33; // al
  ULONG_PTR v34; // r8
  KIRQL v35; // r14
  int v36; // ecx
  __int64 v37; // r10
  unsigned __int8 v38; // r9
  _BYTE *v39; // rdx
  bool v40; // zf
  char v41; // bl
  int v42; // edx
  __int64 v43; // rax
  unsigned int LowPart; // edx
  unsigned int v45; // r15d
  unsigned __int64 Options; // r14
  unsigned __int64 v47; // rsi
  _IRP::<unnamed_type_AssociatedIrp> v48; // rdi
  unsigned __int16 Blink; // r10
  unsigned int v50; // ecx
  __int64 v51; // rcx
  int MdlAddress_high; // r9d
  __int64 v53; // r8
  unsigned int v54; // edx
  unsigned int v55; // eax
  __int64 v56; // r8
  char *v57; // rbx
  int v58; // edx
  int v59; // r8d
  int v60; // ecx
  UINT BytesNeeded; // eax
  bool v62; // cl
  int PerformanceCounters; // edx
  void *v64; // r12
  KIRQL v65; // di
  ULONG_PTR NsiRefCountTracker; // r8
  int v67; // ecx
  __int64 v68; // r10
  unsigned __int8 v69; // r9
  _BYTE *v70; // rdx
  char v71; // al
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v73; // edx
  char v74; // di
  KIRQL v75; // al
  _BYTE *v76; // rdx
  ULONG_PTR v77; // r8
  KIRQL v78; // si
  int v79; // ecx
  __int64 v80; // r10
  unsigned __int8 v81; // r9
  int v82; // edx
  int v83; // edx
  char v85; // al
  char v86; // r14
  int v87; // edx
  KIRQL v88; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v90; // ecx
  unsigned int *p_Number; // rax
  char v92; // al
  __int64 (__fastcall *v93)(__int64, PIRP); // rax
  int v94; // edx
  unsigned int v95; // ebx
  const void *v96; // rsi
  unsigned int v97; // ebx
  PVOID v98; // rax
  unsigned int *v99; // rsi
  PIRP v100; // r14
  _MDL *v101; // rcx
  ULONG v102; // edi
  unsigned __int8 *v103; // rax
  int v104; // eax
  unsigned int v105; // r14d
  void *BugCheckOnFailure; // r11
  _MDL *MdlAddress; // rcx
  SIZE_T ByteCount; // rdi
  PVOID PoolWithTag; // rax
  void *v110; // rbx
  unsigned int BytesWritten; // eax
  int v112; // edx
  ULONG_PTR v113; // rbx
  unsigned int v114; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v115; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v121; // edx
  ULONG v122; // r14d
  void *MasterIrp; // rsi
  unsigned int v124; // ebx
  unsigned int v125; // ebx
  PVOID v126; // rax
  unsigned int *v127; // r8
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rax
  unsigned int v131; // esi
  unsigned int *v132; // rdi
  __int64 v133; // r10
  unsigned int v134; // ebx
  int v135; // eax
  unsigned int AdapterHardwareInfo; // eax
  unsigned int PowerInfo; // eax
  char v138; // bl
  unsigned int v139; // eax
  int v140; // ecx
  int v141; // ecx
  unsigned int v142; // edx
  ULONG_PTR v143; // rsi
  int v144; // ecx
  ULONG_PTR v145; // r14
  unsigned int v146; // edx
  int v147; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  unsigned int v150; // [rsp+50h] [rbp-B0h]
  int v151; // [rsp+54h] [rbp-ACh] BYREF
  bool v152; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v153; // [rsp+59h] [rbp-A7h] BYREF
  char v154; // [rsp+5Ah] [rbp-A6h]
  void *v155; // [rsp+60h] [rbp-A0h]
  unsigned int v156; // [rsp+68h] [rbp-98h] BYREF
  int v157; // [rsp+6Ch] [rbp-94h]
  PIRP Irp; // [rsp+70h] [rbp-90h]
  struct _NDIS_USER_OPEN_CONTEXT *v159; // [rsp+78h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v160; // [rsp+80h] [rbp-80h]
  char v161[8]; // [rsp+88h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v162; // [rsp+90h] [rbp-70h]
  struct _NDIS_M_DRIVER_BLOCK *v163; // [rsp+98h] [rbp-68h]
  _IO_STACK_LOCATION *v164; // [rsp+A0h] [rbp-60h]
  void *v165; // [rsp+A8h] [rbp-58h]
  _QWORD v166[4]; // [rsp+B0h] [rbp-50h] BYREF
  _REFERENCE_EX *v167; // [rsp+D0h] [rbp-30h]
  struct _NDIS_OID_REQUEST v168; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  Irp = a3;
  v4 = a2;
  v160 = a2;
  memset(&v168, 0, 0xF8uLL);
  v151 = -1073741823;
  MappedSystemVa = 0LL;
  v155 = 0LL;
  v156 = 0;
  v165 = 0LL;
  v150 = 0;
  v152 = 1;
  v153 = 0;
  memset(v166, 0, sizeof(v166));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      23,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)v4,
      (char)v3);
  }
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v3->IoStatus.Status = 259;
  v3->IoStatus.Information = 0LL;
  v164 = CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    v45 = -1073741823;
    goto LABEL_112;
  }
  Type = v4->Header.Type;
  if ( v4->Header.Type == 17 )
  {
    v13 = 1;
    FsContext = (struct _NDIS_USER_OPEN_CONTEXT *)FileObject->FsContext;
    v15 = 0LL;
    v159 = FsContext;
    v157 = 1;
    v162 = 0LL;
    *(_QWORD *)v161 = 0LL;
    if ( v4->BindPaths )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v17 = ndisMiniDriverList;
      v18 = v16;
      v163 = ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          p_Ref = &v17->Ref;
          v167 = &v17->Ref;
          v20 = 1;
          v21 = KeAcquireSpinLockRaiseToDpc(&v17->Ref.SpinLock);
          if ( !v17->Ref.Closing )
          {
            ReferenceCount = v17->Ref.ReferenceCount;
            if ( ReferenceCount >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v20 = 2;
            }
            else
            {
              v17->Ref.ReferenceCount = ReferenceCount + 1;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v17->Ref.RefCountTracker, 8u);
              v20 = 0;
            }
          }
          KeReleaseSpinLock(&v17->Ref.SpinLock, v21);
          if ( v20 )
          {
            NextDriver = v17->NextDriver;
            goto LABEL_33;
          }
          KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
          v23 = KeAcquireSpinLockRaiseToDpc(&v17->Ref.SpinLock);
          MiniportQueue = v17->MiniportQueue;
          v25 = v23;
          v154 = v23;
          if ( !MiniportQueue )
            goto LABEL_20;
          v26 = *(_QWORD *)v161;
          v27 = (__int64)v162;
          do
          {
            BindPaths = MiniportQueue->BindPaths;
            if ( !BindPaths )
              goto LABEL_18;
            if ( BindPaths->Number < v13 )
              goto LABEL_18;
            v29 = v160->BindPaths;
            Length = v29->Paths[0].Length;
            if ( Length != BindPaths->Paths[0].Length
              || memcmp(v29->Paths[0].Buffer, BindPaths->Paths[0].Buffer, Length) )
            {
              goto LABEL_18;
            }
            KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
            v40 = (MiniportQueue->Flags & 0x80200020) == 0;
            MiniportQueue->MiniportThread = KeGetCurrentThread();
            if ( v40
              && (MiniportQueue->PnPFlags & 0x1084110) == 0
              && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
              && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v86 = 1;
              v88 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
              if ( !MiniportQueue->Ref.Closing )
              {
                RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
                if ( RefCountTracker )
                  NdisReferenceWithTag(RefCountTracker, 0x57u);
                v90 = MiniportQueue->Ref.ReferenceCount;
                MiniportQueue->Ref.ReferenceCount = v90 + 1;
                if ( v90 != -1 )
                  goto LABEL_128;
                MiniportQueue->Ref.ReferenceCount = -1;
              }
              v86 = 0;
LABEL_128:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v87) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v87,
                  20,
                  12,
                  (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                  (char)MiniportQueue,
                  MiniportQueue->Ref.ReferenceCount);
              }
              KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v88);
              if ( v86 )
              {
                v26 = v27;
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 0);
                p_Number = &MiniportQueue->BindPaths->Number;
                v27 = (__int64)MiniportQueue;
                ++MiniportQueue->NsiOpenReferences;
                v13 = *p_Number;
                v157 = *p_Number;
              }
              else
              {
                v13 = v157;
              }
            }
            MiniportQueue->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
            if ( v26 )
            {
              ndisDereferenceMiniportForNsi(v26, 0, 0x57u);
              v26 = 0LL;
            }
LABEL_18:
            MiniportQueue = MiniportQueue->NextMiniport;
          }
          while ( MiniportQueue );
          v17 = v163;
          v162 = (struct _NDIS_MINIPORT_BLOCK *)v27;
          v25 = v154;
          *(_QWORD *)v161 = v26;
          p_Ref = v167;
LABEL_20:
          KeReleaseSpinLock(&p_Ref->SpinLock, v25);
          v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v17->NextDriver;
          v18 = v31;
          v33 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
          v34 = (ULONG_PTR)p_Ref->RefCountTracker;
          v35 = v33;
          if ( v34 - 2 > 1 )
          {
            if ( v34 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v34, 0LL);
            if ( *(_BYTE *)(v34 + 2) <= 8u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v34, 8uLL);
            v36 = *(unsigned __int8 *)(v34 + 1);
            if ( *(_BYTE *)(v34 + 1) )
            {
              if ( v36 != 1 )
                goto LABEL_29;
              v113 = v34 + 520;
              v114 = *(_DWORD *)(v34 + 576);
              if ( v114 >> 17 < 0x3FFE && (unsigned __int16)v114 >> 1 == (v114 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v34 + 520));
                *(_DWORD *)(v113 + 56) &= 0x10001u;
                goto LABEL_29;
              }
              if ( (unsigned __int16)v114 >> 1 != 0 || (v114 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 520), 0);
                goto LABEL_29;
              }
            }
            else
            {
              v37 = *(_QWORD *)(v34 + 8);
              if ( v37 )
              {
                v38 = *(_BYTE *)(v34 + 3);
                if ( v38 )
                {
                  while ( 1 )
                  {
                    v39 = (_BYTE *)(v37 + 2LL * (unsigned __int8)v36);
                    if ( *v39 == 8 )
                    {
                      v85 = v39[1];
                      if ( v85 )
                        break;
                    }
                    LOBYTE(v36) = v36 + 1;
                    if ( (unsigned __int8)v36 >= v38 )
                      goto LABEL_28;
                  }
                  v39[1] = v85 - 1;
                  goto LABEL_29;
                }
              }
LABEL_28:
              if ( _bittestandreset((signed __int32 *)(v34 + 16), 8u) )
                goto LABEL_29;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v34, 8uLL);
          }
LABEL_29:
          v40 = p_Ref->ReferenceCount-- == 1;
          if ( v40 )
          {
            v41 = 1;
            if ( !p_Ref->ZeroBased )
            {
              NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
              p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
          }
          else
          {
            v41 = 0;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v35);
          if ( v41 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v42,
                20,
                23,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v17);
            }
            v115 = ndisMiniDriverList;
            p_NextDriver = &ndisMiniDriverList;
            if ( ndisMiniDriverList )
            {
              while ( v115 != v17 )
              {
                p_NextDriver = &v115->NextDriver;
                v115 = v115->NextDriver;
                if ( !v115 )
                  goto LABEL_215;
              }
              *p_NextDriver = v17->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
            }
LABEL_215:
            Buffer = v17->ImageName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              v17->ImageName.Buffer = 0LL;
            }
            NdisDriverInfo = v17->NdisDriverInfo;
            if ( NdisDriverInfo )
            {
              ExFreePoolWithTag(NdisDriverInfo, 0);
              v17->NdisDriverInfo = 0LL;
            }
            if ( (v17->Flags & 1) != 0 )
            {
              PendingDeviceList = v17->PendingDeviceList;
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
            KeSetEvent(&v17->MiniportsRemovedEvent, 0, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v121) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v121,
                20,
                24,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v17);
            }
          }
          v13 = v157;
LABEL_33:
          v163 = NextDriver;
          v17 = NextDriver;
          if ( !NextDriver )
          {
            v15 = v162;
            v3 = Irp;
            FsContext = v159;
            v4 = v160;
            break;
          }
        }
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
      CurrentStackLocation = v164;
      if ( v15 )
      {
        v166[2] = v15->OidList;
        v4 = v15;
        MappedSystemVa = 0LL;
        LOBYTE(v166[3]) = *((_BYTE *)FsContext + 24);
        v43 = *(_QWORD *)FsContext;
        FsContext = (struct _NDIS_USER_OPEN_CONTEXT *)v166;
        v159 = (struct _NDIS_USER_OPEN_CONTEXT *)v166;
        v160 = v15;
        *(_DWORD *)((char *)&v166[3] + 1) = 0;
        *(_WORD *)((char *)&v166[3] + 5) = 0;
        HIBYTE(v166[3]) = 0;
        v166[1] = v15;
        v166[0] = v43;
      }
      else
      {
        MappedSystemVa = v165;
      }
    }
    if ( (v4->PnPFlags & 0x4010) != 0 )
    {
      v45 = -1073741436;
      goto LABEL_78;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v45 = -1073741637;
    if ( LowPart == 1507484 )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
      v47 = CurrentStackLocation->Parameters.Read.Length;
      v48.MasterIrp = (_IRP *)v3->AssociatedIrp;
      if ( (unsigned int)Options >= 0x2C
        && (unsigned int)v47 >= 0x2C
        && LOBYTE(v48.MasterIrp->Type) == 0xB9
        && v48.MasterIrp->Size >= 0x2Cu )
      {
        Blink = (unsigned __int16)v48.MasterIrp->ThreadListEntry.Blink;
        if ( Blink >= 0x2Cu )
        {
          v50 = (unsigned int)Options < (unsigned int)v47 ? Options : v47;
          if ( Blink <= v50 )
          {
            if ( HIBYTE(v48.MasterIrp->Type) )
            {
              v51 = *((_QWORD *)FsContext + 1);
              MdlAddress_high = HIDWORD(v48.MasterIrp->MdlAddress);
              if ( *(_BYTE *)(v51 + 32) < 6u && (MdlAddress_high & 0xFF000000) == 0xFF000000
                || (*(_DWORD *)(v51 + 120) & 0x80u) != 0 )
              {
                goto LABEL_56;
              }
              v53 = *((_QWORD *)FsContext + 2);
              if ( !v53 )
                goto LABEL_286;
              v54 = *(_DWORD *)(v53 + 4);
              v55 = 0;
              if ( v54 )
              {
                v56 = *(_QWORD *)(v53 + 16);
                do
                {
                  if ( *(_DWORD *)(v56 + 4LL * v55) == MdlAddress_high )
                    break;
                  ++v55;
                }
                while ( v55 < v54 );
              }
              if ( v55 < v54 )
              {
LABEL_56:
                v57 = (char *)v48.MasterIrp + Blink;
                if ( ((unsigned __int8)v57 & 3) == 0 )
                {
                  if ( !*((_BYTE *)v159 + 24)
                    && (*(_DWORD *)&v48.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
                  {
                    v64 = v155;
                    PerformanceCounters = -1073741790;
                    v150 = -1073741790;
LABEL_301:
                    v62 = 0;
LABEL_69:
                    if ( (PerformanceCounters & 0xC0230000) == 0xC0230000 )
                      v150 = (unsigned __int16)PerformanceCounters | 0xC0010000;
                    if ( v62 )
                    {
                      switch ( v151 )
                      {
                        case -1073676268:
                          v45 = -2147483643;
                          break;
                        case -1073741637:
                          if ( v153 )
                            v45 = 0;
                          break;
                        case 0:
                          goto LABEL_75;
                        default:
                          v45 = -1073741823;
                          break;
                      }
LABEL_76:
                      if ( v64 )
                        ExFreePoolWithTag(v64, 0);
LABEL_78:
                      if ( !v15 )
                      {
LABEL_111:
                        v3 = Irp;
                        goto LABEL_112;
                      }
                      v65 = KeAcquireSpinLockRaiseToDpc(&v15->Lock);
                      NsiRefCountTracker = (ULONG_PTR)v15->NsiRefCountTracker;
                      v15->MiniportThread = KeGetCurrentThread();
                      if ( NsiRefCountTracker - 2 > 1 )
                      {
                        if ( NsiRefCountTracker <= 1 )
                          ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
                        if ( !*(_BYTE *)(NsiRefCountTracker + 2) )
                          ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 0LL);
                        v67 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
                        if ( *(_BYTE *)(NsiRefCountTracker + 1) )
                        {
                          if ( v67 != 1 )
                            goto LABEL_89;
                          v142 = *(_DWORD *)(NsiRefCountTracker + 64);
                          v143 = NsiRefCountTracker + 8;
                          v144 = (unsigned __int16)v142 >> 1;
                          if ( v142 >> 17 < 0x3FFE && v144 == (v142 >> 17) + 1 )
                          {
                            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 8));
                            *(_DWORD *)(v143 + 56) &= 0x10001u;
                            goto LABEL_89;
                          }
                          if ( v144 != 0 || (v142 & 1) != 0 )
                          {
                            ndisReferenceWithTagStackTrace(
                              (struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 8),
                              0);
                            goto LABEL_89;
                          }
                        }
                        else
                        {
                          v68 = *(_QWORD *)(NsiRefCountTracker + 8);
                          if ( v68 )
                          {
                            v69 = *(_BYTE *)(NsiRefCountTracker + 3);
                            if ( v69 )
                            {
                              while ( 1 )
                              {
                                v70 = (_BYTE *)(v68 + 2LL * (unsigned __int8)v67);
                                if ( !*v70 )
                                {
                                  v71 = v70[1];
                                  if ( v71 )
                                    break;
                                }
                                LOBYTE(v67) = v67 + 1;
                                if ( (unsigned __int8)v67 >= v69 )
                                  goto LABEL_88;
                              }
                              v70[1] = v71 - 1;
                              goto LABEL_89;
                            }
                          }
LABEL_88:
                          if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 0) )
                            goto LABEL_89;
                        }
                        ndisBugCheckEx(0x1EuLL, 0LL, NsiRefCountTracker, 0LL);
                      }
LABEL_89:
                      v40 = v15->NsiOpenReferences-- == 1;
                      if ( v40 )
                      {
                        NsiRequestsCompletedEvent = v15->NsiRequestsCompletedEvent;
                        if ( NsiRequestsCompletedEvent )
                          KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
                      }
                      v15->MiniportThread = 0LL;
                      KeReleaseSpinLock(&v15->Lock, v65);
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v73) = 4;
                        WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v73,
                          20,
                          25,
                          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                          (char)v15);
                      }
                      v74 = 0;
                      v75 = KeAcquireSpinLockRaiseToDpc(&v15->Ref.SpinLock);
                      v77 = (ULONG_PTR)v15->RefCountTracker;
                      v78 = v75;
                      if ( !v77 || v77 - 2 <= 1 )
                        goto LABEL_104;
                      if ( v77 == 1 )
                        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                      if ( *(_BYTE *)(v77 + 2) <= 0x57u )
                        ndisBugCheckEx(0x1EuLL, 2uLL, v77, 0x57uLL);
                      v79 = *(unsigned __int8 *)(v77 + 1);
                      if ( *(_BYTE *)(v77 + 1) )
                      {
                        if ( v79 != 1 )
                          goto LABEL_104;
                        v145 = v77 + 5576;
                        v146 = *(_DWORD *)(v77 + 5632);
                        v147 = (unsigned __int16)v146 >> 1;
                        if ( v146 >> 17 < 0x3FFE && v147 == (v146 >> 17) + 1 )
                        {
                          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v77 + 5576));
                          *(_DWORD *)(v145 + 56) &= 0x10001u;
                          goto LABEL_104;
                        }
                        if ( v147 != 0 || (v146 & 1) != 0 )
                        {
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v77 + 5576), 0);
                          goto LABEL_104;
                        }
                      }
                      else
                      {
                        v80 = *(_QWORD *)(v77 + 8);
                        if ( v80 )
                        {
                          v81 = *(_BYTE *)(v77 + 3);
                          if ( v81 )
                          {
                            while ( 1 )
                            {
                              v76 = (_BYTE *)(v80 + 2LL * (unsigned __int8)v79);
                              if ( *v76 == 87 )
                              {
                                v92 = v76[1];
                                if ( v92 )
                                  break;
                              }
                              LOBYTE(v79) = v79 + 1;
                              if ( (unsigned __int8)v79 >= v81 )
                                goto LABEL_103;
                            }
                            v76[1] = v92 - 1;
                            goto LABEL_104;
                          }
                        }
LABEL_103:
                        if ( _bittestandreset((signed __int32 *)(v77 + 24), 0x17u) )
                        {
LABEL_104:
                          v40 = v15->Ref.ReferenceCount-- == 1;
                          if ( v40 )
                            v74 = 1;
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            LOBYTE(v76) = 4;
                            WPP_RECORDER_SF_qL(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              (int)v76,
                              20,
                              14,
                              (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                              (char)v15,
                              v15->Ref.ReferenceCount);
                          }
                          KeReleaseSpinLock(&v15->Ref.SpinLock, v78);
                          if ( v74 )
                          {
                            RemoveReadyEvent = v15->RemoveReadyEvent;
                            if ( RemoveReadyEvent )
                              KeSetEvent(RemoveReadyEvent, 0, 0);
                          }
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            LOBYTE(v82) = 4;
                            WPP_RECORDER_SF_q(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              v82,
                              20,
                              26,
                              (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                              (char)v15);
                          }
                          goto LABEL_111;
                        }
                      }
                      ndisBugCheckEx(0x1EuLL, 0LL, v77, 0x57uLL);
                    }
LABEL_75:
                    v45 = v150;
                    goto LABEL_76;
                  }
                  memset(&v168, 0, 0xF8uLL);
                  *(_DWORD *)&v168.NdisReserved[16] |= 8u;
                  *(_QWORD *)&v168.NdisReserved[32] = &ndisIntReqIoctl;
                  v168.Header = (NDIS_OBJECT_HEADER)15466902;
                  v168.DATA.QUERY_INFORMATION.Oid = HIDWORD(v48.MasterIrp->MdlAddress);
                  v168.RequestType = *(_DWORD *)&v48.MasterIrp->AllocationProcessorNumber;
                  v168.PortNumber = (NDIS_PORT_NUMBER)v48.MasterIrp->MdlAddress;
                  v168.DATA.QUERY_INFORMATION.InformationBuffer = v57;
                  v168.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
                  if ( (unsigned int)Options < (unsigned int)v47 )
                    memset((char *)v48.MasterIrp + Options, 0, (unsigned int)(v47 - Options));
                  v60 = *(_DWORD *)&v48.MasterIrp->AllocationProcessorNumber;
                  if ( !v60 )
                    goto LABEL_61;
                  v140 = v60 - 1;
                  if ( !v140 )
                  {
                    v168.DATA.QUERY_INFORMATION.InformationBufferLength = Options
                                                                        - LOWORD(v48.MasterIrp->ThreadListEntry.Blink);
LABEL_62:
                    v168.Timeout = *(&v48.MasterIrp->Flags + 1);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v58) = 4;
                      WPP_RECORDER_SF_qDq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v58,
                        v59,
                        24,
                        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                        (char)&v168,
                        v168.DATA.QUERY_INFORMATION.Oid,
                        (char)v160);
                    }
                    HIDWORD(v48.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniportEx(
                                                                      *((_QWORD *)v159 + 1),
                                                                      0LL,
                                                                      (__int64)&v168,
                                                                      0,
                                                                      0LL,
                                                                      0LL);
                    if ( v168.RequestType )
                    {
                      if ( v168.RequestType == NdisRequestSetInformation )
                      {
                        HIDWORD(v48.MasterIrp->AssociatedIrp.SystemBuffer) = v168.DATA.QUERY_INFORMATION.BytesWritten;
                        goto LABEL_66;
                      }
                      if ( v168.RequestType != NdisRequestQueryStatistics )
                      {
                        if ( v168.RequestType != NdisRequestMethod )
                          goto LABEL_68;
                        v48.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)&v168.DATA.METHOD_INFORMATION.BytesWritten;
                        BytesNeeded = v168.DATA.METHOD_INFORMATION.BytesNeeded;
LABEL_67:
                        LODWORD(v48.MasterIrp->ThreadListEntry.Flink) = BytesNeeded;
LABEL_68:
                        v62 = 1;
                        PerformanceCounters = 0;
                        v64 = 0LL;
                        v151 = 0;
                        Irp->IoStatus.Information = v47;
                        goto LABEL_69;
                      }
                    }
                    v48.MasterIrp->AssociatedIrp.IrpCount = v168.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_66:
                    BytesNeeded = v168.DATA.QUERY_INFORMATION.BytesNeeded;
                    goto LABEL_67;
                  }
                  v141 = v140 - 1;
                  if ( !v141 )
                  {
LABEL_61:
                    v168.DATA.QUERY_INFORMATION.InformationBufferLength = v47
                                                                        - LOWORD(v48.MasterIrp->ThreadListEntry.Blink);
                    memset(v57, 0, v168.DATA.QUERY_INFORMATION.InformationBufferLength);
                    goto LABEL_62;
                  }
                  if ( v141 == 10 )
                  {
                    v168.DATA.QUERY_INFORMATION.InformationBufferLength = Options
                                                                        - LOWORD(v48.MasterIrp->ThreadListEntry.Blink);
                    v168.DATA.QUERY_INFORMATION.BytesWritten = v47 - LOWORD(v48.MasterIrp->ThreadListEntry.Blink);
                    v168.DATA.QUERY_INFORMATION.BytesNeeded = v48.MasterIrp->Flags;
                    goto LABEL_62;
                  }
                  goto LABEL_298;
                }
                PerformanceCounters = -2147483646;
              }
              else
              {
LABEL_286:
                PerformanceCounters = -1073741637;
              }
            }
            else
            {
              PerformanceCounters = -1071448060;
            }
LABEL_299:
            v64 = v155;
            goto LABEL_300;
          }
        }
      }
LABEL_298:
      PerformanceCounters = -1073741811;
      goto LABEL_299;
    }
    if ( LowPart > 0x226044 )
    {
      if ( LowPart == 2252872 || LowPart == 2252876 || LowPart == 2252880 )
      {
        v139 = ndisIovIoctlDetach(v4, v3);
      }
      else
      {
        if ( LowPart != 2252884 )
        {
LABEL_279:
          PerformanceCounters = -1073741822;
          goto LABEL_299;
        }
        v139 = ndisIovIoctlInvalidate(v4, v3);
      }
    }
    else
    {
      if ( LowPart != 2252868 )
      {
        switch ( LowPart )
        {
          case 0x170002u:
            if ( CurrentStackLocation->Parameters.Create.Options < 4 )
              goto LABEL_298;
            v105 = *(_DWORD *)v3->AssociatedIrp.MasterIrp;
            if ( !ndisValidOid(FsContext, v105) )
              goto LABEL_298;
            MdlAddress = v3->MdlAddress;
            if ( MdlAddress )
            {
              ByteCount = MdlAddress->ByteCount;
              if ( (_DWORD)ByteCount )
              {
                if ( (MdlAddress->MdlFlags & 5) != 0 )
                  MappedSystemVa = MdlAddress->MappedSystemVa;
                else
                  MappedSystemVa = MmMapLockedPagesSpecifyCache(
                                     MdlAddress,
                                     0,
                                     MmCached,
                                     0LL,
                                     (ULONG)BugCheckOnFailure,
                                     0x40000000u);
                if ( !MappedSystemVa )
                {
                  PerformanceCounters = 0;
                  v64 = v155;
                  v151 = -1073741670;
                  goto LABEL_301;
                }
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ByteCount, 0x6D61444Eu);
                v110 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  PerformanceCounters = -1073741670;
                  goto LABEL_299;
                }
                memmove(PoolWithTag, MappedSystemVa, ByteCount);
LABEL_169:
                v151 = ndisQueryDeviceOid(v159, &v168, v105, v110, ByteCount);
                BytesWritten = v168.DATA.QUERY_INFORMATION.BytesWritten;
                v156 = v168.DATA.QUERY_INFORMATION.BytesWritten;
                if ( v168.DATA.QUERY_INFORMATION.BytesWritten > (unsigned int)ByteCount )
                {
                  BytesWritten = 0;
                  v151 = -1073676266;
                  v156 = 0;
                }
                v40 = v151 == 0;
                v62 = 1;
                v154 = 1;
                Irp->IoStatus.Information = BytesWritten;
                if ( v40 && BytesWritten && MappedSystemVa )
                {
                  if ( !v110 )
                  {
LABEL_178:
                    PerformanceCounters = 0;
                    goto LABEL_179;
                  }
                  memmove(MappedSystemVa, v110, BytesWritten);
                  v62 = v154;
                }
                if ( v110 )
                {
                  ExFreePoolWithTag(v110, 0);
                  v62 = v154;
                }
                goto LABEL_178;
              }
            }
            else
            {
              LODWORD(ByteCount) = (_DWORD)BugCheckOnFailure;
            }
            v110 = BugCheckOnFailure;
            goto LABEL_169;
          case 0x170006u:
            v130 = *((_QWORD *)FsContext + 2);
            v64 = v155;
            if ( !v130 )
              goto LABEL_249;
            v97 = *(_DWORD *)v130;
            v99 = *(unsigned int **)(v130 + 8);
            goto LABEL_153;
          case 0x17000Eu:
            goto LABEL_148;
          case 0x17001Eu:
            if ( !v3->MdlAddress )
              goto LABEL_298;
            v150 = ndisMGetLogData(v4, v3);
            PerformanceCounters = v150;
            v151 = v150;
            if ( v150 == 259 )
            {
              v62 = 0;
LABEL_179:
              v64 = v155;
            }
            else
            {
              v64 = v155;
              v62 = 1;
            }
            goto LABEL_69;
          case 0x170028u:
          case 0x17002Cu:
            v122 = CurrentStackLocation->Parameters.Read.Length;
            MasterIrp = v3->AssociatedIrp.MasterIrp;
            if ( LowPart == 1507372 )
            {
              v124 = CurrentStackLocation->Parameters.Create.Options;
              if ( v124 < 4 || ((unsigned __int8)MasterIrp & 3) != 0 || (v124 & 3) != 0 )
                goto LABEL_298;
              v125 = v124 >> 2;
              v126 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v125, 0x6D61444Eu);
              v64 = v126;
              if ( !v126 )
              {
                PerformanceCounters = 0;
                v151 = -1073741670;
                goto LABEL_301;
              }
              memmove(v126, MasterIrp, 4LL * v125);
              v3 = Irp;
              v127 = (unsigned int *)v64;
            }
            else
            {
              v128 = *((_QWORD *)FsContext + 2);
              v64 = v155;
              if ( !v128 )
              {
LABEL_249:
                PerformanceCounters = -1073741808;
LABEL_300:
                v150 = PerformanceCounters;
                goto LABEL_301;
              }
              v125 = *(_DWORD *)v128;
              v127 = *(unsigned int **)(v128 + 8);
            }
            Priority[0] = v122;
            v129 = ndisQueryStatisticsOids(
                     v160,
                     v159,
                     v127,
                     v125,
                     (unsigned __int8 *)MasterIrp,
                     *(SIZE_T *)Priority,
                     &v156,
                     1u,
                     &v153);
            PerformanceCounters = 0;
            v62 = 1;
            v151 = v129;
            v3->IoStatus.Information = v156;
            goto LABEL_69;
          case 0x170030u:
            v131 = CurrentStackLocation->Parameters.Create.Options;
            if ( v131 < 0xC )
              goto LABEL_298;
            v132 = (unsigned int *)v3->AssociatedIrp.MasterIrp;
            if ( ((unsigned __int8)v132 & 7) != 0 || !ndisValidOid(FsContext, *v132) )
              goto LABEL_298;
            v134 = *(_DWORD *)(v133 + 8);
            memset(&v168, 0, 0xF8uLL);
            v135 = ndisMethodDeviceOid(v159, &v168, (unsigned __int8 *)v132, v131, v134);
            PerformanceCounters = 0;
            v64 = v155;
            v151 = v135;
            Irp->IoStatus.Information = v168.DATA.METHOD_INFORMATION.BytesWritten + 8;
            v62 = 1;
            goto LABEL_69;
          case 0x17003Eu:
            v153 = 1;
LABEL_148:
            v95 = CurrentStackLocation->Parameters.Create.Options;
            if ( v95 < 4 )
              goto LABEL_298;
            if ( (v95 & 3) != 0 )
              goto LABEL_298;
            v96 = v3->AssociatedIrp.MasterIrp;
            if ( ((unsigned __int8)v96 & 3) != 0 )
              goto LABEL_298;
            v97 = v95 >> 2;
            v98 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v97, 0x6D61444Eu);
            v64 = v98;
            if ( v98 )
            {
              memmove(v98, v96, 4LL * v97);
              v99 = (unsigned int *)v64;
LABEL_153:
              v100 = Irp;
              v101 = Irp->MdlAddress;
              if ( v101 )
              {
                v102 = v101->ByteCount;
                if ( v102 )
                {
                  if ( (v101->MdlFlags & 5) != 0 )
                    v103 = (unsigned __int8 *)v101->MappedSystemVa;
                  else
                    v103 = (unsigned __int8 *)MmMapLockedPagesSpecifyCache(v101, 0, MmCached, 0LL, 0, 0x40000000u);
                }
                else
                {
                  v103 = 0LL;
                }
              }
              else
              {
                v103 = 0LL;
                v102 = 0;
              }
              if ( v103 )
              {
                Priority[0] = v102;
                v104 = ndisQueryStatisticsOids(v160, v159, v99, v97, v103, *(SIZE_T *)Priority, &v156, 0, &v153);
                PerformanceCounters = 0;
                v62 = 1;
                v151 = v104;
                v100->IoStatus.Information = v156;
                goto LABEL_69;
              }
              PerformanceCounters = 0;
              v151 = -1073741670;
            }
            else
            {
              PerformanceCounters = 0;
              v151 = -1073741670;
            }
            goto LABEL_301;
          case 0x170068u:
            v151 = 0;
            v64 = v155;
            PerformanceCounters = ndisSetPerfTrackParameters(v4);
            v150 = PerformanceCounters;
            v62 = 1;
            goto LABEL_69;
          case 0x17006Cu:
            v151 = 0;
            v64 = v155;
            PerformanceCounters = ndisGetPerformanceCounters(v4);
            v150 = PerformanceCounters;
            v62 = 1;
            goto LABEL_69;
          case 0x170070u:
            v151 = 0;
            v64 = v155;
            PerformanceCounters = ndisGetHardwareInfo(v4);
            v150 = PerformanceCounters;
            v62 = 1;
            goto LABEL_69;
          case 0x170078u:
            v151 = 0;
            PowerInfo = ndisGetPowerInfo(v4, v3, &v151);
            v64 = v155;
            PerformanceCounters = PowerInfo;
            v150 = PowerInfo;
            v62 = 1;
            goto LABEL_69;
          case 0x170090u:
            v64 = v155;
            PerformanceCounters = ndisGetRdmaCapabilities(v4, v3);
            v150 = PerformanceCounters;
            v62 = 1;
            v151 = PerformanceCounters;
            goto LABEL_69;
          case 0x170094u:
            v151 = 0;
            AdapterHardwareInfo = ndisGetAdapterHardwareInfo(v4, v3, &v151);
            v64 = v155;
            PerformanceCounters = AdapterHardwareInfo;
            v150 = AdapterHardwareInfo;
            v62 = 1;
            goto LABEL_69;
          case 0x170098u:
            v151 = 0;
            v64 = v155;
            PerformanceCounters = ndisGetAdapterRssInfo(v4);
            v150 = PerformanceCounters;
            v62 = 1;
            goto LABEL_69;
          case 0x1700A8u:
            v138 = *((_BYTE *)FsContext + 24);
            if ( v138 )
              ndisMiniportFatalError((char)v4);
            v64 = v155;
            PerformanceCounters = 0;
            if ( !v138 )
              PerformanceCounters = -1073741790;
            v62 = 1;
            v150 = PerformanceCounters;
            v151 = PerformanceCounters;
            goto LABEL_69;
          case 0x1700B0u:
            v64 = v155;
            PerformanceCounters = ndisGetPdInfo(v4, v3);
            v151 = PerformanceCounters;
            v62 = 1;
            v150 = PerformanceCounters;
            goto LABEL_69;
          default:
            goto LABEL_279;
        }
      }
      v139 = ndisIovIoctlNotification(v4, v3);
    }
    v64 = v155;
    PerformanceCounters = v139;
    v151 = v139;
    v62 = v139 != 259;
    v150 = v139;
    v152 = v139 != 259;
    goto LABEL_69;
  }
  v152 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      31,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)v3);
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    Type = v4->Header.Type;
  }
  if ( Type == 17 )
  {
    v112 = 0;
    if ( CurrentStackLocation->MajorFunction != 18 )
      v112 = -1073741637;
    v45 = v112;
  }
  else
  {
    if ( Type == 9 )
    {
      v93 = (__int64 (__fastcall *)(__int64, PIRP))*((_QWORD *)&v4->Reserved28 + CurrentStackLocation->MajorFunction);
      if ( v93 )
      {
        v45 = v93(a1, v3);
        goto LABEL_142;
      }
    }
    v45 = -1073741637;
  }
  v3->IoStatus.Status = v45;
  IofCompleteRequest(v3, 2);
LABEL_142:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v94) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v94,
      11,
      32,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)v3);
  }
LABEL_112:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v152 && v45 != 259 )
  {
    v3->IoStatus.Status = v45;
    IofCompleteRequest(v3, 2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v83) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v83,
      11,
      25,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)v160,
      (char)v3);
  }
  return v45;
}
