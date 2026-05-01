/*
 * XREFs of ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x180332908
 * Callers:
 *     ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180332060 (-ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationView.c)
 *     ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x180332150 (-ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetMonitorForDpi(
        WindowSizeConverter *this,
        int a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int i; // edi
  __int64 v13; // rbx
  int v14; // eax
  struct IImmersiveMonitor *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  char v21; // [rsp+98h] [rbp+48h] BYREF

  v17[1] = -2LL;
  *a3 = 0LL;
  v17[0] = 0LL;
  v6 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL))(v6, v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            &v19);
    v8 = v11;
    if ( v11 >= 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v16 = 0LL;
        v13 = v17[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v13 + 32LL))(
               v13,
               i,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v16) >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *, char *))(*(_QWORD *)v16 + 112LL))(
                  v16,
                  &v20,
                  &v21);
          v8 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22E,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)v14);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
            goto LABEL_16;
          }
          if ( a2 == v20 )
          {
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
            *a3 = v16;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
            break;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      }
      if ( *a3 )
      {
        v8 = 0;
        goto LABEL_16;
      }
      v8 = -2147023728;
      v9 = 2147943568LL;
      v10 = 569LL;
    }
    else
    {
      v9 = (unsigned int)v11;
      v10 = 549LL;
    }
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  return v8;
}
