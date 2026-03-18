/*
 * XREFs of ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0148D70
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00EE12C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0148E74 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyProcessFreeze(struct DXGADAPTER **this, struct DXGPROCESS *a2)
{
  struct DXGADAPTER *v4; // rcx
  __int64 v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-C8h] BYREF
  struct DXGADAPTER *v7; // [rsp+28h] [rbp-C0h]
  char v8; // [rsp+30h] [rbp-B8h]
  _BYTE v9[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v10[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v11[72]; // [rsp+88h] [rbp-60h] BYREF

  if ( !DXGADAPTER::IsDxgmms2(this[2]) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, v4, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v9, 0xFFFFFFFFLL, v5) < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v11);
      COREACCESS::~COREACCESS((COREACCESS *)v10);
      return;
    }
    ADAPTER_RENDER::PurgeSegments(this, 25LL, a2);
    COREACCESS::~COREACCESS((COREACCESS *)v11);
    COREACCESS::~COREACCESS((COREACCESS *)v10);
    v4 = this[2];
  }
  v7 = v4;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *((_DWORD *)this[2] + 44) == 1 )
    (*(void (__fastcall **)(struct DXGADAPTER *))(*((_QWORD *)this[68] + 1) + 1088LL))(this[69]);
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
}
