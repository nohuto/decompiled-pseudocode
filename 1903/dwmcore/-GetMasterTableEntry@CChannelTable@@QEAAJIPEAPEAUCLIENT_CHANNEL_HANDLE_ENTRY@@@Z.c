/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180029974
 * Callers:
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180029860 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800D2F74 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800E3F1C (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801570A8 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x1801571C0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801572CC (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180041BE8 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  unsigned int v7; // ebx

  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v4 = *(_QWORD *)(v5 + 24) + (unsigned int)(v6 * *(_DWORD *)(v3 + 8));
    return 0;
  }
  else
  {
    v7 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024890, 0x24u, 0LL);
  }
  return v7;
}
