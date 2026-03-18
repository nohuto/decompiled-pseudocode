/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C003D6B0
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C003D770 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C01221F8 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D3FC (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, const GUID *a3, struct _MDL *a4)
{
  __int64 result; // rax
  struct VMBCHANNEL__ *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  __int64 v16; // [rsp+38h] [rbp-28h]
  int Next; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+44h] [rbp-1Ch]
  int v19; // [rsp+4Ch] [rbp-14h]

  result = *(_QWORD *)(a1 + 8);
  LOBYTE(a3) = a2;
  if ( result )
  {
    v18 = 0LL;
    v15 = 0;
    v19 = 0;
    v11 = 0LL;
    v12 = 0;
    v5 = *(struct VMBCHANNEL__ **)a1;
    v13 = 2;
    v14 = 2;
    v16 = result;
    Next = (int)a4->Next;
    HIDWORD(v18) = a2 != 0;
    result = VmBusSendAsyncMessage(v5, (struct DXGKVMB_COMMAND_BASE *)&v11, a3, a4);
    v9 = (int)result;
    if ( (int)result < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v9;
      return WdLogEvent5_WdError(v10);
    }
  }
  return result;
}
