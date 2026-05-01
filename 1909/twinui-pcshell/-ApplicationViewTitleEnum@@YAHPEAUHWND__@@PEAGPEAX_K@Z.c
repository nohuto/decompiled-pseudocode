/*
 * XREFs of ?ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180059360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitleEnum(HWND a1, const WCHAR *a2, HANDLE a3, __int64 a4)
{
  char *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rdi
  __int16 v9; // ax

  if ( (unsigned __int64)a2 < 0xC000 )
    return 1LL;
  v5 = (char *)(a4 + 8);
  if ( StrCmpNIW((PCWSTR)(a4 + 8), a2, *(_DWORD *)a4) )
    return 1LL;
  v7 = 255LL;
  v8 = (char *)a2 - v5;
  while ( v7 != -2147483391 )
  {
    v9 = *(_WORD *)&v5[v8];
    if ( !v9 )
      break;
    *(_WORD *)v5 = v9;
    v5 += 2;
    if ( !--v7 )
    {
      v5 -= 2;
      break;
    }
  }
  result = 0LL;
  *(_WORD *)v5 = 0;
  return result;
}
