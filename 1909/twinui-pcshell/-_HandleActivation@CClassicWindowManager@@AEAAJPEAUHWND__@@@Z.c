/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180051CB8
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180051BA0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180051E24 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800524B0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180052E68 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, unsigned __int64 a2)
{
  char *v4; // r14
  int active; // edi
  __int64 v6; // rsi
  char v7; // al
  char v8; // r15
  struct IUnknown *v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  HWND v13; // rax
  unsigned __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v14 = 0LL;
  v16 = a2;
  v4 = (char *)this + 192;
  v15 = 0LL;
  active = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
             (int)this + 192,
             (unsigned int)&v16,
             (unsigned int)&v15,
             (unsigned int)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( active >= 0 )
  {
    v6 = v17;
    active = (***(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))(*(_QWORD *)v4 + 8 * v17))(
               *(_QWORD *)(*(_QWORD *)v4 + 8 * v17),
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v14);
    if ( active >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 160LL))(v14);
      v8 = v7;
      v9 = 0LL;
      v15 = 0LL;
      if ( v6
        || v7
        && !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 168LL))(v14)
        && (v11 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 96LL))(v14),
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v15, v11),
            v9 = v15,
            !(unsigned int)SHIsSameObject(v15, *(struct IUnknown **)(*(_QWORD *)v4 + 8LL))) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 24) + 152LL))(**((_QWORD **)this + 24)) )
          (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, 0LL);
        if ( v8 )
        {
          if ( v9
            || (v12 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 96LL))(v14),
                Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v15, v12),
                (v9 = v15) != 0LL) )
          {
            v13 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v9->lpVtbl[1].QueryInterface)(v9);
            CClassicWindowManager::_FindClassicWindow(this, v13, 0LL, &v16);
            active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                       (char *)this + 184,
                       &v15);
          }
        }
        if ( active < 0 )
          goto LABEL_9;
        v16 = v14;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
        active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                   (char *)this + 184,
                   &v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
      if ( active >= 0 )
      {
        if ( v9 )
          ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl[3].QueryInterface)(v9);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 72LL))(v14);
      }
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)active;
}
