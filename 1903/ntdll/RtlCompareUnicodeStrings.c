/*
 * XREFs of RtlCompareUnicodeStrings @ 0x18001A040
 * Callers:
 *     sub_18002518C @ 0x18002518C (sub_18002518C.c)
 *     sub_1800290D0 @ 0x1800290D0 (sub_1800290D0.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_1800D4678 @ 0x1800D4678 (sub_1800D4678.c)
 *     sub_1800FFB04 @ 0x1800FFB04 (sub_1800FFB04.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebp
  int v7; // ebx
  PCWCH v8; // r10
  const WCHAR *v9; // rdi
  signed __int64 v10; // r11
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // si
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = String1;
  v9 = &String1[v5];
  if ( String1 >= v9 )
    return v7 - v6;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      if ( *v8 != *(PCWCH)((char *)v8 + v10) )
      {
        v13 = sub_18001A234(*v8);
        v14 = sub_18001A234(v12);
        if ( v13 != v14 )
          break;
      }
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
    v15 = v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      LOWORD(v16) = *v8;
      LOWORD(v15) = *(PCWCH)((char *)v8 + v10);
      if ( *v8 != (_WORD)v15 )
        break;
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
    v15 = (unsigned __int16)v15;
    v16 = (unsigned __int16)v16;
  }
  return v16 - v15;
}
