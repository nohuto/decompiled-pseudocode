/*
 * XREFs of LogQMsg @ 0x1C01D6C58
 * Callers:
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00DA2F0 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01D67A8 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01D6B20 (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= HIDWORD(gMsgQLog) && (unsigned int)result <= (unsigned int)qword_1C0327DC0 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = *(__int64 *)((char *)&qword_1C0327DD4 + 4) + 696LL * HIDWORD(qword_1C0327DC0);
      ++HIDWORD(qword_1C0327DC0);
      InitLogQMsgEntry(a1, v3);
      result = (unsigned int)dword_1C0327DC8;
      if ( HIDWORD(qword_1C0327DC0) >= dword_1C0327DC8 )
        HIDWORD(qword_1C0327DC0) = 0;
      if ( (_DWORD)qword_1C0327DD4 )
        __debugbreak();
    }
  }
  return result;
}
