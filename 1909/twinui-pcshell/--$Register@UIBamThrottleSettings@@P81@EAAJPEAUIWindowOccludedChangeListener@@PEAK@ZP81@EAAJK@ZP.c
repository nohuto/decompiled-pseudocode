/*
 * XREFs of ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180172F88
 * Callers:
 *     ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180176530 (-SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800D3F60 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     wistd::function_long___cdecl(unsigned_long)_::operator___lambda_fcf725c2e645c30ebf8c18d30787c565__void_ @ 0x180125E18 (wistd--function_long___cdecl(unsigned_long)_--operator___lambda_fcf725c2e645c30ebf8c18d30787c565.c)
 */

__int64 SmartCookie::Register<IBamThrottleSettings,long (IBamThrottleSettings::*)(IWindowOccludedChangeListener *,unsigned long *),long (IBamThrottleSettings::*)(unsigned long),CApplicationViewManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v6 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
  if ( v5 < 0 )
  {
    v6 = 41LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IBamThrottleSettings::`vcall'{32,{flat}};
  wistd::function_long___cdecl_unsigned_long__::operator___lambda_fcf725c2e645c30ebf8c18d30787c565__void_(
    (_QWORD *)a1,
    v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return 0LL;
}
