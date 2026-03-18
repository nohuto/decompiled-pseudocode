/*
 * XREFs of MapGpadl @ 0x1C01FAE00
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2540 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C022A868 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapGpadl(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // al
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = *(_BYTE *)(a1 + 323);
  if ( (v3 & 8) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 456LL);
LABEL_3:
    v6 = v5 + 88;
    goto LABEL_7;
  }
  if ( (v3 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 456);
    goto LABEL_3;
  }
  v6 = 0LL;
LABEL_7:
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C008FDF0)(*(_QWORD *)v6, 0LL, a2);
  v9 = v7;
  if ( v7 >= 0 )
  {
    _InterlockedIncrement(&g_VgpuNumGpadlMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, a3);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 56));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), a3);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v9;
}
