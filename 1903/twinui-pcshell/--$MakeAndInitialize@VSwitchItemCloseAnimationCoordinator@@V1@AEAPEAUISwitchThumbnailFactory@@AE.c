/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x18037B294
 * Callers:
 *     ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18037B9C0 (-SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18037B340 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x18037B85C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x180384840 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCloseAnimationCoordinator,SwitchItemCloseAnimationCoordinator,ISwitchThumbnailFactory * &,_GUID const &>(
        volatile signed __int32 **a1,
        struct ISwitchThumbnailFactory **a2,
        const struct _GUID *a3)
{
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (volatile signed __int32 *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(v6);
    v10 = v7;
    *(_QWORD *)v7 = &SwitchItemCloseAnimationCoordinator::`vftable';
    v8 = ItemAnimationCoordinatorBase::RuntimeClassInitialize((ItemAnimationCoordinatorBase *)v7, *a2, a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 61);
        v7 = v10;
      }
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
