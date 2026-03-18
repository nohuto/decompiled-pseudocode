/*
 * XREFs of ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x1800660C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::Clear(CArrayBasedCoverageSet *this)
{
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 0x24u);
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 416, 0x24u);
}
