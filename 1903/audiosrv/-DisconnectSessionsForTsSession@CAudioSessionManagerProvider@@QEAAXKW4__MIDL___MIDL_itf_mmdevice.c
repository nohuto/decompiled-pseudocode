/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D8F3C
 * Callers:
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800DEC58 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 * Callees:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D6788 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::DisconnectSessionsForTsSession(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  CAudioSessionManager **v6; // rsi
  CAudioSessionManager **i; // rbx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = (CAudioSessionManager **)*((_QWORD *)this + 8);
  for ( i = (CAudioSessionManager **)*((_QWORD *)this + 7); i != v6; ++i )
    CAudioSessionManager::DisconnectSessionsForTsSession(*i, a2, eRender);
  if ( v3 )
    LeaveCriticalSection(v3);
}
