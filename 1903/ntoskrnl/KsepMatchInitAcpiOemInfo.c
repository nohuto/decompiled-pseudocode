/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A02988
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A02540 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x14075932C (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_140508800, 0, 0x38uLL);
  dword_14050882C = -1;
  dword_140508830 = -1;
  memset(&qword_140508A50, 0, 0x38uLL);
  dword_140508A7C = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_140508AC0, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1405087E8, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1405087D8, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_140508800 = (__int64)word_140508AC0;
          qword_140508808 = (__int64)word_1405087D8;
          dword_14050882C = *(unsigned __int8 *)(v4 + 8);
          dword_140508830 = *(_DWORD *)(v4 + 32);
          qword_140508A50 = (__int64)word_140508AC0;
          qword_140508A58 = (__int64)word_1405087E8;
          dword_140508A7C = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
