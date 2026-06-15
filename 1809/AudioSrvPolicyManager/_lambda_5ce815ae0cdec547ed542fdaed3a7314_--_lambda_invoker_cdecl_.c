/*
 * XREFs of _lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_ @ 0x1800173A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct _RTL_CRITICAL_SECTION *Context,
        PTP_TIMER Timer)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = Context + 14;
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  DebugInfo = Context[15].DebugInfo;
  if ( (unsigned __int64)&DebugInfo[-1].SpareWORD + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(DebugInfo);
    SetLastError(LastError);
  }
  Context[15].DebugInfo = 0LL;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
