/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___int64_unsigned_int_&_unsigned_char_&_bool_&_bool_&__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x180161F40
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180168160 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1801629F0 (--0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180167C7C (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_____int64_unsigned_int___unsigned_char___bool___bool____lambda_a8bf174a58f89e727d2f8f2640ee39aa___(
        __int64 *a1,
        _BYTE *a2,
        _QWORD *a3,
        unsigned int *a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 *a8)
{
  Windows::Internal::SpatialInteractions::HapticsEngine *v12; // rax
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD v18[9]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (Windows::Internal::SpatialInteractions::HapticsEngine *)operator new(
                                                                   0xE8uLL,
                                                                   (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = Windows::Internal::SpatialInteractions::HapticsEngine::HapticsEngine(v12);
    v19 = v14;
    v15 = *a8;
    v18[0] = off_18017B890;
    v18[1] = v15;
    v18[7] = v18;
    LOBYTE(v16) = *a2;
    v13 = Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
            v14,
            v16,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            v18);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
