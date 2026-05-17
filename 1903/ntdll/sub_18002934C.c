/*
 * XREFs of sub_18002934C @ 0x18002934C
 * Callers:
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     sub_180029E90 @ 0x180029E90 (sub_180029E90.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenSection @ 0x18009CDC0 (ZwOpenSection.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002934C(__int16 *a1, __int64 a2, unsigned __int16 *a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int16 *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1523,
      (unsigned int)"LdrpFindKnownDll",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( !qword_180164F30 )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  v12 = 48;
  v13 = qword_180164F30;
  v15 = 64;
  v14 = a1;
  v16 = 0LL;
  v8 = ZwOpenSection(a4, 13LL, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v9 = sub_180029E90(a3, (unsigned __int16)*a1 + (unsigned int)(unsigned __int16)word_180164F10 + 2);
  if ( v9 < 0 )
  {
    ZwClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &word_180164F10);
    RtlAppendUnicodeToString(a3, "\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1595,
      (unsigned int)"LdrpFindKnownDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
