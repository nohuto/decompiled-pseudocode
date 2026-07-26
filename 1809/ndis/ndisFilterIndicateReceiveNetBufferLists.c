/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008070 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 CurrentIrql; // rax
  unsigned int v6; // r11d
  struct _NET_BUFFER_LIST *v7; // r14
  int v8; // r15d
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rcx
  char v13; // bl
  unsigned int v14; // r12d
  __int64 v15; // r15
  unsigned __int64 v16; // rdi
  unsigned __int8 *v17; // r8
  _SLIST_HEADER *Alignment; // rsi
  __int64 v19; // r14
  unsigned __int64 Region; // rbx
  __int64 v21; // r13
  unsigned __int8 *v22; // rcx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdx
  unsigned __int8 v25; // dl
  int v26; // r15d
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rax
  int v29; // esi
  struct _NET_BUFFER_LIST **j; // rdx
  unsigned __int64 v31; // rcx
  struct _NDIS_FILTER_BLOCK *v32; // rbx
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // r12
  void *NextIndicateReceiveNetBufferListsContext; // r13
  struct _NET_BUFFER_LIST **v35; // r15
  unsigned __int64 v36; // rcx
  struct _NDIS_FILTER_BLOCK *v37; // rdx
  __int64 v38; // r14
  char v39; // al
  struct _NET_BUFFER_LIST *v40; // r9
  struct _NET_BUFFER_LIST *Scratch; // rdi
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v44; // eax
  struct _NET_BUFFER_LIST *v45; // rdi
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // eax
  int v49; // r8d
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *v51; // rax
  char v52; // [rsp+40h] [rbp-71h] BYREF
  char v53[7]; // [rsp+41h] [rbp-70h] BYREF
  __int64 v54; // [rsp+48h] [rbp-69h]
  __int64 v55; // [rsp+50h] [rbp-61h]
  __int64 v56; // [rsp+58h] [rbp-59h]
  unsigned __int8 *v57; // [rsp+60h] [rbp-51h]
  __int64 v58; // [rsp+68h] [rbp-49h]
  _QWORD v59[3]; // [rsp+70h] [rbp-41h] BYREF
  char Parameter[8]; // [rsp+88h] [rbp-29h] BYREF
  struct _NDIS_FILTER_BLOCK *v61; // [rsp+90h] [rbp-21h]
  void *v62; // [rsp+98h] [rbp-19h]
  void (*v63)(void); // [rsp+A0h] [rbp-11h]
  struct _NET_BUFFER_LIST *v64; // [rsp+A8h] [rbp-9h]
  unsigned int v65; // [rsp+B0h] [rbp-1h]
  int v66; // [rsp+B4h] [rbp+3h]
  unsigned int v67; // [rsp+B8h] [rbp+7h]
  int v68; // [rsp+BCh] [rbp+Bh]
  _QWORD *v69; // [rsp+110h] [rbp+5Fh]
  unsigned int v70; // [rsp+110h] [rbp+5Fh]
  unsigned int v73; // [rsp+128h] [rbp+77h]
  char v74; // [rsp+130h] [rbp+7Fh]

  v73 = a4;
  v69 = a1;
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v6 = a3;
  v7 = a2;
  v8 = a5;
  v9 = 0;
  v10 = 96 * CurrentIrql + a1[54] + 48LL;
  v54 = v10;
  if ( ndisNblTrackerMode )
  {
    v11 = a1[65];
    v12 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[83];
    v13 = ndisNblTrackerEpoch;
    v14 = a5 & 1;
    CurrentIrql = a5 & 2;
    v56 = (__int64)v12;
    v58 = 0LL;
    v15 = 0LL;
    v55 = 0LL;
    v52 = a5 & 1;
    v53[0] = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(a2, v12, ((_DWORD)CurrentIrql != 0) + 130, (void *)v11, v14);
    v16 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v16 & 1) != 0 )
    {
      v17 = *(unsigned __int8 **)((v16 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v13 & 1);
      v16 |= CurrentIrql;
    }
    else
    {
      v17 = (unsigned __int8 *)v16;
    }
    v57 = v17;
    Alignment = (_SLIST_HEADER *)v7;
    if ( v7 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        v21 = v56;
        while ( Alignment[22].Region == Region )
        {
          if ( !Region && !Alignment[7].Region )
            Alignment[7].Region = ndisSourceHandleFromOwner(v21 & 0xFFFFFFFFFFFFFFFDuLL);
          if ( (Region & 4) == 0 )
          {
            v22 = (unsigned __int8 *)Alignment[7].Region;
            if ( v22 )
            {
              v25 = *v22;
              if ( (unsigned __int8)(*v22 - 17) <= 1u || v25 == 5 )
              {
                if ( v22 != v17 || Alignment[1].Region )
                {
                  ++v15;
                  CurrentIrql = v16;
                }
                else
                {
                  ++v19;
                  CurrentIrql = 24LL;
                  ++v15;
                }
                goto LABEL_19;
              }
              if ( (unsigned __int8)byte_1C00A026A >= 3u )
                WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v25);
            }
            else if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
            }
          }
          v17 = v57;
          CurrentIrql = v16 | 4;
LABEL_19:
          Alignment[22].Region = CurrentIrql;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v23 = v58 - v15;
        v55 = v19;
        if ( (Region & 1) != 0 && v23 )
        {
          if ( !(_BYTE)v14 && !v53[0] )
          {
            v53[0] = 1;
            LOBYTE(v14) = KeGetCurrentIrql() == 2;
            v52 = v14;
          }
          CurrentIrql = 16 * ((Region >> 1) & 1);
          v24 = CurrentIrql + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( (_BYTE)v14 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)v24 + (unsigned int)CurrentIrql) += v23;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8), v23);
          }
          LOBYTE(v14) = v52;
        }
        v58 = v15;
        if ( !Alignment )
        {
          v7 = a2;
          break;
        }
      }
    }
    if ( (v16 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v16, v15 - v55, &v52, v53);
    v6 = a3;
    v9 = 0;
    a4 = v73;
    v10 = v54;
    a1 = v69;
    v8 = a5;
  }
  if ( (v8 & 2) != 0
    || ndisIterativeDataPathDisabled != (v8 & 2)
    || (v8 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2)
    || !*(_BYTE *)(v10 + 16) )
  {
    v32 = (struct _NDIS_FILTER_BLOCK *)a1[66];
    NextIndicateReceiveNetBufferListsHandler = (void (*)(void))a1[63];
    NextIndicateReceiveNetBufferListsContext = (void *)a1[64];
    if ( v32->Header.Type == 17 )
    {
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))NextIndicateReceiveNetBufferListsHandler)(
        NextIndicateReceiveNetBufferListsContext,
        v7,
        v6);
    }
    else
    {
      if ( (v8 & 2) == 0 && !ndisIterativeDataPathDisabled )
      {
        if ( (v8 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v35 = (struct _NET_BUFFER_LIST **)v59;
          v70 = CurrentIrql;
          v59[2] = 0LL;
          v7->ChildRefCount = a5;
          v36 = v7->Link.Alignment;
          v59[0] = v7;
          v59[1] = v7;
          v7->Scratch = 0LL;
          v7->Status = v6;
          if ( v36 )
          {
            *(_QWORD *)(v36 + 112) = a4;
            CurrentIrql = (unsigned int)CurrentIrql;
          }
          if ( v32->Header.Type == 5 )
          {
            while ( *v35 )
            {
              v37 = v32;
              v38 = (__int64)&(*v32->IterativeDataPathTracker)[4 * CurrentIrql + 2];
              v56 = v38;
              v39 = *(_BYTE *)(v38 + 16);
              *(_BYTE *)(v38 + 16) = 1;
              v40 = *v35;
              v74 = v39;
              *v35 = 0LL;
              if ( v40 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v40->Scratch;
                  ChildRefCount = v40->ChildRefCount;
                  NdisReserved2 = v40->NdisReserved2;
                  if ( v40->Link.Alignment )
                    v44 = *(_DWORD *)(v40->Link.Alignment + 112);
                  else
                    v44 = 1;
                  v40->ChildRefCount = 0;
                  ndisCallReceiveHandler(
                    v32,
                    NextIndicateReceiveNetBufferListsHandler,
                    NextIndicateReceiveNetBufferListsContext,
                    v40,
                    NdisReserved2,
                    v44,
                    ChildRefCount);
                  v40 = Scratch;
                }
                while ( Scratch );
                v38 = v56;
                v37 = v32;
                v39 = v74;
              }
              *(_BYTE *)(v38 + 16) = 0;
              if ( v39 )
              {
                *(_BYTE *)(v38 + 16) = 1;
                v7 = *v35;
                goto LABEL_85;
              }
              v32 = (struct _NDIS_FILTER_BLOCK *)v32->NextIndicateReceiveNetBufferListsObject;
              v35 = (struct _NET_BUFFER_LIST **)v38;
              NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v37->NextIndicateReceiveNetBufferListsHandler;
              NextIndicateReceiveNetBufferListsContext = v37->NextIndicateReceiveNetBufferListsContext;
              CurrentIrql = v70;
              if ( v32->Header.Type != 5 )
              {
                v7 = *(struct _NET_BUFFER_LIST **)v38;
                goto LABEL_85;
              }
            }
          }
          else
          {
LABEL_85:
            if ( v7 )
            {
              *v35 = 0LL;
              do
              {
                v45 = (struct _NET_BUFFER_LIST *)v7->Scratch;
                v46 = v7->ChildRefCount;
                v47 = v7->NdisReserved2;
                if ( v7->Link.Alignment )
                  v48 = *(_DWORD *)(v7->Link.Alignment + 112);
                else
                  v48 = 1;
                v7->ChildRefCount = 0;
                ndisCallReceiveHandler(
                  v32,
                  NextIndicateReceiveNetBufferListsHandler,
                  NextIndicateReceiveNetBufferListsContext,
                  v7,
                  v47,
                  v48,
                  v46);
                v7 = v45;
              }
              while ( v45 );
            }
          }
          return;
        }
      }
      v67 = a4;
      v61 = v32;
      v62 = NextIndicateReceiveNetBufferListsContext;
      v66 = 2;
      v63 = NextIndicateReceiveNetBufferListsHandler;
      v64 = v7;
      v65 = v6;
      v68 = v8;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        if ( byte_1C009FE30 && (*((_DWORD *)&v32->PktMonComp + 13) & 2) != 0 )
        {
          PktMonClientNblDropNdis((_DWORD)v32 + 800, (_DWORD)v7, v49, 1, -1073741670, -536866813);
          v9 = 0;
        }
        for ( i = v7; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          i->Status = -1073741670;
        v51 = (_SLIST_HEADER *)v7;
        if ( v7 )
        {
          do
          {
            v51 = (_SLIST_HEADER *)v51->Alignment;
            ++v9;
          }
          while ( v51 );
        }
        _InterlockedExchangeAdd(&v32->DroppedReceiveNbls, v9);
        if ( (v8 & 2) == 0 )
        {
          ndisQueueStackExpansionFallbackNbls(v32, v7, 0);
          return;
        }
LABEL_64:
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v7,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)v69[65],
            (struct NDIS_NBL_TRACKER_HANDLE__ *)v69[83],
            NdisNblTrackerEvent_ReturnedToFilterResources,
            v8 & 1);
        return;
      }
    }
    if ( (v8 & 2) == 0 )
      return;
    goto LABEL_64;
  }
  v26 = v8 | 1;
  if ( !*(_QWORD *)v10 )
  {
    *(_QWORD *)v10 = v7;
    goto LABEL_59;
  }
  v27 = *(_QWORD *)(v10 + 8);
  if ( v6 != *(_DWORD *)(v27 + 140) || v26 != *(_DWORD *)(v27 + 132) || (v26 & 0xCB00) != 0 )
  {
    *(_QWORD *)(v27 + 112) = v7;
LABEL_59:
    *(_QWORD *)(v10 + 8) = v7;
    v31 = v7->Link.Alignment;
    v7->Scratch = 0LL;
    v7->ChildRefCount = v26;
    v7->Status = v6;
    if ( v31 )
      *(_QWORD *)(v31 + 112) = a4;
    return;
  }
  v28 = *(struct _NET_BUFFER_LIST **)v27;
  v29 = 1;
  if ( *(_QWORD *)v27 )
    v29 = (int)v28->Scratch;
  for ( j = *(struct _NET_BUFFER_LIST ***)(v10 + 8); v28; v28 = (struct _NET_BUFFER_LIST *)v28->Link.Alignment )
    j = &v28->Next;
  *j = v7;
  if ( *(_QWORD *)v27 )
    *(_QWORD *)(*(_QWORD *)v27 + 112LL) = v29 + a4;
}
