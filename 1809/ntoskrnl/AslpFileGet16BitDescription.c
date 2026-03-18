/*
 * XREFs of AslpFileGet16BitDescription @ 0x1408EC240
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x1408ECDA8 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x1408E9284 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitDescription @ 0x1408ED66C (AslpFileQuery16BitDescription.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  char v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitDescription(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(1LL);
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
