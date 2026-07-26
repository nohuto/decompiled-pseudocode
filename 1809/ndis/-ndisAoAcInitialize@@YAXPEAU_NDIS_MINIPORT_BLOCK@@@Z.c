/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCA88
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisAoAcInitialize(_QWORD *FunctionContext)
{
  char *PoolWithTag; // rbx
  unsigned __int8 v3; // al

  PoolWithTag = (char *)FunctionContext[562];
  if ( PoolWithTag || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x498uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(PoolWithTag, 0, 0x498uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)PoolWithTag);
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 32;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 32;
    KeInitializeEvent((PRKEVENT)(PoolWithTag + 392), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(PoolWithTag + 448), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(PoolWithTag + 416), NotificationEvent, 1u);
    v3 = ndisCsResiliency;
    *((_DWORD *)PoolWithTag + 94) = 0;
    *((_DWORD *)PoolWithTag + 95) |= 0x100u;
    PoolWithTag[1097] = v3;
    PoolWithTag[288] = 0;
    PoolWithTag[386] = 1;
    PoolWithTag[1096] = 0;
    PoolWithTag[440] = 0;
    *((_DWORD *)PoolWithTag + 71) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(PoolWithTag + 72), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, FunctionContext);
    *((_QWORD *)PoolWithTag + 25) = FunctionContext;
    *((_QWORD *)PoolWithTag + 26) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)PoolWithTag + 38) = ndisAoAcWakeWorkItem;
    *((_QWORD *)PoolWithTag + 37) = FunctionContext;
    FunctionContext[562] = PoolWithTag;
  }
  else if ( (unsigned __int8)byte_1C00A025D >= 2u )
  {
    WPP_SF_q(0xAu, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)FunctionContext);
  }
}
