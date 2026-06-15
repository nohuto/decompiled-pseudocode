/*
 * XREFs of ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800FDA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180066D78 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixById(
        CProcessSubmixManager *this,
        struct CAppSubmixClient *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdi
  struct IUnknown **v8; // rbp
  struct IUnknown **i; // rbx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  struct IProcessSubmixProxy *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IProcessSubmixProxy *v16; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h]

  v18 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v17 = v6;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(struct IUnknown ***)(v7 + 32);
  for ( i = *(struct IUnknown ***)(v7 + 24); i != v8; ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *))(*i)->lpVtbl[7].Release)(*i);
    if ( v10 == v18 )
      break;
  }
  if ( i == *(struct IUnknown ***)(v7 + 32) )
  {
    v11 = -2147023728;
    v12 = 493LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)v11);
    goto LABEL_14;
  }
  v11 = 0;
  if ( HasTooManyReferences(*i) )
  {
    v11 = -2147024882;
    v12 = 496LL;
    goto LABEL_9;
  }
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v16, (__int64)*i);
  v13 = v16;
  if ( v16 )
  {
    *a4 = v16;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
LABEL_14:
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v17);
  return v11;
}
