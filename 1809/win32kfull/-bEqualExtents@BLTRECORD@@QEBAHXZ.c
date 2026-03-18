/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0098BC4
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 46) - *((_DWORD *)this + 44) == *((_DWORD *)this + 40) - *((_DWORD *)this + 38)
      && *((_DWORD *)this + 47) - *((_DWORD *)this + 45) == *((_DWORD *)this + 41) - *((_DWORD *)this + 39);
}
