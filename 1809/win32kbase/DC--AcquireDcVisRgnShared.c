/*
 * XREFs of DC::AcquireDcVisRgnShared @ 0x1C00ABA50
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00FF1B0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0034260 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  CPushLock::AcquireLockShared((CPushLock *)(a1 + 1112));
  *(_QWORD *)a2 = a1;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
