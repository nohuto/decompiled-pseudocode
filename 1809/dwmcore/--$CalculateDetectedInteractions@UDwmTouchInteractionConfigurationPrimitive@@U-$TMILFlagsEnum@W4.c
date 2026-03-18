/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801EDC24
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801EEEB8 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x1801F2F24 (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1801F30EC (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        _DWORD *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // ebx
  _DWORD *v8; // r12
  char *v10; // r13
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  char v16; // dl
  char v17; // si
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  bool v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r8d
  bool v38; // r13
  __int64 v39; // r12
  __int64 v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // edx
  int v50; // eax
  __int64 v51; // rcx
  const struct _TlgProvider_t *v52; // rcx
  __int64 v53; // r9
  bool v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+31h] [rbp-CFh]
  char v57; // [rsp+32h] [rbp-CEh]
  int v58; // [rsp+34h] [rbp-CCh]
  unsigned int v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v60; // [rsp+44h] [rbp-BCh]
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  char *v65; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v66; // [rsp+70h] [rbp-90h] BYREF
  __int128 v67; // [rsp+78h] [rbp-88h] BYREF
  __int128 v68; // [rsp+88h] [rbp-78h] BYREF
  int v69; // [rsp+98h] [rbp-68h] BYREF
  char v70; // [rsp+9Ch] [rbp-64h]
  _BYTE v71[20]; // [rsp+D8h] [rbp-28h] BYREF
  int v72; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  _DWORD **v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  char **v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  __int64 *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  int *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  unsigned int *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  _DWORD *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  __int64 v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]

  v7 = 0;
  v8 = a5;
  v64 = a6;
  v10 = a2;
  *a5 = 0;
  v65 = a2;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v62 = a3;
  v66 = a5;
  v58 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v71);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v69);
  v14 = a1[196];
  v63 = 3LL;
  if ( (unsigned int)(v14 - 2) <= 2 || (v71[4] & 1) != 0 || (v70 & 1) != 0 )
  {
    a1[196] = 3;
    v14 = 3;
  }
  if ( ((unsigned int)(v14 - 2) > 2 || v69 == 2) && (v10[16] & 0x40) != 0 )
  {
    *(_BYTE *)a4 = 1;
    v14 = a1[196];
  }
  if ( ((unsigned int)(v14 - 2) > 2 || v69 == 4) && v10[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = *((_DWORD *)v10 + 4);
  v16 = 0;
  v17 = 0;
  v55 = 0;
  v57 = 0;
  v56 = 0;
  if ( (v15 & 3) != 0 )
  {
    DWORD2(v67) = 0;
    *(_QWORD *)&v67 = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v68);
    v18 = (_QWORD *)(a4 + 8);
    HIDWORD(v68) = a1[336];
    v19 = *(unsigned int *)(a4 + 32);
    v20 = v19 + 1;
    v7 = (int)v19 + 1 < (unsigned int)v19 ? 0x80070216 : 0;
    v58 = v7;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, v7, 0xB5u);
      v58 = v7;
    }
    else if ( v20 > *(_DWORD *)(a4 + 28) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18, 16, 1, &v68);
      v58 = v21;
      v7 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v18 + 16 * v19) = v68;
      *(_DWORD *)(a4 + 32) = v20;
    }
    if ( v7 < 0 )
      goto LABEL_87;
    ++*a5;
    v17 = 1;
    v15 = *((_DWORD *)v10 + 4);
    v16 = 0;
    v57 = 1;
  }
  if ( (v15 & 4) != 0 || (v15 & 8) != 0 )
  {
    LODWORD(v67) = 0;
    *(_QWORD *)((char *)&v67 + 4) = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v68);
    v23 = (_QWORD *)(a4 + 8);
    HIDWORD(v68) = a1[336];
    v24 = *(unsigned int *)(a4 + 32);
    v25 = v24 + 1;
    v7 = (int)v24 + 1 < (unsigned int)v24 ? 0x80070216 : 0;
    v58 = v7;
    if ( (int)v24 + 1 < (unsigned int)v24 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v7, 0xB5u);
      v58 = v7;
    }
    else if ( v25 > *(_DWORD *)(a4 + 28) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23, 16, 1, &v68);
      v58 = v26;
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v23 + 16 * v24) = v68;
      *(_DWORD *)(a4 + 32) = v25;
    }
    if ( v7 < 0 )
      goto LABEL_87;
    ++*a5;
    v16 = 1;
    v15 = *((_DWORD *)v10 + 4);
    v55 = 1;
  }
  if ( (v15 & 0x10) == 0 && (v15 & 0x20) == 0 )
  {
    v34 = 0;
    goto LABEL_43;
  }
  v28 = a1[336];
  v29 = (_QWORD *)(a4 + 8);
  *(_QWORD *)&v67 = 0LL;
  HIDWORD(v67) = v28;
  v30 = *(unsigned int *)(a4 + 32);
  DWORD2(v67) = 1065353216;
  v31 = v30 + 1;
  v7 = (int)v30 + 1 < (unsigned int)v30 ? 0x80070216 : 0;
  v58 = v7;
  if ( (int)v30 + 1 < (unsigned int)v30 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0, v7, 0xB5u);
    v58 = v7;
  }
  else if ( v31 > *(_DWORD *)(a4 + 28) )
  {
    v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v29, 16, 1, &v67);
    v58 = v32;
    v7 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*v29 + 16 * v30) = v67;
    *(_DWORD *)(a4 + 32) = v31;
  }
  if ( v7 < 0 )
  {
LABEL_87:
    v46 = v62;
    goto LABEL_88;
  }
  ++*a5;
  v34 = 1;
  v16 = v55;
  v56 = 1;
LABEL_43:
  if ( (int)*a5 > 0 )
  {
    v35 = *(_DWORD *)(a4 + 32) - *a5;
    v61 = v35;
    v36 = (unsigned int)(v35 + 1);
    if ( !v17 )
      v36 = (unsigned int)v35;
    v59 = v36;
    v37 = v36 + 1;
    if ( !v16 )
      v37 = v36;
    a1[203] = 0;
    a1[204] = 0;
    a1[205] = 0;
    v60 = v37;
    if ( v35 > 3LL )
    {
      v38 = v57;
      v39 = 3LL;
      v40 = v61;
      v41 = 3;
      v42 = 48LL;
      while ( 1 )
      {
        if ( v38 )
        {
          v43 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v43 + 16LL * (unsigned int)v40,
                                  v43 + 16LL * v41) )
            a1[203] |= *(_DWORD *)(v43 + v42 + 12);
          v38 = a1[203] != 7;
          if ( !v55 )
            goto LABEL_61;
          v36 = v59;
          v41 = v63;
        }
        else if ( !v16 )
        {
          if ( !v34 )
            goto LABEL_67;
          goto LABEL_62;
        }
        v44 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v44 + 16 * v36, v44 + 16LL * v41) )
          a1[204] |= *(_DWORD *)(v44 + v42 + 12);
        v55 = a1[204] != 7;
LABEL_61:
        v34 = v56;
        v37 = v60;
LABEL_62:
        if ( v34 )
        {
          v45 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v45 + 16LL * v37,
                                  v45 + 16LL * (unsigned int)v63) )
            a1[205] |= *(_DWORD *)(v45 + v42 + 12);
          v34 = a1[205] != 7;
          v56 = v34;
        }
        ++v39;
        v36 = v59;
        v41 = v63 + 1;
        v16 = v55;
        v42 += 16LL;
        v37 = v60;
        v63 = (unsigned int)(v63 + 1);
        if ( v39 >= v40 )
        {
LABEL_67:
          v7 = v58;
          v10 = v65;
          v8 = v66;
          break;
        }
      }
    }
  }
  v46 = v62;
  if ( !*(_BYTE *)a4 && !*(_BYTE *)(a4 + 1) && v62 != *(_QWORD *)v10 )
  {
    if ( v72 == 1 )
    {
      if ( (v10[16] & 1) == 0 && (v10[16] & 2) == 0 )
        goto LABEL_88;
      *(_QWORD *)&v67 = 1065353216LL;
    }
    else
    {
      if ( v72 != 2 || (v10[16] & 4) == 0 && (v10[16] & 8) == 0 )
        goto LABEL_88;
      *(_QWORD *)&v67 = 0x3F80000000000000LL;
    }
    DWORD2(v67) = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v68);
    v47 = v64 + 8;
    HIDWORD(v68) = a1[336];
    v48 = *(unsigned int *)(v64 + 32);
    v49 = v48 + 1;
    v7 = (int)v48 + 1 < (unsigned int)v48 ? 0x80070216 : 0;
    if ( (int)v48 + 1 < (unsigned int)v48 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v7, 0xB5u);
    }
    else if ( v49 > *(_DWORD *)(v64 + 28) )
    {
      v50 = DynArrayImpl<0>::AddMultipleAndSet(v47, 16, 1, &v68);
      v7 = v50;
      if ( v50 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v47 + 16 * v48) = v68;
      *(_DWORD *)(v47 + 24) = v49;
    }
    if ( v7 >= 0 )
      ++*a7;
  }
LABEL_88:
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v66 = a1;
    v74 = &v66;
    v65 = *(char **)v10;
    v76 = &v65;
    v78 = &v64;
    v61 = a1[197];
    v80 = &v61;
    v59 = a1[196];
    v82 = &v59;
    v75 = 8LL;
    v77 = 8LL;
    v64 = v46;
    v79 = 8LL;
    v81 = 4LL;
    v83 = 4LL;
    v84 = v8;
    v85 = 4LL;
    v86 = v53;
    v87 = 4LL;
    TlgWrite(v52, &unk_1802B7448, 0LL, 0LL, 9u, &pData);
  }
  return (unsigned int)v7;
}
