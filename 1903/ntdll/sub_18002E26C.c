/*
 * XREFs of sub_18002E26C @ 0x18002E26C
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_18007D1A8 @ 0x18007D1A8 (sub_18007D1A8.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

int __fastcall sub_18002E26C(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  char v8; // bl
  int v10; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)v4 < 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    LODWORD(v4) = sub_18001C610(a1);
    v5 = v4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v5 = sub_180070758(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
        v6 = sub_18002E4A8(a1);
      else
        v6 = sub_18002DEC8(a1);
      v5 = v6;
    }
    LODWORD(v4) = v5 + 0x80000000;
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741267 )
      goto LABEL_21;
    LODWORD(v4) = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1855,
        (unsigned int)"LdrpProcessWork",
        0,
        (__int64)"Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        v5);
      LODWORD(v4) = dword_18015FAB0;
    }
    if ( (v4 & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      sub_18007E384(3221225781LL, 25LL, 0LL, a1);
      sub_18007CDAC(a1);
      LOBYTE(v10) = 0;
      sub_18007D1A8(
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        3221225781LL,
        &unk_18011C288,
        v10);
      v4 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v4 + 104) & 0x20) != 0 )
        LODWORD(v4) = sub_18006F388(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)v4 = v5;
  }
LABEL_21:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&stru_1801652C0);
    v7 = --dword_1801652E8;
    if ( (__int64 *)qword_1801652F0 != &qword_1801652F0 || (v8 = 1, v7 != 1) )
      v8 = 0;
    LODWORD(v4) = RtlLeaveCriticalSection(&stru_1801652C0);
    if ( v8 )
      LODWORD(v4) = ZwSetEvent(EventHandle, 0LL);
  }
  return v4;
}
