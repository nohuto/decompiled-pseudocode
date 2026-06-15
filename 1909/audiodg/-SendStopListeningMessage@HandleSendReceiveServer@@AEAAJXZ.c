/*
 * XREFs of ?SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ @ 0x140041DB8
 * Callers:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x1400413E4 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::SendStopListeningMessage(HandleSendReceiveServer *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  NTSTATUS v4; // eax
  signed int LastError; // eax
  _DWORD v7[12]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  memset_0(v7, 0, sizeof(v7));
  v3 = *((_QWORD *)this + 1);
  v7[10] = 2;
  v7[0] = 3145736;
  if ( v3 )
  {
    v8 = 48LL;
    v4 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64 *, _QWORD, _QWORD))NtAlpcSendWaitReceivePort)(
           v3,
           0x20000LL,
           v7,
           0LL,
           v7,
           &v8,
           0LL,
           0LL);
    if ( v4 < 0 )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v4);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v2;
}
