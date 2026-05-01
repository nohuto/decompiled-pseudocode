/*
 * XREFs of ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x1800FB080
 * Callers:
 *     ?s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FBF08 (-s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

CDesktopVisibilityChangeHelper *__fastcall CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(
        CDesktopVisibilityChangeHelper *this,
        struct IDesktopVisibilityChangesNotification *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDesktopVisibilityChangesNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDesktopVisibilityChangeHelper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IDesktopVisibilityChangesNotification *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return this;
}
