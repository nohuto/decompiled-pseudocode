/*
 * XREFs of ?GetArgsSubstring@ViewModeHelpers@Cortana@@YAJPEBG0IPEAPEBGPEA_K@Z @ 0x1800533DC
 * Callers:
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x180053304 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Cortana::ViewModeHelpers::GetArgsSubstring(
        const wchar_t *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        wchar_t **a4,
        const unsigned __int16 **a5)
{
  __int64 v6; // rdi
  wchar_t *v9; // rax
  wchar_t *v10; // r9
  size_t v11; // rax
  const wchar_t *v12; // rcx
  wchar_t *v13; // rax
  wchar_t *v14; // rdx
  __int64 v16; // rcx

  v6 = (unsigned int)a3;
  v9 = wcsstr(this, a2);
  *a4 = v9;
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = wcsnlen(a2, (unsigned int)v6);
      v10 = *a4;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = &v10[v11];
    *a4 = (wchar_t *)v12;
    if ( v12 <= &this[v6] )
    {
      v13 = wcsstr(v12, L"&");
      v14 = *a4;
      if ( v13 )
      {
        *a5 = (const unsigned __int16 *)(v13 - v14);
      }
      else
      {
        v16 = -1LL;
        do
          ++v16;
        while ( v14[v16] );
        *a5 = (const unsigned __int16 *)v16;
      }
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return 0LL;
}
