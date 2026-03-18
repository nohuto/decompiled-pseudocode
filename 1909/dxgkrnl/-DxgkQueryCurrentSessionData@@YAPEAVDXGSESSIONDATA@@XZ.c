/*
 * XREFs of ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C0102410
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DxgkQueryCurrentSessionData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( (PEPROCESS)PsGetCurrentProcess(a1, a2) == PsInitialSystemProcess )
    return 0LL;
  v3 = 0LL;
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess, v2) + 74);
  if ( v6 )
  {
    v15 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v5, v4);
    v14 = v6 + 80;
    if ( v6 == -80 )
    {
      v12 = WdLogNewEntry5_WdAssertion(0LL, v7);
      *(_QWORD *)(v12 + 24) = 660LL;
      WdLogEvent5_WdAssertion(v12);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(v14 + 16) == CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v7);
      *(_QWORD *)(v13 + 24) = 667LL;
      WdLogEvent5_WdAssertion(v13);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v6 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
      if ( v15 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v14);
      return (struct DXGSESSIONDATA *)v10;
    }
  }
  return (struct DXGSESSIONDATA *)v3;
}
