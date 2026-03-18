/*
 * XREFs of KdSendTraceData @ 0x1409548BC
 * Callers:
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x1408FA0A8 (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  char v8; // r15
  char *v9; // r14
  const void **v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-39h] BYREF
  void *v13; // [rsp+30h] [rbp-31h]
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  _DWORD *v15; // [rsp+40h] [rbp-21h]
  _DWORD v16[16]; // [rsp+48h] [rbp-19h] BYREF

  v2 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    v6 = (unsigned int)v2;
    do
    {
      v4 += *v5;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v4 <= (unsigned int)result )
  {
    v8 = KdEnterDebugger(0LL);
    v9 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v2 )
    {
      v10 = (const void **)(a1 + 8);
      do
      {
        memmove(v9, *(v10 - 1), *(unsigned int *)v10);
        v11 = *(unsigned int *)v10;
        v10 += 2;
        v9 += v11;
        --v2;
      }
      while ( v2 );
    }
    LOWORD(v16[1]) = KeProcessorLevel;
    v16[0] = 13104;
    HIWORD(v16[1]) = KeGetPcr()->Prcb.Number;
    v15 = v16;
    v16[2] = v4;
    LOWORD(v14) = 64;
    LOWORD(v12) = v4;
    v13 = &KdpMessageBuffer;
    KdSendPacket(9LL, &v14, &v12, (char *)&KdDebuggerNotPresent + 5);
    return KdExitDebugger(v8);
  }
  return result;
}
