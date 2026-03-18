/*
 * XREFs of ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180074CB4
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074AD0 (-Thunk_Materialize_BamoDataProviderProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x180075020 (--0DataProviderProxy@@QEAA@XZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800750C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18007BDEC (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataProviderProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  DataProviderProxy *v4; // rax
  DataProviderProxy *v5; // rbx
  DataProviderProxy *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 24LL));
  v4 = (DataProviderProxy *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v4, 0, 0x90uLL);
  v6 = DataProviderProxy::DataProviderProxy(v5);
  if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL,
      v12);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BC5,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      v13);
    __debugbreak();
  }
  v7 = v15;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  v8 = (*(__int64 (__fastcall **)(DataProviderProxy *))(*(_QWORD *)v6 + 48LL))(v6);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v8 + 16, this);
  *(_DWORD *)(v8 + 24) = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 40LL))(
          v9,
          *((unsigned int *)this + 9),
          a2,
          v8);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26E2,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
    JUMPOUT(0x180117926LL);
  }
  return 0LL;
}
