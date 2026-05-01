/*
 * XREFs of ?GetScaleFactor@CWinRTApplicationView@@UEAAJPEAI@Z @ 0x18017C550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetScaleFactor(CWinRTApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 100;
  v10 = 0LL;
  v3 = *((_QWORD *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
                           v3,
                           0LL,
                           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                           &v10);
  v5 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    v5 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(v11, &v9);
      v5 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
      {
        *a2 = v9;
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 370LL;
    }
    else
    {
      v6 = 367LL;
    }
  }
  else
  {
    v6 = 364LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v5;
}
