/*
 * XREFs of ??1CBitmapSourceArray@@QEAA@XZ @ 0x18004DF20
 * Callers:
 *     _dynamic_atexit_destructor_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180050750 (_dynamic_atexit_destructor_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapSourceArray::~CBitmapSourceArray(_QWORD *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
