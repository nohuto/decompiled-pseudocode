/*
 * XREFs of ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x1802F73C8
 * Callers:
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1802F72C4 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     wcstol @ 0x1800850D8 (wcstol.c)
 */

char __fastcall MultitaskingViewUtils::LoadFont(
        MultitaskingViewUtils *this,
        struct tagLOGFONTW *a2,
        UINT a3,
        UINT a4,
        UINT uID)
{
  int v6; // esi
  int v8; // eax
  int v9; // eax
  WCHAR Buffer[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h]

  *((_BYTE *)this + 26) = 5;
  v6 = (int)a2;
  if ( LoadStringW(&_ImageBase, a3, (LPWSTR)this + 14, 32) <= 0 )
    return 0;
  *(_QWORD *)Buffer = 0LL;
  v12 = 0LL;
  v13 = 0;
  if ( LoadStringW(&_ImageBase, a4, Buffer, 10) <= 0 )
    return 0;
  v8 = wcstol(Buffer, 0LL, 10);
  if ( !v8 )
    return 0;
  *(_DWORD *)this = -MulDiv(v8, v6, 72);
  if ( LoadStringW(&_ImageBase, uID, Buffer, 10) <= 0 )
    return 0;
  v9 = wcstol(Buffer, 0LL, 10);
  if ( !v9 )
    return 0;
  *((_DWORD *)this + 4) = v9;
  return 1;
}
