/*
 * XREFs of _GetPointerDeviceRects @ 0x1C00B9184
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C00B9260 (NtUserGetPointerDeviceRects.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01E07B4 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E0B10 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E159C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     MiPGetPhysicalRect @ 0x1C00B920C (MiPGetPhysicalRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01D2E08 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C01D9C30 (EnsurePointerDeviceHasMonitor.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, __m128i *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15[3]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v16 = 0LL;
  v17 = 0LL;
  if ( a1 == -1 )
    goto LABEL_2;
  if ( (unsigned int)FindPointerDevice(a1, &v17, &v16) )
  {
    if ( !v16 || *(_BYTE *)(v16 + 48) )
    {
      v10 = v17;
      if ( !v17 )
        goto LABEL_7;
      EnsurePointerDeviceHasMonitor(v17);
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v10 + 176);
        v12 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1192LL) && *(_DWORD *)(v10 + 24) != 7 )
          VirtualizeMultiMonDigitizerSize(a2);
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 16) + 1192LL) )
        {
          *a3 = *(__m128i *)(v10 + 160);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12, v11);
          PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
        }
        else
        {
          *a3 = *GetScreenRect(v15, v11);
        }
      }
      goto LABEL_6;
    }
LABEL_2:
    if ( a3 )
      *a3 = *GetScreenRect(v15, v7);
    if ( a2 )
      *a2 = *(_OWORD *)MiPGetPhysicalRect(v15);
LABEL_6:
    v6 = 1;
    goto LABEL_7;
  }
  if ( gptiCurrent )
  {
    v9 = *(_QWORD *)(gptiCurrent + 1256LL);
    if ( v9 )
    {
      if ( (*(_DWORD *)v9 & 1) != 0 && a1 == *(_QWORD *)(v9 + 40) )
        goto LABEL_2;
    }
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  return v6;
}
