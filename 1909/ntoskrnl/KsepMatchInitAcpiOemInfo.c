/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A02EA4
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A02A5C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x14075DBBC (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_140508540, 0, 0x38uLL);
  dword_14050856C = -1;
  dword_140508570 = -1;
  memset(&qword_140508790, 0, 0x38uLL);
  dword_1405087BC = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_140508800, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_140508528, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_140508518, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_140508540 = (__int64)word_140508800;
          qword_140508548 = (__int64)word_140508518;
          dword_14050856C = *(unsigned __int8 *)(v4 + 8);
          dword_140508570 = *(_DWORD *)(v4 + 32);
          qword_140508790 = (__int64)word_140508800;
          qword_140508798 = (__int64)word_140508528;
          dword_1405087BC = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
