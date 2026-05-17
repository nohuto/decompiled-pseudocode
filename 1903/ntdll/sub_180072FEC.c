/*
 * XREFs of sub_180072FEC @ 0x180072FEC
 * Callers:
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_1800CD600 @ 0x1800CD600 (sub_1800CD600.c)
 */

unsigned __int64 __fastcall sub_180072FEC(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18017A4E0 + 1)
      || (result = *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned int)qword_18017A4F0, a1 >= result) )
    {
      result = sub_18001E620(a1, (signed __int64)&v7, v5, v6);
    }
    else
    {
      v7 = xmmword_18017A4E0;
    }
    if ( *((_QWORD *)&v7 + 1) != a1 )
    {
      if ( !a2 || (result = sub_1800CD600(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
