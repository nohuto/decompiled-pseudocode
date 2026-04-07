/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180078E5C
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002C8C8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004FAEE (memcmp_0.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078DEC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((__int64)this + 56, (__int64)a2 + 56)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((__int64)this + 40, (__int64)a2 + 40) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 180, (char *)a2 + 180, 0x1CuLL)
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52)
      && *((_DWORD *)this + 49) == *((_DWORD *)a2 + 49)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53);
}
