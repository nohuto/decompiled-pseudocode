/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18007F5AC
 * Callers:
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18006EE60 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18007F4D0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA2B0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800C9C78 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800D36B0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18007F7D0 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // r10
  int v6; // r11d
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  _QWORD v16[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *(_QWORD *)(v4 + 16);
    v14 = *v5;
    v9 = *(_QWORD *)(v8 + 1224);
    v15 = *((_DWORD *)v5 + 2);
    v10 = *(_QWORD *)(v4 + 48);
    v11 = *(_QWORD *)(v9 + 48);
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = 0;
    v16[0] = v12;
    v16[1] = *(unsigned int *)(v4 + 56);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v11,
           v16,
           2LL,
           13LL,
           2,
           &unk_1802B2EA1,
           v6,
           &v14);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x11Du, 0LL);
  }
  return (unsigned int)v3;
}
