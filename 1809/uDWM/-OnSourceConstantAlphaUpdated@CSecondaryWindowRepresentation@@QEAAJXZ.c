/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180025F84
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E940 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800240A8 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // rbx
  float v3; // xmm0_4
  double v4; // xmm3_8
  float v5; // xmm2_4
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v7 = *(_QWORD *)(v2 + 424);
      if ( v7 )
        v2 = *(_QWORD *)(v7 + 32);
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        return 0LL;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        v2 = *(_QWORD *)(*(_QWORD *)(v2 + 432) + 80LL);
    }
  }
  if ( v2 )
  {
    v3 = *((double *)this + 62);
    v4 = (double)*(unsigned __int8 *)(v2 + 344) / 255.0;
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v4 - v3)) & _xmm);
    if ( v5 > 0.0000011920929 )
    {
      *((double *)this + 62) = v4;
      CSecondaryWindowRepresentation::SetDirtyFlags(this, 16);
    }
  }
  return 0LL;
}
