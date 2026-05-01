/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x180152870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::InitializeTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  struct ITrustedComponentForegroundControl *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITrustedComponentForegroundControl **)this + 46) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    v5 = (struct ITrustedComponentForegroundControl *)*((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
