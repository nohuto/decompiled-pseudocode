/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C008AEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = IsW32kCddDisableGdiHwAccelerationSupported();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)W32kCddDisableGdiHwAcceleration(0LL);
  return v1;
}
