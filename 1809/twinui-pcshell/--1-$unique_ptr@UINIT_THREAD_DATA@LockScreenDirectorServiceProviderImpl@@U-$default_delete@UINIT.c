/*
 * XREFs of ??1?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAA@XZ @ 0x180191178
 * Callers:
 *     _LockScreenDirectorServiceProviderImpl::s_RunDirectorThread_::_1_::dtor$0 @ 0x180193554 (_LockScreenDirectorServiceProviderImpl--s_RunDirectorThread_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::~unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  char *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (char *)v1[1];
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
