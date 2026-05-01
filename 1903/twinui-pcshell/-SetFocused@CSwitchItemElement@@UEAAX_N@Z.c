/*
 * XREFs of ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x180363270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ @ 0x1803639E0 (-_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ.c)
 *     ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x180363A48 (-_UpdateBorder@CSwitchItemElement@@IEAAXXZ.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x180365990 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

void __fastcall CSwitchItemElement::SetFocused(CSwitchItemElement *this, bool a2)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v4, &v5, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) )
    (*(void (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 288LL))(this, *((_QWORD *)this + 76));
  CSwitchItemElement::_RepaintCloseButton(this);
  CSwitchItemElement::_UpdateBorder(this);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v4);
}
