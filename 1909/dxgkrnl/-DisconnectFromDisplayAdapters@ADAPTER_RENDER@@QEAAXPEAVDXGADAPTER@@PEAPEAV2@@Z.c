/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01F5474
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C024649C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6B04 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246EB0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  int v6; // r8d
  DXGADAPTER *v7; // rcx
  struct _LUID *v8; // rdx
  unsigned __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  _DXGK_WIN32K_PARAM_DATA v10; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v11[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[18]; // [rsp+B0h] [rbp-50h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, *((struct DXGADAPTER *const *)this + 2), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(v12, (unsigned int)(v6 + 1)) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL, 0LL);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL, 0LL);
  }
  *a3 = a2;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  memset(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 62;
  LOBYTE(v11[6]) = -1;
  memset(&v10, 0, sizeof(v10));
  v7 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v10.SDCFlags = 2447;
  DXGADAPTER::IsAddapterSessionized(v7, v8, 0LL, &v9);
  DxgkRequestAsyncDisplaySwitchCallout(&v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11, v9);
}
