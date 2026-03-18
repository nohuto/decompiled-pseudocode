/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00089DC (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000C918 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0019B54 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E2010 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00F5C18 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00FABDC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FF7CC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00FFA80 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0121A28 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D1E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D6E0 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02487B0 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C026A054 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C028E480 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C013C698 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( a3 > 31 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3 <= 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 151LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v9 = a1[2];
  if ( (unsigned int)v9 >= a1[4] )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v19 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0x1F) != 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, v10);
    *(_QWORD *)(v20 + 24) = 170LL;
    WdLogEvent5_WdAssertion(v20);
    v10 = *(_QWORD *)a1;
  }
  v11 = *(unsigned int *)(v10 + 16LL * a1[2]);
  v12 = 2LL * a1[3];
  a1[2] = v11;
  v13 = *(_DWORD *)(v10 + 8 * v12);
  v14 = a1[4];
  a1[3] = v13;
  if ( (unsigned int)v11 >= v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v21 + 24) = 177LL;
    WdLogEvent5_WdAssertion(v21);
    v13 = a1[3];
    v14 = a1[4];
  }
  if ( v13 >= v14 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v22 + 24) = 178LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v15 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v9) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ a3) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((((v15 >> 5) & 3) << 24) | v9 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) >> 7) & 0x3F;
}
