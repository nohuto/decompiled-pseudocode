/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x18002F020
 * Callers:
 *     sub_180031F48 @ 0x180031F48 (sub_180031F48.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 * Callees:
 *     <none>
 */

RTL_PATH_TYPE __cdecl RtlDetermineDosPathNameType_U(PCWSTR DosFileName)
{
  WCHAR v2; // ax

  if ( *DosFileName == 92 || *DosFileName == 47 )
  {
    if ( DosFileName[1] == 92 || DosFileName[1] == 47 )
    {
      if ( DosFileName[2] == 63 || DosFileName[2] == 46 )
      {
        v2 = DosFileName[3];
        if ( v2 == 92 || v2 == 47 )
          return 6;
        else
          return v2 != 0 ? 1 : 7;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( *DosFileName && DosFileName[1] == 58 )
  {
    if ( DosFileName[2] == 92 || DosFileName[2] == 47 )
      return 2;
    else
      return 3;
  }
  else
  {
    return 5;
  }
}
