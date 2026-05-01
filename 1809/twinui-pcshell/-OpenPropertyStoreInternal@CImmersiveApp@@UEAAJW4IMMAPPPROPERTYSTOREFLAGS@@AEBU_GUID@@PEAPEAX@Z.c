/*
 * XREFs of ?OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180061B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall CImmersiveApp::OpenPropertyStoreInternal(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void **v4; // rbx
  HRESULT result; // eax

  *a4 = 0LL;
  v4 = (void **)(a1 + 584);
  if ( *(_QWORD *)(a1 + 584) )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v4)(*v4, a3, a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 584));
  result = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, v4);
  if ( result >= 0 )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v4)(*v4, a3, a4);
  return result;
}
