/*
 * XREFs of ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00B416C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AA5D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B402C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C007792C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 */

void __fastcall PDEV::InitializeClientReferenceCount(PDEV *this)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v1; // rdx

  v1 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)this + 443);
  *((_DWORD *)this + 2) = 1;
  if ( v1 )
    TrackObjectReferenceInitialization(1u, v1, 1u);
}
