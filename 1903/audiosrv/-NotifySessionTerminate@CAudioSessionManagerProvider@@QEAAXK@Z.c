/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800D91A0
 * Callers:
 *     VADServerUserSessionChanged @ 0x180029328 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D6788 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionTerminate(
        CAudioSessionManagerProvider *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CAudioSessionManager **v5; // rsi
  CAudioSessionManager **i; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (CAudioSessionManager **)*((_QWORD *)this + 8);
  for ( i = (CAudioSessionManager **)*((_QWORD *)this + 7); i != v5; ++i )
    CAudioSessionManager::DisconnectSessionsForTsSession(*i, a2, eAll);
  if ( v2 )
    LeaveCriticalSection(v2);
}
