/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C011063C
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_ @ 0x1C01105C0 (_lambda_01d02e0fe91b87acfd5bf6b036e4910e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001A250 (Win32FreeToPagedLookasideList.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(LPCWSTR **this)
{
  __int64 CurrentThreadWin32Thread; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( dword_1C020CB50 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 1uLL) )
  {
    TlgCreateWsz(&pDesc, **this);
    TlgWrite(
      (TraceLoggingHProvider)&dword_1C020CB50,
      &unk_1C01E1E0F,
      (LPCGUID)(*this + 1),
      (LPCGUID)(*this)[5],
      3u,
      &pData);
  }
  Win32FreeToPagedLookasideList((__int64)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, (__int64)*this);
}
