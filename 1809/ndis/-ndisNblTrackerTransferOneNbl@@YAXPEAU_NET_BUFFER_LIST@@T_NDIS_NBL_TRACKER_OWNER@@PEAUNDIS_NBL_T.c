/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0002090
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0001C90 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006B8B0 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // dl

  if ( !a2 && !a1[15] )
    a1[15] = ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL);
  if ( (a2 & 4) != 0 )
    goto LABEL_8;
  v9 = (unsigned __int8 *)a1[15];
  if ( !v9 )
  {
    if ( (unsigned __int8)byte_1C00A026A >= 3u )
      WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, a1);
    goto LABEL_8;
  }
  v10 = *v9;
  if ( (unsigned __int8)(*v9 - 17) > 1u && v10 != 5 )
  {
    if ( (unsigned __int8)byte_1C00A026A >= 3u )
      WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, a1, v10);
LABEL_8:
    a4 |= 4uLL;
    goto LABEL_7;
  }
  if ( v9 != a5 || a1[3] )
  {
    ++*a6;
LABEL_7:
    a1[45] = a4;
    return;
  }
  ++*a7;
  ++*a6;
  a1[45] = 24LL;
}
