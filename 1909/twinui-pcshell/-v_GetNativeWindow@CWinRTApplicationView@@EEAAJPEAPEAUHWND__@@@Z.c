/*
 * XREFs of ?v_GetNativeWindow@CWinRTApplicationView@@EEAAJPEAPEAUHWND__@@@Z @ 0x18017D020
 * Callers:
 *     ?CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18017BE70 (-CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18017CB00 (-GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_GetNativeWindow(CWinRTApplicationView *this, HWND *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = *((_QWORD *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 146LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 147LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v5;
}
