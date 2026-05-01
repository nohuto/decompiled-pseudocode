/*
 * XREFs of ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023FE10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800142A0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::GetBarFlyoutExperienceManager(
        PeoplePaneViewManager *this,
        const struct _GUID *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v6 = CMarshaledInterface::_Unmarshal(
         (PeoplePaneViewManager *)((char *)this + 448),
         &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c,
         (struct IInspectable **)&v11,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1111LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v11)(v11, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1113LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
