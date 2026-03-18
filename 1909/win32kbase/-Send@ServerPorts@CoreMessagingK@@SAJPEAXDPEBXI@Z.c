/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C004B31C
 * Callers:
 *     CoreMsgSend @ 0x1C004B268 (CoreMsgSend.c)
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C004B4D4 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C004B54C (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C004B660 (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, void *a3, unsigned int a4)
{
  size_t v4; // r13
  _QWORD *v5; // rsi
  _DWORD *v6; // rdi
  int v7; // eax
  int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // r12
  unsigned __int16 v11; // r15
  char *v12; // rcx
  int v13; // eax
  void *v15; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  void *Src; // [rsp+50h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char *v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  _QWORD *v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  _QWORD *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  char *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]

  v4 = a4;
  Src = a3;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  if ( a4 > 0xFF9F )
  {
    v8 = -1073741582;
  }
  else
  {
    v7 = CoreMessagingK::CoreMsgObject::ReferenceByHandle(a1, a2, a3, &Object);
    v5 = Object;
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_15;
    v9 = (_QWORD *)*((_QWORD *)Object + 3);
    if ( !*v9 )
      goto LABEL_19;
    if ( dword_1C020C5E0 > 5u )
    {
      v20 = 8LL;
      v19 = (char *)Object + 16;
      v23 = v9 + 1;
      v25 = (char *)v9 + 12;
      v21 = v9;
      v22 = 8LL;
      v24 = 4LL;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E83DA, 0LL, 0LL, 6u, &pData);
    }
    v10 = 16LL;
    v11 = v4 + 16;
    v8 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v4 + 96), &v15);
    if ( v8 < 0 )
    {
      v6 = v15;
      goto LABEL_15;
    }
    v6 = v15;
    memset(v15, 0, 0x50uLL);
    v6[14] = 1;
    v12 = (char *)(v6 + 20);
    *((_WORD *)v6 + 33) = 1;
    *((_WORD *)v6 + 1) = v4 + 96;
    *(_WORD *)v6 = v4 + 56;
    v6[18] = v11;
    if ( (_WORD)v4 == 0xFFF0 )
      v12 = 0LL;
    *((_DWORD *)v12 + 2) = v11;
    *(_QWORD *)v12 = v5[2];
    if ( v6[18] )
      v10 = (__int64)(v6 + 24);
    memmove((void *)v10, Src, v4);
    v13 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v5[3], 0x10000LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
    v8 = v13;
    if ( v13 == -1073741769 || v13 == -1073740032 || v13 == -1073740029 || v13 == -1073740025 )
LABEL_19:
      v8 = -1073741769;
  }
LABEL_15:
  CoreMessagingK::BufferCache::Free(v6);
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v8;
}
