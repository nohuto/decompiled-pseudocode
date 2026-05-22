/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800F7F64
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800F8090 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180051FB0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800F8190 (-InitializeConstants@MPCGamepadProcessor@@EEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18010054C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v2; // rsi
  int v5; // eax
  __int128 v6; // xmm0
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int ChildInputProcessor; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rdi
  int v12; // eax
  int v14[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  MPCGamepadProcessor::InitializeConstants((MPCGamepadProcessor *)((char *)this + 32));
  v6 = *(_OWORD *)a2;
  v7 = (_QWORD *)((char *)this + 3768);
  *(_OWORD *)v14 = v6;
  v15 = v2 & -(__int64)(this != 0LL);
  v8 = *((_QWORD *)this + 471);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ChildInputProcessor = CreateChildInputProcessor(64, v14, (__int64)this + 3768);
  if ( ChildInputProcessor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    __debugbreak();
  }
  v10 = *((_QWORD *)this + 472);
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7;
  if ( v10 )
  {
    *((_QWORD *)this + 472) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = (**v11)(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3776);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x1800F8089LL);
  }
  return 0LL;
}
