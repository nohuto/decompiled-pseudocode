/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1409AF5FC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1409AF1B4 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x1407283B4 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_1404DB1B0, 0, 0x38uLL);
  dword_1404DB1DC = -1;
  dword_1404DB1E0 = -1;
  memset(&qword_1404DB400, 0, 0x38uLL);
  dword_1404DB42C = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_1404DB470, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1404DB198, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1404DB188, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_1404DB1B0 = (__int64)word_1404DB470;
          qword_1404DB1B8 = (__int64)word_1404DB188;
          dword_1404DB1DC = *(unsigned __int8 *)(v4 + 8);
          dword_1404DB1E0 = *(_DWORD *)(v4 + 32);
          qword_1404DB400 = (__int64)word_1404DB470;
          qword_1404DB408 = (__int64)word_1404DB198;
          dword_1404DB42C = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
