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

char __fastcall sub_180072FEC(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  char *v5; // r8
  char *v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18017A4E0 + 1)
      || (v4 = *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned int)qword_18017A4F0, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = sub_18001E620((unsigned __int64)BaseAddress, (signed __int64)&v8, v5, v6);
    }
    else
    {
      v8 = xmmword_18017A4E0;
    }
    if ( *((PVOID *)&v8 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = sub_1800CD600(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
