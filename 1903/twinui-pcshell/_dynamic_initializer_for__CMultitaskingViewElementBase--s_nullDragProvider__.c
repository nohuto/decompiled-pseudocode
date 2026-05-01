/*
 * XREFs of _dynamic_initializer_for__CMultitaskingViewElementBase::s_nullDragProvider__ @ 0x180003830
 * Callers:
 *     <none>
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *dynamic_initializer_for__CMultitaskingViewElementBase::s_nullDragProvider__()
{
  IApplicationViewChangeListener *result; // rax

  result = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)&CMultitaskingViewElementBase::s_nullDragProvider);
  CMultitaskingViewElementBase::s_nullDragProvider = &CMultitaskingViewElementBase::CNullDragProvider::`vftable';
  return result;
}
