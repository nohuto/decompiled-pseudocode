/*
 * XREFs of ??$MakeAndInitialize@VWnfNameResolver@WnfHelper@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800542AC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180054210 (-CreateInstance@-$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054090 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WnfHelper::WnfNameResolver,IUnknown,>(_QWORD *a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  unsigned int Interface; // edi
  bool v5; // zf

  *a1 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v5 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWnfNameResolver>::`vftable';
    if ( !v5 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v2 = &WnfHelper::WnfNameResolver::`vftable';
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::QueryInterface(
                  (__int64)v2,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  a1);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
