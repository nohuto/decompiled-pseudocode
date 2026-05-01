/*
 * XREFs of CrmStateMonitorNetworkStart @ 0x180046C50
 * Callers:
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x1800405A4 (CrmStateMonitorNetworkUpdateState.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorNetworkStart(char *CallerContext, void *a2)
{
  char *v2; // rsi
  NTSTATUS v5; // eax
  int updated; // ebx
  unsigned int v7; // eax

  v2 = CallerContext + 56;
  *((_QWORD *)CallerContext + 5) = CallerContext + 56;
  v5 = NotifyUnicastIpAddressChange(
         0,
         (PUNICAST_IPADDRESS_CHANGE_CALLBACK)CrmStateMonitorNetworkInterfaceCallback,
         CallerContext,
         0,
         (HANDLE *)CallerContext + 8);
  updated = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0xC0070000;
  }
  else
  {
    NotifyIpInterfaceChange(
      0,
      (PIPINTERFACE_CHANGE_CALLBACK)CrmStateMonitorNetworkInterfaceCallback,
      CallerContext,
      0,
      (HANDLE *)CallerContext + 9);
    updated = CrmStateMonitorNetworkUpdateState((void **)CallerContext);
    if ( updated >= 0 )
    {
      v7 = CrmStateMonitorStateSizeGet(*(_DWORD *)CallerContext);
      memcpy_0(a2, v2, v7);
    }
  }
  return (unsigned int)updated;
}
