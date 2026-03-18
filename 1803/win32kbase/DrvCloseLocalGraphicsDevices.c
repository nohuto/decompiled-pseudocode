/*
 * XREFs of DrvCloseLocalGraphicsDevices @ 0x1C00D3BA0
 * Callers:
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C00D68C0 (bSetDeviceSessionUsage.c)
 */

LONG_PTR DrvCloseLocalGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *i; // rbx
  LONG_PTR result; // rax

  for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( *((_QWORD *)i + 29) )
    {
      bSetDeviceSessionUsage(i, 0LL);
      result = ObfDereferenceObject(*((PVOID *)i + 29));
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 29) = 0LL;
    }
  }
  return result;
}
