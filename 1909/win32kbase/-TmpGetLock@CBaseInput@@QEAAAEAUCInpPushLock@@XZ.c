/*
 * XREFs of ?TmpGetLock@CBaseInput@@QEAAAEAUCInpPushLock@@XZ @ 0x1C009D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInpPushLock *__fastcall CBaseInput::TmpGetLock(CBaseInput *this)
{
  return (struct CInpPushLock *)&CBaseInput::_sLock;
}
