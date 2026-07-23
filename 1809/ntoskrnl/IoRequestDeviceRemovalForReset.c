/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x1408279B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     McTemplateK0hzr0 @ 0x140288138 (McTemplateK0hzr0.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EFF30 (PnpSetTargetDeviceRemove.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     IopFreeResetRemovalContext @ 0x140827D30 (IopFreeResetRemovalContext.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x14083B194 (PnpTraceRequestDeviceRemovalForReset.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(PVOID Object, unsigned int a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x45706E50u);
  v5 = 0LL;
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_2;
  memset(PoolWithTag, 0, 0xE0uLL);
  KeInitializeDpc((PRKDPC)(v6 + 64), (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, (PVOID)v6);
  KeInitializeTimerEx((PKTIMER)v6, NotificationTimer);
  *(_QWORD *)(v6 + 152) = v6;
  *(_QWORD *)(v6 + 144) = IopRetryDeviceRemovalForReset;
  *(_QWORD *)(v6 + 128) = 0LL;
  ObfReferenceObjectWithTag(Object, 0x52706E50u);
  *(_QWORD *)(v6 + 184) = Object;
  *(_DWORD *)(v6 + 160) = 0;
  *(_DWORD *)(v6 + 216) = a2;
  *(_DWORD *)(v6 + 164) = 0;
  *(_DWORD *)(v6 + 192) = 0;
  *(_QWORD *)(v6 + 200) = 0LL;
  *(_QWORD *)(v6 + 208) = 0LL;
  if ( (int)IopAllocateUnicodeString(v6 + 200, 0x200u) >= 0 )
    v7 = PnpSetTargetDeviceRemove(
           *(_QWORD **)(v6 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           v6,
           (_DWORD *)(v6 + 164),
           v6 + 192,
           v6 + 200,
           (__int64 *)(v6 + 168));
  else
LABEL_2:
    v7 = -1073741670;
  PnpTraceRequestDeviceRemovalForReset(Object, a2, (unsigned int)v7);
  if ( v7 >= 0 )
  {
    if ( Object )
      v5 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( (byte_140406847 & 8) != 0 )
      McTemplateK0hzr0(v9, v8, v10, *(_WORD *)(v5 + 40) >> 1, *(_QWORD *)(v5 + 48));
  }
  else if ( v6 )
  {
    IopFreeResetRemovalContext((PVOID)v6);
  }
  return (unsigned int)v7;
}
