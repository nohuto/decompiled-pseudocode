/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x180321A30
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18026C5FC (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803217A8 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        struct MsgString *a2)
{
  unsigned __int16 *Data; // rax
  __int64 v3; // r8
  __int64 result; // rax

  Data = (unsigned __int16 *)MsgStringGetData(a2);
  result = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved((KeyboardHosting::TabTipAdapter *)(v3 - 8), Data);
  if ( (_DWORD)result == -2147024255 )
    return 0LL;
  return result;
}
