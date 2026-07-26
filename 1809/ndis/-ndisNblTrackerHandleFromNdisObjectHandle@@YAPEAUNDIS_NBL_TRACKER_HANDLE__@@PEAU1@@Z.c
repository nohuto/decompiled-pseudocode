/*
 * XREFs of ?ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z @ 0x1C006B144
 * Callers:
 *     NdisNblTrackerTransferOwnership @ 0x1C006BA70 (NdisNblTrackerTransferOwnership.c)
 * Callees:
 *     <none>
 */

struct NDIS_NBL_TRACKER_HANDLE__ *__fastcall ndisNblTrackerHandleFromNdisObjectHandle(
        struct NDIS_NBL_TRACKER_HANDLE__ *a1)
{
  if ( !a1 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 1) == 0 && ((unsigned __int8)a1 & 2) == 0 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 5:
        return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 83);
      case 0x11:
        return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 514);
      case 0x12:
        return (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)a1 + 73);
    }
  }
  return a1;
}
