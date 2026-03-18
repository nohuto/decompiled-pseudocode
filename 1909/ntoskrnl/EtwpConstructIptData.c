/*
 * XREFs of EtwpConstructIptData @ 0x140906A90
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x140906BA0 (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x1401C2C50 (ZwLoadDriver.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69777445u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x28uLL);
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  v5[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(v5, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1016) = v5;
  return 0LL;
}
