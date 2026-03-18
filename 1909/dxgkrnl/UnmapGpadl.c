/*
 * XREFs of UnmapGpadl @ 0x1C022B8C0
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222880 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025F2E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // al
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 299);
  if ( (v3 & 8) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL);
LABEL_3:
    v7 = v6 + 88;
    goto LABEL_7;
  }
  if ( (v3 & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 432);
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (struct _KTHREAD **)(v7 + 8));
  if ( *(_BYTE *)(v7 + 48) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C00A3E38)(*(_QWORD *)v7, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v8 = -a3;
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, v8);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 56));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 64), v8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
