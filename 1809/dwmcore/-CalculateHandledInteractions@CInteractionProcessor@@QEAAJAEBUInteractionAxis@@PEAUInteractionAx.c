/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801EF390
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019BE90 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F68B0 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180011830 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801EE360 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801EEE0C (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F242C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F2730 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
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
  struct _D3DMATRIX *v13; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  __int128 v17; // xmm1
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // r15
  unsigned __int8 v26; // si
  unsigned __int8 v27; // r14
  int v28; // edi
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  __int128 v31; // xmm0
  _DWORD v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+A4h] [rbp-5Ch] BYREF
  int v37; // [rsp+A8h] [rbp-58h] BYREF
  int v38; // [rsp+ACh] [rbp-54h] BYREF
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+B4h] [rbp-4Ch] BYREF
  int v41; // [rsp+B8h] [rbp-48h] BYREF
  int v42; // [rsp+BCh] [rbp-44h] BYREF
  int v43; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+C4h] [rbp-3Ch] BYREF
  struct InteractionAxisGroup *v45; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h]
  _OWORD *v48; // [rsp+E0h] [rbp-20h]
  struct _D3DMATRIX v49; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  __int128 v51; // [rsp+140h] [rbp+40h] BYREF
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+160h] [rbp+60h]
  __int128 v54; // [rsp+170h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  CInteractionProcessor **v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  int *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  int *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  int *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  int *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  int *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  int *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  int *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  char *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  char *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  char *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  int *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  struct InteractionAxisGroup **v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  char *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  char *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  char *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]

  v47 = a7;
  v11 = 0;
  v48 = a8;
  v12 = 0;
  v33[0] = *((_DWORD *)this + 196);
  v50 = 0uLL;
  v45 = a4;
  v34 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v49);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v13, &v49);
  v16 = *((_DWORD *)this + 197);
  v51 = *(_OWORD *)&D3DMatrix->_11;
  v52 = *(_OWORD *)&D3DMatrix->_21;
  v53 = *(_OWORD *)&D3DMatrix->_31;
  v17 = *(_OWORD *)&D3DMatrix->_41;
  v49 = (struct _D3DMATRIX)zmmword_1802AEC90;
  v54 = v17;
  v18 = v16 - 2;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v23 = *((_DWORD *)this + 160);
          if ( v23 == -805306369 )
            LOWORD(v50) = 257;
          *(_OWORD *)&v34._11 = 0x3F800000uLL;
          *(_QWORD *)&v34._43 = 0x3F80000000000000LL;
          *(_QWORD *)&v34._41 = 0LL;
          v34._34 = 0.0;
          *(_QWORD *)&v34._32 = 0x3F80000000000000LL;
          v34._31 = 0.0;
          *(_OWORD *)&v34._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v54 + 4) = 0LL;
          LODWORD(v54) = 0;
          *(_QWORD *)&v53 = 0LL;
          v52 = 0x3F80000000000000uLL;
          v33[0] = (v23 != -805306369) + 2;
          HIDWORD(v54) = 1065353216;
          *((_QWORD *)&v53 + 1) = 1065353216LL;
          v51 = 0x3F800000uLL;
          goto LABEL_17;
        }
        if ( v21 != 1 )
          goto LABEL_17;
        v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 480,
                a2,
                v15,
                a6,
                v33,
                &v50,
                (__int64)&v34,
                (__int64)&v51,
                (__int64)&v49);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        {
          v12 = 1;
          *(_QWORD *)&v34._42 = 0LL;
          v34._41 = 0.0;
          *(_QWORD *)&v34._31 = 0LL;
          *(_OWORD *)&v34._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v54 + 4) = 0LL;
          LODWORD(v54) = 0;
          *(_QWORD *)&v53 = 0LL;
          v52 = 0x3F80000000000000uLL;
          v33[0] = 2;
          LOWORD(v50) = 257;
          v34._44 = 1.0;
          *(_QWORD *)&v34._33 = 1065353216LL;
          *(_OWORD *)&v34._11 = 0x3F800000uLL;
          HIDWORD(v54) = 1065353216;
          *((_QWORD *)&v53 + 1) = 1065353216LL;
          v51 = 0x3F800000uLL;
          goto LABEL_16;
        }
        v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 320,
                a2,
                a3,
                a6,
                v33,
                &v50,
                (__int64)&v34,
                (__int64)&v51,
                (__int64)&v49);
      }
    }
    else
    {
      v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (_BYTE *)this + 160,
              a2,
              a3,
              a6,
              v33,
              &v50,
              (__int64)&v34,
              (__int64)&v51,
              (__int64)&v49);
    }
  }
  else
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v33,
            &v50,
            (__int64)&v34,
            (__int64)&v51,
            (__int64)&v49);
  }
  v11 = v22;
LABEL_16:
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_17:
  v24 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v50, v33);
  v25 = v24;
  if ( !v12 )
  {
    if ( v24
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v51,
           (const struct D2DMatrix *)&v49,
           v45,
           (struct InteractionAxis *)&v50,
           (enum InteractionState *)v33) )
    {
      v25 = 1;
LABEL_23:
      v26 = v50;
      v27 = BYTE1(v50);
      if ( *((_BYTE *)this + 1248) )
        v26 = 1;
      if ( *((_BYTE *)this + 1249) )
        v27 = 1;
      LOBYTE(v50) = v26;
      BYTE1(v50) = v27;
      if ( *((float *)&v50 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v50 + 2) != 0.0 )
        *((_BYTE *)this + 808) |= 2u;
      if ( *((float *)&v50 + 3) != 0.0 )
        *((_BYTE *)this + 808) |= 4u;
      if ( v26 || v27 )
        *((_BYTE *)this + 808) |= 8u;
      goto LABEL_37;
    }
    v25 = 0;
  }
  if ( v25 )
    goto LABEL_23;
  v27 = BYTE1(v50);
  v26 = v50;
LABEL_37:
  v28 = v33[0];
  if ( v33[0] == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v28 = 4;
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v29 = *((unsigned __int8 *)this + 808);
    v56 = &v46;
    v33[0] = *((_DWORD *)this + 197);
    v58 = v33;
    v35 = *((_DWORD *)this + 196);
    v60 = &v35;
    v62 = &v36;
    v46 = this;
    v37 = v29 & 1;
    v64 = &v37;
    v57 = 8LL;
    v38 = (v29 >> 1) & 1;
    v66 = &v38;
    v39 = (v29 >> 2) & 1;
    v59 = 4LL;
    v68 = &v39;
    v70 = &v40;
    v41 = v25;
    v72 = &v41;
    v42 = v26;
    v74 = &v42;
    v43 = v27;
    v76 = &v43;
    v78 = (char *)&v50 + 4;
    v80 = (char *)&v50 + 8;
    v82 = (char *)&v50 + 12;
    v44 = *((unsigned __int8 *)this + 1248);
    v84 = &v44;
    LODWORD(v45) = *((unsigned __int8 *)this + 1249);
    v86 = &v45;
    v88 = (char *)this + 1252;
    v61 = 4LL;
    v36 = v28;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v40 = (v29 >> 3) & 1;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v90 = (char *)this + 1256;
    v92 = (char *)this + 1260;
    v91 = 4LL;
    v93 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B76FD, 0LL, 0LL, 0x15u, &pData);
  }
  v30 = (_DWORD *)v47;
  v31 = v50;
  *((_DWORD *)this + 196) = v28;
  *v30 = v28;
  *v48 = v31;
  return (unsigned int)v11;
}
