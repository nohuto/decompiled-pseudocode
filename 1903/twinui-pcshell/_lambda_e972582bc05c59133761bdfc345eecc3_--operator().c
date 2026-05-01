/*
 * XREFs of _lambda_e972582bc05c59133761bdfc345eecc3_::operator() @ 0x1803EA2D4
 * Callers:
 *     ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x1803EA660 (-GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@.c)
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e972582bc05c59133761bdfc345eecc3_::operator()(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 *v7; // rdi
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v10);
  if ( v4 < 0 )
  {
    v5 = 95LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v10
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 24LL),
         a2,
         **(_QWORD **)(a1 + 8)) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)a2 + 72LL))(a2, &hWnd);
    if ( v4 < 0 )
    {
      v5 = 100LL;
      goto LABEL_3;
    }
    if ( !IsIconic(hWnd) )
    {
      v7 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 120LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 24LL),
             a2,
             0LL)
         ? *(__int64 **)(a1 + 16)
         : *(__int64 **)(a1 + 24);
      if ( !*v7 )
        goto LABEL_18;
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)*v7 + 184LL))(*v7, &v12);
      if ( v4 < 0 )
      {
        v5 = 111LL;
        goto LABEL_3;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 184LL))(a2, v8);
      if ( v4 < 0 )
      {
        v5 = 114LL;
        goto LABEL_3;
      }
      if ( v8[0] > v12 )
LABEL_18:
        Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(v7, a2);
    }
  }
  return 0LL;
}
