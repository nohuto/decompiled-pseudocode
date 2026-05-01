/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x1803F3210
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x1803F317C (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800B0FC0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x1803F30B4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e.c)
 */

// Hidden C++ exception states: #wind=5
__int64 DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
        __int64 a1,
        _DWORD a2,
        _DWORD a3,
        __int64 a4,
        char a5,
        __int64 *a6,
        ...)
{
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int AnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+50h] BYREF
  va_list va; // [rsp+80h] [rbp+50h]
  va_list va1; // [rsp+88h] [rbp+58h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  va_arg(va1, _QWORD);
  v13 = a4;
  v14 = 0LL;
  v7 = a6;
  v13 = *a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  LOBYTE(v8) = a5;
  AnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(v8, &v13, v9, (__int64 *)va);
  if ( AnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2 >= 0 )
    AnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  v11 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)AnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2;
}
