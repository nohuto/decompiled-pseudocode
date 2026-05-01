/*
 * XREFs of ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x180131F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18012BB68 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetSizeConstraintOverrides(
        CApplicationManager *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  struct tagSIZE *v10; // r15
  struct tagSIZE *v11; // r12
  RTL_SRWLOCK *v12; // rbx
  int First; // edi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0LL;
  v10 = a5;
  *a5 = 0LL;
  v11 = a6;
  *a6 = 0LL;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  a5 = 0LL;
  a6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (__int64)this - 216,
            &a6,
            &a5,
            0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  if ( First < 0 )
  {
    v14 = (unsigned int)First;
    v15 = 2302LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v14);
    goto LABEL_10;
  }
  v16 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 576LL))(
          a5,
          a3,
          v10);
  First = v16;
  if ( v16 < 0 )
  {
    v15 = 2303LL;
LABEL_7:
    v14 = (unsigned int)v16;
    goto LABEL_8;
  }
  v16 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 584LL))(
          a5,
          a4,
          v11);
  First = v16;
  if ( v16 < 0 )
  {
    v15 = 2304LL;
    goto LABEL_7;
  }
  First = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  if ( v12 )
    ReleaseSRWLockShared(v12);
  return (unsigned int)First;
}
