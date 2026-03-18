/*
 * XREFs of ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C0116EB4
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C0116DB8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall UMPD_ldevFillTable(struct _LDEV *a1, const int *a2)
{
  char *v2; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = (char *)a1 + 64;
  memset((char *)a1 + 64, 0, 0x340uLL);
  v4 = v2;
  v5 = 104LL;
  do
  {
    if ( *a2 )
      *v4 = *(_QWORD *)((char *)v4 + (char *)&gpUMDriverFunc - v2);
    ++a2;
    ++v4;
    --v5;
  }
  while ( v5 );
  LODWORD(v6) = 3;
  while ( 1 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( !*(_QWORD *)&v2[8 * dword_1C02CE290[v6]] )
      break;
    if ( !(_DWORD)v6 )
    {
      *((_QWORD *)v2 + 42) = UMPDDrvFree;
      return 1LL;
    }
  }
  return 0LL;
}
