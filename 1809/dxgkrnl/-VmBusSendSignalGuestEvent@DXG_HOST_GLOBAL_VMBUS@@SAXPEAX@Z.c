/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0037370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(struct VMBCHANNEL__ **P)
{
  struct VMBCHANNEL__ *v2; // rax
  struct VMBCHANNEL__ *v3; // rcx
  const GUID *v4; // r8
  struct _MDL *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = P[1];
  v3 = *P;
  v10[0] = 0LL;
  v10[1] = 0x200000000LL;
  LODWORD(v10[2]) = 0;
  v10[4] = 0LL;
  v10[3] = v2;
  LOBYTE(v10[5]) = *((_BYTE *)P + 16);
  v6 = VmBusSendAsyncMessage(v3, (struct DXGKVMB_COMMAND_BASE *)v10, v4, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  if ( !*((_BYTE *)P + 17) )
    ExFreePoolWithTag(P, 0x4B677844u);
}
