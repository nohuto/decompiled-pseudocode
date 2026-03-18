/*
 * XREFs of ClientPrinterThunk @ 0x1C008DF30
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C008DFD8 (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 */

__int64 __fastcall ClientPrinterThunk(_DWORD *a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || ExIsResourceAcquiredSharedLite(gpresUser) )
    return 0xFFFFFFFFLL;
  a1[2] = a4;
  a1[3] = 0;
  v9 = pppUserModeCallback(v8, a1, a2, a3, a4);
  v10 = -1;
  if ( v9 >= 0 )
    return 0;
  return v10;
}
