/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0047BF4 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C0141370 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02692BC (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001DF94 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01415A4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0141900 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0141A68 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C0141A98 (DpiMiracastGetForcedMode.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // di
  int ForcedMode; // eax
  int v4; // r14d
  __int64 RenderAdapterForSession; // r15
  int MiracastSupportForFDO; // ebx
  __int64 v7; // rbx
  PVOID v8; // r14
  PVOID Tag; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  v11 = 0LL;
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_22;
  if ( ForcedMode == 1 )
    goto LABEL_8;
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( !RenderAdapterForSession )
    goto LABEL_8;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_16;
  v7 = *(_QWORD *)(RenderAdapterForSession + 2600);
  v11 = v7;
  if ( v4 != 2 )
  {
LABEL_8:
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)&Tag) >= 0 )
    {
      v8 = Tag;
      if ( Tag )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag);
        if ( *((_BYTE *)v8 + 483) )
        {
          DxgkStopCoreDripsBlockerTracking(*((_QWORD *)v8 + 477), 4023LL);
          DpiEnableD3Requests(*((_QWORD *)v8 + 3));
        }
        ExReleaseResourceLite(*((PERESOURCE *)v8 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, v8, 0x20u);
      }
    }
    xmmword_1C008EC00 = 0uLL;
    dword_1C008EC10 = 0;
LABEL_22:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_16;
  }
  DWORD1(xmmword_1C008EC00) = dword_1C008EB5C;
  LOBYTE(xmmword_1C008EC00) = 0;
  BYTE8(xmmword_1C008EC00) = 0;
  *(_QWORD *)((char *)&xmmword_1C008EC00 + 12) = v7;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C008EC00;
    *(_DWORD *)(a1 + 16) = dword_1C008EC10;
  }
  MiracastSupportForFDO = 0;
LABEL_16:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
