/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001C5C0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AB10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001DA20 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Grow(CLegacyTokenBuffer *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  CLegacyTokenBuffer **v4; // rdx

  v2 = -1073741801;
  v3 = operator new[](0x818uLL, 0x62744D54u, PagedPool);
  if ( v3 )
  {
    v3[4] = 0;
    v3[517] = 0;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    v4 = (CLegacyTokenBuffer **)*((_QWORD *)this + 3);
    if ( *v4 != (CLegacyTokenBuffer *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v3 = (char *)this + 16;
    v2 = 0;
    *((_QWORD *)v3 + 1) = v4;
    *v4 = (CLegacyTokenBuffer *)v3;
    *((_QWORD *)this + 3) = v3;
    *((_QWORD *)this + 262) = v3 + 5;
    *((_QWORD *)this + 261) = v3;
    *((_DWORD *)this + 526) = 2048;
  }
  return v2;
}
