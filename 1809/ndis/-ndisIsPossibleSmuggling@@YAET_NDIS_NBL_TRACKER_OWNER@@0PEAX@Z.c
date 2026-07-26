/*
 * XREFs of ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C006AFEC
 * Callers:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 * Callees:
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

char __fastcall ndisIsPossibleSmuggling(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  bool v5; // zf

  if ( !a1 || !a2 )
    return 0;
  if ( a2 == 24 )
  {
    v2 = ndisSourceHandleFromOwner(a1);
    if ( v3 == v2 )
      return 0;
  }
  else if ( (a1 & 1) == (a2 & 1) )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (a1 & 4) != 0 || (a2 & 4) != 0 )
        return 0;
      v5 = ((a2 ^ a1) & 0xFFFFFFFFFFFFFFF8uLL) == 0;
    }
    else
    {
      v5 = a1 == a2;
    }
    if ( v5 )
      return 0;
  }
  return 1;
}
