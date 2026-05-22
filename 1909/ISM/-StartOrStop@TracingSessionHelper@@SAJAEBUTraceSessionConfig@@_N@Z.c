/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009F354
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009E100 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E2B0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x18009F670 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180035034 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x18009B4EC (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ??$copy@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x18009B680 (--$copy@PEAEPEAE@std@@YAPEAEPEAE00@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18009C50C (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18009E924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(
        const struct TraceSessionConfig *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r15
  _WORD *v6; // rcx
  unsigned int v7; // r12d
  wil *v8; // rax
  const unsigned __int16 *v9; // rdx
  int DirectoryDeepNoThrow; // eax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int *v13; // r13
  unsigned int v14; // esi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  const WCHAR *v17; // rdx
  const WCHAR *v18; // rdx
  ULONG started; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  const WCHAR *v24; // rdx
  signed int v25; // eax
  signed int v26; // ebx
  ULONG64 TraceHandle[3]; // [rsp+50h] [rbp-41h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+68h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+98h] [rbp+7h] BYREF
  int v31; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v32; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  TraceHandle[1] = -2LL;
  v5 = (_QWORD *)((char *)a1 + 48);
  v6 = v5;
  if ( v5[3] >= 8uLL )
    v6 = (_WORD *)*v5;
  v7 = 1;
  std::_Traits_find_last_of<std::char_traits<unsigned short>>(v6, v5[2], a3, a4, 1LL);
  v8 = (wil *)std::wstring::substr((__int64)v5, &EnableParameters);
  if ( *((_QWORD *)v8 + 3) >= 8uLL )
    v8 = *(wil **)v8;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow(v8, v9);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      86LL,
      (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate((__int64)&EnableParameters);
  TraceHandle[2] = 0LL;
  std::wstring::wstring((__int64)InstanceName);
  v11 = 2 * v31;
  v12 = 2 * v31 + 644;
  v13 = (unsigned int *)operator new(v12);
  memset_0(v13, 0, v12);
  *v13 = v12;
  v13[11] = 0x20000;
  v13[10] = 1;
  *(_OWORD *)(v13 + 6) = *((_OWORD *)a1 + 2);
  v13[12] = *((_DWORD *)a1 + 20);
  v13[17] = *((_DWORD *)a1 + 21);
  v13[16] = *((_DWORD *)a1 + 22);
  v13[14] = *((_DWORD *)a1 + 23);
  v13[13] = *((_DWORD *)a1 + 24);
  v13[15] = *((_DWORD *)a1 + 25);
  v13[29] = 120;
  v14 = v11 + 122;
  v13[28] = v14;
  v15 = v5;
  if ( v5[3] >= 8uLL )
    v15 = (_QWORD *)*v5;
  v16 = v5[2];
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  std::copy<unsigned char *,unsigned char *>(v5, (__int64)v15 + 2 * v16, (char *)v13 + v14);
  TraceHandle[0] = -1LL;
  if ( !a2 )
  {
    v24 = (const WCHAR *)InstanceName;
    if ( v32 >= 8 )
      v24 = InstanceName[0];
    v25 = ControlTraceW(0LL, v24, (PEVENT_TRACE_PROPERTIES)v13, 1u);
    v26 = v25;
    if ( v25 > 0 )
      v26 = (unsigned __int16)v25 | 0x80070000;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v26);
      v7 = v26;
      goto LABEL_24;
    }
LABEL_23:
    v7 = 0;
    goto LABEL_24;
  }
  v17 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v17 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v17, (PEVENT_TRACE_PROPERTIES)v13, 0) != 4201 )
    goto LABEL_24;
  v18 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v18 = *(const WCHAR **)a1;
  started = StartTraceW(TraceHandle, v18, (PEVENT_TRACE_PROPERTIES)v13);
  if ( !started )
  {
    v21 = *((_QWORD *)a1 + 13);
    v22 = *((_QWORD *)a1 + 14);
    while ( v21 != v22 )
    {
      memset(&EnableParameters.ControlFlags, 0, 40);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      started = EnableTraceEx2(
                  TraceHandle[0],
                  (LPCGUID)v21,
                  1u,
                  *(_BYTE *)(v21 + 16),
                  *(_QWORD *)(v21 + 24),
                  *(_QWORD *)(v21 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v20 = 148LL;
        goto LABEL_28;
      }
      v21 += 40LL;
    }
    goto LABEL_23;
  }
  v20 = 131LL;
LABEL_28:
  v7 = wil::details::in1diag3::Return_Win32(
         retaddr,
         v20,
         (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
         (const char *)started);
LABEL_24:
  if ( TraceHandle[0] != -1LL )
    CloseTrace(TraceHandle[0]);
  std::wstring::_Tidy_deallocate((__int64)InstanceName);
  operator delete(v13, (const struct std::nothrow_t *)0x78);
  return v7;
}
