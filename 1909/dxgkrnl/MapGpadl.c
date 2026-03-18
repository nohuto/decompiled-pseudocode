/*
 * XREFs of MapGpadl @ 0x1C022B6D0
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222880 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C025F77C (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapGpadl(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // al
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax

  v3 = *(_BYTE *)(a1 + 299);
  if ( (v3 & 8) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL);
LABEL_3:
    v6 = v5 + 88;
    goto LABEL_7;
  }
  if ( (v3 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    goto LABEL_3;
  }
  v6 = 0LL;
LABEL_7:
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00A3E10)(*(_QWORD *)v6, 0LL, a2);
  v11 = v7;
  if ( v7 >= 0 )
  {
    _InterlockedIncrement(&g_VgpuNumGpadlMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, a3);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 56));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
