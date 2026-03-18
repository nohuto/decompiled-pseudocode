/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068340 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18008F970 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2A90 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180217FE0 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800047C4 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800339F8 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004AF7C (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180153430 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  unsigned int v2; // ebx
  struct CShape *v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int WindowClipShape; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct CShape *v21; // rdi
  CShape *v23; // [rsp+38h] [rbp-59h] BYREF
  char v24; // [rsp+40h] [rbp-51h]
  struct CShape *v25; // [rsp+48h] [rbp-49h] BYREF
  struct CShape *v26; // [rsp+50h] [rbp-41h] BYREF
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  int v28; // [rsp+60h] [rbp-31h]
  int v29; // [rsp+64h] [rbp-2Dh]
  _QWORD v30[3]; // [rsp+68h] [rbp-29h] BYREF
  int v31; // [rsp+80h] [rbp-11h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+2Fh]

  v2 = 0;
  v3 = 0LL;
  v25 = 0LL;
  if ( !*((_BYTE *)this + 936) )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 116);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *((_QWORD *)this + 116) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 116) )
  {
    v23 = 0LL;
    v30[0] = &CRegionShape::`vftable';
    v30[2] = &v31;
    v24 = 0;
    v30[1] = 0LL;
    v31 = 0;
    v32 = 0LL;
    if ( *((_QWORD *)this + 100) )
    {
      WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v23);
      v2 = WindowClipShape;
      if ( WindowClipShape < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, WindowClipShape, 0xD52u, 0LL);
LABEL_8:
        CRegionShape::~CRegionShape((CRegionShape *)v30);
        CShapePtr::~CShapePtr((CShapePtr *)&v23);
        return v2;
      }
    }
    else
    {
      v7 = 0;
      v8 = *((_DWORD *)this + 181) - *((_DWORD *)this + 179);
      v9 = *((_DWORD *)this + 180) - *((_DWORD *)this + 178);
      v27 = 0LL;
      if ( v9 >= 0 )
        v7 = v9;
      v28 = v7;
      v10 = 0;
      if ( v8 >= 0 )
        v10 = v8;
      v29 = v10;
      v11 = CRegionShape::BuildFromRects((__int64)v30, (__int64)&v27, 1);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD5Cu, 0LL);
LABEL_29:
        CRegionShape::~CRegionShape((CRegionShape *)v30);
        CShapePtr::~CShapePtr((CShapePtr *)&v23);
LABEL_30:
        if ( v3 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
        return v2;
      }
      CShapePtr::Release((CShapePtr *)&v23);
      v24 = 0;
      v23 = (CShape *)v30;
    }
    v13 = CShapePtr::CopyShape(&v23, 0LL, &v25);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD62u, 0LL);
    }
    else
    {
      if ( !*((_BYTE *)this + 937) )
      {
        v21 = v25;
LABEL_25:
        *((_QWORD *)this + 116) = v21;
        *((_BYTE *)this + 936) = 1;
        goto LABEL_8;
      }
      v15 = *((_QWORD *)this + 93);
      v27 = 0LL;
      LOBYTE(v28) = 0;
      v26 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v15 + 184LL))(v15, &v27, 0LL);
      v2 = v16;
      if ( v16 >= 0 )
      {
        v3 = v25;
        v19 = CShape::Combine((__int64)v25, v17, v27, 0LL, 1, &v26);
        v2 = v19;
        if ( v19 >= 0 )
        {
          if ( v3 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
          v21 = v26;
          CShapePtr::~CShapePtr((CShapePtr *)&v27);
          goto LABEL_25;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xD70u, 0LL);
        CShapePtr::~CShapePtr((CShapePtr *)&v27);
        goto LABEL_29;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v16, 0xD6Bu, 0LL);
      CShapePtr::~CShapePtr((CShapePtr *)&v27);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v30);
    CShapePtr::~CShapePtr((CShapePtr *)&v23);
    v3 = v25;
    goto LABEL_30;
  }
  return v2;
}
