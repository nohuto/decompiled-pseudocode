/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0015024 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00210F0 (ndisInvokeNextReceiveHandler.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r13d
  unsigned int v8; // esi
  __int64 v9; // r14
  int v10; // edi
  int Scratch; // ecx
  __int64 v13; // r14
  int v14; // esi
  unsigned __int64 v15; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v16; // r9
  unsigned __int64 v17; // rdi
  char v18; // bl
  unsigned int v19; // r8d
  unsigned int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // r10
  unsigned __int64 v23; // rdi
  char *v24; // r8
  _SLIST_HEADER *Alignment; // r12
  __int64 v26; // r13
  _UNKNOWN **v27; // r11
  unsigned __int64 Region; // rbx
  char *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  bool v32; // r11
  bool v33; // zf
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rdx
  struct _NET_BUFFER_LIST *v37; // rax
  unsigned int v38; // r8d
  struct _NET_BUFFER_LIST **i; // rcx
  char v40[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-60h]
  char *v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+68h] [rbp-50h]
  __int64 v46; // [rsp+70h] [rbp-48h]
  unsigned __int8 v47; // [rsp+C0h] [rbp+8h] BYREF
  int v48; // [rsp+D0h] [rbp+18h]
  unsigned int v49; // [rsp+D8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a4;
  v8 = a5;
  v9 = *(_QWORD *)(a1 + 424) + 48LL;
  v10 = a3;
  Scratch = 1;
  v13 = 96 * v5 + v9;
  v46 = v13;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_2;
  v16 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 656);
  v17 = *(_QWORD *)(a1 + 512);
  v18 = ndisNblTrackerEpoch;
  v19 = 131;
  if ( (a5 & 2) == 0 )
    v19 = 130;
  v42 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 656);
  v20 = (a5 & 1) != 0;
  v21 = 0LL;
  v22 = 0LL;
  a5 = v20;
  v41 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  v47 = v20;
  v40[0] = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a2, v42, v19, (void *)v17, v20);
    v22 = v41;
    Scratch = 1;
    v16 = v42;
    v21 = v41;
  }
  v23 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v23 & 1) != 0 )
  {
    v24 = *(char **)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v23 |= 2LL * (v18 & 1);
  }
  else
  {
    v24 = (char *)v23;
  }
  v44 = v24;
  Alignment = (_SLIST_HEADER *)a2;
  if ( a2 )
  {
    v26 = v43;
    v27 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      Region = Alignment[22].Region;
      while ( Alignment[22].Region == Region )
      {
        if ( !Region && !Alignment[7].Region )
          Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFDuLL, v21, v24, v16);
        if ( (Region & 4) != 0 )
          goto LABEL_48;
        v29 = (char *)Alignment[7].Region;
        if ( v29 )
        {
          v21 = (unsigned __int8)*v29;
          if ( (unsigned __int8)(v21 - 17) <= 1u || (_BYTE)v21 == 5 )
          {
            if ( v29 != v24 || Alignment[1].Region )
            {
              ++v22;
              v30 = v23;
              v41 = v22;
            }
            else
            {
              ++v26;
              v30 = 24LL;
              v41 = ++v22;
            }
            goto LABEL_27;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v27 )
          {
            LOBYTE(v21) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v21,
              27,
              12,
              (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
              (char)Alignment,
              *v29);
            goto LABEL_47;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v27 )
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v21,
            27,
            11,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment);
LABEL_47:
          v22 = v41;
          v27 = &WPP_RECORDER_INITIALIZED;
          v24 = v44;
          v16 = v42;
        }
LABEL_48:
        v30 = v23 | 4;
LABEL_27:
        Alignment[22].Region = v30;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        if ( !Alignment )
          break;
      }
      v31 = v45 - v22;
      v43 = v26;
      if ( (Region & 1) != 0 && v31 )
      {
        v32 = a5;
        if ( !(_BYTE)a5 && !v40[0] )
        {
          v40[0] = 1;
          v32 = KeGetCurrentIrql() == 2;
          v47 = v32;
        }
        v33 = !v32;
        v27 = &WPP_RECORDER_INITIALIZED;
        v34 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v33 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 48), v31);
        }
        else
        {
          v35 = (_QWORD *)(*(_QWORD *)(v34 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v35 += v31;
        }
        a5 = v47;
      }
      v16 = v42;
      v21 = v22;
      v45 = v22;
      if ( !Alignment )
      {
        v13 = v46;
        Scratch = 1;
        v7 = v49;
        v21 = v43;
        break;
      }
    }
  }
  if ( (v23 & 1) != 0 )
  {
    ndisNblTrackerUpdateOwnershipCount(v23, v22 - v21, &v47, v40);
    Scratch = 1;
  }
  v10 = v48;
LABEL_2:
  if ( (v8 & 2) == 0
    && ndisIterativeDataPathDisabled == (v8 & 2)
    && ((v8 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v13 + 16) )
  {
    v14 = v8 | 1;
    if ( !*(_QWORD *)v13 )
    {
      *(_QWORD *)v13 = a2;
      goto LABEL_8;
    }
    v36 = *(_QWORD *)(v13 + 8);
    if ( v10 != *(_DWORD *)(v36 + 140) || v14 != *(_DWORD *)(v36 + 132) || (v14 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v36 + 112) = a2;
LABEL_8:
      *(_QWORD *)(v13 + 8) = a2;
      v15 = a2->Link.Alignment;
      a2->Scratch = 0LL;
      a2->ChildRefCount = v14;
      a2->Status = v10;
      if ( v15 )
        *(_QWORD *)(v15 + 112) = v7;
      return;
    }
    v37 = *(struct _NET_BUFFER_LIST **)v36;
    if ( *(_QWORD *)v36 )
      Scratch = (int)v37->Scratch;
    v38 = Scratch + v7;
    for ( i = *(struct _NET_BUFFER_LIST ***)(v13 + 8); v37; v37 = (struct _NET_BUFFER_LIST *)v37->Link.Alignment )
      i = &v37->Next;
    *i = a2;
    if ( *(_QWORD *)v36 )
      *(_QWORD *)(*(_QWORD *)v36 + 112LL) = v38;
  }
  else
  {
    ndisInvokeNextReceiveHandler(
      a2,
      *(struct _NDIS_FILTER_BLOCK **)(a1 + 520),
      *(void **)(a1 + 504),
      *(void (**)(void))(a1 + 496));
    if ( (v8 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 512),
        *(_QWORD *)(a1 + 656),
        0x8Cu,
        v8 & 1);
  }
}
