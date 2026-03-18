/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18022F794
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801D6DF0 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18023C170 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800453F4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800C4CD0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18022E4BC (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022F208 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180232800 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180232BD8 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  int v11; // r12d
  char v12; // r13
  int v13; // eax
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  int v16; // r8d
  int v17; // ecx
  __int128 v18; // xmm1
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r15
  unsigned __int8 v28; // si
  unsigned __int8 v29; // r14
  int v30; // edi
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  __int128 v33; // xmm0
  _DWORD v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+A4h] [rbp-5Ch] BYREF
  int v39; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+ACh] [rbp-54h] BYREF
  int v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B4h] [rbp-4Ch] BYREF
  int v43; // [rsp+B8h] [rbp-48h] BYREF
  int v44; // [rsp+BCh] [rbp-44h] BYREF
  int v45; // [rsp+C0h] [rbp-40h] BYREF
  int v46; // [rsp+C4h] [rbp-3Ch] BYREF
  struct InteractionAxisGroup *v47; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v48; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _OWORD *v50; // [rsp+E0h] [rbp-20h]
  struct _D3DMATRIX v51; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v52; // [rsp+130h] [rbp+30h] BYREF
  __int128 v53; // [rsp+140h] [rbp+40h] BYREF
  __int128 v54; // [rsp+150h] [rbp+50h]
  __int128 v55; // [rsp+160h] [rbp+60h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  CInteractionProcessor **v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  int *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]
  int *v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  int *v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  int *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  int *v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  int *v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+218h] [rbp+118h]
  int *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  int *v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]
  int *v78; // [rsp+240h] [rbp+140h]
  __int64 v79; // [rsp+248h] [rbp+148h]
  char *v80; // [rsp+250h] [rbp+150h]
  __int64 v81; // [rsp+258h] [rbp+158h]
  char *v82; // [rsp+260h] [rbp+160h]
  __int64 v83; // [rsp+268h] [rbp+168h]
  char *v84; // [rsp+270h] [rbp+170h]
  __int64 v85; // [rsp+278h] [rbp+178h]
  int *v86; // [rsp+280h] [rbp+180h]
  __int64 v87; // [rsp+288h] [rbp+188h]
  struct InteractionAxisGroup **v88; // [rsp+290h] [rbp+190h]
  __int64 v89; // [rsp+298h] [rbp+198h]
  char *v90; // [rsp+2A0h] [rbp+1A0h]
  __int64 v91; // [rsp+2A8h] [rbp+1A8h]
  char *v92; // [rsp+2B0h] [rbp+1B0h]
  __int64 v93; // [rsp+2B8h] [rbp+1B8h]
  char *v94; // [rsp+2C0h] [rbp+1C0h]
  __int64 v95; // [rsp+2C8h] [rbp+1C8h]

  v11 = 0;
  v49 = a7;
  v12 = 0;
  v50 = a8;
  v13 = *((_DWORD *)this + 196);
  v47 = a4;
  v35[0] = v13;
  v52 = 0uLL;
  v36 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v51);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v14, &v51);
  v17 = *((_DWORD *)this + 197);
  v53 = *(_OWORD *)&D3DMatrix->_11;
  v54 = *(_OWORD *)&D3DMatrix->_21;
  v55 = *(_OWORD *)&D3DMatrix->_31;
  v18 = *(_OWORD *)&D3DMatrix->_41;
  v51 = (struct _D3DMATRIX)zmmword_1802D5180;
  v56 = v18;
  v19 = v17 - 2;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v24 = *((_DWORD *)this + 160) == -805306369;
          if ( *((_DWORD *)this + 160) == -805306369 )
            LOWORD(v52) = 257;
          v25 = v16;
          v36._44 = 1.0;
          LOBYTE(v25) = !v24;
          v36._33 = 1.0;
          LODWORD(v36._43) &= v16;
          LODWORD(v36._42) &= v16;
          LODWORD(v36._41) &= v16;
          LODWORD(v36._34) &= v16;
          LODWORD(v36._32) &= v16;
          LODWORD(v36._31) &= v16;
          LODWORD(v36._24) &= v16;
          LODWORD(v36._23) &= v16;
          LODWORD(v36._21) &= v16;
          LODWORD(v36._14) &= v16;
          LODWORD(v36._13) &= v16;
          LODWORD(v36._12) &= v16;
          DWORD2(v56) &= v16;
          DWORD1(v56) &= v16;
          LODWORD(v56) = v16 & v56;
          HIDWORD(v55) &= v16;
          DWORD1(v55) &= v16;
          LODWORD(v55) = v16 & v55;
          HIDWORD(v54) &= v16;
          DWORD2(v54) &= v16;
          LODWORD(v54) = v16 & v54;
          HIDWORD(v53) &= v16;
          DWORD2(v53) &= v16;
          DWORD1(v53) &= v16;
          v35[0] = v25 + 2;
          v36._22 = 1.0;
          v36._11 = 1.0;
          HIDWORD(v56) = 1065353216;
          DWORD2(v55) = 1065353216;
          DWORD1(v54) = 1065353216;
          LODWORD(v53) = 1065353216;
          goto LABEL_17;
        }
        if ( v22 != 1 )
          goto LABEL_17;
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 480,
                a2,
                a3,
                a6,
                v35,
                &v52,
                (__int64)&v36,
                (__int64)&v53,
                (__int64)&v51);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        {
          v12 = 1;
          *(_QWORD *)&v36._42 = 0LL;
          v36._41 = 0.0;
          *(_QWORD *)&v36._31 = 0LL;
          *(_OWORD *)&v36._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v56 + 4) = 0LL;
          LODWORD(v56) = 0;
          *(_QWORD *)&v55 = 0LL;
          v54 = 0x3F80000000000000uLL;
          v35[0] = 2;
          LOWORD(v52) = 257;
          v36._44 = 1.0;
          *(_QWORD *)&v36._33 = 1065353216LL;
          *(_OWORD *)&v36._11 = 0x3F800000uLL;
          HIDWORD(v56) = 1065353216;
          *((_QWORD *)&v55 + 1) = 1065353216LL;
          v53 = 0x3F800000uLL;
          goto LABEL_16;
        }
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 320,
                a2,
                a3,
                a6,
                v35,
                &v52,
                (__int64)&v36,
                (__int64)&v53,
                (__int64)&v51);
      }
    }
    else
    {
      v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (_BYTE *)this + 160,
              a2,
              a3,
              a6,
              v35,
              &v52,
              (__int64)&v36,
              (__int64)&v53,
              (__int64)&v51);
    }
  }
  else
  {
    v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v35,
            &v52,
            (__int64)&v36,
            (__int64)&v53,
            (__int64)&v51);
  }
  v11 = v23;
LABEL_16:
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_17:
  v26 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v52, v35);
  v27 = v26;
  if ( !v12 )
  {
    if ( v26
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v53,
           (const struct D2DMatrix *)&v51,
           v47,
           (struct InteractionAxis *)&v52,
           (enum InteractionState *)v35) )
    {
      v27 = 1;
LABEL_23:
      v28 = v52;
      v29 = BYTE1(v52);
      if ( *((_BYTE *)this + 1248) )
        v28 = 1;
      if ( *((_BYTE *)this + 1249) )
        v29 = 1;
      LOBYTE(v52) = v28;
      BYTE1(v52) = v29;
      if ( *((float *)&v52 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v52 + 2) != 0.0 )
        *((_BYTE *)this + 808) |= 2u;
      if ( *((float *)&v52 + 3) != 0.0 )
        *((_BYTE *)this + 808) |= 4u;
      if ( v28 || v29 )
        *((_BYTE *)this + 808) |= 8u;
      goto LABEL_37;
    }
    v27 = 0;
  }
  if ( v27 )
    goto LABEL_23;
  v29 = BYTE1(v52);
  v28 = v52;
LABEL_37:
  v30 = v35[0];
  if ( v35[0] == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v30 = 4;
  }
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v31 = *((unsigned __int8 *)this + 808);
    v58 = &v48;
    v35[0] = *((_DWORD *)this + 197);
    v60 = v35;
    v37 = *((_DWORD *)this + 196);
    v62 = &v37;
    v64 = &v38;
    v48 = this;
    v39 = v31 & 1;
    v66 = &v39;
    v59 = 8LL;
    v40 = (v31 >> 1) & 1;
    v68 = &v40;
    v41 = (v31 >> 2) & 1;
    v61 = 4LL;
    v70 = &v41;
    v72 = &v42;
    v43 = v27;
    v74 = &v43;
    v44 = v28;
    v76 = &v44;
    v45 = v29;
    v78 = &v45;
    v80 = (char *)&v52 + 4;
    v82 = (char *)&v52 + 8;
    v84 = (char *)&v52 + 12;
    v46 = *((unsigned __int8 *)this + 1248);
    v86 = &v46;
    LODWORD(v47) = *((unsigned __int8 *)this + 1249);
    v88 = &v47;
    v90 = (char *)this + 1252;
    v63 = 4LL;
    v38 = v30;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v42 = (v31 >> 3) & 1;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v91 = 4LL;
    v92 = (char *)this + 1256;
    v94 = (char *)this + 1260;
    v93 = 4LL;
    v95 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DE5E5, 0LL, 0LL, 0x15u, &pData);
  }
  v32 = (_DWORD *)v49;
  v33 = v52;
  *((_DWORD *)this + 196) = v30;
  *v32 = v30;
  *v50 = v33;
  return (unsigned int)v11;
}
