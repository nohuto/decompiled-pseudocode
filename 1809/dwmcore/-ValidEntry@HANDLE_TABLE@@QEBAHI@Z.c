/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18009A708
 * Callers:
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009718C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A0C4 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A330 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009A3F4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18009A614 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009CA88 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x1801456F4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  return a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
}
