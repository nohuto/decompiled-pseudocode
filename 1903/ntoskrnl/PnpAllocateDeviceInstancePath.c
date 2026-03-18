/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x140754A84
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  PVOID PoolWithTag; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x49706E50u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
