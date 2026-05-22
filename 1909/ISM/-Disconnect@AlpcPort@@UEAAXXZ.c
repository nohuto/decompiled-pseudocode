/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800D5230
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800D4B28 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800D6700 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

void __fastcall AlpcPort::Disconnect(void **this)
{
  int v2; // esi
  __int64 v3; // [rsp+40h] [rbp-18h]
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  if ( (*((__int16 *)this + 46) & 0xFFFF00FF) == 0xA )
    AlpcPort::RejectClientConnection((AlpcPort *)this);
  if ( !(unsigned int)NtAlpcDisconnectPort(this[7], 0LL) )
  {
    do
    {
      memset_0(this + 11, 0, 0x28uLL);
      v5 = 332LL;
      v4 = 0LL;
      this[53] = 0LL;
      *((_WORD *)this + 45) = 40;
      *((_DWORD *)this + 106) = 1610612736;
      v2 = NtAlpcSendWaitReceivePort(this[7], 0LL, 0LL, 0LL, this + 11, &v5, this + 53, &v4, v3);
      if ( (*((_WORD *)this + 46) & 0x2000) != 0 )
        AlpcMessage::Cancel((AlpcMessage *)(this + 11), this[7]);
    }
    while ( !v2 );
  }
  SipcPort::DisconnectAllSections((SipcPort *)this);
}
