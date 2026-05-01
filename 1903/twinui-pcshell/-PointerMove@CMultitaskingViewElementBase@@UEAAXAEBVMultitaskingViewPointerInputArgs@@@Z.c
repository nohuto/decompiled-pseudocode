/*
 * XREFs of ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180365350
 * Callers:
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180358050 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18036CB70 (-PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180370DF0 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180366258 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerMove(
        CMultitaskingViewElementBase *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  if ( !*((_DWORD *)this + 25) && *((_DWORD *)this + 24) != 1 || *(_QWORD *)a2 != *((_QWORD *)this + 18) )
    CMultitaskingViewElementBase::_PointerMove(this, a2);
}
