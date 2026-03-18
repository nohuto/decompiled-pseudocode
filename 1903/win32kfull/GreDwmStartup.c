/*
 * XREFs of GreDwmStartup @ 0x1C00DAF94
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 * Callees:
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0046234 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0046FD0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C004827C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     GreSfmDwmStartup @ 0x1C00DB1C4 (GreSfmDwmStartup.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YAHXZ @ 0x1C00DB25C (-bDwmChildWindowDpiIsolationEnabled@@YAHXZ.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1C00DB38C (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C00DB568 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1C00DB684 (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C00DB7B0 (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1C00DB8E8 (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00DBA8C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00DC460 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmStartup(__int64 a1)
{
  int v1; // esi
  int v3; // r15d
  int v4; // r14d
  unsigned int v5; // edi
  struct _RTL_GENERIC_TABLE *v6; // rax
  struct _RTL_GENERIC_TABLE *v7; // rbx
  __int64 RectRgn; // rax
  PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v15; // [rsp+C0h] [rbp+50h] BYREF
  int v16; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0;
  v11 = a1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v3 = 0;
  v4 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v16);
  v5 = 1;
  v6 = (struct _RTL_GENERIC_TABLE *)PALLOCMEM2(0x158uLL, 1935885383LL, 1);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v6[2].WhichOrderedElement = a1;
    LOBYTE(v3) = (int)GrepDwmCreateComposedEvent((struct DwmState *)v6) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v7[2].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)RectRgn;
    LOBYTE(v4) = RectRgn != 0;
    RtlInitializeGenericTable(v7, HwndLookupCompareTableData, HwndLookupAllocTableData, HwndLookupFreeTableData, 0LL);
    GreInitializePushLock(&v7[1]);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    *(&ObjectAttributes.Attributes + 1) = 0;
    v7[1].InsertOrderList.Blink = &v7[1].InsertOrderList;
    v7[1].InsertOrderList.Flink = &v7[1].InsertOrderList;
    ObjectAttributes.Length = 48;
    v7[1].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)&v7[1].WhichOrderedElement;
    *(_QWORD *)&v7[1].WhichOrderedElement = (char *)v7 + 104;
    v7[1].FreeRoutine = (PRTL_GENERIC_FREE_ROUTINE)&v7[1].AllocateRoutine;
    v7[1].AllocateRoutine = (PRTL_GENERIC_ALLOCATE_ROUTINE)&v7[1].AllocateRoutine;
    v7[4].AllocateRoutine = 0LL;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v1) = ZwCreateEvent((PHANDLE)&v7[4].AllocateRoutine, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v3 && v4 && v1 )
    {
      g_pDwmState = (struct DwmState *)v7;
      v7 = 0LL;
      SpRenderHint((struct PDEVOBJ *)&v11, 0x10000u, 0LL, 0LL);
      vAccNotify(
        (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2552) != 0LL)),
        6u,
        (void *)1);
    }
    gfDwmDeviceBitmapsEnabled = bDwmDeviceBitmapsEnabled();
    gfDwmDeviceBitmapsEnabledForMultiAdapter = bDwmDeviceBitmapsEnabledForMultiAdapter();
    gfDwmOverlayTestMode = bDwmOverlayTestMode();
    gfDwmDesktopOverlaysEnabled = bDwmDesktopOverlaysEnabled();
    if ( (unsigned int)bDwmResizeOptimizationOverride(&v13, &v14, &v15) )
    {
      gdwDwmResizeOptimizationOptions = v13;
      gdwDwmResizeTimeoutGdi = v14;
      gdwDwmResizeTimeoutModern = v15;
      gfDwmResizeOptimizationOverride = 1;
    }
    gfDwmChildWindowDpiIsolationEnabled = bDwmChildWindowDpiIsolationEnabled();
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( v7 )
  {
    if ( v4 )
      GreDeleteObject(v7[2].CompareRoutine);
    if ( v3 )
    {
      CompareRoutine = v7[4].CompareRoutine;
      if ( CompareRoutine )
      {
        ObCloseHandle(CompareRoutine, 0);
        v7[4].CompareRoutine = 0LL;
      }
    }
    if ( v1 )
      ZwClose(v7[4].AllocateRoutine);
    Win32FreePool(v7);
  }
  if ( v3 && v4 && v1 )
    GreSfmDwmStartup();
  LEAVE_GRE_DWM_CRIT(a1, v16);
  if ( !v3 || !v4 || !v1 )
    return 0;
  return v5;
}
