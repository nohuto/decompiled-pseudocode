/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x1800564E4
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180056230 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180392290 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x180392350 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z @ 0x1800566F0 (-ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1800567EC (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180056920 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int FrameForMonitor; // eax
  __int64 v12; // rbx
  int v13; // eax
  struct IApplicationFrame *v14; // rbx
  __int64 (__fastcall *v15)(struct IApplicationFrame *, __int64 *); // rsi
  int v16; // eax
  WindowSizeConverter *v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-59h]
  struct IApplicationFrame *v22; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-35h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v27; // [rsp+50h] [rbp-29h] BYREF
  HWND v28[3]; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v29; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v30; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v28[1] = (HWND)-2LL;
  v27 = (struct IImmersiveMonitor *)*((_QWORD *)a3 + 2);
  v8 = v27;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
  v9 = WindowSizeConverter::EnsureEntry(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v21);
    goto LABEL_15;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(this, v8, &v22);
  v10 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
  {
    v19 = 594LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)FrameForMonitor,
      v21);
    goto LABEL_14;
  }
  FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v22 + 112LL))(
                      v22,
                      4095LL,
                      *((_DWORD *)a3 + 6) & 1);
  v10 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
  {
    v19 = 595LL;
    goto LABEL_19;
  }
  v26 = *((_QWORD *)a3 + 4);
  v12 = v26;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v12 + 48LL))(v12, &v25, &v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v13,
      v21);
    goto LABEL_13;
  }
  v23 = 0LL;
  v14 = v22;
  v15 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v22 + 144LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v16 = v15(v14, &v23);
  v10 = v16;
  if ( v16 < 0 )
  {
    v20 = 604LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v16,
      v21);
    goto LABEL_12;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 64LL))(v23, v25, v24);
  v10 = v16;
  if ( v16 < 0 )
  {
    v20 = 605LL;
    goto LABEL_26;
  }
  v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v22 + 24LL))(v22, v28);
  v10 = v16;
  if ( v16 < 0 )
  {
    v20 = 608LL;
    goto LABEL_26;
  }
  v30 = (struct tagRECT)0LL;
  if ( (*((_BYTE *)a3 + 24) & 2) == 0 )
  {
    v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v22 + 120LL))(v22, &v30);
    v10 = v16;
    if ( v16 < 0 )
    {
      v20 = 613LL;
      goto LABEL_26;
    }
  }
  v29 = v30;
  v16 = WindowSizeConverter::ConvertWithWindow(v17, a2, *((_DWORD *)a3 + 10), v28[0], &v29, a4);
  v10 = v16;
  if ( v16 < 0 )
  {
    v20 = 615LL;
    goto LABEL_26;
  }
  v10 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  return v10;
}
