/*
 * XREFs of PspWow64SetupUserStack @ 0x1406BCE68
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x1406BCF04 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, char *a4, int a5)
{
  char v5; // al
  int UserStack; // edi
  char v9; // cl
  _BYTE v11[48]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a4;
  if ( (*a4 & 1) != 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0LL, (__int64)v11);
  UserStack = RtlpWow64CreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), a5, a3);
  KiUnstackDetachProcess((__int64)v11, 0LL);
  if ( UserStack >= 0 )
  {
    v5 = *a4;
    v9 = 4;
LABEL_4:
    *a4 = v9 | v5 & 0xFB;
    return 0LL;
  }
  return (unsigned int)UserStack;
}
