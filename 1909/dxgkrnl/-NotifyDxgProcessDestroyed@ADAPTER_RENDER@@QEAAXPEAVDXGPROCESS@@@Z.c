/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C020F668
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C025DD00 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C020F71C (-NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER *const *this, struct DXGPROCESS *a2)
{
  __int64 v4; // r8
  DXGVIRTUALGPUMANAGER *v5; // rcx
  DXGVIRTUALGPUMANAGER *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v9[72]; // [rsp+68h] [rbp-60h] BYREF

  if ( (*((_BYTE *)a2 + 299) & 2) != 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v7, 0xFFFFFFFFLL, v4) >= 0 )
    {
      v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 188);
      if ( v5 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v5, a2);
      v6 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 187);
      if ( v6 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v6, a2);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v9);
    COREACCESS::~COREACCESS((COREACCESS *)v8);
  }
}
