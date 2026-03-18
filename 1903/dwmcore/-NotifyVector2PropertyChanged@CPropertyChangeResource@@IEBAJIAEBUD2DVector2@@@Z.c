/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18007F708
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18007F670 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA2B0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800C9F34 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800D36B0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18007F7D0 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // edx
  __int64 v11; // xmm0_8
  unsigned int v12; // ecx
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *(_QWORD *)(v5 + 48);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1224LL) + 48LL);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 68);
    else
      v10 = 0;
    v11 = *(_QWORD *)a3;
    v13[0] = v10;
    v13[1] = *(unsigned int *)(v5 + 56);
    v14 = v11;
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v9,
           v13,
           2LL,
           13LL,
           1,
           &unk_1802B2E9B,
           v6,
           &v14);
    if ( v4 == -2018375675 )
      v4 = 0;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v4, 0xF0u, 0LL);
  }
  return (unsigned int)v4;
}
