/*
 * XREFs of DrvCloseLocalGraphicsDevices @ 0x1C0093E90
 * Callers:
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C00413D0 (bSetDeviceSessionUsage.c)
 */

LONG_PTR DrvCloseLocalGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *i; // rbx
  LONG_PTR result; // rax

  for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( *((_QWORD *)i + 29) )
    {
      bSetDeviceSessionUsage((__int64)i, 0);
      result = ObfDereferenceObject(*((PVOID *)i + 29));
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 29) = 0LL;
    }
  }
  return result;
}
