/*
 * XREFs of EtwpConstructIptData @ 0x1408CAEBC
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1408CAF5C (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x1401BA2D0 (ZwLoadDriver.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
