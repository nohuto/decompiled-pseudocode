/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C003D8F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D55C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(
        _QWORD *P,
        __int64 a2,
        const GUID *a3,
        struct _MDL *a4)
{
  char v4; // al
  struct VMBCHANNEL__ *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  char v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+49h] [rbp-17h]
  __int16 v21; // [rsp+4Dh] [rbp-13h]
  char v22; // [rsp+4Fh] [rbp-11h]

  v17 = P[1];
  v4 = *((_BYTE *)P + 16);
  v6 = (struct VMBCHANNEL__ *)*P;
  v19 = v4;
  v16 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 2;
  v18 = 0LL;
  v7 = VmBusSendAsyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v13, a3, a4);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  if ( !*((_BYTE *)P + 17) )
    ExFreePoolWithTag(P, 0x4B677844u);
}
