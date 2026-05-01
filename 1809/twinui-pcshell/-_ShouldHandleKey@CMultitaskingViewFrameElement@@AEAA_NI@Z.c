/*
 * XREFs of ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x18030D780
 * Callers:
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18030C150 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18030C2D0 (-KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewFrameElement::_ShouldHandleKey(CMultitaskingViewFrameElement *this, int a2)
{
  if ( a2 == 9 )
    return *((_QWORD *)this + 34) != 0LL;
  else
    return a2 == 27;
}
