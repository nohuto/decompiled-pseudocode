/*
 * XREFs of _GetAsyncKeyState @ 0x1C005BAB0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C005B840 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rcx
  unsigned int v4; // r9d
  __int16 v5; // r11
  int v6; // eax
  __int16 result; // ax

  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2);
    return 0;
  }
  else
  {
    v2 = (unsigned __int8)a1;
    v3 = (unsigned __int64)(unsigned __int8)a1 >> 3;
    v4 = v2 & 7;
    v5 = 0;
    v6 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v3);
    if ( _bittest(&v6, v4) )
    {
      v5 = 1;
      *((_BYTE *)&gafAsyncKeyStateRecentDown + v3) = v6 & ~(1 << v4);
    }
    result = v5 | 0x8000;
    if ( (*((_BYTE *)&gafAsyncKeyState + (v2 >> 2)) & (unsigned __int8)(1 << (2 * (v2 & 3)))) == 0 )
      return v5;
  }
  return result;
}
