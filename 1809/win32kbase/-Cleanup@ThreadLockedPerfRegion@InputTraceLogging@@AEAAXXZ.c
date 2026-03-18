/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C00EC6E0
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_ @ 0x1C00EC670 (_lambda_01d02e0fe91b87acfd5bf6b036e4910e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001D8A0 (Win32FreeToPagedLookasideList.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(LPCWSTR **this, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  signed __int32 v5; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+70h] [rbp-38h] BYREF
  signed __int32 *v9; // [rsp+80h] [rbp-28h]
  int v10; // [rsp+88h] [rbp-20h]
  int v11; // [rsp+8Ch] [rbp-1Ch]

  v5 = 0x80000000;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    v5 = _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( dword_1C01C7F10 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 1uLL) )
  {
    TlgCreateWsz(&pDesc, **this);
    TlgCreateWsz(&v8, L"Stop");
    v11 = 0;
    v9 = &v5;
    v10 = 4;
    TlgWrite(
      (TraceLoggingHProvider)&dword_1C01C7F10,
      &unk_1C019DD64,
      (LPCGUID)(*this + 1),
      (LPCGUID)(*this)[5],
      5u,
      &pData);
  }
  Win32FreeToPagedLookasideList((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, (__int64)*this);
}
