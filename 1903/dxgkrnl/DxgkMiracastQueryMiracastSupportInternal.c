/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C01530B0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A46D4 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001D9D0 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0153260 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0153598 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01536A0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C01536F8 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // bl
  int ForcedMode; // eax
  int v4; // r14d
  struct _COMMON_PNP_CONTEXT *RenderAdapterForSession; // rax
  struct _COMMON_PNP_CONTEXT *v6; // r15
  int MiracastSupportForFDO; // edi
  __int64 v8; // rdi
  PVOID v9; // r14
  PVOID Tag; // [rsp+28h] [rbp-8h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_22;
  if ( ForcedMode == 1 )
    goto LABEL_8;
  RenderAdapterForSession = (struct _COMMON_PNP_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
  v6 = RenderAdapterForSession;
  if ( !RenderAdapterForSession )
    goto LABEL_8;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_16;
  v8 = *((_QWORD *)v6 + 334);
  if ( v4 != 2 )
  {
LABEL_8:
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)&Tag) >= 0 )
    {
      v9 = Tag;
      if ( Tag )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag);
        if ( *((_BYTE *)v9 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v9 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v9 + 2, v9, 0x20u);
      }
    }
    xmmword_1C00A2C00 = 0uLL;
    dword_1C00A2C10 = 0;
LABEL_22:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_16;
  }
  DWORD1(xmmword_1C00A2C00) = dword_1C00A2B5C;
  LOBYTE(xmmword_1C00A2C00) = 0;
  BYTE8(xmmword_1C00A2C00) = 0;
  *(_QWORD *)((char *)&xmmword_1C00A2C00 + 12) = v8;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C00A2C00;
    *(_DWORD *)(a1 + 16) = dword_1C00A2C10;
  }
  MiracastSupportForFDO = 0;
LABEL_16:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
