/*
 * XREFs of GreDwmStartup @ 0x1C007AC84
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 * Callees:
 *     GreSfmDwmStartup @ 0x1C007AEB4 (GreSfmDwmStartup.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YAHXZ @ 0x1C007AF4C (-bDwmChildWindowDpiIsolationEnabled@@YAHXZ.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1C007B07C (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C007B258 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1C007B374 (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C007B4A0 (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1C007B5D8 (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C007B77C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C007C150 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AC04 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B9A0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008CC4C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmStartup(__int64 a1)
{
  int v1; // esi
  int v3; // r15d
  int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 RectRgn; // rax
  void *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v15; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v16; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0;
  v11 = a1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v3 = 0;
  v4 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v16);
  v5 = 1;
  v6 = PALLOCMEM2(0x158uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 176) = a1;
    LOBYTE(v3) = (int)GrepDwmCreateComposedEvent((struct DwmState *)v6) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    *(_QWORD *)(v7 + 184) = RectRgn;
    LOBYTE(v4) = RectRgn != 0;
    RtlInitializeGenericTable(
      (PRTL_GENERIC_TABLE)v7,
      HwndLookupCompareTableData,
      HwndLookupAllocTableData,
      HwndLookupFreeTableData,
      0LL);
    GreInitializePushLock(v7 + 72);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    *(&ObjectAttributes.Attributes + 1) = 0;
    *(_QWORD *)(v7 + 88) = v7 + 80;
    *(_QWORD *)(v7 + 80) = v7 + 80;
    ObjectAttributes.Length = 48;
    *(_QWORD *)(v7 + 112) = v7 + 104;
    *(_QWORD *)(v7 + 104) = v7 + 104;
    *(_QWORD *)(v7 + 128) = v7 + 120;
    *(_QWORD *)(v7 + 120) = v7 + 120;
    *(_QWORD *)(v7 + 336) = 0LL;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v1) = ZwCreateEvent((PHANDLE)(v7 + 336), 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v3 && v4 && v1 )
    {
      g_pDwmState = (struct DwmState *)v7;
      v7 = 0LL;
      SpRenderHint(&v11, 0x10000LL, 0LL, 0LL);
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
      GreDeleteObject(*(_QWORD *)(v7 + 184));
    if ( v3 )
    {
      v10 = *(void **)(v7 + 328);
      if ( v10 )
      {
        ObCloseHandle(v10, 0);
        *(_QWORD *)(v7 + 328) = 0LL;
      }
    }
    if ( v1 )
      ZwClose(*(HANDLE *)(v7 + 336));
    Win32FreePool(v7);
  }
  if ( v3 && v4 && v1 )
    GreSfmDwmStartup();
  LEAVE_GRE_DWM_CRIT(a1, v16);
  if ( !v3 || !v4 || !v1 )
    return 0;
  return v5;
}
