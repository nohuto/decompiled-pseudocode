/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0007070
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008160 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006A888 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // r9
  ULONG v4; // r15d
  PNET_BUFFER_LIST v5; // r14
  struct _NDIS_FILTER_BLOCK *v6; // r13
  __int64 CurrentIrql; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  char v9; // cl
  NDIS_NBL_TRACKER_HANDLE__ *NextReturnNetBufferListsTracker; // rdi
  char v11; // bl
  unsigned int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int8 *v16; // r8
  _SLIST_HEADER *Alignment; // rsi
  char v18; // r15
  char v19; // r13
  unsigned __int64 Region; // rbx
  unsigned __int8 *v21; // rcx
  unsigned __int8 v22; // dl
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rbp
  __int64 v25; // rcx
  int v26; // r15d
  _NDIS_OBJECT_HEADER *NextReturnNetBufferListsObject; // rdi
  void (*NextReturnNetBufferListsHandler)(void); // rsi
  void *NextReturnNetBufferListsContext; // rbp
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  PNET_BUFFER_LIST *v38; // rdx
  _QWORD *v39; // rax
  struct _NET_BUFFER_LIST **v40; // r12
  bool v41; // zf
  _NDIS_OBJECT_HEADER *v42; // r15
  __int64 v43; // r14
  char v44; // r13
  struct _NET_BUFFER_LIST *v45; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v47; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-B8h]
  unsigned int v49; // [rsp+30h] [rbp-B8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v50; // [rsp+48h] [rbp-A0h]
  __int64 v51; // [rsp+50h] [rbp-98h]
  _QWORD v52[3]; // [rsp+58h] [rbp-90h] BYREF
  char Parameter[8]; // [rsp+70h] [rbp-78h] BYREF
  _NDIS_OBJECT_HEADER *v54; // [rsp+78h] [rbp-70h]
  void *v55; // [rsp+80h] [rbp-68h]
  void (*v56)(void); // [rsp+88h] [rbp-60h]
  PNET_BUFFER_LIST v57; // [rsp+90h] [rbp-58h]
  int v58; // [rsp+98h] [rbp-50h]
  __int64 v59; // [rsp+9Ch] [rbp-4Ch]
  ULONG v60; // [rsp+A4h] [rbp-44h]
  unsigned int v62; // [rsp+F0h] [rbp+8h]
  unsigned __int8 *v64; // [rsp+108h] [rbp+20h]

  v4 = ReturnFlags;
  v5 = NetBufferLists;
  v6 = (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisFilterHandle);
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C009FE30 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v5, NetBufferLists, *(_QWORD *)&ReturnFlags, v3);
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    NblTracker = v6->NblTracker;
    v9 = 0;
    NextReturnNetBufferListsTracker = v6->NextReturnNetBufferListsTracker;
    v11 = ndisNblTrackerEpoch;
    v12 = v4 & 1;
    v13 = 0LL;
    v14 = 0LL;
    v50 = NblTracker;
    v51 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v5, NblTracker, 0x8Au, NextReturnNetBufferListsTracker, v12);
      LOBYTE(v12) = v4 & 1;
      v9 = 0;
      NblTracker = v50;
    }
    v15 = (unsigned __int64)NextReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 1) != 0 )
    {
      v16 = *(unsigned __int8 **)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v11 & 1);
      v15 |= CurrentIrql;
    }
    else
    {
      v16 = (unsigned __int8 *)v15;
    }
    v64 = v16;
    Alignment = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      v18 = v4 & 1;
      v19 = 0;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( !Region && !Alignment[7].Region )
            Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL);
          if ( (Region & 4) != 0 )
            goto LABEL_57;
          v21 = (unsigned __int8 *)Alignment[7].Region;
          if ( v21 )
          {
            v22 = *v21;
            if ( (unsigned __int8)(*v21 - 17) <= 1u || v22 == 5 )
            {
              if ( v21 != v16 || Alignment[1].Region )
              {
                NblTracker = v50;
                ++v13;
                CurrentIrql = v15;
              }
              else
              {
                NblTracker = v50;
                ++v14;
                ++v13;
                CurrentIrql = 24LL;
              }
              goto LABEL_21;
            }
            if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v22);
LABEL_55:
              v16 = v64;
            }
            NblTracker = v50;
            goto LABEL_57;
          }
          if ( (unsigned __int8)byte_1C00A026A >= 3u )
          {
            WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
            goto LABEL_55;
          }
LABEL_57:
          CurrentIrql = v15 | 4;
LABEL_21:
          Alignment[22].Region = CurrentIrql;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v23 = v51 - v13;
        if ( (Region & 1) != 0 && v23 )
        {
          if ( !v18 && !v19 )
          {
            v19 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v18 = (_BYTE)CurrentIrql == 2;
          }
          v30 = Region;
          v31 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v32 = 2 * ((v30 >> 1) & 1);
          if ( v18 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (unsigned int)CurrentIrql);
            *v33 += v23;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v23);
          }
        }
        NblTracker = v50;
        v51 = v13;
        if ( !Alignment )
        {
          v9 = v19;
          v6 = (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle;
          LOBYTE(v12) = v18;
          v4 = ReturnFlags;
          break;
        }
      }
    }
    v24 = v13 - v14;
    if ( (v15 & 1) != 0 && v24 )
    {
      if ( !(_BYTE)v12 && !v9 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v12) = (_BYTE)CurrentIrql == 2;
      }
      v34 = v15;
      v35 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
      v36 = 2 * ((v34 >> 1) & 1);
      if ( (_BYTE)v12 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v37 = (_QWORD *)(*(_QWORD *)(v35 + 8 * v36 + 40) + (unsigned int)CurrentIrql);
        *v37 += v24;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 8 * v36 + 48), v24);
      }
    }
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v25 = (__int64)v6->IterativeDataPathTracker[CurrentIrql];
  if ( ndisIterativeDataPathDisabled
    || (v4 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2)
    || !*(_BYTE *)(v25 + 88) )
  {
    NextReturnNetBufferListsObject = v6->NextReturnNetBufferListsObject;
    NextReturnNetBufferListsHandler = (void (*)(void))v6->NextReturnNetBufferListsHandler;
    NextReturnNetBufferListsContext = v6->NextReturnNetBufferListsContext;
    if ( NextReturnNetBufferListsObject->Type != 17 )
    {
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (v4 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v40 = (struct _NET_BUFFER_LIST **)v52;
          v5->ChildRefCount = v4;
          v5->Scratch = 0LL;
          v41 = NextReturnNetBufferListsObject->Type == 5;
          v62 = CurrentIrql;
          v52[2] = 0LL;
          v52[0] = v5;
          v52[1] = v5;
          if ( v41 )
          {
            while ( *v40 )
            {
              v42 = NextReturnNetBufferListsObject;
              v43 = *(_QWORD *)&NextReturnNetBufferListsObject[108].Type + 96 * CurrentIrql;
              v44 = *(_BYTE *)(v43 + 88);
              *(_BYTE *)(v43 + 88) = 1;
              v45 = *v40;
              *v40 = 0LL;
              if ( v45 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v45->Scratch;
                  ChildRefCount = v45->ChildRefCount;
                  v45->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(
                    NextReturnNetBufferListsObject,
                    NextReturnNetBufferListsHandler,
                    NextReturnNetBufferListsContext,
                    v45,
                    0,
                    0,
                    ChildRefCount);
                  v45 = Scratch;
                }
                while ( Scratch );
              }
              *(_BYTE *)(v43 + 88) = 0;
              if ( v44 )
              {
                *(_BYTE *)(v43 + 88) = 1;
                v5 = *v40;
                goto LABEL_81;
              }
              NextReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&NextReturnNetBufferListsObject[140].Type;
              v40 = (struct _NET_BUFFER_LIST **)(v43 + 72);
              NextReturnNetBufferListsHandler = *(void (**)(void))&v42[134].Type;
              NextReturnNetBufferListsContext = *(void **)&v42[136].Type;
              CurrentIrql = v62;
              if ( NextReturnNetBufferListsObject->Type != 5 )
              {
                v5 = *(PNET_BUFFER_LIST *)(v43 + 72);
                goto LABEL_81;
              }
            }
          }
          else
          {
LABEL_81:
            if ( v5 )
            {
              *v40 = 0LL;
              do
              {
                v47 = (struct _NET_BUFFER_LIST *)v5->Scratch;
                v49 = v5->ChildRefCount;
                v5->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  NextReturnNetBufferListsObject,
                  NextReturnNetBufferListsHandler,
                  NextReturnNetBufferListsContext,
                  v5,
                  0,
                  0,
                  v49);
                v5 = v47;
              }
              while ( v47 );
            }
          }
          return;
        }
      }
      if ( v6->Header.Type == 5 )
      {
        v54 = v6->NextReturnNetBufferListsObject;
        v55 = NextReturnNetBufferListsContext;
        v59 = 3LL;
        v56 = NextReturnNetBufferListsHandler;
        v57 = v5;
        v58 = 0;
        v60 = v4;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls(v6, v5, 0);
        return;
      }
    }
    v6->NextReturnNetBufferListsHandler(v6->NextReturnNetBufferListsContext, v5, v4);
    return;
  }
  v26 = v4 | 1;
  if ( !*(_QWORD *)(v25 + 72) )
  {
    *(_QWORD *)(v25 + 72) = v5;
LABEL_32:
    *(_QWORD *)(v25 + 80) = v5;
    v5->Scratch = 0LL;
    v5->ChildRefCount = v26;
    return;
  }
  v38 = *(PNET_BUFFER_LIST **)(v25 + 80);
  if ( v26 != *((_DWORD *)v38 + 33) || (v26 & 6) != 0 )
  {
    v38[14] = v5;
    goto LABEL_32;
  }
  v39 = *v38;
  if ( *v38 )
  {
    do
    {
      v38 = (PNET_BUFFER_LIST *)v39;
      v39 = (_QWORD *)*v39;
    }
    while ( v39 );
  }
  *v38 = v5;
}
