/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C00060D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006AC4C (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  NDIS_PORT_NUMBER v5; // r15d
  struct NDIS_NBL_TRACKER_HANDLE__ *v8; // rdx
  unsigned __int64 v9; // rbx
  char v10; // di
  __int64 v11; // r12
  char v12; // cl
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r9
  PNET_BUFFER_LIST Alignment; // r13
  char v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdi
  __int64 v26; // r9
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  ULONG v33; // [rsp+30h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+48h] [rbp-40h]
  unsigned __int8 *v37; // [rsp+90h] [rbp+8h]
  NDIS_PORT_NUMBER v38; // [rsp+A0h] [rbp+18h]

  v38 = PortNumber;
  v5 = PortNumber;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferList, PortNumber, SendFlags, (ULONG_PTR)NdisFilterHandle);
  if ( ndisNblTrackerMode )
  {
    v8 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 83);
    *(_QWORD *)&PortNumber = SendFlags & 1;
    v9 = *((_QWORD *)NdisFilterHandle + 57);
    v10 = ndisNblTrackerEpoch;
    v11 = 0LL;
    v12 = 0;
    v36 = 0LL;
    v13 = 0LL;
    v33 = SendFlags & 1;
    v34 = v8;
    v35 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferList, v8, 0x90u, (void *)v9, PortNumber);
      *(_QWORD *)&PortNumber = SendFlags & 1;
      v13 = 0LL;
      v8 = v34;
      v12 = 0;
    }
    v14 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      v15 = *(unsigned __int8 **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 |= 2LL * (v10 & 1);
    }
    else
    {
      v15 = (unsigned __int8 *)v14;
    }
    v37 = v15;
    Alignment = NetBufferList;
    if ( !NetBufferList )
    {
LABEL_24:
      v23 = v11 - v13;
      if ( (v14 & 1) != 0 && v23 )
      {
        if ( !(_BYTE)PortNumber && !v12 )
          LOBYTE(PortNumber) = KeGetCurrentIrql() == 2;
        v28 = v14;
        v29 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
        v30 = 2 * ((v28 >> 1) & 1);
        if ( (_BYTE)PortNumber )
        {
          v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v31 += v23;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v23);
        }
      }
      goto LABEL_4;
    }
    v17 = 0;
LABEL_12:
    v18 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v18 )
      {
LABEL_21:
        *(_QWORD *)&PortNumber = v33;
        v22 = v36 - v11;
        if ( (v18 & 1) != 0 && v22 )
        {
          if ( !(_BYTE)v33 && !v17 )
          {
            v17 = 1;
            if ( KeGetCurrentIrql() == 2 )
              *(_QWORD *)&PortNumber = 1LL;
            else
              LOBYTE(PortNumber) = 0;
            v33 = PortNumber;
          }
          v24 = v18;
          v25 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
          v26 = 2 * ((v24 >> 1) & 1);
          if ( (_BYTE)PortNumber )
          {
            v27 = (_QWORD *)(*(_QWORD *)(v25 + 8 * v26 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v27 += v22;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8 * v26 + 48), v22);
          }
        }
        v15 = v37;
        v8 = v34;
        v36 = v11;
        if ( !Alignment )
        {
          v12 = v17;
          v5 = v38;
          goto LABEL_24;
        }
        goto LABEL_12;
      }
      if ( !v18 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFDuLL);
      if ( (v18 & 4) != 0 )
        goto LABEL_50;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
        break;
      if ( (unsigned __int8)byte_1C00A026A >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
        goto LABEL_48;
      }
LABEL_50:
      v21 = v14 | 4;
LABEL_20:
      Alignment->NetBufferListInfo[27] = (void *)v21;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_21;
    }
    v20 = *SourceHandle;
    if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v20 == 5 )
    {
      if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
      {
        v8 = v34;
        ++v11;
        v21 = v14;
      }
      else
      {
        v8 = v34;
        v35 = ++v13;
        ++v11;
        v21 = 24LL;
      }
      goto LABEL_20;
    }
    if ( (unsigned __int8)byte_1C00A026A >= 3u )
    {
      WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v20);
LABEL_48:
      v15 = v37;
      v13 = v35;
    }
    v8 = v34;
    goto LABEL_50;
  }
LABEL_4:
  if ( byte_1C009FE30 )
  {
    v32 = *((_QWORD *)NdisFilterHandle + 110);
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 52) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 856, NetBufferList, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))NdisFilterHandle + 79))(
    NdisFilterHandle,
    NetBufferList,
    v5,
    SendFlags);
}
