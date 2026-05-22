/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180051FB0
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EA710 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800F7F64 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800FB1E4 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180051EFC (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateChildInputProcessor(int a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r9d
  int InputProcessorWorker; // eax
  unsigned int v11; // ebx
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v13 = DirectX::g_XMZero;
  if ( a1 <= 0 || ((a1 - 1) & a1) != 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( !a2 || !*a2 || !a2[1] || (v6 = a2[2]) == 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x180052160LL);
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, v13) < 0
    || *(_QWORD *)&DirectX::g_XMZero.Data1 == *(_QWORD *)v13 && *(_QWORD *)DirectX::g_XMZero.Data4 == *(_QWORD *)&v13[2] )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v7 = 0;
  while ( *(_QWORD *)v13 != *((_QWORD *)&unk_180191350 + 6 * v7)
       || *(_QWORD *)&v13[2] != *((_QWORD *)&unk_180191350 + 6 * v7 + 1) )
  {
    if ( (unsigned int)++v7 >= 0xE )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
        (const char *)0x80070490LL);
      __debugbreak();
    }
  }
  v8 = 6LL * v7;
  v9 = v7 + 1;
  if ( *((_DWORD *)&unk_180191350 + 2 * v8 + 4) != a1 )
    v9 = 0;
  InputProcessorWorker = CreateInputProcessorWorker(a2, a3, a1, v9);
  v11 = InputProcessorWorker;
  if ( InputProcessorWorker >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
    (const char *)(unsigned int)InputProcessorWorker);
  return v11;
}
