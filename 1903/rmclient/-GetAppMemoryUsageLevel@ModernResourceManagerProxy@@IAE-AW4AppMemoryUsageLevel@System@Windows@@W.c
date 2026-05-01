/*
 * XREFs of ?GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IAE?AW4AppMemoryUsageLevel@System@Windows@@W4_RM_COMMIT_LEVEL@@@Z @ 0x100080B7
 * Callers:
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x10008038 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall ModernResourceManagerProxy::GetAppMemoryUsageLevel(int a1)
{
  bool v1; // zf
  int v2; // eax
  int v3; // ecx

  v1 = QuirkIsEnabled(1114131) == 0;
  v2 = a1;
  v3 = 3;
  if ( !v1 && a1 >= 4 )
    v2 = 3;
  if ( v2 <= 1 )
    return 0;
  if ( v2 == 2 )
    return 1;
  if ( v2 == 3 )
    return 2;
  if ( v2 != 4 )
    return 0;
  return v3;
}
