/*
 * XREFs of ViSetRequestedAPIs @ 0x14096688C
 * Callers:
 *     ViXdvSetRequestedAPIsforDIF @ 0x140966E7C (ViXdvSetRequestedAPIsforDIF.c)
 * Callees:
 *     _stricmp @ 0x14019FB50 (_stricmp.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 */

void __fastcall ViSetRequestedAPIs(__int64 a1)
{
  __int64 i; // rbx
  __int64 *j; // rdi
  int v3; // eax

  for ( i = a1; *(_QWORD *)i; i += 48LL )
  {
    for ( j = *(__int64 **)VfDifAPIThunkContextHead; j != (__int64 *)VfDifAPIThunkContextHead; j = (__int64 *)*j )
    {
      if ( !stricmp(*(const char **)i, (const char *)*(j - 1)) )
      {
        v3 = *(_DWORD *)(i + 40);
        if ( v3 == 0xFFFF )
        {
          VfUtilDbgPrint(
            "\t Currently there is no default wrapper routine for %s.\n"
            "                                      \t This means this request is ignored until a default wrapper is creat"
            "ed. \n"
            "                                      \t Please contact 'dvrf' for the default wrapper creation. \n",
            (const char *)*(j - 1));
        }
        else
        {
          *(_DWORD *)(i + 24) |= 1u;
          *((_DWORD *)j + 12) = v3;
        }
      }
    }
  }
}
