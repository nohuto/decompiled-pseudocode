/*
 * XREFs of BcpGetProgressMessages @ 0x140186918
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x1409FC420 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     wcsstr @ 0x140197A90 (wcsstr.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     BcpFindMessage @ 0x1409FC808 (BcpFindMessage.c)
 */

__int64 __fastcall BcpGetProgressMessages(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  const wchar_t *Message; // rbp
  wchar_t *v6; // r14
  size_t v7; // rdi
  _WORD *Memory; // rax
  unsigned int v9; // ebx
  _WORD *v10; // rsi

  Message = (const wchar_t *)BcpFindMessage();
  v6 = wcsstr(Message, L"%1");
  v7 = (char *)v6 - (char *)Message;
  Memory = (_WORD *)BgpFwAllocateMemory((char *)v6 - (char *)Message + 2);
  v9 = 0;
  v10 = Memory;
  if ( Memory )
  {
    memmove(Memory, Message, v7);
    *a2 = v10;
    *a3 = v6 + 2;
    v10[v7 >> 1] = 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
