/*
 * XREFs of ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x180104B78
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x180104C54 (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagn_ea_180104C54.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AA70 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x180104FE4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD),
        int *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  int v9; // edi
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>(v6);
    *v7 = &MagnifierGestureTarget::`vftable';
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 8) = 0;
    *((_BYTE *)v7 + 28) = 0;
    v11 = *a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v11);
    v9 = *a3;
    Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v7 + 2, &v11);
    *((_DWORD *)v7 + 6) = v9;
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v11);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v7)(v7, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a1);
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
