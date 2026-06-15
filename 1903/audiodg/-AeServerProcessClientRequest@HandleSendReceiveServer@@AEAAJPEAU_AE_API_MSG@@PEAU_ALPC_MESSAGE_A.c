/*
 * XREFs of ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140041AEC
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140041824 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140041B80 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140041EA0 (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerProcessClientRequest(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void *a4)
{
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  void **v8; // r9
  struct _AE_API_MSG *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( *((_WORD *)a2 + 1) != 48 )
    goto LABEL_5;
  v6 = (unsigned int)(*((_DWORD *)a2 + 10) - 1);
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v8 = (void **)*((_QWORD *)this + 4);
    goto LABEL_9;
  }
  v6 = (unsigned int)(*((_DWORD *)a2 + 10) - 2);
  if ( *((_DWORD *)a2 + 10) == 2 )
  {
    result = HandleSendReceiveServer::ValidateStopListening(this, &v9);
    goto LABEL_10;
  }
  if ( *((_DWORD *)a2 + 10) == 3 )
  {
    v8 = (void **)*((_QWORD *)this + 5);
LABEL_9:
    result = HandleSendReceiveServer::ExtractHandle((HandleSendReceiveServer *)v6, &v9, a3, v8);
    goto LABEL_10;
  }
LABEL_5:
  result = 3221225647LL;
LABEL_10:
  *((_DWORD *)a2 + 11) = result;
  return result;
}
