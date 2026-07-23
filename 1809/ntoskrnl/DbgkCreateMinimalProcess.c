/*
 * XREFs of DbgkCreateMinimalProcess @ 0x140758A08
 * Callers:
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  __int64 result; // rax
  _BYTE v3[48]; // [rsp+50h] [rbp-F8h] BYREF

  _InterlockedOr(Object + 193, 0x400001u);
  if ( *((_QWORD *)Object + 132) )
  {
    memset(v3, 0, sizeof(v3));
    return DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}
