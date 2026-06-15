/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800FEF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180042BF0 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_K$$QEA_K@Z @ 0x1800FCBF8 (--$_Emplace_reallocate@_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_K$$QEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v5; // r8
  void *v6; // r8
  __int64 v7; // rax
  __int128 v8; // rdi
  _QWORD *i; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // r14
  _BYTE *v13; // r8
  const char *v14; // r9
  __int64 result; // rax
  _QWORD *j; // rax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-88h]
  struct _TP_TIMER **v18; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v19; // [rsp+40h] [rbp-78h]
  __int128 v20; // [rsp+48h] [rbp-70h] BYREF
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v25; // [rsp+D8h] [rbp+20h] BYREF

  v22 = -2LL;
  v18 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v25, (LPVOID *)&v18)
    && (_DWORD)v25 )
  {
    v18 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v18[1], v5, (struct _TP_TIMER *)L"asm_GetApplicationSubmixes");
  try
  {
    (*(void (**)(void))(*(_QWORD *)g_ProcessSubmixManager + 48LL))();
    v20 = 0LL;
    v8 = 0LL;
    v21 = 0LL;
    v10 = v19;
    for ( i = *v19; i != v10[1]; ++i )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 184LL))(*i);
      v25 = v7;
      if ( (_QWORD)v8 == *((_QWORD *)&v8 + 1) )
      {
        std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>(
          (const void **)&v20,
          *((_BYTE **)&v8 + 1),
          &v25);
        *(_QWORD *)&v8 = v21;
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&v20 + 1);
      }
      else
      {
        **((_QWORD **)&v8 + 1) = v7;
        *((_QWORD *)&v8 + 1) += 8LL;
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&v8 + 1);
      }
      v10 = v19;
    }
    v11 = (_QWORD *)v20;
    v12 = (__int64)(*((_QWORD *)&v8 + 1) - v20) >> 3;
    v13 = MIDL_user_allocate(8 * v12);
    if ( v13 )
    {
      for ( j = v11; j != *((_QWORD **)&v8 + 1); ++j )
        *(_QWORD *)((char *)j + v13 - (_BYTE *)v11) = *j;
      *a2 = v12;
      *a3 = v13;
      if ( v11 )
        std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(8 * ((__int64)(v8 - (_QWORD)v11) >> 3)));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8007000ELL);
      if ( v11 )
        std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(8 * ((__int64)(v8 - (_QWORD)v11) >> 3)));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xE2,
                     (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v14);
    return (unsigned int)v25;
  }
  return result;
}
