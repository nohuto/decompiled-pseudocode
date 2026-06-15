/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140041490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400156F8 (--3@YAXPEAX@Z.c)
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140041414 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 */

HandleSendReceiveServer *__fastcall HandleSendReceiveServer::`vector deleting destructor'(
        HandleSendReceiveServer *this,
        char a2)
{
  HandleSendReceiveServer::~HandleSendReceiveServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
