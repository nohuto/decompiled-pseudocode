/*
 * XREFs of LogQMsg @ 0x1C01C3964
 * Callers:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01C34D4 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01C382C (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= dword_1C0312E8C && (unsigned int)result <= dword_1C0312E90 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = qword_1C0312EA8 + 696LL * (unsigned int)dword_1C0312E94++;
      InitLogQMsgEntry(a1, v3);
      result = (unsigned int)dword_1C0312E98;
      if ( dword_1C0312E94 >= (unsigned int)dword_1C0312E98 )
        dword_1C0312E94 = 0;
      if ( dword_1C0312EA4 )
        __debugbreak();
    }
  }
  return result;
}
