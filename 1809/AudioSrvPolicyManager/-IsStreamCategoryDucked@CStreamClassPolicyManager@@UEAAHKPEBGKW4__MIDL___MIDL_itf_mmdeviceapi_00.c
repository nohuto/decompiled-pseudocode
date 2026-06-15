/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180025620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026834 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *i; // rax
  __int64 v14; // r8
  TSSession *v16; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[4]; // [rsp+28h] [rbp-20h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v9 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection[2] = v10;
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v16)
    && (int)TSSession::GetStreamClassPolicyGainsForEndpoint(
              v16,
              a3,
              (struct CStreamClassPolicyGainsWrapper **)lpCriticalSection) >= 0 )
  {
    v11 = lpCriticalSection[0];
    EnterCriticalSection(lpCriticalSection[0]);
    if ( a4 < 0x15 )
    {
      v12 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v11->DebugInfo + 16 * a4 + (a6 != 0 ? 376LL : 40LL));
      for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
      {
        v14 = *(_QWORD *)(i[2] + 56LL);
        if ( *(float *)v14 != 0.0 && *(_BYTE *)(v14 + 4) )
        {
          if ( v11 )
            LeaveCriticalSection(v11);
          v9 = 1;
          goto LABEL_15;
        }
      }
    }
    if ( v11 )
      LeaveCriticalSection(v11);
    v9 = 0;
  }
LABEL_15:
  if ( v10 )
    LeaveCriticalSection(v10);
  return v9;
}
