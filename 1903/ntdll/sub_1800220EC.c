/*
 * XREFs of sub_1800220EC @ 0x1800220EC
 * Callers:
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 * Callees:
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 */

__int64 __fastcall sub_1800220EC(unsigned __int16 *a1, PCSTR *a2)
{
  int v4; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(_WORD *)a2 )
  {
    v5 = RtlxOemStringToUnicodeSize(a2);
    v4 = sub_18002580C(a1, (unsigned int)*a1 + v5);
    if ( v4 >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (PWCH)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)v4;
}
