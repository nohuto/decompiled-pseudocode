/*
 * XREFs of ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140041EA0
 * Callers:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140041AEC (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::ValidateStopListening(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *const *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed int v6; // ebx
  DWORD ProcessId; // ebx
  int v8; // ebx
  _QWORD v10[3]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  __int128 v12; // [rsp+60h] [rbp-18h]
  HANDLE Process; // [rsp+80h] [rbp+8h] BYREF

  v2 = (__int64)*a2;
  Process = 0LL;
  v4 = *((_QWORD *)this + 1);
  LODWORD(v10[0]) = 48;
  v10[1] = 0LL;
  v11 = 0;
  v10[2] = 0LL;
  v12 = 0LL;
  v6 = NtAlpcOpenSenderProcess(&Process, v4, v2, 0LL, 0x80000000, v10);
  if ( v6 >= 0 )
  {
    ProcessId = GetProcessId(Process);
    v8 = -(ProcessId != GetCurrentProcessId());
    NtClose(Process);
    v6 = v8 & 0xC0000001;
    if ( v6 >= 0 )
    {
      v6 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 1), 0x10000LL, *a2, 0LL, 0LL, 0LL, 0LL, 0LL, v10[0]);
      if ( v6 >= 0 )
        _InterlockedExchange((volatile __int32 *)this + 14, 1);
    }
  }
  return (unsigned int)v6;
}
