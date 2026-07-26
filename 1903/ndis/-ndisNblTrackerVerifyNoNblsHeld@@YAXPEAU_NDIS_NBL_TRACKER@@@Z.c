/*
 * XREFs of ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AAC2C
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0022950 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ndisNblTrackerAreNblsOutstandingOnComponent @ 0x1C00AA40C (ndisNblTrackerAreNblsOutstandingOnComponent.c)
 */

void __fastcall ndisNblTrackerVerifyNoNblsHeld(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !ndisNblTrackerAreNblsOutstandingOnComponent(BugCheckParameter3, v2) )
  {
    if ( ++v2 >= 2 )
      return;
  }
  if ( !ndisNblTrackerLeakedNblDisposition )
    ndisBugCheckEx(0x27uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( ndisNblTrackerLeakedNblDisposition == 2 && !(_BYTE)KdDebuggerNotPresent )
    NT_ASSERT(
      "*** An NDIS driver has leaked an NET_BUFFER_LIST
    This is NOT a break in NDIS.sys
    The callstack has the dri"
      "ver with the leak.
");
}
