/*
 * XREFs of RtlSendMsgToSm @ 0x18008E620
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x1800A1430 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall RtlSendMsgToSm(HANDLE PortHandle, _PORT_MESSAGE *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  CSHORT v6; // ax
  int v7; // edi
  _PORT_MESSAGE *ReceiveMessage; // rax
  NTSTATUS result; // eax
  ULONG_PTR BufferLength; // [rsp+78h] [rbp+10h] BYREF

  if ( a2[1].u1.Length > 8 )
    return -1073741822;
  v4 = 2LL * (int)a2[1].u1.Length;
  v5 = *((_DWORD *)&RtlpSmMessageInfo + 4 * (int)a2[1].u1.Length + 2);
  memset(a2, 0, sizeof(_PORT_MESSAGE));
  v6 = *((_WORD *)&RtlpSmMessageInfo + 4 * v4) + 8;
  BufferLength = 328LL;
  a2->u1.s1.DataLength = v6;
  a2->u1.s1.TotalLength = v6 + 40;
  v7 = v5 & 1;
  ReceiveMessage = a2;
  if ( v7 )
    ReceiveMessage = 0LL;
  result = ZwAlpcSendWaitReceivePort(PortHandle, (v7 ^ 1) << 17, a2, 0LL, ReceiveMessage, &BufferLength, 0LL, 0LL);
  if ( result >= 0 )
    return a2[1].u2.ZeroInit;
  return result;
}
