/*
 * XREFs of ReportExceptionInternal @ 0x1800DDBD4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 *     RtlWerpReportException @ 0x1800DE710 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     SendMessageToWERService @ 0x1800DE71C (SendMessageToWERService.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        void *a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        void **a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA[1].ClientId.UniqueProcess = (void *)__PAIR64__(a1, a5);
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = a2;
  if ( a3 && (_DWORD)v7 )
    memmove(&SendMessageA[1].MessageId, a3, 8 * v7);
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  ReceiveMessage[0].u1.Length = 91751760;
  result = SendMessageToWERService(SendMessageA, ReceiveMessage);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = ReceiveMessage[1].ClientId.UniqueProcess;
      return 0LL;
    }
  }
  return result;
}
