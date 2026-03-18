/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01C44F4
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_ @ 0x1C01C44E0 (_lambda_01d02e0fe91b87acfd5bf6b036e4910e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(LPCWSTR **this)
{
  __int64 CurrentThreadWin32Thread; // rax
  signed __int32 v3; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+70h] [rbp-38h] BYREF
  signed __int32 *v7; // [rsp+80h] [rbp-28h]
  int v8; // [rsp+88h] [rbp-20h]
  int v9; // [rsp+8Ch] [rbp-1Ch]

  v3 = 0x80000000;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v3 = _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( (unsigned int)dword_1C030D340 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 1uLL) )
  {
    TlgCreateWsz(&pDesc, **this);
    TlgCreateWsz(&v6, L"Stop");
    v9 = 0;
    v7 = &v3;
    v8 = 4;
    TlgWrite(
      (TraceLoggingHProvider)&dword_1C030D340,
      &unk_1C02D491F,
      (LPCGUID)(*this + 1),
      (LPCGUID)(*this)[5],
      5u,
      &pData);
  }
  Win32FreeToPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, *this);
}
