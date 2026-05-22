/*
 * XREFs of ??0InputSite@@QEAA@W4InputSiteIdNamespace@@_KAEBV?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z @ 0x180001700
 * Callers:
 *     ??$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAW4InputSiteIdNamespace@@AEA_K$$QEAPEAVInputSiteManager@@@Z @ 0x18002EDB8 (--$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSite::InputSite(__int64 a1, int a2, __int64 a3, void (__fastcall ****a4)(_QWORD))
{
  void (__fastcall ***v8)(_QWORD); // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &InputSite::`vftable';
  *(_QWORD *)(a1 + 24) = a3;
  memset_0((void *)(a1 + 33), 0, 0x167uLL);
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  v8 = *a4;
  *(_QWORD *)(a1 + 416) = *a4;
  if ( v8 )
    (**v8)(v8);
  return a1;
}
