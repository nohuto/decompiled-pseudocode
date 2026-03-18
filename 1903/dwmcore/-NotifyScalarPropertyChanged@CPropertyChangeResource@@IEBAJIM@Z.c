/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18007F49C
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18007F3AC (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA2B0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CE180 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800D0020 (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800D36B0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18007F7D0 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // ecx
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1224LL) + 48LL);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 68);
    else
      v9 = 0;
    v11[0] = v9;
    v11[1] = *(unsigned int *)(v4 + 56);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *, int, _QWORD))CoreUICallSend)(
           v8,
           v11,
           2LL,
           13LL,
           0,
           &unk_1802B2E97,
           v5,
           a3);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0xC3u, 0LL);
  }
  return (unsigned int)v3;
}
