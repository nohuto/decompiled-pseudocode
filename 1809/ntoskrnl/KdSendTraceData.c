/*
 * XREFs of KdSendTraceData @ 0x140916FB4
 * Callers:
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x1408BED90 (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _DWORD *v5; // rax
  __int64 result; // rax
  char v7; // r14
  char *v8; // rbp
  const void **v9; // rsi
  __int64 v10; // rax
  __int16 v11; // [rsp+20h] [rbp-88h] BYREF
  void *v12; // [rsp+28h] [rbp-80h]
  __int16 v13; // [rsp+30h] [rbp-78h] BYREF
  int *v14; // [rsp+38h] [rbp-70h]
  int v15; // [rsp+40h] [rbp-68h] BYREF
  __int16 v16; // [rsp+44h] [rbp-64h]
  __int16 Number; // [rsp+46h] [rbp-62h]
  unsigned int v18; // [rsp+48h] [rbp-60h]

  v2 = 0;
  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    a2 = (unsigned int)a2;
    do
    {
      v2 += *v5;
      v5 += 4;
      --a2;
    }
    while ( a2 );
  }
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v2 <= (unsigned int)result )
  {
    v7 = KdEnterDebugger(0LL);
    v8 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v3 )
    {
      v9 = (const void **)(a1 + 8);
      do
      {
        memmove(v8, *(v9 - 1), *(unsigned int *)v9);
        v10 = *(unsigned int *)v9;
        v9 += 2;
        v8 += v10;
        --v3;
      }
      while ( v3 );
    }
    v16 = KeProcessorLevel;
    v15 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    v13 = 64;
    v14 = &v15;
    v18 = v2;
    v11 = v2;
    v12 = &KdpMessageBuffer;
    KdSendPacket(9LL, &v13, &v11, &KdpContext);
    return KdExitDebugger(v7);
  }
  return result;
}
