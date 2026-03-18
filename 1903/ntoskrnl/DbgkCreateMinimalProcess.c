/*
 * XREFs of DbgkCreateMinimalProcess @ 0x140769730
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
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
