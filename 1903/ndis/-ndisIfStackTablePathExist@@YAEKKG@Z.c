/*
 * XREFs of ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C002A4B8
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C002A1F0 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C002A4B8 (-ndisIfStackTablePathExist@@YAEKKG@Z.c)
 * Callees:
 *     ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C002A4B8 (-ndisIfStackTablePathExist@@YAEKKG@Z.c)
 */

unsigned __int8 __fastcall ndisIfStackTablePathExist(int a1, unsigned int a2, __int16 a3)
{
  unsigned __int16 v3; // di
  PVOID *v6; // rbx
  PVOID *v7; // rax
  unsigned int v9; // ecx

  v3 = a3 + 1;
  if ( (unsigned __int16)(a3 + 1) < 0x10u )
  {
    v6 = (PVOID *)ndisIfStackEntryList;
    while ( v6 != &ndisIfStackEntryList )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( *((_DWORD *)v7 + 5) == a1 )
      {
        v9 = *((_DWORD *)v7 + 4);
        if ( v9 == a2 || ndisIfStackTablePathExist(v9, a2, v3) )
          return 1;
      }
    }
  }
  return 0;
}
