/*
 * XREFs of PspWow64SetupUserStack @ 0x1406DCC28
 * Callers:
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpWow64CreateUserStack @ 0x1406DCCD0 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, char *a4, int a5)
{
  char v8; // al
  int UserStack; // edi
  char v10; // cl
  _BYTE v12[48]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v8 = *a4;
  if ( (*a4 & 1) != 0 )
  {
    v10 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v12);
  UserStack = RtlpWow64CreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), a5, a3);
  KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  if ( UserStack >= 0 )
  {
    v8 = *a4;
    v10 = 4;
LABEL_4:
    *a4 = v10 | v8 & 0xFB;
    return 0LL;
  }
  return (unsigned int)UserStack;
}
