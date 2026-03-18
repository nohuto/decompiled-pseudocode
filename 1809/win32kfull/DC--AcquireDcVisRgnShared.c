/*
 * XREFs of DC::AcquireDcVisRgnShared @ 0x1C015F480
 * Callers:
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012F820 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
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
