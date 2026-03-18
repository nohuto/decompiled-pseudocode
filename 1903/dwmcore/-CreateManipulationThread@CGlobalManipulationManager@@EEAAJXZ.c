/*
 * XREFs of ?CreateManipulationThread@CGlobalManipulationManager@@EEAAJXZ @ 0x1800DF5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AA3AC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0964 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CGlobalManipulationManager::CreateManipulationThread(CGlobalManipulationManager *this)
{
  CGlobalManipulationManager *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE Thread; // rax
  unsigned int v6; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-C8h]
  DWORD ThreadId[4]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int16 v9[66]; // [rsp+40h] [rbp-A8h] BYREF
  int v10; // [rsp+C4h] [rbp-24h]

  v1 = this;
  if ( *((_BYTE *)this + 176) )
  {
    v3 = -2147467260;
    dwCreationFlags = 92;
LABEL_8:
    v6 = v3;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C1B60, 2u, v6, dwCreationFlags, 0LL);
    return v3;
  }
  memset_0(v9, 0, 0x90uLL);
  StringCchCopyW(v9, 0x40uLL, (size_t *)L"Capture");
  v10 = 1;
  v2 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)v1 + 184), (const struct DWM_MMTASK *)v9, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = v2;
    dwCreationFlags = 104;
    goto LABEL_10;
  }
  Thread = CreateThread(0LL, 0LL, CGlobalManipulationManager::s_ThreadMain, v1, 4u, ThreadId);
  this = (CGlobalManipulationManager *)ThreadId[0];
  *((_QWORD *)v1 + 21) = Thread;
  CManipulationManager::s_dwManipulationThreadId = (unsigned int)this;
  if ( !Thread )
  {
    v3 = -2147024882;
    dwCreationFlags = 119;
    goto LABEL_8;
  }
  SetThreadDescription(Thread, L"DWM Manipulation Thread");
  SetThreadPriority(*((HANDLE *)v1 + 21), 16);
  ResumeThread(*((HANDLE *)v1 + 21));
  WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
  return v3;
}
