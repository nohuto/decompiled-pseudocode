/*
 * XREFs of ViSetRequestedOrderDependentAPIs @ 0x140327B58
 * Callers:
 *     ViXdvSetRequestedAPIsforDIF @ 0x140966E7C (ViXdvSetRequestedAPIsforDIF.c)
 * Callees:
 *     _stricmp @ 0x14019FB50 (_stricmp.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 */

void ViSetRequestedOrderDependentAPIs()
{
  char **v0; // rbx
  __int64 *i; // rdi
  int v2; // eax

  v0 = &VfOrderDependentThunks;
  if ( VfOrderDependentThunks )
  {
    do
    {
      for ( i = *(__int64 **)VfDifAPIThunkContextHead; i != (__int64 *)VfDifAPIThunkContextHead; i = (__int64 *)*i )
      {
        if ( !stricmp(*v0, (const char *)*(i - 1)) )
        {
          v2 = *((_DWORD *)v0 + 12);
          if ( v2 == 0xFFFF )
          {
            VfUtilDbgPrint(
              "\t Currently there is no default wrapper routine for %s.\n"
              "                                      \t This means this request is ignored until a default wrapper is cre"
              "ated. \n"
              "                                      \t Please contact 'dvrf' for the default wrapper creation. \n",
              (const char *)*(i - 1));
          }
          else
          {
            *((_DWORD *)v0 + 6) |= 1u;
            *((_DWORD *)i + 12) = v2;
          }
        }
      }
      v0 += 7;
    }
    while ( *v0 );
  }
}
