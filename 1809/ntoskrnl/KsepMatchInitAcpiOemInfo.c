/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1409B05FC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1409B01B4 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x1407295A4 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_1404DC270, 0, 0x38uLL);
  dword_1404DC29C = -1;
  dword_1404DC2A0 = -1;
  memset(&qword_1404DC4C0, 0, 0x38uLL);
  dword_1404DC4EC = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_1404DC530, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1404DC258, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1404DC248, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_1404DC270 = (__int64)word_1404DC530;
          qword_1404DC278 = (__int64)word_1404DC248;
          dword_1404DC29C = *(unsigned __int8 *)(v4 + 8);
          dword_1404DC2A0 = *(_DWORD *)(v4 + 32);
          qword_1404DC4C0 = (__int64)word_1404DC530;
          qword_1404DC4C8 = (__int64)word_1404DC258;
          dword_1404DC4EC = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
