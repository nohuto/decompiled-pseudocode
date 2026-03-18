/*
 * XREFs of ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C004F488
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C004F0E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C00B3504 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreGetCannonicalName @ 0x1C0264B94 (GreGetCannonicalName.c)
 */

void __fastcall vCheckMMInstance(STRSAFE_PCNZWCH pszSrc, struct tagDESIGNVECTOR *a2)
{
  STRSAFE_PCNZWCH v3; // rax
  wchar_t v4; // cx
  STRSAFE_PCNZWCH v5; // rdx
  const wchar_t *v6; // rbx
  wchar_t pszDest[264]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v8[528]; // [rsp+240h] [rbp-238h] BYREF

  *((_DWORD *)a2 + 1) = 0;
  v3 = pszSrc;
  do
  {
    v4 = *v3;
    v5 = v3;
    if ( !*v3 )
      break;
    ++v3;
  }
  while ( v4 != 40 );
  v6 = v5 + 1;
  if ( !v4 )
    v6 = v5;
  if ( *v6 && !_wcsicmp(v6, L"OpenType)") && RtlStringCchCopyNW(pszDest, 0x104uLL, pszSrc, v6 - pszSrc - 1) >= 0 )
    GreGetCannonicalName(pszDest, v8);
}
