/*
 * XREFs of ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x180029780
 * Callers:
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180016E60 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002B680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002BBD0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180025408 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026834 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdUpdateStreamClassPolicyGains(
        DWORD a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int *a5)
{
  struct CStreamClassPolicyGainsWrapper *v9; // rdi
  int v10; // eax
  int StreamClassPolicyGainsForEndpoint; // ebx
  TSSession *v13; // [rsp+20h] [rbp-28h] BYREF
  struct CStreamClassPolicyGainsWrapper *v14[4]; // [rsp+28h] [rbp-20h] BYREF

  v14[1] = (struct CStreamClassPolicyGainsWrapper *)-2LL;
  v9 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14[2] = v9;
  v10 = TsSessionFromSessionId(a1, 1, 0LL, &v13);
  if ( v10 )
  {
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      StreamClassPolicyGainsForEndpoint = v10;
  }
  else
  {
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                          v13,
                                          a2,
                                          (struct _RTL_CRITICAL_SECTION **)v14);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
                                            (struct _RTL_CRITICAL_SECTION *)v14[0],
                                            a3,
                                            a4,
                                            a5);
  }
  if ( v9 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
