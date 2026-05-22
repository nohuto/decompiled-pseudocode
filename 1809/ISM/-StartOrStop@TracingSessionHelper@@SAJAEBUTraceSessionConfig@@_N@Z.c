/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800623E0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180062570 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x180063420 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x180027954 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180060CC8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(const struct TraceSessionConfig *a1, char a2, __int64 a3)
{
  const void **v4; // r14
  char *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  const WCHAR *v8; // rcx
  char *i; // rdx
  __int64 v10; // rcx
  const WCHAR *v11; // rax
  unsigned __int64 v12; // rdx
  const void **v13; // r9
  __int64 v14; // rbx
  const unsigned __int16 *v15; // rdx
  struct _ENABLE_TRACE_PARAMETERS *p_EnableParameters; // rcx
  int DirectoryDeepNoThrow; // eax
  int v18; // esi
  unsigned int v19; // edi
  char *v20; // rbx
  unsigned int v21; // esi
  const void **v22; // rax
  const void *v23; // rdx
  const WCHAR *v24; // rdx
  const WCHAR *v25; // rdx
  ULONG started; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdi
  const WCHAR *v31; // rdx
  signed int v32; // eax
  signed int v33; // ebx
  unsigned int MatchAnyKeyword; // [rsp+28h] [rbp-E0h]
  ULONG64 TraceHandle; // [rsp+50h] [rbp-B8h] BYREF
  void *v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+68h] [rbp-A0h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+98h] [rbp-70h] BYREF
  int v41; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v42; // [rsp+B0h] [rbp-58h]
  _BYTE v43[256]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v38 = -2LL;
  v4 = (const void **)((char *)a1 + 48);
  v5 = (char *)a1 + 48;
  if ( *((_QWORD *)a1 + 9) >= 8uLL )
    v5 = (char *)*v4;
  v6 = *((_QWORD *)a1 + 8);
  v7 = 1;
  if ( v6 )
  {
    memset_0(v43, 0, sizeof(v43));
    v8 = L"\\";
    a3 = 256LL;
    while ( *v8 < 0x100u )
    {
      v43[*(unsigned __int8 *)v8++] = 1;
      if ( v8 == L"" )
      {
        for ( i = &v5[2 * v6 - 2]; *(_WORD *)i >= 0x100u || !v43[*(unsigned __int16 *)i]; i -= 2 )
        {
          if ( i == v5 )
            goto LABEL_21;
        }
        goto LABEL_20;
      }
    }
    for ( i = &v5[2 * v6 - 2]; ; i -= 2 )
    {
      v10 = 1LL;
      v11 = L"\\";
      a3 = *(unsigned __int16 *)i;
      while ( *v11 != (_WORD)a3 )
      {
        ++v11;
        if ( !--v10 )
        {
          v11 = 0LL;
          break;
        }
      }
      if ( v11 )
        break;
      if ( i == v5 )
        goto LABEL_21;
    }
LABEL_20:
    v12 = (i - v5) >> 1;
  }
  else
  {
LABEL_21:
    v12 = -1LL;
  }
  *(__m128i *)&EnableParameters.SourceId.Data2 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(EnableParameters.Version) = 0;
  if ( v6 < v12 )
    v12 = v6;
  v13 = v4;
  if ( (unsigned __int64)v4[3] >= 8 )
    v13 = (const void **)*v4;
  if ( v12 > 7 )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
      (__int64)&EnableParameters,
      v12,
      a3,
      v13);
  }
  else
  {
    *(_QWORD *)&EnableParameters.SourceId.Data2 = v12;
    v14 = 2 * v12;
    memmove_0(&EnableParameters, v13, 2 * v12);
    *(_WORD *)((char *)&EnableParameters.Version + v14) = 0;
  }
  p_EnableParameters = &EnableParameters;
  if ( *(_QWORD *)&EnableParameters.SourceId.Data4[4] >= 8uLL )
    p_EnableParameters = *(struct _ENABLE_TRACE_PARAMETERS **)&EnableParameters.Version;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((wil *)p_EnableParameters, v15);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::~wstring((__int64)&EnableParameters);
  std::wstring::wstring(InstanceName, (__int64)a1);
  v18 = 2 * v41;
  v19 = 2 * v41 + 644;
  v37 = operator new(v19);
  v20 = (char *)v37;
  memset_0(v37, 0, v19);
  *(_DWORD *)v37 = v19;
  *((_DWORD *)v20 + 11) = 0x20000;
  *((_DWORD *)v20 + 10) = 1;
  *(_OWORD *)(v20 + 24) = *((_OWORD *)a1 + 2);
  *((_DWORD *)v20 + 12) = *((_DWORD *)a1 + 20);
  *((_DWORD *)v20 + 17) = *((_DWORD *)a1 + 21);
  *((_DWORD *)v20 + 16) = *((_DWORD *)a1 + 22);
  *((_DWORD *)v20 + 14) = *((_DWORD *)a1 + 23);
  *((_DWORD *)v20 + 13) = *((_DWORD *)a1 + 24);
  *((_DWORD *)v20 + 15) = *((_DWORD *)a1 + 25);
  *((_DWORD *)v20 + 29) = 120;
  v21 = v18 + 122;
  *((_DWORD *)v20 + 28) = v21;
  v22 = v4;
  if ( (unsigned __int64)v4[3] >= 8 )
    v22 = (const void **)*v4;
  v23 = v4[2];
  if ( (unsigned __int64)v4[3] >= 8 )
    v4 = (const void **)*v4;
  memmove_0(&v20[v21], v4, (char *)v22 + 2 * (_QWORD)v23 - (char *)v4);
  TraceHandle = -1LL;
  if ( !a2 )
  {
    v31 = (const WCHAR *)InstanceName;
    if ( v42 >= 8 )
      v31 = InstanceName[0];
    v32 = ControlTraceW(0LL, v31, (PEVENT_TRACE_PROPERTIES)v20, 1u);
    v33 = (unsigned __int16)v32 | 0x80070000;
    if ( v32 <= 0 )
      v33 = v32;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v33);
      v7 = v33;
      goto LABEL_50;
    }
LABEL_49:
    v7 = 0;
    goto LABEL_50;
  }
  v24 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v24 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v24, (PEVENT_TRACE_PROPERTIES)v20, 0) != 4201 )
    goto LABEL_50;
  v25 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v25 = *(const WCHAR **)a1;
  started = StartTraceW(&TraceHandle, v25, (PEVENT_TRACE_PROPERTIES)v20);
  if ( !started )
  {
    v28 = *((_QWORD *)a1 + 13);
    v29 = *((_QWORD *)a1 + 14);
    while ( v28 != v29 )
    {
      memset_0(&EnableParameters, 0, sizeof(EnableParameters));
      *(_QWORD *)&EnableParameters.Version = 2LL;
      EnableParameters.EnableFilterDesc = 0LL;
      started = EnableTraceEx2(
                  TraceHandle,
                  (LPCGUID)v28,
                  1u,
                  *(_BYTE *)(v28 + 16),
                  *(_QWORD *)(v28 + 24),
                  *(_QWORD *)(v28 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v27 = 106LL;
        goto LABEL_54;
      }
      v28 += 40LL;
    }
    goto LABEL_49;
  }
  v27 = 89LL;
LABEL_54:
  v7 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v27,
         (unsigned int)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
         (const char *)started,
         MatchAnyKeyword);
LABEL_50:
  if ( TraceHandle != -1LL )
    CloseTrace(TraceHandle);
  std::wstring::~wstring((__int64)InstanceName);
  operator delete(v37, (const struct std::nothrow_t *)0x78);
  return v7;
}
