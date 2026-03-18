/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C0037270
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C0037350 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00E9684 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  struct VMBCHANNEL__ *v8; // rcx
  const GUID *v9; // r8
  struct _MDL *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v15[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    memset(v15, 0, sizeof(v15));
    v15[0] = 0LL;
    v15[1] = 0x200000000LL;
    v8 = *(struct VMBCHANNEL__ **)a1;
    LODWORD(v15[2]) = 2;
    LODWORD(v15[4]) = *a4;
    v15[3] = v4;
    LODWORD(v15[5]) = v15[5] & 0xFFFFFFE0 | (a2 != 0);
    v11 = VmBusSendAsyncMessage(v8, (struct DXGKVMB_COMMAND_BASE *)v15, v9, v10);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdError(v14);
    }
  }
}
