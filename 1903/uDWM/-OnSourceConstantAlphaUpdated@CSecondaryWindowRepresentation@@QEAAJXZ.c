/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012440
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800102A0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013130 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180012774 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  float v4; // xmm0_4
  double v5; // xmm3_8
  float v6; // xmm2_4

  v2 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v3 = *(_QWORD *)(v2 + 432);
      if ( v3 )
        v2 = *(_QWORD *)(v3 + 32);
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        return 0LL;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        v2 = *(_QWORD *)(*(_QWORD *)(v2 + 440) + 80LL);
    }
  }
  if ( v2 )
  {
    v4 = *((double *)this + 62);
    v5 = (double)*(unsigned __int8 *)(v2 + 352) / 255.0;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v5 - v4)) & _xmm);
    if ( v6 > 0.0000011920929 )
    {
      *((double *)this + 62) = v5;
      CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
    }
  }
  return 0LL;
}
