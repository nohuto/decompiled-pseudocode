/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x18004FA64
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x18004F950 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004FCEC (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180050088 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180050B54 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, struct IUnknown *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r8
  int App; // edi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, unsigned __int64 *); // rcx
  char v8; // al
  char v9; // r12
  struct IUnknown *v10; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rax
  HWND v14; // rax
  unsigned __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v16; // [rsp+78h] [rbp+48h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+50h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v15 = 0LL;
  v4 = *((_QWORD *)this + 25);
  v16 = a2;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
          (char *)this + 184,
          &v16,
          v5,
          &v17);
  if ( App >= 0 )
  {
    v4 = v17;
    v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))(*((_QWORD *)this + 24) + 8 * v17);
    App = (**v7)(v7, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v15);
  }
  if ( App >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 160LL))(v15);
    v9 = v8;
    v10 = 0LL;
    v16 = 0LL;
    if ( v4
      || v8
      && !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 168LL))(v15)
      && (v12 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 96LL))(v15),
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v16, v12),
          v10 = v16,
          !(unsigned int)SHIsSameObject(v16, *(struct IUnknown **)(*((_QWORD *)this + 24) + 8LL))) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 24) + 152LL))(**((_QWORD **)this + 24)) )
        (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, 0LL);
      if ( v9 )
      {
        if ( v10
          || (v13 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 96LL))(v15),
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v16, v13),
              (v10 = v16) != 0LL) )
        {
          v14 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v10->lpVtbl[1].QueryInterface)(v10);
          CClassicWindowManager::_FindClassicWindow(this, v14, 0LL, &v17);
          App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                  (char *)this + 184,
                  &v16);
        }
      }
      if ( App < 0 )
        goto LABEL_10;
      v17 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
              (char *)this + 184,
              &v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    }
    if ( App >= 0 )
    {
      if ( v10 )
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl[3].QueryInterface)(v10);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 72LL))(v15);
    }
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)App;
}
