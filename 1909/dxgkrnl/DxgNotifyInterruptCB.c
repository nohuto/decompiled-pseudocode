/*
 * XREFs of DxgNotifyInterruptCB @ 0x1C0014470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C0046FE4 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C004E16C (DpiProcessMiracastNotifyInterrupt.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct DXGADAPTER *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  DXGDODPRESENT *v10; // rcx
  __int64 v11; // rax

  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 28LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 3928), 0, 0) & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 2 )
      {
        v7 = *(struct DXGADAPTER **)(v6 + 3896);
        if ( v7 )
        {
          v8 = *((_QWORD *)v7 + 320);
          if ( v8 )
          {
            (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v8 + 520) + 8LL)
                                                                                       + 8LL))(
              a1,
              a2);
          }
          else
          {
            v10 = *(DXGDODPRESENT **)(*((_QWORD *)v7 + 319) + 368LL);
            if ( v10 )
              DXGDODPRESENT::NotifyInterrupt(v10, v7, a2);
          }
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v5, 0LL, a3);
        *(_QWORD *)(v11 + 24) = a1;
        WdLogEvent5_WdError(v11);
      }
    }
  }
}
