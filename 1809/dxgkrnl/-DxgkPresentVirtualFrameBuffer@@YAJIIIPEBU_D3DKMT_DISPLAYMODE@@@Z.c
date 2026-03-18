/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01574D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  struct DXGDEVICE **v10; // rsi
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DXGCONTEXT *v31[2]; // [rsp+38h] [rbp-69h] BYREF
  struct DXGHWQUEUE *v32; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v34[16]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v35[24]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v37[32]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v38[56]; // [rsp+B0h] [rbp+Fh] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    LODWORD(v25) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v29, v28);
    WdLogEvent5_WdError(v27);
    return (unsigned int)v25;
  }
  v31[0] = 0LL;
  v32 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35, a1, Current, v31, 0);
  v10 = (struct DXGDEVICE **)v31[0];
  if ( v31[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34, a2, v9, &v32, 0);
    Global = DXGGLOBAL::GetGlobal(v11);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGGLOBAL *)((char *)Global + 1272), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 145);
    v16 = DXGGLOBAL::GetGlobal(v15);
    if ( v14 || *((_DWORD *)v16 + 288) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 315) != 4 )
      {
        v18 = (__int64)v10[2];
        v19 = *(_QWORD *)(v18 + 1728);
        if ( v19 == *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v10[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, v18, 1, v20, 0);
          v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36);
          v25 = v21;
          if ( v21 < 0 )
          {
            v30 = WdLogNewEntry5_WdEvent(v23, v22);
            *(_QWORD *)(v30 + 24) = v25;
            *(_QWORD *)(v30 + 32) = v18;
            WdLogEvent5_WdEvent(v30);
            COREACCESS::~COREACCESS((COREACCESS *)v38);
            COREACCESS::~COREACCESS((COREACCESS *)v37);
            if ( v31[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v18 + 1784) )
          {
            LOBYTE(v24) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 2528) + 520LL)
                                                                         + 8LL)
                                                             + 560LL))(
              *(_QWORD *)(v18 + 656),
              3LL,
              v24);
            *(_BYTE *)(v18 + 1784) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v38);
          COREACCESS::~COREACCESS((COREACCESS *)v37);
          if ( v31[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
        }
      }
      LODWORD(v25) = PresentCddShadowBuffer((struct DXGCONTEXT *)v10, v32, a3);
    }
    else
    {
      LODWORD(v25) = -1073741823;
    }
LABEL_12:
    if ( v33[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34);
    goto LABEL_15;
  }
  LODWORD(v25) = 0;
LABEL_15:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
  return (unsigned int)v25;
}
