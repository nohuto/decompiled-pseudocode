/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016EA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017688 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00177B0 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C016EC30 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // rbx
  struct DXGDEVICE **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGCONTEXT *v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGHWQUEUE *v37; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v38[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v39[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v40[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v41[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[88]; // [rsp+C8h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v11 = Current;
  if ( !Current )
  {
    LODWORD(v30) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33);
    WdLogEvent5_WdError(v32);
    return (unsigned int)v30;
  }
  v36[0] = 0LL;
  v37 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40, v6, Current, v36, 0);
  v12 = (struct DXGDEVICE **)v36[0];
  if ( v36[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v5, v11, &v37, 0);
    Global = DXGGLOBAL::GetGlobal(v14, v13);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGGLOBAL *)((char *)Global + 1240), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    v18 = *((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 141);
    v21 = DXGGLOBAL::GetGlobal(v20, v19);
    if ( v18 || *((_DWORD *)v21 + 280) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v23, v22) + 307) != 4 )
      {
        v24 = (__int64)v12[2];
        v25 = *(_QWORD *)(v24 + 1728);
        if ( v25 == *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v12[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, v24, 1, v26, 0);
          v27 = COREDEVICEACCESS::AcquireShared((__int64)v41, 0xFFFFFFFF, 0LL);
          v30 = v27;
          if ( v27 < 0 )
          {
            v35 = WdLogNewEntry5_WdEvent(v28);
            *(_QWORD *)(v35 + 24) = v30;
            *(_QWORD *)(v35 + 32) = v24;
            WdLogEvent5_WdEvent(v35);
            COREACCESS::~COREACCESS((COREACCESS *)v43);
            COREACCESS::~COREACCESS((COREACCESS *)v42);
            if ( v36[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v24 + 1784) )
          {
            LOBYTE(v29) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 2560) + 520LL)
                                                                         + 8LL)
                                                             + 560LL))(
              *(_QWORD *)(v24 + 656),
              3LL,
              v29);
            *(_BYTE *)(v24 + 1784) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v43);
          COREACCESS::~COREACCESS((COREACCESS *)v42);
          if ( v36[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        }
      }
      LODWORD(v30) = PresentCddShadowBuffer((struct DXGCONTEXT *)v12, v37, a3);
    }
    else
    {
      LODWORD(v30) = -1073741823;
    }
LABEL_12:
    if ( v38[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v22);
    goto LABEL_15;
  }
  LODWORD(v30) = 0;
LABEL_15:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
  return (unsigned int)v30;
}
