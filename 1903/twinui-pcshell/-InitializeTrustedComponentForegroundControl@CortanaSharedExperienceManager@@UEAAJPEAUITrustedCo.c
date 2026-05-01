/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x18017E660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::InitializeTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  struct ITrustedComponentForegroundControl *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITrustedComponentForegroundControl **)this + 49) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    v5 = (struct ITrustedComponentForegroundControl *)*((_QWORD *)this + 49);
    *((_QWORD *)this + 49) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
