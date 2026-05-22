/*
 * XREFs of ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x1800AA3D4
 * Callers:
 *     ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x1800AB2E0 (-OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x1800AB300 (-OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x1800AB320 (-OnInputSuspended@WGIController@@UEAAJ_K@Z.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800AB340 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800AB470 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcmp_0 @ 0x180037D63 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckRawReadingForChanges@WGIController@@AEAAJPEA_N@Z @ 0x1800A948C (-CheckRawReadingForChanges@WGIController@@AEAAJPEA_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall WGIController::NotifyCurrentGamepadReading(WGIController *this, char a2)
{
  bool v4; // zf
  _DWORD *v5; // rax
  DWORD TickCount; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  double v13; // xmm1_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  int v23; // [rsp+38h] [rbp-D0h]
  int v24; // [rsp+3Ch] [rbp-CCh]
  _DWORD v25[4]; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int128 Buf1; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-60h]
  __int128 v32; // [rsp+B8h] [rbp-50h]
  char v33; // [rsp+C8h] [rbp-40h]
  bool v34; // [rsp+C9h] [rbp-3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+850h] [rbp+748h]

  memset_0(v25, 0, 0x7F0uLL);
  v4 = *((_QWORD *)this + 23) == 0LL;
  LODWORD(v27) = 2032;
  if ( v4 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      996LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  QueryPerformanceCounter(&PerformanceCount);
  v5 = (_DWORD *)*((_QWORD *)this + 23);
  v25[0] = 64;
  v25[1] = *v5;
  TickCount = GetTickCount();
  v7 = *((_QWORD *)this + 11);
  v25[2] = TickCount;
  v26 = PerformanceCount;
  v28 = *((_QWORD *)this + 19);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, &Buf1);
    if ( v8 < 0 )
    {
      v9 = 1019LL;
LABEL_59:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v8);
      return 0LL;
    }
    v33 = 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    if ( v10 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v22);
      if ( v8 < 0 )
      {
        v9 = 1034LL;
        goto LABEL_59;
      }
      *(_QWORD *)&Buf1 = v22;
      v11 = v23 & 1;
      v12 = v11 != 0;
      DWORD2(Buf1) = v12;
      if ( (v23 & 2) != 0 )
      {
        v12 = v11 | 2;
        DWORD2(Buf1) = v11 | 2;
        v11 |= 2u;
      }
      if ( (v23 & 4) != 0 )
      {
        v12 = v11 | 4;
        DWORD2(Buf1) = v11 | 4;
        v11 |= 4u;
      }
      if ( (v23 & 8) != 0 )
      {
        v12 = v11 | 8;
        DWORD2(Buf1) = v11 | 8;
        v11 |= 8u;
      }
      if ( (v23 & 0x10) != 0 )
      {
        v12 = v11 | 0x40;
        DWORD2(Buf1) = v11 | 0x40;
        v11 |= 0x40u;
      }
      if ( (v23 & 0x20) != 0 )
      {
        v12 = v11 | 0x80;
        DWORD2(Buf1) = v11 | 0x80;
        v11 |= 0x80u;
      }
      if ( (v23 & 0x40) != 0 )
      {
        v12 = v11 | 0x100;
        DWORD2(Buf1) = v11 | 0x100;
      }
      if ( (v23 & 0x80) != 0 )
      {
        v12 |= 0x200u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 1) != 0 )
      {
        v12 |= 0x10u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 2) != 0 )
      {
        v12 |= 0x20u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 4) != 0 )
      {
        v12 |= 0x1000u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 8) != 0 )
      {
        v12 |= 0x2000u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 0x40) != 0 )
      {
        v12 |= 0x400u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 0x80) != 0 )
      {
        v12 |= 0x800u;
        DWORD2(Buf1) = v12;
      }
      if ( (v24 & 0x40000000) != 0 )
        DWORD2(Buf1) = v12 | 0x40000000;
      v13 = DOUBLE_1_0;
      if ( (v24 & 0x10) != 0 )
        v14 = DOUBLE_1_0;
      else
        v14 = 0.0;
      *(double *)&v30 = v14;
      if ( (v24 & 0x20) != 0 )
        v15 = DOUBLE_1_0;
      else
        v15 = 0.0;
      *((double *)&v30 + 1) = v15;
      v16 = 0.0;
      v31 = 0LL;
      if ( (v24 & 0x400) != 0 )
      {
        v16 = DOUBLE_N1_0;
      }
      else if ( (v24 & 0x800) != 0 )
      {
        v16 = DOUBLE_1_0;
      }
      *(double *)&v32 = v16;
      if ( (v24 & 0x100) == 0 )
      {
        if ( (v24 & 0x200) != 0 )
          v13 = DOUBLE_N1_0;
        else
          v13 = 0.0;
      }
      *((double *)&v32 + 1) = v13;
      v33 = 1;
    }
  }
  v8 = WGIController::CheckRawReadingForChanges(this, &v34);
  if ( v8 < 0 )
  {
    v9 = 1077LL;
    goto LABEL_59;
  }
  v34 = a2 != 0 && v34;
  if ( v34 || memcmp_0((char *)&Buf1 + 8, (char *)this + 200, 0x38uLL) )
  {
    v17 = v30;
    *((_OWORD *)this + 12) = Buf1;
    v18 = v31;
    *((_OWORD *)this + 13) = v17;
    v19 = v32;
    *((_OWORD *)this + 14) = v18;
    *((_OWORD *)this + 15) = v19;
    v8 = WGIController::NotifyInputReport(this, (struct InputInfo *)v25);
    if ( v8 < 0 )
    {
      v9 = 1103LL;
      goto LABEL_59;
    }
  }
  return 0LL;
}
