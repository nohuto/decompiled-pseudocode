/*
 * XREFs of ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C0082AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0082818 (--1FxPkgPnp@@MEAA@XZ.c)
 */

FxPkgPnp *__fastcall FxPkgPnp::`vector deleting destructor'(FxPkgPnp *this, char a2)
{
  FxPkgPnp *v4; // rcx

  FxPkgPnp::~FxPkgPnp(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgPnp *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
