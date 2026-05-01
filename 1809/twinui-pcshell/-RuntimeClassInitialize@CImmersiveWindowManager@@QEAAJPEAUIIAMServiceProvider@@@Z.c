/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800FFA80
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x1800FEBAC (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CImmersiveWindowManager::RuntimeClassInitialize(
        CImmersiveWindowManager *this,
        struct IIAMServiceProvider *a2)
{
  int v4; // esi
  struct IIAMServiceProvider *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180511190 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180511190);
    if ( dword_180511190 == -1 )
    {
      qword_1805107C0 = 0LL;
      xmmword_1805107B0 = IID_IApplicationActivationHistory;
      qword_1805107C8 = 0LL;
      qword_1805107E0 = 0LL;
      qword_1805107E8 = 0LL;
      xmmword_1805107D0 = (__int128)IID_IImmersiveWindowManager;
      Init_thread_footer(&dword_180511190);
    }
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveWindowManager *)((char *)this + 72),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1805107B0,
         2LL);
  if ( v4 >= 0 && *((struct IIAMServiceProvider **)this + 32) != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v6 = (struct IIAMServiceProvider *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  return (unsigned int)v4;
}
