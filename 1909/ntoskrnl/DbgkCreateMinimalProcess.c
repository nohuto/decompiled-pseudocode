/*
 * XREFs of DbgkCreateMinimalProcess @ 0x1407583C0
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     DbgkpSendApiMessage @ 0x140849CAC (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalProcess(ULONG_PTR BugCheckParameter1)
{
  void *result; // rax
  _DWORD v3[68]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(v3, 0, sizeof(v3));
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 780), 0x400001u);
  if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
  {
    memset(&v3[12], 0, 0x30uLL);
    v3[0] = 6291512;
    v3[1] = 8;
    v3[10] = 2;
    return (void *)DbgkpSendApiMessage(BugCheckParameter1);
  }
  return result;
}
