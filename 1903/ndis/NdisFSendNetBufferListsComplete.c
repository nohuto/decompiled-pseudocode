/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C000E210
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C008F11C (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EBA0 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00A9F34 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  ULONG v3; // ebp
  PNET_BUFFER_LIST v4; // rsi
  NDIS_HANDLE v5; // r14
  __int64 CurrentIrql; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebp
  _QWORD *v10; // rdi
  void (*v11)(void); // r15
  void *v12; // r12
  unsigned __int64 v13; // rbx
  char v14; // r15
  unsigned int v15; // edi
  char v16; // cl
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  char *v20; // r9
  _SLIST_HEADER *Alignment; // r15
  _UNKNOWN **v22; // r10
  unsigned __int64 Region; // rdi
  char *v24; // rcx
  unsigned int v25; // ebp
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rcx
  PNET_BUFFER_LIST *v31; // rdx
  _QWORD *v32; // rax
  struct _NET_BUFFER_LIST **v33; // r14
  bool v34; // zf
  _QWORD *v35; // rbp
  __int64 v36; // rsi
  char v37; // r13
  struct _NET_BUFFER_LIST *v38; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v40; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-B8h]
  unsigned int v42; // [rsp+30h] [rbp-B8h]
  unsigned int v43; // [rsp+40h] [rbp-A8h]
  __int64 v44; // [rsp+48h] [rbp-A0h]
  char *v45; // [rsp+50h] [rbp-98h]
  PNET_BUFFER_LIST v46; // [rsp+58h] [rbp-90h]
  _QWORD Parameter[5]; // [rsp+60h] [rbp-88h] BYREF
  int v48; // [rsp+88h] [rbp-60h]
  __int64 v49; // [rsp+8Ch] [rbp-5Ch]
  ULONG v50; // [rsp+94h] [rbp-54h]
  _QWORD v51[3]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+F0h] [rbp+8h]
  char v55; // [rsp+108h] [rbp+20h]

  v3 = SendCompleteFlags;
  v4 = NetBufferList;
  v5 = NdisFilterHandle;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)NdisFilterHandle);
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  v7 = 1LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NetBufferList = (PNET_BUFFER_LIST)*((_QWORD *)v5 + 82);
    v13 = *((_QWORD *)v5 + 60);
    v14 = ndisNblTrackerEpoch;
    v15 = (v3 & 1) != 0;
    v46 = NetBufferList;
    v7 = 0LL;
    v43 = v15;
    v16 = 0;
    v44 = 0LL;
    v17 = 0LL;
    v55 = 0;
    v18 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v4, (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferList, 0x94u, (void *)v13, v15);
      v7 = 0LL;
      v16 = 0;
    }
    v19 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      v20 = *(char **)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v14 & 1);
      v19 |= CurrentIrql;
    }
    else
    {
      v20 = (char *)v19;
    }
    v45 = v20;
    Alignment = (_SLIST_HEADER *)v4;
    if ( !v4 )
    {
LABEL_38:
      v27 = v17 - v7;
      if ( (v19 & 1) != 0 && v27 )
      {
        if ( !(_BYTE)v15 && !v16 )
        {
          CurrentIrql = KeGetCurrentIrql();
          LOBYTE(v15) = (_BYTE)CurrentIrql == 2;
        }
        v28 = v19;
        v29 = v19 & 0xFFFFFFFFFFFFFFF8uLL;
        NetBufferList = (PNET_BUFFER_LIST)(2 * ((v28 >> 1) & 1));
        if ( (_BYTE)v15 )
        {
          CurrentIrql = KeGetPcr()->Prcb.Number << 12;
          v30 = (_QWORD *)(*(_QWORD *)(v29 + 8LL * (_QWORD)NetBufferList + 40) + (unsigned int)CurrentIrql);
          *v30 += v27;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8LL * (_QWORD)NetBufferList + 48), v27);
        }
      }
      goto LABEL_4;
    }
    v22 = &WPP_RECORDER_INITIALIZED;
LABEL_22:
    Region = Alignment[22].Region;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_31:
        v25 = v43;
        v26 = v18 - v17;
        if ( (Region & 1) != 0 && v26 )
        {
          if ( !(_BYTE)v43 && !v55 )
          {
            v55 = 1;
            LOBYTE(v25) = KeGetCurrentIrql() == 2;
            v43 = v25;
          }
          CurrentIrql = 16 * ((Region >> 1) & 1);
          NetBufferList = (PNET_BUFFER_LIST)(CurrentIrql + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( (_BYTE)v25 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(NetBufferList->Link.Alignment + (unsigned int)CurrentIrql) += v26;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)&NetBufferList->FirstNetBuffer, v26);
          }
        }
        v18 = v17;
        if ( !Alignment )
        {
          v3 = SendCompleteFlags;
          v5 = NdisFilterHandle;
          LOBYTE(v15) = v43;
          v16 = v55;
          goto LABEL_38;
        }
        goto LABEL_22;
      }
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner(
                                (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFDuLL,
                                NetBufferList,
                                v7,
                                v20);
      if ( (Region & 4) != 0 )
        goto LABEL_55;
      v24 = (char *)Alignment[7].Region;
      if ( v24 )
      {
        NetBufferList = (PNET_BUFFER_LIST)(unsigned __int8)*v24;
        if ( (unsigned __int8)((_BYTE)NetBufferList - 17) <= 1u || (_BYTE)NetBufferList == 5 )
        {
          if ( v24 != v20 || Alignment[1].Region )
          {
            ++v17;
            CurrentIrql = v19;
          }
          else
          {
            ++v7;
            CurrentIrql = 24LL;
            v44 = v7;
            ++v17;
          }
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v22 )
        {
          LOBYTE(NetBufferList) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NetBufferList,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            *v24);
          goto LABEL_54;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v22 )
      {
        LOBYTE(NetBufferList) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)NetBufferList,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_54:
        v7 = v44;
        v22 = &WPP_RECORDER_INITIALIZED;
        v20 = v45;
      }
LABEL_55:
      CurrentIrql = v19 | 4;
LABEL_30:
      Alignment[22].Region = CurrentIrql;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_31;
    }
  }
LABEL_4:
  if ( byte_1C00E5E20 )
    CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v4, NetBufferList, v7);
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v8 = *((_QWORD *)v5 + 53) + 96 * CurrentIrql;
  if ( ndisIterativeDataPathDisabled
    || (v3 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2)
    || !*(_BYTE *)(v8 + 40) )
  {
    v10 = (_QWORD *)*((_QWORD *)v5 + 61);
    v11 = (void (*)(void))*((_QWORD *)v5 + 58);
    v12 = (void *)*((_QWORD *)v5 + 59);
    if ( *(_BYTE *)v10 != 17 )
    {
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (v3 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v33 = (struct _NET_BUFFER_LIST **)v51;
          v4->Scratch = 0LL;
          v4->ChildRefCount = v3;
          v34 = *(_BYTE *)v10 == 5;
          v53 = CurrentIrql;
          v51[2] = 0LL;
          v51[0] = v4;
          v51[1] = v4;
          if ( v34 )
          {
            while ( *v33 )
            {
              v35 = v10;
              v36 = v10[53] + 96 * CurrentIrql;
              v37 = *(_BYTE *)(v36 + 40);
              *(_BYTE *)(v36 + 40) = 1;
              v38 = *v33;
              *v33 = 0LL;
              if ( v38 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v38->Scratch;
                  ChildRefCount = v38->ChildRefCount;
                  v38->ChildRefCount = 0;
                  ndisCallSendCompleteHandler(v10, v11, v12, v38, 0, 0, ChildRefCount);
                  v38 = Scratch;
                }
                while ( Scratch );
              }
              *(_BYTE *)(v36 + 40) = 0;
              if ( v37 )
              {
                *(_BYTE *)(v36 + 40) = 1;
                v4 = *v33;
                goto LABEL_78;
              }
              v10 = (_QWORD *)v10[61];
              v33 = (struct _NET_BUFFER_LIST **)(v36 + 24);
              v11 = (void (*)(void))v35[58];
              v12 = (void *)v35[59];
              CurrentIrql = v53;
              if ( *(_BYTE *)v10 != 5 )
              {
                v4 = *(PNET_BUFFER_LIST *)(v36 + 24);
                goto LABEL_78;
              }
            }
          }
          else
          {
LABEL_78:
            if ( v4 )
            {
              *v33 = 0LL;
              do
              {
                v40 = (struct _NET_BUFFER_LIST *)v4->Scratch;
                v42 = v4->ChildRefCount;
                v4->ChildRefCount = 0;
                ndisCallSendCompleteHandler(v10, v11, v12, v4, 0, 0, v42);
                v4 = v40;
              }
              while ( v40 );
            }
          }
          return;
        }
      }
      if ( *(_BYTE *)v5 == 5 )
      {
        Parameter[0] = 0LL;
        Parameter[1] = v10;
        Parameter[2] = v12;
        v49 = 1LL;
        Parameter[3] = v11;
        Parameter[4] = v4;
        v48 = 0;
        v50 = v3;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v4, 1u);
        return;
      }
    }
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))v5 + 58))(*((_QWORD *)v5 + 59), v4, v3);
    return;
  }
  v9 = v3 | 1;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    *(_QWORD *)(v8 + 24) = v4;
LABEL_11:
    *(_QWORD *)(v8 + 32) = v4;
    v4->Scratch = 0LL;
    v4->ChildRefCount = v9;
    return;
  }
  v31 = *(PNET_BUFFER_LIST **)(v8 + 32);
  if ( v9 != *((_DWORD *)v31 + 33) || (v9 & 6) != 0 )
  {
    v31[14] = v4;
    goto LABEL_11;
  }
  v32 = *v31;
  if ( *v31 )
  {
    do
    {
      v31 = (PNET_BUFFER_LIST *)v32;
      v32 = (_QWORD *)*v32;
    }
    while ( v32 );
  }
  *v31 = v4;
}
