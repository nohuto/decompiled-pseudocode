/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0088C68
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C013CB34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C0277DF4 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 608LL);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 608LL) = 0LL;
    v1 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v1 + 496));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 496LL));
}
