/*
 * XREFs of ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x180171EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180171980 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSplashScreen::OnActivationEnd(CSplashScreen *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_DWORD *)this + 34) == 1 )
  {
    *((_DWORD *)this + 34) = 2;
    v6 = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
                (CSplashScreen *)((char *)this + 144),
                (__int64 *)&v6) >= 0 )
    {
      v5 = 0LL;
      v2 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
      v3 = **v6;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
      v3(v2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
