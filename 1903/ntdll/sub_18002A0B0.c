/*
 * XREFs of sub_18002A0B0 @ 0x18002A0B0
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x18007FB70 (RtlReleasePrivilege.c)
 *     sub_180085F24 @ 0x180085F24 (sub_180085F24.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x18009E8B0 (ZwMapViewOfSectionEx.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002A0B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  int v5; // esi
  struct _TEB *v6; // r13
  int v7; // r15d
  int v8; // edx
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID ArbitraryUserPointer; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h]
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF

  v18 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      640,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      (__int64)"DLL name: %wZ\n",
      v3 + 72);
  if ( !RtlEqualUnicodeString((unsigned __int16 *)(v3 + 88), (__int64)word_180118260, 1)
    || (v4 = 1, (*(_BYTE *)(qword_180165308 + 22) & 0x20) == 0) )
  {
    v4 = 0;
  }
  v19 = 0LL;
  v5 = 0x800000;
  if ( !v4 )
  {
    if ( qword_180164F20 )
    {
      v14 = *(_QWORD *)(v3 + 96);
      LODWORD(ArbitraryUserPointer) = 0;
      LdrQueryImageFileKeyOption(qword_180164F20, v14, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&unk_18012E498, 1LL, 0LL, &v19) >= 0 )
          v5 = 0x20000000;
      }
    }
  }
  v6 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v6->NtTib.ArbitraryUserPointer;
  v6->NtTib.ArbitraryUserPointer = *(PVOID *)(v3 + 80);
  v7 = v5 | 0x40000;
  v8 = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v7 = v5;
  v9 = (_QWORD *)(v3 + 48);
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v16[1] = qword_180165020;
    v15[1] = v16;
    v16[0] = 0LL;
    v16[2] = 0LL;
    v15[0] = 1LL;
    v10 = ZwMapViewOfSectionEx(v18, -1LL, v3 + 48, 0LL, a1 + 160, v7, v8, v15, 1);
  }
  else
  {
    v10 = ZwMapViewOfSection(v18, -1LL, v3 + 48, 0LL, 0LL, 0LL, a1 + 160, 1, v7, v8);
  }
  v12 = v10;
  v6->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v7 == 0x20000000 )
    RtlReleasePrivilege(v19);
  switch ( v12 )
  {
    case 1073741827:
      goto LABEL_40;
    case 1073741838:
      v12 = sub_180085F24(a1);
      break;
    case 1073741878:
LABEL_40:
      if ( qword_180165288 && !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v11) = 1;
        if ( (unsigned __int8)sub_18002D594(a1, v11) )
        {
          v12 = -1073741267;
        }
        else if ( v4 )
        {
          v12 = -1073741800;
        }
      }
      break;
  }
  if ( *v9 && (v12 < 0 || v12 == 1073741838) )
  {
    ZwUnmapViewOfSection(-1LL);
    *v9 = 0LL;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      834,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      (__int64)"Status: 0x%08lx\n",
      v12);
  return (unsigned int)v12;
}
