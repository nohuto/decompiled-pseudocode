/*
 * XREFs of ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180051A60
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180051190 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18002991C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x180051AF0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x180051BE0 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x180051C3C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180051E18 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::RuntimeClassInitialize(void **this)
{
  int Instance; // edi
  const struct _GUID *v3; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = CApplicationViewBase::RuntimeClassInitialize((CApplicationViewBase *)this);
  if ( Instance < 0 )
  {
    v5 = 34LL;
  }
  else
  {
    v3 = (const struct _GUID *)this[28];
    if ( v3 )
    {
      this[28] = 0LL;
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v3->Data1 + 16LL))(v3);
    }
    Instance = AppSizeConstraintsCache_CreateInstance(v3, this + 28);
    if ( Instance < 0 )
    {
      v5 = 35LL;
    }
    else
    {
      Instance = CWin32ApplicationView::InitializeCloakType(this, 0LL);
      if ( Instance < 0 )
      {
        v5 = 36LL;
      }
      else
      {
        Instance = CWin32ApplicationView::SetForceActiveWindowAppearance((CWin32ApplicationView *)this, 0);
        if ( Instance >= 0 )
        {
          CWin32ApplicationView::QuerySizeConstraintsFromApp((CWin32ApplicationView *)this);
          return 0LL;
        }
        v5 = 37LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
