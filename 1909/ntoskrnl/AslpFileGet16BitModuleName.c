/*
 * XREFs of AslpFileGet16BitModuleName @ 0x140928EA0
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x140929914 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x140925940 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitModuleName @ 0x14092AC0C (AslpFileQuery16BitModuleName.c)
 */

__int64 __fastcall AslpFileGet16BitModuleName(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  CHAR v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitModuleName(v6);
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
