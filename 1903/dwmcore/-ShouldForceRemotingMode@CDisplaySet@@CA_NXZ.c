/*
 * XREFs of ?ShouldForceRemotingMode@CDisplaySet@@CA_NXZ @ 0x1800A46B8
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800A46DC (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     <none>
 */

char CDisplaySet::ShouldForceRemotingMode(void)
{
  char result; // al

  result = 0;
  if ( g_pComposition )
  {
    if ( *((int *)g_pComposition + 274) >= 3 )
      return 1;
  }
  return result;
}
