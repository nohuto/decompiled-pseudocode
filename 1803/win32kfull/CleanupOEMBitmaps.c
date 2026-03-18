/*
 * XREFs of CleanupOEMBitmaps @ 0x1C0054B00
 * Callers:
 *     CreateBitmapStrip @ 0x1C0054A80 (CreateBitmapStrip.c)
 * Callees:
 *     <none>
 */

__int64 CleanupOEMBitmaps()
{
  PVOID *p_DeviceContext; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  v1 = 18LL;
  do
  {
    *((_DWORD *)p_DeviceContext + 2) = 0;
    *((_DWORD *)p_DeviceContext + 3) = 0;
    if ( *p_DeviceContext )
    {
      GreSetBitmapOwner(*p_DeviceContext, 2147483650LL);
      result = GreDeleteObject(*p_DeviceContext);
      *p_DeviceContext = 0LL;
    }
    p_DeviceContext += 95;
    --v1;
  }
  while ( v1 );
  return result;
}
