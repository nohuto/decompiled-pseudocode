/*
 * XREFs of PpvUtilFailDriver @ 0x14028B42C
 * Callers:
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     VfErrorReport7 @ 0x140936FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140937050 (VfErrorReport8.c)
 */

__int64 __fastcall PpvUtilFailDriver(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 != 1 )
          return result;
        v2 = 589LL;
      }
      else
      {
        v2 = 587LL;
      }
      return VfErrorReport8(v2);
    }
    else
    {
      return VfErrorReport7();
    }
  }
  return result;
}
