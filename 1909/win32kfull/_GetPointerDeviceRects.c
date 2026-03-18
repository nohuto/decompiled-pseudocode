/*
 * XREFs of _GetPointerDeviceRects @ 0x1C01081CC
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C01080B0 (NtUserGetPointerDeviceRects.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01F67D4 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6B10 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01F75D4 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     MiPGetPhysicalRect @ 0x1C010827C (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C01EF3A0 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0;
  v12 = 0LL;
  v6 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v12, &v15) )
  {
    if ( v15 )
    {
      if ( a3 )
        *a3 = *(_OWORD *)GetScreenRect(v14);
      if ( a2 )
        *a2 = *(_OWORD *)MiPGetPhysicalRect(v14);
    }
    else
    {
      EnsurePointerDeviceHasMonitor(v12);
      v10 = v12;
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v12 + 176);
        v8 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1336LL) && *(_DWORD *)(v10 + 24) != 7 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
          v10 = v12;
        }
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 16) + 1336LL) )
        {
          *a3 = *(_OWORD *)(v10 + 160);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v10, v9);
          PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
        }
        else
        {
          *a3 = *(_OWORD *)GetScreenRect(v14);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  return v6;
}
