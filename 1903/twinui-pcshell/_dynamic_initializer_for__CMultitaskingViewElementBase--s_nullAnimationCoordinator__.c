/*
 * XREFs of _dynamic_initializer_for__CMultitaskingViewElementBase::s_nullAnimationCoordinator__ @ 0x180003800
 * Callers:
 *     <none>
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *dynamic_initializer_for__CMultitaskingViewElementBase::s_nullAnimationCoordinator__()
{
  IApplicationViewChangeListener *result; // rax

  result = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)&CMultitaskingViewElementBase::s_nullAnimationCoordinator);
  CMultitaskingViewElementBase::s_nullAnimationCoordinator = &CMultitaskingViewElementBase::CNullAnimationCoordinator::`vftable';
  return result;
}
