/*
 * XREFs of ?OnPointerInfoFrame@MessageInfo@DragNDropProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180022D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x180022C10 (-ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ.c)
 */

__int64 __fastcall DragNDropProcessor::MessageInfo::OnPointerInfoFrame(
        DragNDropProcessor::MessageInfo *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 5), 1LL, a2, a3) < 0 )
    DragNDropProcessor::MessageInfo::ResetAndInitializeInteractionContext(this);
  return 0LL;
}
