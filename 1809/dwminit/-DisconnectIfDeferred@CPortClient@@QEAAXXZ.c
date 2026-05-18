/*
 * XREFs of ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x1800048F4
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x1800041A8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042F4 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800048B8 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::DisconnectIfDeferred(CPortClient *this)
{
  if ( *((_DWORD *)this + 10) )
    CPortClient::Disconnect(this);
}
