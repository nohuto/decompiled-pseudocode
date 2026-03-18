/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x180074120
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, struct CShapePtr *a2, char a3)
{
  unsigned int v3; // ebx
  int appended; // eax
  unsigned int v8; // ecx
  CShape *v9; // r14
  int v10; // eax
  unsigned int v11; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  struct CShape *v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  int v20; // [rsp+58h] [rbp-A8h]
  char v21[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 60) & 0x40) != 0 )
  {
    v18 = 32;
    v17[0] = v21;
    v19 = 32;
    v17[1] = v21;
    `vector constructor iterator'(
      v21,
      16LL,
      32LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v20 = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
                 (CGdiSpriteBitmap *)((char *)this + 152),
                 (__int64)v17);
    v3 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, appended, 0x2D6u);
    }
    else
    {
      v9 = (CGdiSpriteBitmap *)((char *)this + 224);
      v10 = CRegionShape::BuildFromRects((char *)this + 224, v17[0]);
      v3 = v10;
      if ( v10 >= 0 )
      {
        *((_BYTE *)this + 60) &= ~0x40u;
        DynArrayImpl<1>::~DynArrayImpl<1>(v17);
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2D9u);
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v17);
    return v3;
  }
  v9 = (CGdiSpriteBitmap *)((char *)this + 224);
LABEL_5:
  if ( a3 )
  {
    v13 = CShape::CopyShape(v9, 0LL, &v16);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2E6u);
    }
    else
    {
      CShapePtr::Release(a2);
      *(_QWORD *)a2 = v16;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 19) = 0;
      **((_DWORD **)this + 30) = 0;
      v15 = *((_QWORD *)this + 39);
      *((_QWORD *)this + 39) = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = v9;
    *((_BYTE *)a2 + 8) = 0;
  }
  return v3;
}
