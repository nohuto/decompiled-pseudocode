/*
 * XREFs of FreeObject @ 0x1C0016BA0
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0015EE0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0017500 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00836F8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00A991C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     EngDeleteDriverObj @ 0x1C0131D50 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi

  if ( *(__int16 *)(a1 + 14) >= 0 )
  {
    Win32FreePool(a1);
  }
  else
  {
    v3 = (&pHmgLookAsideList)[a2];
    if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
      Win32FreeToPagedLookasideListImpl(v3, a1);
  }
}
