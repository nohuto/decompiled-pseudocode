/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C011E034 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007044 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008938 (DpiDisableD3Requests.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000C7B8 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00197A8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0121D98 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0144E58 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C01491C4 (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rax
  __int64 v5; // r9
  int *i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  DXGDEVICE *v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h]
  _BYTE v15[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  char v17; // [rsp+50h] [rbp-B0h]
  _BYTE v18[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[88]; // [rsp+B8h] [rbp-48h] BYREF

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 185) )
  {
    v14 = 0;
    v13 = this;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13);
      v3 = 1;
    }
    v4 = *((_QWORD *)this + 2);
    v17 = 0;
    v16 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)this, 0, v5, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((__int64)v19, 0x827u, 0LL) >= 0 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v18, (struct _KTHREAD **)this + 38);
      for ( i = (int *)*((_QWORD *)this + 45); i != (int *)((char *)this + 360) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          0,
          i[100]);
        *((_BYTE *)i + 445) = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          DpiDisableD3Requests(*(_QWORD *)(v10 + 192));
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v19);
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 1u);
          DXGDEVICE::FlushPagingQueues(this);
          LOBYTE(v11) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                  + 1112LL))(
            *((_QWORD *)this + 81),
            v11);
          DpiEnableD3Requests(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL));
        }
        else
        {
          DXGDEVICE::FlushScheduler(this, 1LL);
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
          DXGDEVICE::TrimAllDmaPoolsToMinimum(this);
        }
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v12 + 24) = this;
        WdLogEvent5_WdWarning(v12);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    if ( v17 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    if ( v13 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13);
  }
}
