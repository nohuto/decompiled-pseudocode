/*
 * XREFs of _GetPointerDeviceRects @ 0x1C00E05F0
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C00E04E0 (NtUserGetPointerDeviceRects.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01BDC24 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01BDF64 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01BE9A0 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C00E06E0 (EnsurePointerDeviceHasMonitor.c)
 *     _FindPointerDevice @ 0x1C00E0E14 (_FindPointerDevice.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0 (VirtualizeMultiMonDigitizerSize.c)
 *     MiPGetPhysicalRect @ 0x1C01B76D0 (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v15 = 0LL;
  v13[0] = 0LL;
  if ( !(unsigned int)FindPointerDevice(a1, v13, &v15) )
  {
    if ( !gptiCurrent )
      goto LABEL_10;
    v12 = *(_QWORD *)(gptiCurrent + 1248LL);
    if ( !v12 || (*(_DWORD *)v12 & 1) == 0 || a1 != *(_QWORD *)(v12 + 40) )
      goto LABEL_10;
LABEL_15:
    if ( a3 )
      *a3 = *(_OWORD *)GetScreenRect(v13);
    if ( a2 )
      *a2 = *(_OWORD *)MiPGetPhysicalRect(v13);
    goto LABEL_9;
  }
  if ( v15 && !*(_BYTE *)(v15 + 48) )
    goto LABEL_15;
  v7 = v13[0];
  if ( v13[0] )
  {
    EnsurePointerDeviceHasMonitor(v13[0]);
    if ( a2 )
    {
      *a2 = *(_OWORD *)(v7 + 176);
      v9 = gpDispInfo;
      if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v7 + 16) + 848LL) && *(_DWORD *)(v7 + 24) != 7 )
        VirtualizeMultiMonDigitizerSize(a2);
    }
    if ( a3 )
    {
      *a3 = *(_OWORD *)(v7 + 160);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9, v8);
      PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
    }
LABEL_9:
    v6 = 1;
  }
LABEL_10:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  return v6;
}
