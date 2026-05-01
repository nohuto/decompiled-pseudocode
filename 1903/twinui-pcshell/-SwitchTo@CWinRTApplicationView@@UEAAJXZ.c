/*
 * XREFs of ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001A320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18001A5B0 (-SetFocus@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::SwitchTo(CWinRTApplicationView *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 26) + 24LL))(
         *((_QWORD *)this + 26),
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v8);
  v3 = v2;
  if ( v2 == -2147023728 )
  {
    v2 = CWinRTApplicationView::SetFocus(this);
    v3 = v2;
    if ( v2 >= 0 )
      goto LABEL_6;
    v5 = 90LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v2,
      v6);
    goto LABEL_6;
  }
  if ( v2 < 0 )
  {
    v5 = 95LL;
    goto LABEL_11;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 32LL))(v8, &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 98LL;
    goto LABEL_11;
  }
  v3 = CWinRTApplicationView::SetFocus(this);
  if ( v3 >= 0 )
    v3 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v3;
}
