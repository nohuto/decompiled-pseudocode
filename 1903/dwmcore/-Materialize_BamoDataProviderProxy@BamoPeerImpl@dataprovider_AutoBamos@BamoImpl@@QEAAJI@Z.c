/*
 * XREFs of ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E2860
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800E2730 (-Thunk_Materialize_BamoDataProviderProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x1800E2D90 (--0DataProviderProxy@@QEAA@XZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E2E30 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1800E684C (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataProviderProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  DataProviderProxy *v4; // rax
  __int64 v5; // r8
  DataProviderProxy *v6; // rbx
  DataProviderProxy *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 24LL));
  v4 = (DataProviderProxy *)DefaultHeap::AllocClear(0x90uLL);
  v6 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  memset_0(v4, 0, 0x90uLL);
  v7 = DataProviderProxy::DataProviderProxy(v6);
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL,
      v13);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BC5,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      v14);
    __debugbreak();
  }
  v8 = v16;
  if ( v16 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  v9 = (*(__int64 (__fastcall **)(DataProviderProxy *))(*(_QWORD *)v7 + 48LL))(v7);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v9 + 16, this);
  *(_DWORD *)(v9 + 24) = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          *((unsigned int *)this + 9),
          a2,
          v9);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26E2,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v11,
      v13);
    JUMPOUT(0x18015262CLL);
  }
  return 0LL;
}
