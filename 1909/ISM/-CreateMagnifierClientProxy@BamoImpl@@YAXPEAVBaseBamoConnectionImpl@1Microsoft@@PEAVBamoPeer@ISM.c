/*
 * XREFs of ?CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005BD54
 * Callers:
 *     ?Materialize_BamoMagnifierClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18005EAF8 (-Materialize_BamoMagnifierClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0MagnifierClientProxy@@QEAA@AEBV?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@@Z @ 0x18006F678 (--0MagnifierClientProxy@@QEAA@AEBV-$ComPtr@VMagnifierServer@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateMagnifierClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // rdi
  const char *v11; // r9
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    this);
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v6 + 16);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v7 + 152) + 8LL) + 56LL))(*(_QWORD *)(v7 + 152) + 8LL);
  v9 = operator new(0x50uLL);
  v14 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
  v10 = MagnifierClientProxy::MagnifierClientProxy(v9, &v14);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v14);
  v12 = v15;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      59293LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      v11);
    __debugbreak();
  }
}
