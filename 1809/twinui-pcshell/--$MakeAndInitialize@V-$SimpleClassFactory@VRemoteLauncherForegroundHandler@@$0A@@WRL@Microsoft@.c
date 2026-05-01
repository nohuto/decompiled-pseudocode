/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@12@@Z @ 0x18018D30C
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18018D250 (--$CreateClassFactory@V-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800DDD48 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>,Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  void *v3; // rax
  void *v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)v3);
    *(_QWORD *)v4 = &Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>::`vftable';
    ((void (__fastcall *)(void *))Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef)(v4);
    *a1 = v4;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
