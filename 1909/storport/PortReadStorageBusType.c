/*
 * XREFs of PortReadStorageBusType @ 0x1C006DC24
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C006D344 (PortpOpenParametersKey.c)
 *     PortpReadBusType @ 0x1C006DCA0 (PortpReadBusType.c)
 */

char __fastcall PortReadStorageBusType(struct _UNICODE_STRING *a1)
{
  void *v1; // rax
  void *v2; // rdi
  char BusType; // bl
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  v1 = PortpOpenParametersKey(a1);
  v2 = v1;
  if ( v1 )
  {
    BusType = PortpReadBusType(v1, KeyValueInformation);
    ZwClose(v2);
    LOBYTE(v1) = BusType;
  }
  return (char)v1;
}
