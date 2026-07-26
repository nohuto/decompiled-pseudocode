/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0010740
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010F00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00A9C4C (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v3; // ebp
  PNET_BUFFER_LIST v4; // rsi
  __int64 CurrentIrql; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebp
  struct NDIS_NBL_TRACKER_HANDLE__ *v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  char v14; // r9
  char v15; // bl
  unsigned int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // rdi
  char *v20; // r8
  _SLIST_HEADER *Alignment; // r15
  unsigned __int64 Region; // rbx
  _UNKNOWN **v23; // r9
  char *v24; // rcx
  int v25; // ebp
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r12
  _QWORD *v32; // rdi
  void (*v33)(void); // r15
  void *v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  PNET_BUFFER_LIST *v39; // rcx
  _QWORD *v40; // rax
  struct _NET_BUFFER_LIST **v41; // r14
  bool v42; // zf
  _QWORD *v43; // rbp
  __int64 v44; // rsi
  char v45; // r13
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-B8h]
  unsigned int v50; // [rsp+30h] [rbp-B8h]
  char *v51; // [rsp+40h] [rbp-A8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v52; // [rsp+48h] [rbp-A0h]
  __int64 v53; // [rsp+50h] [rbp-98h]
  _QWORD Parameter[5]; // [rsp+58h] [rbp-90h] BYREF
  int v55; // [rsp+80h] [rbp-68h]
  __int64 v56; // [rsp+84h] [rbp-64h]
  ULONG v57; // [rsp+8Ch] [rbp-5Ch]
  _QWORD v58[4]; // [rsp+90h] [rbp-58h] BYREF
  char v59; // [rsp+F0h] [rbp+8h]
  unsigned int v60; // [rsp+F0h] [rbp+8h]
  int v62; // [rsp+108h] [rbp+20h]

  v3 = ReturnFlags;
  v4 = NetBufferLists;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisFilterHandle);
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4, NetBufferLists, *(_QWORD *)&ReturnFlags);
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v11 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 82);
    v12 = 0LL;
    v13 = *((_QWORD *)NdisFilterHandle + 68);
    v14 = 0;
    v15 = ndisNblTrackerEpoch;
    v16 = v3 & 1;
    v52 = v11;
    v17 = 0LL;
    v62 = v16;
    v18 = 0LL;
    v53 = 0LL;
    v59 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v4, v11, 0x8Au, (void *)v13, v16);
      LOBYTE(v16) = v62;
      v14 = 0;
      v11 = v52;
    }
    v19 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      v20 = *(char **)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v15 & 1);
      v19 |= CurrentIrql;
    }
    else
    {
      v20 = (char *)v19;
    }
    v51 = v20;
    Alignment = (_SLIST_HEADER *)v4;
    if ( !v4 )
    {
LABEL_36:
      v31 = v17 - v18;
      if ( (v19 & 1) != 0 && v31 )
      {
        if ( !(_BYTE)v16 && !v14 )
        {
          CurrentIrql = KeGetCurrentIrql();
          LOBYTE(v16) = (_BYTE)CurrentIrql == 2;
        }
        v35 = v19;
        v36 = v19 & 0xFFFFFFFFFFFFFFF8uLL;
        v37 = 2 * ((v35 >> 1) & 1);
        if ( (_BYTE)v16 )
        {
          CurrentIrql = KeGetPcr()->Prcb.Number << 12;
          v38 = (_QWORD *)(*(_QWORD *)(v36 + 8 * v37 + 40) + (unsigned int)CurrentIrql);
          *v38 += v31;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8 * v37 + 48), v31);
        }
      }
      goto LABEL_6;
    }
LABEL_19:
    Region = Alignment[22].Region;
    v23 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_29:
        v25 = v62;
        v26 = v53 - v17;
        v14 = v59;
        if ( (Region & 1) != 0 && v26 )
        {
          if ( !(_BYTE)v62 && !v59 )
          {
            v14 = 1;
            v59 = 1;
            CurrentIrql = KeGetCurrentIrql();
            if ( (_BYTE)CurrentIrql == 2 )
              v25 = 1;
            else
              LOBYTE(v25) = 0;
            v62 = v25;
          }
          v27 = Region;
          v28 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v29 = 2 * ((v27 >> 1) & 1);
          if ( (_BYTE)v25 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (unsigned int)CurrentIrql);
            *v30 += v26;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v26);
          }
        }
        v20 = v51;
        v12 = v17;
        v53 = v17;
        if ( !Alignment )
        {
          v3 = ReturnFlags;
          LOBYTE(v16) = v62;
          goto LABEL_36;
        }
        goto LABEL_19;
      }
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFDuLL, v12, v20, v23);
      if ( (Region & 4) != 0 )
        goto LABEL_53;
      v24 = (char *)Alignment[7].Region;
      if ( v24 )
      {
        v12 = (unsigned __int8)*v24;
        if ( (unsigned __int8)(v12 - 17) <= 1u || (_BYTE)v12 == 5 )
        {
          if ( v24 != v20 || Alignment[1].Region )
          {
            ++v17;
            CurrentIrql = v19;
          }
          else
          {
            ++v18;
            CurrentIrql = 24LL;
            ++v17;
          }
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v23 )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            *v24);
          goto LABEL_52;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v23 )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_52:
        v20 = v51;
        v23 = &WPP_RECORDER_INITIALIZED;
        v11 = v52;
      }
LABEL_53:
      CurrentIrql = v19 | 4;
LABEL_28:
      Alignment[22].Region = CurrentIrql;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_29;
    }
  }
LABEL_6:
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v7 = 3 * CurrentIrql;
  v8 = *((_QWORD *)NdisFilterHandle + 53);
  v9 = 32 * v7;
  if ( ndisIterativeDataPathDisabled || (v3 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v9 + v8 + 88) )
  {
    v32 = (_QWORD *)*((_QWORD *)NdisFilterHandle + 69);
    v33 = (void (*)(void))*((_QWORD *)NdisFilterHandle + 66);
    v34 = (void *)*((_QWORD *)NdisFilterHandle + 67);
    if ( *(_BYTE *)v32 != 17 )
    {
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (v3 & 1) != 0 || (v8 = KeGetCurrentIrql(), (_BYTE)v8 == 2) )
        {
          LODWORD(v8) = KeGetPcr()->Prcb.Number;
          v41 = (struct _NET_BUFFER_LIST **)v58;
          v4->Scratch = 0LL;
          v4->ChildRefCount = v3;
          v42 = *(_BYTE *)v32 == 5;
          v60 = v8;
          v58[2] = 0LL;
          v58[0] = v4;
          v58[1] = v4;
          if ( v42 )
          {
            while ( *v41 )
            {
              v43 = v32;
              v44 = v32[53] + 96 * v8;
              v45 = *(_BYTE *)(v44 + 88);
              *(_BYTE *)(v44 + 88) = 1;
              v46 = *v41;
              *v41 = 0LL;
              if ( v46 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
                  ChildRefCount = v46->ChildRefCount;
                  v46->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(v32, v33, v34, v46, 0, 0, ChildRefCount);
                  v46 = Scratch;
                }
                while ( Scratch );
              }
              *(_BYTE *)(v44 + 88) = 0;
              if ( v45 )
              {
                *(_BYTE *)(v44 + 88) = 1;
                v4 = *v41;
                goto LABEL_82;
              }
              v32 = (_QWORD *)v32[69];
              v41 = (struct _NET_BUFFER_LIST **)(v44 + 72);
              v33 = (void (*)(void))v43[66];
              v34 = (void *)v43[67];
              v8 = v60;
              if ( *(_BYTE *)v32 != 5 )
              {
                v4 = *(PNET_BUFFER_LIST *)(v44 + 72);
                goto LABEL_82;
              }
            }
          }
          else
          {
LABEL_82:
            if ( v4 )
            {
              *v41 = 0LL;
              do
              {
                v48 = (struct _NET_BUFFER_LIST *)v4->Scratch;
                v50 = v4->ChildRefCount;
                v4->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v32, v33, v34, v4, 0, 0, v50);
                v4 = v48;
              }
              while ( v48 );
            }
          }
          return;
        }
      }
      if ( *(_BYTE *)NdisFilterHandle == 5 )
      {
        Parameter[0] = 0LL;
        Parameter[1] = v32;
        Parameter[2] = v34;
        v56 = 3LL;
        Parameter[3] = v33;
        Parameter[4] = v4;
        v55 = 0;
        v57 = v3;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, v4, 0);
        return;
      }
    }
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))NdisFilterHandle + 66))(
      *((_QWORD *)NdisFilterHandle + 67),
      v4,
      v3);
    return;
  }
  v10 = v3 | 1;
  if ( !*(_QWORD *)(v9 + v8 + 72) )
  {
    *(_QWORD *)(v9 + v8 + 72) = v4;
LABEL_12:
    *(_QWORD *)(v9 + v8 + 80) = v4;
    v4->Scratch = 0LL;
    v4->ChildRefCount = v10;
    return;
  }
  v39 = *(PNET_BUFFER_LIST **)(v9 + v8 + 80);
  if ( v10 != *((_DWORD *)v39 + 33) || (v10 & 6) != 0 )
  {
    v39[14] = v4;
    goto LABEL_12;
  }
  v40 = *v39;
  if ( *v39 )
  {
    do
    {
      v39 = (PNET_BUFFER_LIST *)v40;
      v40 = (_QWORD *)*v40;
    }
    while ( v40 );
  }
  *v39 = v4;
}
