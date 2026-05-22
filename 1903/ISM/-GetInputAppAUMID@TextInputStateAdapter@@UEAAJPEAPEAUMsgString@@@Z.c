/*
 * XREFs of ?GetInputAppAUMID@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x1801483C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputAppAUMID(TextInputStateAdapter *this, struct MsgString **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString **))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           a2);
}
