/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800A5D64
 * Callers:
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001ED2C (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x1800A2EDC (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A5A4C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800A5C9C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801B0634 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x1801B0704 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801B07D4 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPropertyChangeResource::ShouldNotify(CPropertyChangeResource *this, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax
  int v5; // eax

  v2 = *((_QWORD *)this + 6);
  v3 = 0;
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 68);
  else
    v4 = 0;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 14) )
    {
      v5 = *((_DWORD *)this + 16);
      if ( _bittest(&v5, a2) )
        return 1;
    }
  }
  return v3;
}
