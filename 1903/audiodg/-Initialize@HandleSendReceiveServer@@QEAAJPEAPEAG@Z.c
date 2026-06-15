/*
 * XREFs of ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140041C40
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140039C38 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x1400415B8 (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::Initialize(HandleSendReceiveServer *this, unsigned __int16 **a2)
{
  int Port; // eax
  unsigned __int16 *v5; // rdi
  signed int v6; // ebx
  char *Thread; // rax
  signed int LastError; // eax
  LPVOID pv; // [rsp+50h] [rbp+18h] BYREF

  pv = 0LL;
  Port = HandleSendReceiveServer::AeServerApiCreatePort(this, (PCWSTR *)&pv);
  v5 = (unsigned __int16 *)pv;
  v6 = Port;
  if ( Port < 0 )
    goto LABEL_7;
  Thread = (char *)CreateThread(
                     0LL,
                     0LL,
                     (LPTHREAD_START_ROUTINE)HandleSendReceiveServer::AeServerApiProc,
                     this,
                     0,
                     0LL);
  *((_QWORD *)this + 6) = Thread;
  if ( (unsigned __int64)(Thread - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
  }
  else
  {
    *a2 = v5;
  }
  if ( v6 < 0 )
  {
LABEL_7:
    if ( v5 )
      CoTaskMemFree(v5);
  }
  return (unsigned int)v6;
}
