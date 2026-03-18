/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0
 * Callers:
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x180055FF4 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007818C (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009CA88 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180145594 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x1801456F4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18014583C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18009A708 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  int v5; // r10d
  unsigned int v6; // ebx

  v6 = 0;
  if ( HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v4 = *(_QWORD *)(v3 + 24) + (unsigned int)(v5 * *(_DWORD *)(v3 + 8));
  }
  else
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024890, 0x23u);
  }
  return v6;
}
