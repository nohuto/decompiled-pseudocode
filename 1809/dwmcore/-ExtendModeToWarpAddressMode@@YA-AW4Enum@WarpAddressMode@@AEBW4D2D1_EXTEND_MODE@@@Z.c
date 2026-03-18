/*
 * XREFs of ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801866A4
 * Callers:
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180186140 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendModeToWarpAddressMode(_DWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      return 1;
    }
    else if ( *a1 == 2 )
    {
      return 2;
    }
  }
  return v1;
}
