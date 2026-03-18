/*
 * XREFs of Controller_PopulateAcpiDeviceInformation @ 0x1C00597A4
 * Callers:
 *     Controller_RetrieveAcpiData @ 0x1C005A660 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C005AAC8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     RtlStringCchPrintfA @ 0x1C0009144 (RtlStringCchPrintfA.c)
 */

NTSTATUS __fastcall Controller_PopulateAcpiDeviceInformation(_WORD *a1, char *a2)
{
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // ax
  unsigned int v6; // edi
  unsigned __int16 v7; // dx
  void *v8; // rcx

  RtlStringCchPrintfA(a2 + 10, 5uLL, "%04X", (unsigned __int16)a1[13]);
  v4 = a1[4];
  if ( v4 )
  {
    v5 = a1[6];
    if ( v5 )
      v6 = v5 - v4;
    else
      v6 = (unsigned __int16)a1[5];
    memmove(a2, (char *)a1 + v4, v6);
    v7 = a1[6];
    v8 = a2 + 5;
    if ( v7 )
      return (unsigned int)memmove(v8, (char *)a1 + v7, (unsigned __int16)a1[5] - v6);
  }
  else
  {
    RtlStringCchPrintfA(a2, 5uLL, "%s", "UKWN");
    v8 = a2 + 5;
  }
  return RtlStringCchPrintfA((NTSTRSAFE_PSTR)v8, 5uLL, "%s", "FFFF");
}
