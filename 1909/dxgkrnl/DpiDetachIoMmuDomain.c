/*
 * XREFs of DpiDetachIoMmuDomain @ 0x1C02A8844
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6870 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050688 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiDetachIoMmuDomain(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_1C00A2C60)(
             *(_QWORD *)(IoMmuContextFromDevice + 8),
             a1,
             0LL);
  if ( (int)result < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 1233LL;
    return WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
