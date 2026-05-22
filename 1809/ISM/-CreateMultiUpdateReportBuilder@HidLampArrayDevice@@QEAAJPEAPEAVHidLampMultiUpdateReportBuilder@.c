/*
 * XREFs of ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x18007C160
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x18007DE60 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampArrayDevice::CreateMultiUpdateReportBuilder(
        HidLampArrayDevice *this,
        struct HidLampMultiUpdateReportBuilder **a2)
{
  volatile signed __int32 *v4; // rbx
  int v5; // r15d
  void *v6; // rax
  void *v7; // rdi
  int v8; // esi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)this + 76) + 56LL);
  v6 = malloc(0x50uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x50uLL);
    *(_QWORD *)v7 = &RefCountedObject::`vftable';
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &HidLampMultiUpdateReportBuilder::`vftable';
    *((_DWORD *)v7 + 4) = 0;
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 7) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = HidLampMultiUpdateReportBuilder::Initialize((HidLampMultiUpdateReportBuilder *)v7, this, v5);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v4 = (volatile signed __int32 *)v7;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
        (const char *)(unsigned int)v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
      {
        *((_DWORD *)v7 + 2) = 1;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 32LL))(v7);
        *((_DWORD *)v7 + 2) = 0;
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      }
    }
    if ( v8 >= 0 )
    {
      *a2 = (struct HidLampMultiUpdateReportBuilder *)v4;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
    (const char *)(unsigned int)v8);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v4 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
      *((_DWORD *)v4 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
  }
  return (unsigned int)v8;
}
