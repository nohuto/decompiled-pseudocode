/*
 * XREFs of ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1803B2590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180015CF0 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803B0B2C (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1803B0B2C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetPhysicalNonClientAreaOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagRECT *a7)
{
  struct IApplicationViewTitlebarConfiguration *v9; // rdi
  struct tagRECT *v10; // r15
  int v11; // eax
  unsigned int LastError; // ebx
  int FrameForMonitor; // eax
  __int64 v14; // rdx
  struct IApplicationFrame *v15; // rbx
  __int64 (__fastcall *v16)(struct IApplicationFrame *, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // cf
  const char *v21; // r9
  __int64 v22; // rdx
  struct IApplicationFrame *v24; // [rsp+30h] [rbp-71h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-5Dh] BYREF
  HWND hWnd; // [rsp+48h] [rbp-59h] BYREF
  __int64 v29; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-49h] BYREF
  int v31[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h]
  struct tagRECT Rect; // [rsp+78h] [rbp-29h] BYREF
  __int128 v34; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT v35; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]
  int v37; // [rsp+100h] [rbp+5Fh] BYREF
  int v38; // [rsp+108h] [rbp+67h] BYREF

  v38 = a4;
  v37 = a3;
  v32 = -2LL;
  *(_QWORD *)&v30.left = a2;
  v9 = a6;
  *(_QWORD *)v31 = a6;
  v10 = a7;
  v34 = 0uLL;
  *a7 = 0uLL;
  v29 = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
          &v29,
          (struct IImmersiveMonitor **)&v30,
          &v37,
          &v38,
          (struct IApplicationViewTitlebarConfiguration **)v31);
  LastError = v11;
  if ( v11 >= 0 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)((char *)this - 88), a2, &v24);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 375LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      goto LABEL_33;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v24 + 112LL))(
                        v24,
                        4095LL,
                        *(_DWORD *)(v29 + 24) & 1);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 376LL;
      goto LABEL_9;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, unsigned int *, unsigned int *))(*(_QWORD *)v9 + 48LL))(
                        v9,
                        &v27,
                        &v26);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 380LL;
      goto LABEL_9;
    }
    v25 = 0LL;
    v15 = v24;
    v16 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v24 + 144LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v17 = v16(v15, (__int64 *)&v25);
    LastError = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v25 + 64))(v25, v27, v26);
      LastError = v17;
      if ( v17 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64 *, bool))(*v25 + 32))(v25, (v26 & 1) == 0);
        LastError = v17;
        if ( v17 >= 0 )
        {
          v19 = *v25;
          v20 = a5 != 0;
          a5 = -a5;
          v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v19 + 136))(v25, v20 ? 8 : 0);
          LastError = v17;
          if ( v17 >= 0 )
          {
            v17 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &hWnd);
            LastError = v17;
            if ( v17 >= 0 )
            {
              Rect = 0LL;
              if ( GetClientRect(hWnd, &Rect) )
              {
                if ( MapWindowPoints(hWnd, 0LL, (LPPOINT)&Rect, 2u) )
                {
                  v17 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)v24 + 120LL))(
                          v24,
                          &v34);
                  LastError = v17;
                  if ( v17 < 0 )
                  {
                    v18 = 400LL;
                    goto LABEL_26;
                  }
                  Rect.top += DWORD1(v34);
                  Rect.bottom += HIDWORD(v34);
                  Rect.left += v34;
                  Rect.right += DWORD2(v34);
                  v35 = 0LL;
                  if ( GetWindowRect(hWnd, &v35) )
                  {
                    v30.left = Rect.left - v35.left;
                    v30.top = Rect.top - v35.top;
                    v30.right = v35.right - Rect.right;
                    v30.bottom = v35.bottom - Rect.bottom;
                    *v10 = v30;
                    LastError = 0;
                    goto LABEL_31;
                  }
                  v22 = 408LL;
                }
                else
                {
                  v22 = 397LL;
                }
              }
              else
              {
                v22 = 393LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v22,
                            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                            v21);
              goto LABEL_31;
            }
            v18 = 390LL;
          }
          else
          {
            v18 = 386LL;
          }
        }
        else
        {
          v18 = 385LL;
        }
      }
      else
      {
        v18 = 384LL;
      }
    }
    else
    {
      v18 = 383LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v17);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x174,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v11);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return LastError;
}
