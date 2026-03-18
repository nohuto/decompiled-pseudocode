/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x1C0051944
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C02A08E0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1C02ADD58 (DpiDeleteSpbResourceRecord.c)
 */

void __fastcall DpiCheckSpbResourceLeakage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a1 + 2704;
  if ( *(_QWORD *)v3 != v3 )
  {
    v4 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = *(_QWORD *)v3;
    *(_QWORD *)(v4 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v4);
  }
  while ( *(_QWORD *)v3 != v3 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 48LL) = 0;
    DpiDeleteSpbResourceRecord();
  }
}
