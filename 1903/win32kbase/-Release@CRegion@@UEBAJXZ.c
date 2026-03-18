/*
 * XREFs of ?Release@CRegion@@UEBAJXZ @ 0x1C007F520
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C008AB10 (-SetEmpty@CRegion@@UEAAXXZ.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &CRegion::`vftable';
    CRegion::SetEmpty(this);
    Win32FreePool((__int64)this);
  }
  return v2;
}
