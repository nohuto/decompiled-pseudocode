/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800A3650
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800A3C24 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A8BE4 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B1158 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 */

char __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  char v2; // al
  unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // ecx
  bool v9; // zf
  int v10; // eax

  v2 = *((_BYTE *)this + 312);
  if ( v2 != *((_BYTE *)a2 + 312) )
    return 0;
  v9 = v2 == 0;
  v10 = *((_DWORD *)a2 + 58);
  if ( v9 )
  {
    if ( *((_DWORD *)this + 58) != v10
      || *((_DWORD *)this + 59) != *((_DWORD *)a2 + 59)
      || *((_DWORD *)this + 62) != *((_DWORD *)a2 + 62) )
    {
      return 0;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 58) != v10
      || *((_DWORD *)this + 59) != *((_DWORD *)a2 + 59)
      || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
      || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                             (char *)this + 120,
                             (char *)a2 + 120)
      || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                             (char *)this + 104,
                             (char *)a2 + 104) )
    {
      return 0;
    }
    v6 = (unsigned __int16 *)((char *)this + 160);
    do
    {
      v7 = *(unsigned __int16 *)((char *)v6 + a2 - this);
      v8 = *v6 - v7;
      if ( v8 )
        break;
      ++v6;
    }
    while ( v7 );
    if ( v8
      || *((_DWORD *)this + 56) != *((_DWORD *)a2 + 56)
      || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57)
      || *((_DWORD *)this + 64) != *((_DWORD *)a2 + 64)
      || *((_DWORD *)this + 65) != *((_DWORD *)a2 + 65)
      || memcmp_0((char *)this + 264, (char *)a2 + 264, 0x1CuLL)
      || *((_DWORD *)this + 74) != *((_DWORD *)a2 + 74) )
    {
      return 0;
    }
  }
  return 1;
}
