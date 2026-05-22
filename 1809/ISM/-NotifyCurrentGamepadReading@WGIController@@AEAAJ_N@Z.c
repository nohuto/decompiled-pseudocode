/*
 * XREFs of ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x18006E824
 * Callers:
 *     ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x18006E150 (-OnInputSuspended@WGIController@@UEAAJ_K@Z.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x18006E170 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x18006E280 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x18006E640 (-OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x18006E660 (-OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckRawReadingForChanges@WGIController@@AEAAJPEA_N@Z @ 0x18006E67C (-CheckRawReadingForChanges@WGIController@@AEAAJPEA_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x18006F088 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18012DB53 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  double v13; // xmm0_8
  double v14; // xmm2_8
  double v15; // xmm2_8
  double v16; // xmm2_8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v21; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  int v24; // [rsp+38h] [rbp-D0h]
  int v25; // [rsp+3Ch] [rbp-CCh]
  _DWORD v26[4]; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+230h] [rbp+128h]
  __int128 Buf1; // [rsp+250h] [rbp+148h] BYREF
  __int128 v31; // [rsp+260h] [rbp+158h]
  __int128 v32; // [rsp+270h] [rbp+168h]
  __int128 v33; // [rsp+280h] [rbp+178h]
  char v34; // [rsp+290h] [rbp+188h]
  bool v35; // [rsp+291h] [rbp+189h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6A0h] [rbp+598h]

  memset_0(v26, 0, 0x640uLL);
  v4 = *((_QWORD *)this + 21) == 0LL;
  v28 = 1600;
  if ( v4 )
  {
    v21 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3AC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v21);
    JUMPOUT(0x18006EBC8LL);
  }
  QueryPerformanceCounter(&PerformanceCount);
  v5 = (_DWORD *)*((_QWORD *)this + 21);
  v26[0] = 64;
  v26[1] = *v5;
  TickCount = GetTickCount();
  v7 = *((_QWORD *)this + 11);
  v26[2] = TickCount;
  v27 = PerformanceCount;
  v29 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, &Buf1);
    if ( v8 < 0 )
    {
      v9 = 963LL;
LABEL_59:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v8);
      return 0LL;
    }
    v34 = 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    if ( v10 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v23);
      if ( v8 < 0 )
      {
        v9 = 978LL;
        goto LABEL_59;
      }
      *(_QWORD *)&Buf1 = v23;
      v11 = v24 & 1;
      v12 = v11 != 0;
      DWORD2(Buf1) = v12;
      if ( (v24 & 2) != 0 )
      {
        v12 = v11 | 2;
        DWORD2(Buf1) = v11 | 2;
        v11 |= 2u;
      }
      if ( (v24 & 4) != 0 )
      {
        v12 = v11 | 4;
        DWORD2(Buf1) = v11 | 4;
        v11 |= 4u;
      }
      if ( (v24 & 8) != 0 )
      {
        v12 = v11 | 8;
        DWORD2(Buf1) = v11 | 8;
        v11 |= 8u;
      }
      if ( (v24 & 0x10) != 0 )
      {
        v12 = v11 | 0x40;
        DWORD2(Buf1) = v11 | 0x40;
        v11 |= 0x40u;
      }
      if ( (v24 & 0x20) != 0 )
      {
        v12 = v11 | 0x80;
        DWORD2(Buf1) = v11 | 0x80;
        v11 |= 0x80u;
      }
      if ( (v24 & 0x40) != 0 )
      {
        v12 = v11 | 0x100;
        DWORD2(Buf1) = v11 | 0x100;
      }
      if ( (v24 & 0x80) != 0 )
      {
        v12 |= 0x200u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 1) != 0 )
      {
        v12 |= 0x10u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 2) != 0 )
      {
        v12 |= 0x20u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 4) != 0 )
      {
        v12 |= 0x1000u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 8) != 0 )
      {
        v12 |= 0x2000u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 0x40) != 0 )
      {
        v12 |= 0x400u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 0x80) != 0 )
      {
        v12 |= 0x800u;
        DWORD2(Buf1) = v12;
      }
      if ( (v25 & 0x40000000) != 0 )
        DWORD2(Buf1) = v12 | 0x40000000;
      v13 = DOUBLE_1_0;
      if ( (v25 & 0x10) != 0 )
        v14 = DOUBLE_1_0;
      else
        v14 = 0.0;
      *(double *)&v31 = v14;
      if ( (v25 & 0x20) != 0 )
        v15 = DOUBLE_1_0;
      else
        v15 = 0.0;
      *((double *)&v31 + 1) = v15;
      v32 = 0LL;
      if ( (v25 & 0x400) != 0 )
      {
        v16 = DOUBLE_N1_0;
      }
      else if ( (v25 & 0x800) != 0 )
      {
        v16 = DOUBLE_1_0;
      }
      else
      {
        v16 = 0.0;
      }
      *(double *)&v33 = v16;
      if ( (v25 & 0x100) == 0 )
      {
        if ( (v25 & 0x200) != 0 )
          v13 = DOUBLE_N1_0;
        else
          v13 = 0.0;
      }
      *((double *)&v33 + 1) = v13;
      v34 = 1;
    }
  }
  v8 = WGIController::CheckRawReadingForChanges(this, &v35);
  if ( v8 < 0 )
  {
    v9 = 1021LL;
    goto LABEL_59;
  }
  v35 = a2 != 0 && v35;
  if ( v35 || memcmp_0((char *)&Buf1 + 8, (char *)this + 184, 0x38uLL) )
  {
    v17 = v31;
    *((_OWORD *)this + 11) = Buf1;
    v18 = v32;
    *((_OWORD *)this + 12) = v17;
    v19 = v33;
    *((_OWORD *)this + 13) = v18;
    *((_OWORD *)this + 14) = v19;
    v8 = WGIController::NotifyInputReport(this, (struct InputInfo *)v26);
    if ( v8 < 0 )
    {
      v9 = 1047LL;
      goto LABEL_59;
    }
  }
  return 0LL;
}
