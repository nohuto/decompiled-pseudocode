/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x18005479C
 * Callers:
 *     LdrpGetDllPath @ 0x180054338 (LdrpGetDllPath.c)
 * Callees:
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     TraceLoggingRegisterEx @ 0x18007600C (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D2490 (_TlgCreateWsz.c)
 */

TLG_STATUS __fastcall LdrpLogRelativePathWithAlteredSearchError(
        LPCWSTR pwsz,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        void *a3)
{
  struct _PEB *v3; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  TLG_STATUS result; // eax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-28h] BYREF

  v3 = NtCurrentPeb();
  if ( v3 && (ProcessParameters = v3->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_18011CB50;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F558, a2, a3);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( dword_18015F558 > 5u && CentennialIssueTracker_InitializedState == 2 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateWsz(&v12, Buffer);
    return TlgWrite((TraceLoggingHProvider)&dword_18015F558, &unk_18012C629, v8, v9, 4u, &pData);
  }
  return result;
}
