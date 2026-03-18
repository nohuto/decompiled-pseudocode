/*
 * XREFs of ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0049920
 * Callers:
 *     <none>
 * Callees:
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C004972C (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C0049758 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C004B4D4 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C004B54C (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     CoreUICallReceive @ 0x1C009F4CC (CoreUICallReceive.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01C81B0 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::SubmitBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  __int64 v4; // rcx
  char *v5; // rsi
  int v6; // eax
  struct AlpcBufferK *v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  void *v11; // rax
  int v12; // eax
  unsigned __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  struct AlpcBufferK *v15; // [rsp+48h] [rbp-20h] BYREF
  void *v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  v5 = a4 - 80;
  LOBYTE(v17) = 0;
  v16 = &CoreMessagingK::ReceiveHost::s_Vtbl;
  if ( (unsigned __int64)CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80 < 0x200 )
    v4 = 512LL;
  else
    LOWORD(v4) = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80;
  v6 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v4, &v15);
  v7 = v15;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80LL;
    if ( v9 < 0x200 )
      LOWORD(v9) = 512;
    v14 = (unsigned __int16)v9;
    v8 = ZwAlpcSendWaitReceivePort(CoreMessagingK::RegistrarClient::s_Port, 0x20000LL, v5, 0LL, v15, &v14, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      CoreMessagingK::SendHost::ValidateReceiveBuffer(v7, v14);
      v10 = *((_DWORD *)v7 + 18);
      if ( v10 )
        v11 = (char *)v7 + 80;
      else
        v11 = 0LL;
      v12 = CoreUICallReceive((struct IMessageCallReceiveHost *)&v16, (__int64)&v17, v11, v10);
      if ( v12 )
        CoreMessagingK::Runtime::BugCheck(1282LL, v12, 0LL);
      CoreMessagingK::BufferCache::Free(v5);
      v8 = 0;
    }
  }
  CoreMessagingK::BufferCache::Free(v7);
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8);
}
