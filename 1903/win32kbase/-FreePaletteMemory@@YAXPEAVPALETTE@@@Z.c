/*
 * XREFs of ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BDC30 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall FreePaletteMemory(struct _SLIST_ENTRY *a1)
{
  struct _SLIST_ENTRY *Next; // rcx
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbx

  Next = a1[8].Next;
  if ( Next )
    Win32FreePool(Next);
  v3 = gpTypeIsolation[1];
  if ( v3 )
  {
    memset(a1, 0, 0x90uLL);
    ++*((_DWORD *)v3 + 19);
    v4 = v3 + 48;
    if ( ExQueryDepthSList((PSLIST_HEADER)v4) >= *((_WORD *)v4 + 8) )
    {
      ++*((_DWORD *)v4 + 8);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *, unsigned __int8 *))v4 + 7))(a1, v4);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, a1);
    }
  }
}
