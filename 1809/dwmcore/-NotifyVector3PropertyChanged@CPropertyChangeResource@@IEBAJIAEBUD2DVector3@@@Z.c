/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A5A4C
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180069440 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180069540 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A3B20 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A4DF4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800A5D64 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1208LL) + 56LL);
    if ( v6 )
      v8 = *(_DWORD *)(v6 + 68);
    else
      v8 = 0;
    v10[0] = v8;
    v10[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v7, v10, 2LL, 12LL, 2, &unk_18027643B);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x11Fu);
  }
  return (unsigned int)v3;
}
