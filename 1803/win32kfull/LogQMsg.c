/*
 * XREFs of LogQMsg @ 0x1C01A2080
 * Callers:
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00BA650 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01A1C88 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01A1F6C (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= dword_1C03227EC && (unsigned int)result <= dword_1C03227F0 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = qword_1C0322808 + 688LL * (unsigned int)dword_1C03227F4++;
      InitLogQMsgEntry((_OWORD *)a1, v3);
      result = (unsigned int)dword_1C03227F8;
      if ( dword_1C03227F4 >= (unsigned int)dword_1C03227F8 )
        dword_1C03227F4 = 0;
      if ( dword_1C0322804 )
        __debugbreak();
    }
  }
  return result;
}
