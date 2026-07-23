/*
 * XREFs of CmpGetAcpiBiosVersion @ 0x1409C3CAC
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 */

char __fastcall CmpGetAcpiBiosVersion(__int64 a1, char *a2)
{
  __int64 Table; // rax
  unsigned int v5; // edx
  char *v6; // rcx

  Table = HalAcpiGetTableEx(a1, 1413763922LL, 0LL, 0LL);
  if ( Table || (Table = HalAcpiGetTableEx(a1, 1413763928LL, 0LL, 0LL)) != 0 )
  {
    v5 = 0;
    v6 = (char *)(Table + 10);
    do
    {
      if ( !*v6 )
        break;
      *a2 = *v6;
      ++v5;
      ++a2;
      ++v6;
    }
    while ( v5 < 6 );
    sprintf_s(a2, 128 - v5, " - %x", *(_DWORD *)(Table + 24));
    LOBYTE(Table) = 1;
  }
  return Table;
}
