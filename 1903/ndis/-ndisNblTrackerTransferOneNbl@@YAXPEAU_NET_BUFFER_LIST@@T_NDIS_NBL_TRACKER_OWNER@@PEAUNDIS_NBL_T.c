/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0040C28
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00AAB38 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  char *v9; // rcx

  v7 = a4;
  if ( !a2 && !a1[15] )
    a1[15] = ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, a3 & 0xFFFFFFFFFFFFFFFDuLL, a4);
  if ( (a2 & 4) != 0 )
    goto LABEL_8;
  v9 = (char *)a1[15];
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        11,
        (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
        (char)a1);
    }
LABEL_8:
    v7 |= 4uLL;
    goto LABEL_9;
  }
  if ( *v9 != 5 && (unsigned __int8)(*v9 - 17) > 1u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        12,
        (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
        (char)a1,
        *v9);
    }
    goto LABEL_8;
  }
  if ( v9 != a5 || a1[3] )
  {
    ++*a6;
  }
  else
  {
    v7 = 24LL;
    ++*a7;
    ++*a6;
  }
LABEL_9:
  a1[45] = v7;
}
