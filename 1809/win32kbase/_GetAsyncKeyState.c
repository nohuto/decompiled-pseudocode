/*
 * XREFs of _GetAsyncKeyState @ 0x1C003A380
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0038940 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // rcx
  unsigned int v3; // r9d
  __int16 v4; // r11
  int v5; // eax
  __int16 result; // ax

  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v1 = (unsigned __int8)a1;
    v2 = (unsigned __int64)(unsigned __int8)a1 >> 3;
    v3 = v1 & 7;
    v4 = 0;
    v5 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v2);
    if ( _bittest(&v5, v3) )
    {
      v4 = 1;
      *((_BYTE *)&gafAsyncKeyStateRecentDown + v2) = v5 & ~(1 << v3);
    }
    result = v4 | 0x8000;
    if ( (*((_BYTE *)&gafAsyncKeyState + (v1 >> 2)) & (unsigned __int8)(1 << (2 * (v1 & 3)))) == 0 )
      return v4;
  }
  return result;
}
