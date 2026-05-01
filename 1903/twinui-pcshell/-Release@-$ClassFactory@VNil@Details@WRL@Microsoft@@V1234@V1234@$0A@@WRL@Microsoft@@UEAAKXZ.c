/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180103180
 * Callers:
 *     ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1802EF9A0 (--$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802EFB8C (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1802EFC50 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1802F0078 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 *     ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1802F0C80 (--$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AE.c)
 *     ??$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherFactory@@@Z @ 0x1802F0FD4 (--$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx
  void (*v4)(void); // rax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 6) == 0 && v3 == 1 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      goto LABEL_7;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( (v2 & 5) == 5 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_7:
      v4();
    }
  }
  return v3;
}
