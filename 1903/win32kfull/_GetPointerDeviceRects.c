/*
 * XREFs of _GetPointerDeviceRects @ 0x1C012CF3C
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C012CE20 (NtUserGetPointerDeviceRects.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01F6A84 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6DC0 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01F7884 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022CB40 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     MiPGetPhysicalRect @ 0x1C012CFEC (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E7A38 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C01EF520 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0;
  v13 = 0LL;
  v6 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v13, &v16) )
  {
    if ( v16 )
    {
      if ( a3 )
        *a3 = *(_OWORD *)GetScreenRect(v15);
      if ( a2 )
        *a2 = *(_OWORD *)MiPGetPhysicalRect(v15);
    }
    else
    {
      EnsurePointerDeviceHasMonitor(v13);
      v11 = v13;
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v13 + 176);
        v8 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v11 + 16) + 1320LL) && *(_DWORD *)(v11 + 24) != 7 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
          v11 = v13;
        }
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 16) + 1320LL) )
        {
          *a3 = *(_OWORD *)(v11 + 160);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v11, v9, v10);
          PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
        }
        else
        {
          *a3 = *(_OWORD *)GetScreenRect(v15);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  return v6;
}
