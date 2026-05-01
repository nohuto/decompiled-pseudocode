/*
 * XREFs of ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180352A5C
 * Callers:
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803532F0 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180354360 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180014CFC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e8ef6de3eececed398ead8ca659a5b97___ @ 0x180350B34 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_e8ef6de3eececed398ead8ca659a5b97___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::RelaunchWithDelay(AccessibilityExperienceManager *this)
{
  int v1; // eax
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF
  __int64 v11; // [rsp+38h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+20h] BYREF

  v11 = 0LL;
  LODWORD(v10) = 1;
  v12 = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v1 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v11,
         (__int64)&GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
         &v12,
         (unsigned int *)&v10);
  if ( v1 < 0 )
  {
    v2 = (unsigned int)v1;
    v3 = 555LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v2);
    goto LABEL_6;
  }
  v10 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e8ef6de3eececed398ead8ca659a5b97___(v5, v4, v6, &v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v7 < 0 )
  {
    v2 = (unsigned int)v7;
    v3 = 575LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return 0LL;
}
