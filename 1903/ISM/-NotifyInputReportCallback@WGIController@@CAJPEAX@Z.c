/*
 * XREFs of ?NotifyInputReportCallback@WGIController@@CAJPEAX@Z @ 0x1800AAD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8E1C (--_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyInputReportCallback(WGIController::InputReportEventArgs *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  const struct std::nothrow_t *v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r11
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD v17[8]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( !this )
  {
    v2 = 1233LL;
LABEL_5:
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_38;
  }
  v3 = *(_QWORD *)this;
  if ( !v3 )
  {
    v2 = 1234LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *((_QWORD *)this + 2));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1236LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    v9 = *(double *)(v7 + 80);
    *(float *)&v17[1] = v9;
    v10 = *(double *)(v7 + 88);
    *(float *)&v17[2] = v10;
    v11 = *(double *)(v7 + 96);
    *(float *)&v17[3] = v11;
    v12 = *(double *)(v7 + 104);
    *(float *)&v17[4] = v12;
    *(float *)&v17[5] = *(double *)(v7 + 112);
    *(float *)&v17[6] = *(double *)(v7 + 120);
    v13 = *(_DWORD *)(v7 + 72);
    v14 = (v13 & 1) != 0;
    v17[0] = v14;
    if ( (v13 & 2) != 0 )
    {
      v14 |= 2u;
      v17[0] = v14;
    }
    if ( (v13 & 4) != 0 )
    {
      v14 |= 4u;
      v17[0] = v14;
    }
    if ( (v13 & 8) != 0 )
    {
      v14 |= 8u;
      v17[0] = v14;
    }
    if ( (v13 & 0x10) != 0 )
    {
      v14 |= 0x10u;
      v17[0] = v14;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v14 |= 0x20u;
      v17[0] = v14;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v14 |= 0x40u;
      v17[0] = v14;
    }
    if ( (v13 & 0x80u) != 0 )
    {
      v14 |= 0x80u;
      v17[0] = v14;
    }
    if ( (v13 & 0x100) != 0 )
    {
      v14 |= 0x100u;
      v17[0] = v14;
    }
    if ( (v13 & 0x200) != 0 )
    {
      v14 |= 0x200u;
      v17[0] = v14;
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 |= 0x400u;
      v17[0] = v14;
    }
    if ( (v13 & 0x800) != 0 )
    {
      v14 |= 0x800u;
      v17[0] = v14;
    }
    if ( (v13 & 0x1000) != 0 )
    {
      v14 |= 0x1000u;
      v17[0] = v14;
    }
    if ( (v13 & 0x2000) != 0 )
      v17[0] = v14 | 0x2000;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *, _DWORD))(*(_QWORD *)v8 + 40LL))(
            v8,
            *(unsigned int *)(v7 + 4),
            *(_QWORD *)(v7 + 64),
            v17,
            *((_DWORD *)this + 6));
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1271LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
  }
  v4 = 0;
LABEL_38:
  if ( this )
    WGIController::InputReportEventArgs::`scalar deleting destructor'(this, v5);
  return v4;
}
