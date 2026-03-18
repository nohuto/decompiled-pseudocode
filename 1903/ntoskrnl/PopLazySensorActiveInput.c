/*
 * XREFs of PopLazySensorActiveInput @ 0x1408B6104
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405B5070 (PopSessionWinlogonNotification.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
 *     PopConsoleSessionActiveInput @ 0x140723DD0 (PopConsoleSessionActiveInput.c)
 */

ULONG_PTR __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v2; // ebx
  ULONG_PTR result; // rax
  void *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = 0;
  BYTE2(qword_1404387F0) = 1;
  v5 = 0LL;
  HIDWORD(qword_1404387F0) = 10;
  result = MmGetSessionById(a1);
  v4 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession(result) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v5);
      MmDetachSession((__int64)v4, (__int64)v6);
      v2 = v5;
    }
    MmQuitNextSession(v4);
    result = HIDWORD(v5);
    HIDWORD(PopLazyContext) = HIDWORD(v5);
    LOWORD(qword_1404387F0) = 257;
    DWORD2(PopLazyContext) = v2;
  }
  return result;
}
