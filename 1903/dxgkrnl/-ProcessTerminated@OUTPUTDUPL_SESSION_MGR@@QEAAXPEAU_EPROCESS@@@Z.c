/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00F3C78
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C0149330 (OutputDuplProcessTerminate.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // eax
  struct _EPROCESS **v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v13 = *((_QWORD *)this + 1);
  v14 = 0;
  if ( !v13 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v13 + 16) == CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v10 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13);
  v5 = *((unsigned int *)this + 1);
  v6 = **((_QWORD **)this + 2);
  v7 = 0;
  if ( (_DWORD)v5 )
  {
    v8 = (struct _EPROCESS **)(v6 + 8);
    while ( a2 != *v8 )
    {
      ++v7;
      v8 += 4;
      if ( v7 >= (unsigned int)v5 )
        goto LABEL_9;
    }
    v11 = 32LL * v7;
    if ( *(_DWORD *)(v11 + v6) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v5);
      *(_QWORD *)(v12 + 24) = 4340LL;
      WdLogEvent5_WdAssertion(v12);
    }
    *(_QWORD *)(v11 + v6 + 8) = 0LL;
  }
LABEL_9:
  if ( v14 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v13);
}
