/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D7684
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_ @ 0x1C01D7670 (_lambda_01d02e0fe91b87acfd5bf6b036e4910e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(LPCWSTR **this)
{
  __int64 CurrentThreadWin32Thread; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( dword_1C03202C0 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 1uLL) )
  {
    TlgCreateWsz(&pDesc, **this);
    TlgWrite(
      (TraceLoggingHProvider)&dword_1C03202C0,
      &unk_1C02E6324,
      (LPCGUID)(*this + 1),
      (LPCGUID)(*this)[5],
      3u,
      &pData);
  }
  Win32FreeToPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, *this);
}
