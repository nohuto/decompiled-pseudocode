/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01052C0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01F4B90 (xxxCleanupAndFreeDdeConv.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  struct tagFREELIST *v2; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
