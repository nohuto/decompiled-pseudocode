/*
 * XREFs of UnmapGpadl @ 0x1C01FAF80
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2540 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C022A3F8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // al
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 323);
  if ( (v3 & 8) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 456LL);
LABEL_3:
    v7 = v6 + 88;
    goto LABEL_7;
  }
  if ( (v3 & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 456);
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (struct DXGPUSHLOCK *const)(v7 + 8));
  if ( *(_BYTE *)(v7 + 48) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C008FE18)(*(_QWORD *)v7, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v8 = -a3;
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, v8);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 56));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 64), v8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
