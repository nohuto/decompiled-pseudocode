/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02A88CC
 * Callers:
 *     ?DpiKsrPrepare@@YAXPEAX@Z @ 0x1C02A9088 (-DpiKsrPrepare@@YAXPEAX@Z.c)
 *     DpiKsrCallback @ 0x1C02A96E0 (DpiKsrCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpIterateFdoContexts(__int64 (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rax

  AcquireMiniportListMutex();
  v4 = qword_1C00A2778;
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v4 + 72), Executive, 0, 0, 0LL);
      v5 = *(__int64 **)(v4 + 56);
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
          {
            v6 = a1(v5, a2);
            v10 = v6;
            if ( v6 < 0 )
            {
              v11 = WdLogNewEntry5_WdError(v8, v7, v9);
              *(_QWORD *)(v11 + 24) = v10;
              WdLogEvent5_WdError(v11);
            }
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != *(_QWORD *)(v4 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != qword_1C00A2778 );
  }
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
}
