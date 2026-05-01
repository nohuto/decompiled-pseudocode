/*
 * XREFs of ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x1803830DC
 * Callers:
 *     ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x180382540 (ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___--Run.c)
 *     ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x180382D78 (-_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

void __fastcall CSwitchItemElement::_RenderLabel(CSwitchItemElement *this)
{
  __int64 v2; // rcx
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF
  CSwitchItemElement *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSwitchItemElement *)*((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v3, (__int64 *)&v4, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  v2 = *((_QWORD *)this + 77);
  if ( v2 )
  {
    v4 = this;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), CSwitchItemElement **))(*(_QWORD *)v2 + 80LL))(
      v2,
      LambdaCustomPaintProc<_lambda_a818a4d1196700db3f726f95e02b7ab7_,ID2D1DeviceContext *>,
      &v4);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v3);
}
