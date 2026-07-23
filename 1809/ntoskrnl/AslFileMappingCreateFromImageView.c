/*
 * XREFs of AslFileMappingCreateFromImageView @ 0x1407204D0
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x1407205E0 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreateFromImageView(wchar_t ***a1, const wchar_t *a2, wchar_t *a3, wchar_t *a4)
{
  wchar_t **v8; // rax
  wchar_t **v9; // rbx
  int v10; // edi
  _DWORD *v11; // rdi

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = (wchar_t **)AslAlloc((__int64)a1, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = AslStringDuplicate(v8, a2);
    if ( v10 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      *((_DWORD *)v9 + 20) = 1;
      memset(v9 + 1, 0, 0x38uLL);
      v9[1] = 0LL;
      v11 = v9 + 8;
      v9[2] = 0LL;
      v9[3] = a4;
      *((_DWORD *)v9 + 14) = 0x1000000;
      v9[4] = a3;
      v9[5] = a4;
      if ( a4 )
      {
        if ( (int)AslpFileMappingGetFileKind(v9 + 1, v9 + 8) < 0 )
        {
          AslLogCallPrintf(1LL);
          *v11 = 3;
        }
      }
      else
      {
        *v11 = 1;
      }
      *a1 = v9;
      v10 = 0;
      v9 = 0LL;
    }
    if ( v9 )
      AslFileMappingDelete((PVOID *)v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
