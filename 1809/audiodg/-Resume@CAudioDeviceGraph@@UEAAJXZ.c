/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140019750
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140019808 (_TlgKeywordOn.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140019830 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  UINT32 cData; // [rsp+20h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      cData);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Start((CAudioDeviceGraph *)((char *)this + 80));
    v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                          v5,
                                          lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u && TlgKeywordOn(v6, 1uLL) )
      TlgWrite(v7, &unk_140072026, (LPCGUID)this + 22, v8, 2u, &pData);
    v4 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
