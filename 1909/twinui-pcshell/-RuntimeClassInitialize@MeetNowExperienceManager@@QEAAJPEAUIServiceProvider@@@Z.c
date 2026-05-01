/*
 * XREFs of ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009A104
 * Callers:
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180096A54 (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18005066C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     BaseTrayFlyoutExperienceManager_CreateInstanceWithTest @ 0x18009B1E0 (BaseTrayFlyoutExperienceManager_CreateInstanceWithTest.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MeetNowExperienceManager::RuntimeClassInitialize(
        MeetNowExperienceManager *this,
        struct IServiceProvider *a2)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  int InstanceWithTest; // ebx
  __int64 v8; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)this + 56;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  InstanceWithTest = BaseTrayFlyoutExperienceManager_CreateInstanceWithTest(a2, v5, v6, v4);
  if ( InstanceWithTest < 0 )
  {
    v8 = 90LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)InstanceWithTest);
    return (unsigned int)InstanceWithTest;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 9, (__int64)this);
  *(_QWORD *)(*(_QWORD *)v4 + 368LL) = ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
  *(_BYTE *)(*(_QWORD *)v4 + 449LL) = 1;
  QueryService = a2->lpVtbl->QueryService;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)this + 8);
  InstanceWithTest = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
                       a2,
                       &IID_IImmersiveWindowMessageService,
                       &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                       v11);
  if ( InstanceWithTest < 0 )
  {
    v8 = 96LL;
    goto LABEL_3;
  }
  InstanceWithTest = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(**((_QWORD **)this + 8) + 24LL))(
                       *((_QWORD *)this + 8),
                       0LL,
                       (char *)this + 24,
                       (char *)this + 400);
  if ( InstanceWithTest < 0 )
  {
    v8 = 97LL;
    goto LABEL_3;
  }
  return 0LL;
}
