/*
 * XREFs of ?IsActionCenterOpen@CScreenClippingExperienceManager@@AEAA_NXZ @ 0x1801AF390
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ADFA0 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801ACFB4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CScreenClippingExperienceManager::IsActionCenterOpen(CScreenClippingExperienceManager *this)
{
  bool v1; // bl
  int ActionCenterBaseExperienceManager; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v8 = 0LL;
  ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(
                                        (__int64)this,
                                        &v8);
  v3 = retaddr;
  if ( ActionCenterBaseExperienceManager >= 0 )
  {
    v7 = 0;
    ActionCenterBaseExperienceManager = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
    v3 = retaddr;
    if ( ActionCenterBaseExperienceManager >= 0 )
    {
      v1 = v7 != 0;
      goto LABEL_7;
    }
    v4 = 1284LL;
  }
  else
  {
    v4 = 1278LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v3,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActionCenterBaseExperienceManager);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v1;
}
