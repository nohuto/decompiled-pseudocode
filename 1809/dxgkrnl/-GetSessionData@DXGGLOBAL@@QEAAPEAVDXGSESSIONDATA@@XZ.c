/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8
 * Callers:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DF10 (-IsTokenManagerReady@@YAHXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00128F8 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014FF4 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3710 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  DXGFASTMUTEX *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)this + 77);
  v2 = 0LL;
  if ( v1 )
  {
    v11 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
    v10 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v7 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v7 + 24) = 511LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v10 + 1) == CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v8 + 24) = 518LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( v11 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v9[5] = &v10;
      v9[3] = 275LL;
      v9[4] = 4LL;
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    DXGFASTMUTEX::Acquire(v10);
    v11 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 72) )
    {
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v10);
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * CurrentProcessSessionId);
      v11 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v10);
      return (struct DXGSESSIONDATA *)v5;
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}
