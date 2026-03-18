/*
 * XREFs of vtfdQueryFontFile @ 0x1C022A420
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C0228BF0 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     StringCchLengthA @ 0x1C0225B84 (StringCchLengthA.c)
 *     bDescStr @ 0x1C0226234 (bDescStr.c)
 *     bReconnectVtfdFont @ 0x1C0229E74 (bReconnectVtfdFont.c)
 */

__int64 __fastcall vtfdQueryFontFile(__int64 a1, int a2, unsigned int a3, WCHAR *a4)
{
  int v9; // edi
  unsigned int v10; // eax
  size_t v11; // rcx
  unsigned int v12; // edi
  int v13; // ecx
  const void *v14; // r9
  _WORD *v15; // rax
  __int64 v16; // r8
  signed int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // [rsp+30h] [rbp-138h] BYREF
  size_t pcchLength; // [rsp+38h] [rbp-130h] BYREF
  char psz[256]; // [rsp+40h] [rbp-128h] BYREF

  if ( (*(_DWORD *)(a1 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(a1) )
    return 0xFFFFFFFFLL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return *(unsigned int *)(a1 + 36);
    return 0xFFFFFFFFLL;
  }
  if ( *(_DWORD *)a1 == 2 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v10 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      if ( !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), &pcchLength, &v19, 1) )
        return 0xFFFFFFFFLL;
      v10 = v19;
      v11 = pcchLength;
    }
    v12 = -1;
    if ( (unsigned int)bDescStr(v11, v10, psz) )
    {
      if ( StringCchLengthA(psz, 0x100uLL, &pcchLength) < 0 )
        return 0xFFFFFFFFLL;
      v12 = 2 * pcchLength + 2;
      if ( a4 )
      {
        if ( a3 < v12 )
          return 0xFFFFFFFFLL;
        EngMultiByteToUnicodeN(a4, 2 * (v12 >> 1), 0LL, psz, v12 >> 1);
        a4[((unsigned __int64)v12 >> 1) - 1] = 0;
      }
    }
    if ( !*(_DWORD *)(a1 + 32) )
      EngUnmapFontFileFD(*(_QWORD *)(a1 + 8));
    return v12;
  }
  else
  {
    v13 = 0;
    v14 = (const void *)(*(_QWORD *)(a1 + 80) + *(int *)(*(_QWORD *)(a1 + 80) + 16LL));
    if ( v14 )
    {
      v15 = (_WORD *)(*(_QWORD *)(a1 + 80) + *(int *)(*(_QWORD *)(a1 + 80) + 16LL));
      v16 = 0x7FFFFFFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = v16 == 0 ? 0x80070057 : 0;
      if ( v16 )
        v13 = 0x7FFFFFFF - v16;
      else
        v13 = 0;
    }
    else
    {
      v17 = -2147024809;
    }
    if ( v17 < 0 )
      v13 = 0;
    v18 = 2 * v13 + 2;
    if ( a4 )
    {
      if ( a3 < v18 )
        return 0xFFFFFFFFLL;
      memmove(a4, v14, v18);
    }
    return v18;
  }
}
