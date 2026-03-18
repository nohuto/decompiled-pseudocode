/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C00034F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxObject::SelfDestruct(FxObject *this)
{
  if ( this )
    ((void (__fastcall *)(FxObject *, __int64))this->~FxObject)(this, 1LL);
}
