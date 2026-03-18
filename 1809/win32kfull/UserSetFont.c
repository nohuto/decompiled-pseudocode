/*
 * XREFs of UserSetFont @ 0x1C00BFC0C
 * Callers:
 *     SetIconMetrics @ 0x1C00BEFB0 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C00BFC88 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00BFFF8 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct HLFONT__ *v9; // rdi
  __int64 v10; // rdx
  struct HLFONT__ *v11; // rcx
  __int64 v12; // r8

  result = CreateFontFromUserProfile(a1);
  v9 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4 )
    {
      v11 = *(struct HLFONT__ **)(GetSessionDpiServerInfo(v7, v6, v8) + 24);
      if ( *a4 != v11 && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo(v11, v10, v12) + 24) )
      {
        GreMarkDeletableFont(*a4);
        GreDeleteObject(*a4);
      }
    }
    *a4 = v9;
    return 1LL;
  }
  return result;
}
