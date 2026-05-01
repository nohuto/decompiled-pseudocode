/*
 * XREFs of ??_E?$CAnimationCallbackHandler@V_lambda_06ac9bc0098fdd3d203260c35bf5e579_@@V_lambda_97f5dcf4a2c06153ca0bec45e32a16f2_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x18038E260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_06ac9bc0098fdd3d203260c35bf5e579_,_lambda_97f5dcf4a2c06153ca0bec45e32a16f2_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  v4 = a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
