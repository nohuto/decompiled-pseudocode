/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C00057B0
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006AE0 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006AB70 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v3; // r9
  ULONG v4; // ebp
  PNET_BUFFER_LIST v5; // rsi
  __int64 CurrentIrql; // rax
  unsigned __int64 v8; // rbx
  char v9; // r10
  char v10; // di
  unsigned int v11; // ecx
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  _SLIST_HEADER *Alignment; // r15
  char v16; // bp
  unsigned __int64 Region; // rdi
  unsigned __int8 *v18; // rcx
  unsigned __int8 v19; // dl
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  int v23; // ebp
  _QWORD *v24; // rdi
  void (*v25)(void); // r15
  void *v26; // r12
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  _QWORD *v33; // rcx
  PNET_BUFFER_LIST *v34; // rdx
  _QWORD *v35; // rax
  struct _NET_BUFFER_LIST **v36; // r14
  bool v37; // zf
  _QWORD *v38; // rbp
  __int64 v39; // rsi
  char v40; // r13
  struct _NET_BUFFER_LIST *v41; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v43; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-B8h]
  unsigned int v45; // [rsp+30h] [rbp-B8h]
  struct _NET_BUFFER_LIST *v46; // [rsp+40h] [rbp-A8h]
  __int64 v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  _QWORD v49[3]; // [rsp+58h] [rbp-90h] BYREF
  char Parameter[8]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v51; // [rsp+78h] [rbp-70h]
  void *v52; // [rsp+80h] [rbp-68h]
  void (*v53)(void); // [rsp+88h] [rbp-60h]
  PNET_BUFFER_LIST v54; // [rsp+90h] [rbp-58h]
  int v55; // [rsp+98h] [rbp-50h]
  __int64 v56; // [rsp+9Ch] [rbp-4Ch]
  ULONG v57; // [rsp+A4h] [rbp-44h]
  char v58; // [rsp+F0h] [rbp+8h]
  unsigned int v59; // [rsp+F0h] [rbp+8h]
  ULONG v60; // [rsp+100h] [rbp+18h]

  v60 = SendCompleteFlags;
  v4 = SendCompleteFlags;
  v5 = NetBufferList;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)NdisFilterHandle);
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    NetBufferList = (PNET_BUFFER_LIST)*((_QWORD *)NdisFilterHandle + 83);
    v3 = 0LL;
    v8 = *((_QWORD *)NdisFilterHandle + 61);
    v9 = 0;
    v10 = ndisNblTrackerEpoch;
    v11 = v4 & 1;
    v46 = NetBufferList;
    v12 = 0LL;
    v13 = 0LL;
    v47 = 0LL;
    v58 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v5, (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferList, 0x94u, (void *)v8, v11);
      LOBYTE(v11) = v4 & 1;
      v3 = 0LL;
      NetBufferList = v46;
      v9 = 0;
    }
    v14 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      *(_QWORD *)&SendCompleteFlags = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v10 & 1);
      v14 |= CurrentIrql;
    }
    else
    {
      *(_QWORD *)&SendCompleteFlags = v14;
    }
    v48 = *(_QWORD *)&SendCompleteFlags;
    Alignment = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      v16 = v4 & 1;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( !Region && !Alignment[7].Region )
            Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)NetBufferList & 0xFFFFFFFFFFFFFFFDuLL);
          if ( (Region & 4) != 0 )
            goto LABEL_50;
          v18 = (unsigned __int8 *)Alignment[7].Region;
          if ( v18 )
          {
            v19 = *v18;
            if ( (unsigned __int8)(*v18 - 17) <= 1u || v19 == 5 )
            {
              if ( v18 != *(unsigned __int8 **)&SendCompleteFlags || Alignment[1].Region )
              {
                NetBufferList = v46;
                ++v12;
                CurrentIrql = v14;
              }
              else
              {
                NetBufferList = v46;
                v47 = ++v3;
                ++v12;
                CurrentIrql = 24LL;
              }
              goto LABEL_18;
            }
            if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v19);
LABEL_48:
              *(_QWORD *)&SendCompleteFlags = v48;
              v3 = v47;
            }
            NetBufferList = v46;
            goto LABEL_50;
          }
          if ( (unsigned __int8)byte_1C00A026A >= 3u )
          {
            WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
            goto LABEL_48;
          }
LABEL_50:
          CurrentIrql = v14 | 4;
LABEL_18:
          Alignment[22].Region = CurrentIrql;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v9 = v58;
        v20 = v13 - v12;
        if ( (Region & 1) != 0 && v20 )
        {
          if ( !v16 && !v58 )
          {
            v9 = 1;
            v58 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v16 = (_BYTE)CurrentIrql == 2;
          }
          v27 = Region;
          v28 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v29 = 2 * ((v27 >> 1) & 1);
          if ( v16 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (unsigned int)CurrentIrql);
            *v30 += v20;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v20);
          }
        }
        NetBufferList = v46;
        v13 = v12;
        if ( !Alignment )
        {
          LOBYTE(v11) = v16;
          v4 = v60;
          break;
        }
      }
    }
    v21 = v12 - v3;
    if ( (v14 & 1) != 0 && v21 )
    {
      if ( !(_BYTE)v11 && !v9 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v11) = (_BYTE)CurrentIrql == 2;
      }
      v31 = v14;
      v32 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
      NetBufferList = (PNET_BUFFER_LIST)(2 * ((v31 >> 1) & 1));
      if ( (_BYTE)v11 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v33 = (_QWORD *)(*(_QWORD *)(v32 + 8LL * (_QWORD)NetBufferList + 40) + (unsigned int)CurrentIrql);
        *v33 += v21;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8LL * (_QWORD)NetBufferList + 48), v21);
      }
    }
  }
  if ( byte_1C009FE30 )
    CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v5, NetBufferList, *(_QWORD *)&SendCompleteFlags, v3);
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v22 = *((_QWORD *)NdisFilterHandle + 54) + 96 * CurrentIrql;
  if ( ndisIterativeDataPathDisabled
    || (v4 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2)
    || !*(_BYTE *)(v22 + 40) )
  {
    v24 = (_QWORD *)*((_QWORD *)NdisFilterHandle + 62);
    v25 = (void (*)(void))*((_QWORD *)NdisFilterHandle + 59);
    v26 = (void *)*((_QWORD *)NdisFilterHandle + 60);
    if ( *(_BYTE *)v24 != 17 )
    {
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (v4 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v36 = (struct _NET_BUFFER_LIST **)v49;
          v5->ChildRefCount = v4;
          v5->Scratch = 0LL;
          v37 = *(_BYTE *)v24 == 5;
          v59 = CurrentIrql;
          v49[2] = 0LL;
          v49[0] = v5;
          v49[1] = v5;
          if ( v37 )
          {
            while ( *v36 )
            {
              v38 = v24;
              v39 = v24[54] + 96 * CurrentIrql;
              v40 = *(_BYTE *)(v39 + 40);
              *(_BYTE *)(v39 + 40) = 1;
              v41 = *v36;
              *v36 = 0LL;
              if ( v41 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v41->Scratch;
                  ChildRefCount = v41->ChildRefCount;
                  v41->ChildRefCount = 0;
                  ndisCallSendCompleteHandler(v24, v25, v26, v41, 0, 0, ChildRefCount);
                  v41 = Scratch;
                }
                while ( Scratch );
              }
              *(_BYTE *)(v39 + 40) = 0;
              if ( v40 )
              {
                *(_BYTE *)(v39 + 40) = 1;
                v5 = *v36;
                goto LABEL_79;
              }
              v24 = (_QWORD *)v24[62];
              v36 = (struct _NET_BUFFER_LIST **)(v39 + 24);
              v25 = (void (*)(void))v38[59];
              v26 = (void *)v38[60];
              CurrentIrql = v59;
              if ( *(_BYTE *)v24 != 5 )
              {
                v5 = *(PNET_BUFFER_LIST *)(v39 + 24);
                goto LABEL_79;
              }
            }
          }
          else
          {
LABEL_79:
            if ( v5 )
            {
              *v36 = 0LL;
              do
              {
                v43 = (struct _NET_BUFFER_LIST *)v5->Scratch;
                v45 = v5->ChildRefCount;
                v5->ChildRefCount = 0;
                ndisCallSendCompleteHandler(v24, v25, v26, v5, 0, 0, v45);
                v5 = v43;
              }
              while ( v43 );
            }
          }
          return;
        }
      }
      if ( *(_BYTE *)NdisFilterHandle == 5 )
      {
        v51 = *((_QWORD *)NdisFilterHandle + 62);
        v52 = v26;
        v56 = 1LL;
        v53 = v25;
        v54 = v5;
        v55 = 0;
        v57 = v4;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, v5, 1u);
        return;
      }
    }
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))NdisFilterHandle + 59))(
      *((_QWORD *)NdisFilterHandle + 60),
      v5,
      v4);
    return;
  }
  v23 = v4 | 1;
  if ( !*(_QWORD *)(v22 + 24) )
  {
    *(_QWORD *)(v22 + 24) = v5;
LABEL_31:
    *(_QWORD *)(v22 + 32) = v5;
    v5->Scratch = 0LL;
    v5->ChildRefCount = v23;
    return;
  }
  v34 = *(PNET_BUFFER_LIST **)(v22 + 32);
  if ( v23 != *((_DWORD *)v34 + 33) || (v23 & 6) != 0 )
  {
    v34[14] = v5;
    goto LABEL_31;
  }
  v35 = *v34;
  if ( *v34 )
  {
    do
    {
      v34 = (PNET_BUFFER_LIST *)v35;
      v35 = (_QWORD *)*v35;
    }
    while ( v35 );
  }
  *v34 = v5;
}
