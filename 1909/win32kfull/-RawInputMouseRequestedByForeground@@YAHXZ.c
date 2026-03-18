/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01DB308
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C01DC630 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 RawInputMouseRequestedByForeground(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(gpqForeground + 104LL);
    if ( v1 )
    {
      if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v1 + 416)) != 0;
    }
  }
  return v0;
}
