/*
 * XREFs of PipHardwareConfigGetLastUseTime @ 0x14085C8F4
 * Callers:
 *     PnpGetStableSystemBootTime @ 0x14086185C (PnpGetStableSystemBootTime.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x140755338 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetLastUseTime(__int64 a1, void *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = PipHardwareConfigOpenKey(a1, 0x20019u, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v5) = 8;
      v3 = RegRtlQueryValue(Handle, L"LastUse", &v6, a2, (unsigned int *)&v5);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
