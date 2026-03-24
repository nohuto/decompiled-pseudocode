/*
 * XREFs of PopLazySensorActiveInput @ 0x140878F20
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140878FFC (PopSessionWinlogonNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14011A5C0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A650 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x1406DC420 (PopConsoleSessionActiveInput.c)
 */

__int64 __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  __int64 result; // rax
  void *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  BYTE2(qword_14040FD90) = 1;
  v5 = 0LL;
  HIDWORD(qword_14040FD90) = 10;
  result = MmGetSessionById(a1);
  v4 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession((_KPROCESS *)result, (__int64)v6) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v5);
      MmDetachSession((__int64)v4, (__int64)v6);
      v1 = v5;
    }
    ObfDereferenceObject(v4);
    result = HIDWORD(v5);
    HIDWORD(PopLazyContext) = HIDWORD(v5);
    LOWORD(qword_14040FD90) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
