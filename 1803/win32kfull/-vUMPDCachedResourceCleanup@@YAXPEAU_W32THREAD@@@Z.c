/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F3C04
 * Callers:
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F3B30 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     UMPDCachedResourceCleanupWrap @ 0x1C00F3BF0 (UMPDCachedResourceCleanupWrap.c)
 * Callees:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C001993C (-Close@PROXYPORT@@QEAAXXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0135874 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _W32THREAD *a1, __int64 a2)
{
  struct _UMPDHEAP *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 7);
  if ( v3 )
  {
    DestroyUMPDHeap(v3);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    v4 = *((_QWORD *)a1 + 8);
    PROXYPORT::Close((PROXYPORT *)&v4, a2);
    *((_QWORD *)a1 + 8) = 0LL;
  }
}
