/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140041824
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x140041A10 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140041AEC (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // r9
  char v7; // cl
  void *v8; // rcx
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-90h]
  _DWORD v15[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-50h]
  int v17; // [rsp+E8h] [rbp-20h]
  _BYTE v18[64]; // [rsp+F8h] [rbp-10h] BYREF

  result = AlpcInitializeMessageAttribute(805306368LL, v18, 64LL, v12);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v18, 0x20000000LL);
    v3 = 0LL;
    memset_0(v15, 0, 0x48uLL);
    v16 = 48LL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
            return 0LL;
          v4 = *((_QWORD *)this + 1);
          v10 = 48LL;
          v5 = NtAlpcSendWaitReceivePort(
                 v4,
                 0x10000LL,
                 v3,
                 0LL,
                 &v13,
                 &v10,
                 v18,
                 &HandleSendReceiveServer::AeServerApiThreadTimeout,
                 v9);
          if ( v5 >= 0 )
            break;
LABEL_13:
          v3 = 0LL;
        }
      }
      while ( v5 == 258 );
      if ( BYTE4(v13) != 1 )
      {
        if ( BYTE4(v13) != 3 )
        {
          if ( BYTE4(v13) == 5 )
          {
            v8 = (void *)*((_QWORD *)this + 3);
            if ( v8 )
            {
              NtClose(v8);
              *((_QWORD *)this + 3) = 0LL;
            }
            _InterlockedExchange((volatile __int32 *)this + 14, 1);
          }
          else
          {
            v7 = BYTE4(v13) - 10;
            if ( BYTE4(v13) == 10 )
            {
              v15[0] = 0;
              v17 = 0;
              if ( v14 <= 0xFFFFFFFF && (_DWORD)v14 == *((_DWORD *)this + 4) )
              {
                v7 = 1;
                v15[0] = 0x80000;
                v17 = 16;
              }
              LOBYTE(v9) = v7;
              NtAlpcAcceptConnectPort(&v11, *((_QWORD *)this + 1), 0LL, 0LL, v15, 0LL, &v13, v18);
              *((_QWORD *)this + 3) = v11;
              *((_BYTE *)this + 60) = 1;
            }
          }
        }
        goto LABEL_13;
      }
      HandleSendReceiveServer::AeServerProcessClientRequest(
        this,
        (struct _AE_API_MSG *)&v13,
        (struct _ALPC_MESSAGE_ATTRIBUTES *)v18,
        v6);
      v3 = &v13;
    }
  }
  return result;
}
