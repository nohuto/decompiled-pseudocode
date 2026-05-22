/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x1800EDDAC
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EDCE0 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18009D6D4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  HKEY v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF

  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5));
  v3 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 119LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_24;
  }
  v7 = v20;
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 24LL))(
         v7,
         *((_QWORD *)this + 6),
         1LL,
         (char *)this + 80);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 120LL;
    goto LABEL_9;
  }
  if ( ((1LL << gdwDeviceFamily) & 0x1DDA1) == 0 )
    goto LABEL_23;
  v19 = 0LL;
  v9 = CoreUICreate(&v19);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 125LL;
    goto LABEL_17;
  }
  v11 = v19;
  v12 = *((_QWORD *)this + 138);
  if ( v12 )
  {
    *((_QWORD *)this + 138) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *))(*(_QWORD *)v11 + 120LL))(
         v11,
         lambda_3f084708ee41b48d6da9ecc3660b6220_::_lambda_invoker_cdecl_,
         this,
         (char *)this + 1104);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v14 = (HKEY)*((_QWORD *)this + 11);
    if ( v14 )
    {
      *((_QWORD *)this + 11) = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v14 + 16LL))(v14);
    }
    RegistryWatcher::Create(
      v14,
      L"SYSTEM\\MOUSE",
      this,
      lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 11);
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
LABEL_23:
    v5 = 0;
    goto LABEL_24;
  }
  v10 = 134LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
    (const char *)(unsigned int)v9);
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_24:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v5;
}
