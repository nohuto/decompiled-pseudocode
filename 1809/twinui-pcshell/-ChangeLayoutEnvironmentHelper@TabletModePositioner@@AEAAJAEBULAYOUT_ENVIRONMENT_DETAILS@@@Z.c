/*
 * XREFs of ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180344E90
 * Callers:
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x180348A8C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180347EE0 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::ChangeLayoutEnvironmentHelper(
        IUnknown *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             this,
             &CLSID_TabletModePositionerOperation,
             &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
             (void **)&v9);
  v5 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, const struct LAYOUT_ENVIRONMENT_DETAILS *))v9->lpVtbl[2].Release)(
               v9,
               a2);
    v5 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)this, v9);
      v5 = inited;
      if ( inited >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 2706LL;
    }
    else
    {
      v6 = 2705LL;
    }
  }
  else
  {
    v6 = 2704LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v5;
}
