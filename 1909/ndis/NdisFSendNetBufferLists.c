/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C000F5D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D34 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00AA1E0 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  NDIS_PORT_NUMBER v5; // r15d
  struct NDIS_NBL_TRACKER_HANDLE__ *v8; // r11
  char v9; // r10
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rcx
  char v12; // di
  __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  char *v16; // r9
  PNET_BUFFER_LIST Alignment; // r13
  unsigned __int64 v18; // rdi
  _UNKNOWN **v19; // r10
  char *SourceHandle; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  char *v34; // [rsp+50h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v35; // [rsp+58h] [rbp-50h]
  __int64 v36; // [rsp+60h] [rbp-48h]
  char v37; // [rsp+B0h] [rbp+8h]
  NDIS_PORT_NUMBER v38; // [rsp+C0h] [rbp+18h]

  v38 = PortNumber;
  v5 = PortNumber;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferList, PortNumber, SendFlags, (ULONG_PTR)NdisFilterHandle);
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v8 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 82);
    v9 = 0;
    v10 = *((_QWORD *)NdisFilterHandle + 56);
    LODWORD(v11) = SendFlags & 1;
    v12 = ndisNblTrackerEpoch;
    v13 = 0LL;
    v14 = 0LL;
    v36 = 0LL;
    *(_QWORD *)&PortNumber = 0LL;
    v32 = (int)v11;
    v35 = v8;
    v33 = 0LL;
    v37 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferList, v8, 0x90u, (void *)v10, (unsigned int)v11);
      LOBYTE(v11) = v32;
      *(_QWORD *)&PortNumber = 0LL;
      v8 = v35;
      v9 = 0;
    }
    v15 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 1) != 0 )
    {
      v16 = *(char **)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v15 |= 2LL * (v12 & 1);
    }
    else
    {
      v16 = (char *)v15;
    }
    v34 = v16;
    Alignment = NetBufferList;
    if ( !NetBufferList )
    {
LABEL_32:
      v26 = v13 - *(_QWORD *)&PortNumber;
      if ( (v15 & 1) != 0 && v26 )
      {
        if ( !(_BYTE)v11 && !v9 )
          LOBYTE(v11) = KeGetCurrentIrql() == 2;
        v27 = v15;
        v28 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
        v29 = 2 * ((v27 >> 1) & 1);
        if ( (_BYTE)v11 )
        {
          v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v30 += v26;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v26);
        }
      }
      goto LABEL_4;
    }
LABEL_11:
    v18 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    v19 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v18 )
      {
LABEL_20:
        LODWORD(v11) = v32;
        v22 = v36 - v13;
        v9 = v37;
        if ( (v18 & 1) != 0 && v22 )
        {
          if ( !(_BYTE)v32 && !v37 )
          {
            v9 = 1;
            v37 = 1;
            if ( KeGetCurrentIrql() == 2 )
              LODWORD(v11) = 1;
            else
              LOBYTE(v11) = 0;
            v32 = (int)v11;
          }
          v23 = v18;
          v24 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
          v25 = 2 * ((v23 >> 1) & 1);
          if ( (_BYTE)v11 )
          {
            v11 = (_QWORD *)(*(_QWORD *)(v24 + 8 * v25 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v11 += v22;
            LOBYTE(v11) = v32;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8 * v25 + 48), v22);
          }
          *(_QWORD *)&PortNumber = v33;
        }
        v14 = v13;
        v36 = v13;
        if ( !Alignment )
        {
          v5 = v38;
          goto LABEL_32;
        }
        goto LABEL_11;
      }
      if ( !v18 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFDuLL,
                                            v14,
                                            *(_QWORD *)&PortNumber,
                                            v16);
      if ( (v18 & 4) != 0 )
        goto LABEL_49;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        v14 = (unsigned __int8)*SourceHandle;
        if ( (unsigned __int8)(v14 - 17) <= 1u || (_BYTE)v14 == 5 )
        {
          if ( SourceHandle != v16 || Alignment->ParentNetBufferList )
          {
            ++v13;
            v21 = v15;
          }
          else
          {
            ++*(_QWORD *)&PortNumber;
            v21 = 24LL;
            v33 = *(_QWORD *)&PortNumber;
            ++v13;
          }
          goto LABEL_19;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v19 )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            *SourceHandle);
          goto LABEL_48;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v19 )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_48:
        *(_QWORD *)&PortNumber = v33;
        v19 = &WPP_RECORDER_INITIALIZED;
        v16 = v34;
        v8 = v35;
      }
LABEL_49:
      v21 = v15 | 4;
LABEL_19:
      Alignment->NetBufferListInfo[27] = (void *)v21;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_20;
    }
  }
LABEL_4:
  if ( byte_1C00E5E20 )
  {
    v31 = *((_QWORD *)NdisFilterHandle + 102);
    if ( v31 )
    {
      if ( (*(_DWORD *)(v31 + 12) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 808, NetBufferList, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))NdisFilterHandle + 78))(
    NdisFilterHandle,
    NetBufferList,
    v5,
    SendFlags);
}
