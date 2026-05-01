/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@12@@Z @ 0x1803ADF9C
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803ADEE0 (--$CreateClassFactory@V-$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Micro.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CPerMonitorDesktopVisibilityService,0>,Microsoft::WRL::SimpleClassFactory<CPerMonitorDesktopVisibilityService,0>,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &Microsoft::WRL::SimpleClassFactory<CPerMonitorDesktopVisibilityService,0>::`vftable';
    ((void (__fastcall *)(_DWORD *))Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef)(v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
