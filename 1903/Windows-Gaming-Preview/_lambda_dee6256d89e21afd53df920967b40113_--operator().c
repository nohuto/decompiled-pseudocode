/*
 * XREFs of _lambda_dee6256d89e21afd53df920967b40113_::operator() @ 0x18003A434
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113__Windows::Internal::CNoResult_::Run @ 0x18003AC90 (Windows--Internal--COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113__Windows--Inte.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015EF8 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x1800426D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_dee6256d89e21afd53df920967b40113_::operator()(__int64 *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  GUID *v5; // rdx
  const GUID *StringRawBuffer; // r8
  const GUID *v7; // r9
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // r15
  int v11; // eax
  int v12; // esi
  HSTRING v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v15; // rdi
  PCWSTR v16; // r8
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-49h] BYREF
  UINT32 v21; // [rsp+40h] [rbp-41h] BYREF
  UINT32 length; // [rsp+44h] [rbp-3Dh] BYREF
  HSTRING string; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v24[5]; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  UINT32 *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]
  const GUID *v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+B0h] [rbp+2Fh]
  int v31; // [rsp+B4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v24[1] = (HSTRING)-2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 64);
  EnterCriticalSection(v2);
  v24[2] = (HSTRING)v2;
  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 104);
  if ( !v3 )
    goto LABEL_22;
  string = 0LL;
  v4 = SerializeRelatedProcessArray(v3, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v4);
  length = 0;
  StringRawBuffer = (const GUID *)WindowsGetStringRawBuffer(string, &length);
  if ( (unsigned int)dword_18005C000 > 5
    && (qword_18005C010 & 0x800000000000LL) != 0
    && (qword_18005C018 & 0x800000000000LL) == qword_18005C018 )
  {
    LOWORD(v21) = length;
    v26 = &v21;
    v27 = 2;
    v28 = 0;
    v29 = StringRawBuffer;
    v30 = 2 * (unsigned __int16)length;
    v31 = 0;
    TlgWrite((TraceLoggingHProvider)&v21, &unk_1800537A6, StringRawBuffer, v7, 4u, &pData);
  }
  v8 = *a1;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 104);
  v20 = v9;
  if ( v9 )
  {
    ((__int64 (__fastcall **)(_QWORD, GUID *, const GUID *))*v9)[1](v9, v5, StringRawBuffer);
    v8 = *a1;
    v9 = v20;
  }
  v24[3] = (HSTRING)&v20;
  v10 = *(_QWORD *)(v8 + 112);
  v24[0] = 0LL;
  v11 = SerializeRelatedProcessArray(v9, v24);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v15 = v24[0];
    v16 = WindowsGetStringRawBuffer(v24[0], &v21);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, PCWSTR, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, 5LL, v16, 2 * v21);
    v12 = v17;
    if ( v17 >= 0 )
    {
      WindowsDeleteString(v15);
      v18 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
      }
      v12 = 0;
      goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v17);
    v13 = v15;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v11);
    v13 = v24[0];
  }
  WindowsDeleteString(v13);
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
  }
LABEL_19:
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v12);
    WindowsDeleteString(string);
    goto LABEL_23;
  }
  WindowsDeleteString(string);
LABEL_22:
  v12 = 0;
LABEL_23:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v12;
}
