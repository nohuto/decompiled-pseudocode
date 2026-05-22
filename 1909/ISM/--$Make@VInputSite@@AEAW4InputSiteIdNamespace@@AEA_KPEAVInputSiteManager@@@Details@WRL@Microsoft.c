/*
 * XREFs of ??$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAW4InputSiteIdNamespace@@AEA_K$$QEAPEAVInputSiteManager@@@Z @ 0x18002EDB8
 * Callers:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002EEE4 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 * Callees:
 *     ??0InputSite@@QEAA@W4InputSiteIdNamespace@@_KAEBV?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z @ 0x180001700 (--0InputSite@@QEAA@W4InputSiteIdNamespace@@_KAEBV-$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<InputSite,enum InputSiteIdNamespace &,unsigned __int64 &,InputSiteManager *>(
        __int64 *a1,
        int *a2,
        __int64 *a3,
        void (__fastcall ****a4)(_QWORD))
{
  void *v8; // rdi
  void (__fastcall ***v9)(_QWORD); // rbx
  __int64 v10; // rdi
  void (__fastcall ***v12)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x1A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = *a4;
    v12 = v9;
    if ( v9 )
      (**v9)(v9);
    v10 = InputSite::InputSite((__int64)v8, *a2, *a3, &v12);
    if ( v9 )
      (*v9)[1](v9);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v10;
  }
  return a1;
}
