/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18011C7C0
 * Callers:
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x1801162F0 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180016D30 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  __int64 (__fastcall *v8)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int GlomCollection; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, unsigned __int16 **); // rdi
  unsigned __int16 *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+38h] [rbp-8h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF

  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v16 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  GlomCollection = v8((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v16);
  if ( GlomCollection >= 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v10 = v16;
    v11 = *(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v16 + 32LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
    v14 = -1LL;
    v15 = -1LL;
    GlomCollection = v11(v10, &v13);
    if ( GlomCollection >= 0 )
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(this, v13, a3, a4);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)GlomCollection;
}
