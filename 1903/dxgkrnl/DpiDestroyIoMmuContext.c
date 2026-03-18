/*
 * XREFs of DpiDestroyIoMmuContext @ 0x1C02A83CC
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     IoMmuDeleteIoMmuDomain @ 0x1C004FEF4 (IoMmuDeleteIoMmuDomain.c)
 *     IoMmuDestroyPageManager @ 0x1C004FF44 (IoMmuDestroyPageManager.c)
 */

void __fastcall DpiDestroyIoMmuContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !*(_BYTE *)(a1 + 480) )
  {
    if ( *(_QWORD *)(a1 + 5688) != a1 + 5688 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v3 + 24) = 877LL;
      WdLogEvent5_WdAssertion(v3);
    }
    IoMmuDeleteIoMmuDomain(a1 + 5568);
    IoMmuDestroyPageManager((_QWORD *)(a1 + 5584));
  }
}
