/*
 * XREFs of ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180243430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x18023ED24 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802433C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Deskt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::RequestCloseAsync(__int64 a1, AppRequestOperation **a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  AppRequestOperation *v9; // rbx
  AppRequestOperation *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  AppRequestOperation *v13; // [rsp+60h] [rbp+30h] BYREF
  AppRequestOperation *v14; // [rsp+68h] [rbp+38h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsageToService(
    a1,
    (__int64)a2,
    a3);
  v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v5);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1587LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_12;
  }
  if ( *(_QWORD *)(a1 + 472) )
  {
    v10 = v13;
    _InterlockedExchange((volatile __int32 *)v13 + 44, 1);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v10 + 2) + 128LL))((__int64)v10 + 16);
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 128LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL),
         *(unsigned int *)(a1 + 140));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1593LL;
    goto LABEL_6;
  }
  v9 = v13;
  if ( *(AppRequestOperation **)(a1 + 472) != v13 )
  {
    v14 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v14 = *(AppRequestOperation **)(a1 + 472);
    *(_QWORD *)(a1 + 472) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_10:
    v9 = v13;
  }
  v13 = 0LL;
  *a2 = v9;
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v7;
}
