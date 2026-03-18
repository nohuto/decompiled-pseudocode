/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01C6278
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0212020 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC (-IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01C78D0 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0212BC0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  int v6; // r8d
  DXGADAPTER *v7; // rcx
  struct _LUID *v8; // rdx
  unsigned __int64 v9; // [rsp+20h] [rbp-A9h] BYREF
  _DXGK_WIN32K_PARAM_DATA v10; // [rsp+28h] [rbp-A1h] BYREF
  _QWORD v11[10]; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v12[10]; // [rsp+A0h] [rbp-29h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, *((struct DXGADAPTER *const *)this + 2), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(v11, (unsigned int)(v6 + 1)) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL);
  }
  *a3 = a2;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 62;
  LOBYTE(v12[6]) = -1;
  memset(&v10, 0, sizeof(v10));
  v7 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v10.SDCFlags = 2447;
  DXGADAPTER::IsAddapterSessionized(v7, v8, 0LL, &v9);
  DxgkRequestAsyncDisplaySwitchCallout(&v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v12, v9);
}
