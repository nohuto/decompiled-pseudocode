/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01C7F84
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C01C8E90 (EditionGetMouseWheelRoutingMode.c)
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
    v1 = *(_QWORD *)(gpqForeground + 96LL);
    if ( v1 )
    {
      if ( gForegroundQRawMouseRequested )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v1 + 424)) != 0;
    }
  }
  return v0;
}
