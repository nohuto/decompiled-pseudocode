/*
 * XREFs of ?IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ @ 0x1800595FC
 * Callers:
 *     ?FindView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@@Z @ 0x180059180 (-FindView@ViewHierarchy@@UEBA-AV-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V-$fun.c)
 *     ?GetActiveView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@XZ @ 0x1800592B0 (-GetActiveView@ViewHierarchy@@UEBA-AV-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@X.c)
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180059370 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchy@@UEBAII@Z @ 0x1800594B0 (-GetTopLevelHostView@ViewHierarchy@@UEBAII@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ViewHierarchy::IsConnectedToNavServer(ViewHierarchy *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 8) || *((_DWORD *)this + 40) == 1 )
    return 1;
  return result;
}
