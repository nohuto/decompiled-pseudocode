/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x18007D738
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007ED10 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18015A994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008FE94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 */

char __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  char v2; // al
  bool v5; // zf
  int v6; // eax
  unsigned __int16 *v8; // rax
  int v9; // r8d
  int v10; // ecx

  v2 = *((_BYTE *)this + 320);
  if ( v2 == *((_BYTE *)a2 + 320) )
  {
    v5 = v2 == 0;
    v6 = *((_DWORD *)a2 + 60);
    if ( v5 )
    {
      if ( *((_DWORD *)this + 60) == v6
        && *((_DWORD *)this + 61) == *((_DWORD *)a2 + 61)
        && *((_DWORD *)this + 64) == *((_DWORD *)a2 + 64) )
      {
        return 1;
      }
    }
    else if ( *((_DWORD *)this + 60) == v6
           && *((_DWORD *)this + 61) == *((_DWORD *)a2 + 61)
           && *((_QWORD *)this + 2) == *((_QWORD *)a2 + 2)
           && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                 (char *)this + 120,
                                 (char *)a2 + 120)
           && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                 (char *)this + 104,
                                 (char *)a2 + 104) )
    {
      v8 = (unsigned __int16 *)((char *)this + 160);
      do
      {
        v9 = *(unsigned __int16 *)((char *)v8 + a2 - this);
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      if ( !v10
        && *((_DWORD *)this + 56) == *((_DWORD *)a2 + 56)
        && *((_DWORD *)this + 57) == *((_DWORD *)a2 + 57)
        && *((_DWORD *)this + 66) == *((_DWORD *)a2 + 66)
        && *((_DWORD *)this + 67) == *((_DWORD *)a2 + 67)
        && !memcmp_0((char *)this + 272, (char *)a2 + 272, 0x1CuLL)
        && *((_DWORD *)this + 76) == *((_DWORD *)a2 + 76) )
      {
        return 1;
      }
    }
  }
  return 0;
}
