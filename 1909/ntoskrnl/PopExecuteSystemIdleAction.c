/*
 * XREFs of PopExecuteSystemIdleAction @ 0x1408B2AA4
 * Callers:
 *     PopSystemIdleWorker @ 0x1408B2C90 (PopSystemIdleWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopDiagTraceSystemIdleAction @ 0x1408B0864 (PopDiagTraceSystemIdleAction.c)
 */

__int64 __fastcall PopExecuteSystemIdleAction(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v5; // edi
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v11, 0, 24);
  v5 = a1;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  if ( (_DWORD)a1 != 1 )
  {
    if ( (int)a1 > 2 )
    {
      if ( (int)a1 <= 4 )
      {
        if ( a2 )
        {
          v10 = 0;
          v11[0] = 0x8000000007LL;
          v9 = 0x8000002400000003uLL;
          PopAcquirePolicyLock();
          PopExecutePowerAction((__int64)v11, 0, &v9, 5, 1u);
          PopReleasePolicyLock();
        }
        goto LABEL_5;
      }
      if ( (_DWORD)a1 == 5 )
      {
LABEL_5:
        v7 = 0;
        goto LABEL_11;
      }
    }
    v7 = -1073741811;
    goto LABEL_11;
  }
  v7 = -1073741822;
  if ( qword_14046BAF8 )
  {
    LOBYTE(a1) = a2;
    v7 = qword_14046BAF8(a1);
  }
LABEL_11:
  *(_QWORD *)a3 = v6;
  *(_DWORD *)(a3 + 8) = v5;
  *(_BYTE *)(a3 + 12) = a2;
  *(_DWORD *)(a3 + 16) = v7;
  PopDiagTraceSystemIdleAction(v5, a2, v7);
  return v7;
}
