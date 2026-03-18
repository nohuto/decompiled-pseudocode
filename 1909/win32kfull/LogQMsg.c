/*
 * XREFs of LogQMsg @ 0x1C01D6AD8
 * Callers:
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C0079FE0 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01D6634 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01D69A0 (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= HIDWORD(gMsgQLog) && (unsigned int)result <= (unsigned int)qword_1C0325DC0 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = *(__int64 *)((char *)&qword_1C0325DD4 + 4) + 696LL * HIDWORD(qword_1C0325DC0);
      ++HIDWORD(qword_1C0325DC0);
      InitLogQMsgEntry(a1, v3);
      result = (unsigned int)dword_1C0325DC8;
      if ( HIDWORD(qword_1C0325DC0) >= dword_1C0325DC8 )
        HIDWORD(qword_1C0325DC0) = 0;
      if ( (_DWORD)qword_1C0325DD4 )
        __debugbreak();
    }
  }
  return result;
}
