/*
 * XREFs of sub_18002A958 @ 0x18002A958
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     sub_18002C6E4 @ 0x18002C6E4 (sub_18002C6E4.c)
 *     sub_18002C8C0 @ 0x18002C8C0 (sub_18002C8C0.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_18006C654 @ 0x18006C654 (sub_18006C654.c)
 *     sub_180077C50 @ 0x180077C50 (sub_180077C50.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002A958(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // al
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( RtlIsCriticalSectionLockedByThread(&stru_18015F3F0) )
    return (unsigned int)v4;
  v5 = *(_QWORD *)(a1 + 152);
  switch ( *(_DWORD *)(v5 + 56) )
  {
    case 5:
      sub_18006C654(v5);
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(v5 + 56) - 8) >= 2 )
        return (unsigned int)-1073741595;
      return (unsigned int)v4;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    sub_180077C50(*(_QWORD *)(a1 + 152));
  v4 = sub_18002C8C0(*(_QWORD *)(a1 + 152));
  if ( v4 >= 0 )
  {
    v4 = sub_18002C6E4(*(_QWORD *)(a1 + 152));
    if ( v4 >= 0 )
    {
LABEL_9:
      v6 = *(_QWORD *)(a1 + 176);
      if ( v6 && (*(_BYTE *)(v6 + 32) & 1) == 0 )
      {
        sub_18002D7BC();
        v7 = *(_QWORD *)(a1 + 152);
        v11 = 0;
        v4 = sub_180069778(v7, a2, &v11);
        sub_18002D75C(v8, 2LL);
      }
      return (unsigned int)v4;
    }
    v10 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1937,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        (__int64)"Failed to load for appcompat reasons\n");
      v10 = dword_18015FAB0;
    }
    if ( (v10 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v4;
}
