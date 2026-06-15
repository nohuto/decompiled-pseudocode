/*
 * XREFs of _lambda_71eadae99598aaffd4e88ecb8f459962_::_lambda_invoker_cdecl_ @ 0x1800141F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall lambda_71eadae99598aaffd4e88ecb8f459962_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  char *v4; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(Context + 568);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (char *)*((_QWORD *)Context + 76);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)Context + 76) = 0LL;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
