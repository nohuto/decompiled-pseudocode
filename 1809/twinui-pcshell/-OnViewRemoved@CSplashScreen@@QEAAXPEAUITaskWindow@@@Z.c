/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180129668
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x180121D68 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E4C08 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180124940 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // r14
  bool v6; // bl
  __int64 *v7; // r14
  __int64 *v8; // rbx
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v10; // [rsp+58h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 12);
  v5 = (struct IUnknown **)*((_QWORD *)this + 13);
  if ( v4 != v5 )
  {
    v10 = &v9;
    do
    {
      v9 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = (unsigned int)SHIsSameObject(a2, v9) != 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  v7 = (__int64 *)*((_QWORD *)this + 13);
  v8 = (__int64 *)(v4 + 1);
  if ( v4 + 1 != (struct IUnknown **)v7 )
  {
    do
    {
      Microsoft::WRL::ComPtr<ITaskWindow>::operator=(v8 - 1, v8);
      ++v8;
    }
    while ( v8 != v7 );
  }
  Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 13)
                                                                                                - 8LL));
  *((_QWORD *)this + 13) -= 8LL;
}
