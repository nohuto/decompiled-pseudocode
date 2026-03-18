/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00AA37C
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0062E00 (HmgFree.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rdi
  __int64 Next; // rcx
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rbx

  v1 = *this;
  Next = (__int64)(*this)[8].Next;
  if ( Next )
  {
    Win32FreePool(Next);
    v1 = *this;
  }
  v4 = gpTypeIsolation[1];
  if ( v4 )
  {
    memset(v1, 0, 0x90uLL);
    ++*((_DWORD *)v4 + 15);
    v5 = v4 + 32;
    if ( ExQueryDepthSList((PSLIST_HEADER)v5) < *((_WORD *)v5 + 8) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v5, v1);
    }
    else
    {
      ++*((_DWORD *)v5 + 8);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *, unsigned __int8 *))v5 + 7))(v1, v5);
    }
  }
  *this = 0LL;
}
