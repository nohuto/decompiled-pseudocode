/*
 * XREFs of ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x180332AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180332520 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1803328A8 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetPhysicalChromeOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3)
{
  WindowSizeConverter *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int FrameForMonitor; // eax
  __int64 v9; // rdx
  struct IApplicationFrame *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationFrame *v15; // [rsp+60h] [rbp+20h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0uLL;
  v5 = (WindowSizeConverter *)((char *)this - 88);
  v6 = WindowSizeConverter::EnsureEntry((WindowSizeConverter *)((char *)this - 88), a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(v5, a2, &v15);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 347LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      return v7;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, __int64))(*(_QWORD *)v15 + 112LL))(
                        v15,
                        255LL,
                        1LL);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 348LL;
      goto LABEL_7;
    }
    v16 = 0LL;
    v10 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v10 + 144LL))(v10, &v16);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, 1LL, 0LL);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, 1LL);
        v7 = v11;
        if ( v11 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v15 + 120LL))(
                  v15,
                  a3);
          v7 = v11;
          if ( v11 >= 0 )
          {
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
            goto LABEL_18;
          }
          v12 = 356LL;
        }
        else
        {
          v12 = 353LL;
        }
      }
      else
      {
        v12 = 352LL;
      }
    }
    else
    {
      v12 = 351LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
