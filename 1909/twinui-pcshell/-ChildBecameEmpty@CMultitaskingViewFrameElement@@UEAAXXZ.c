/*
 * XREFs of ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18038B940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x18038DEF8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 */

void __fastcall CMultitaskingViewFrameElement::ChildBecameEmpty(CMultitaskingViewFrameElement *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 408LL))(this) )
    AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 36));
}
