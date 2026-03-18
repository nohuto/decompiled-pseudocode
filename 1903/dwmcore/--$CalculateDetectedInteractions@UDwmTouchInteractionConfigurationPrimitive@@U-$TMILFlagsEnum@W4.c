/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18022DEE8
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18022F2B4 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UAxisWithType@@$0A@@@QEAAJPEFBUAxisWithType@@I@Z @ 0x18022F180 (-AddMultipleAndSet@-$DynArray@UAxisWithType@@$0A@@@QEAAJPEFBUAxisWithType@@I@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x1802335E4 (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1802337C8 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // edi
  char *v9; // rsi
  __int64 v12; // rcx
  int v13; // ecx
  unsigned int v14; // r12d
  int v15; // eax
  char v16; // r15
  bool v17; // r13
  int *v18; // rax
  int v19; // eax
  bool v20; // cl
  int v21; // edx
  int v22; // eax
  unsigned int v23; // r8d
  bool v24; // si
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r15
  __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // r14
  const struct _TlgProvider_t *v33; // rcx
  __int64 v34; // r9
  char v36; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+31h] [rbp-CFh]
  int v38; // [rsp+40h] [rbp-C0h]
  unsigned int v39; // [rsp+44h] [rbp-BCh]
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+60h] [rbp-A0h]
  int *v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+8Ch] [rbp-74h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+9Ch] [rbp-64h]
  _BYTE v53[16]; // [rsp+A0h] [rbp-60h] BYREF
  float v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B4h] [rbp-4Ch]
  int v56; // [rsp+E0h] [rbp-20h] BYREF
  char v57; // [rsp+E4h] [rbp-1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  int v61; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v65; // [rsp+160h] [rbp+60h]
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v68; // [rsp+170h] [rbp+70h]
  int v69; // [rsp+178h] [rbp+78h]
  int v70; // [rsp+17Ch] [rbp+7Ch]
  int *v71; // [rsp+180h] [rbp+80h]
  int v72; // [rsp+188h] [rbp+88h]
  int v73; // [rsp+18Ch] [rbp+8Ch]
  int *v74; // [rsp+190h] [rbp+90h]
  int v75; // [rsp+198h] [rbp+98h]
  int v76; // [rsp+19Ch] [rbp+9Ch]
  __int64 v77; // [rsp+1A0h] [rbp+A0h]
  int v78; // [rsp+1A8h] [rbp+A8h]
  int v79; // [rsp+1ACh] [rbp+ACh]

  v8 = 0;
  v51 = a6;
  v9 = a2;
  *a5 = 0;
  v45 = a5;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v43 = (__int64)a2;
  v42 = a3;
  v38 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v53);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v56);
  v13 = *(_DWORD *)(a1 + 784);
  v14 = 3;
  if ( (unsigned int)(v13 - 2) <= 2 || (v53[4] & 1) != 0 || (v57 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 784) = 3;
    v13 = 3;
  }
  if ( ((unsigned int)(v13 - 2) > 2 || v56 == 2) && (v9[16] & 0x40) != 0 )
  {
    *(_BYTE *)a4 = 1;
    v13 = *(_DWORD *)(a1 + 784);
  }
  if ( ((unsigned int)(v13 - 2) > 2 || v56 == 4) && v9[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = *((_DWORD *)v9 + 4);
  v16 = 0;
  v17 = 0;
  v37 = 0;
  v36 = 0;
  if ( (v15 & 3) != 0 )
  {
    v47 = 0;
    v46 = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v49);
    v50 = *(_DWORD *)(a1 + 1344);
    v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v49);
    v8 = v38;
    if ( v38 < 0 )
      goto LABEL_70;
    v17 = 1;
    ++*v45;
    v15 = *((_DWORD *)v9 + 4);
  }
  if ( (v15 & 4) != 0 || (v15 & 8) != 0 )
  {
    v46 = 0x3F80000000000000LL;
    v47 = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v49);
    v50 = *(_DWORD *)(a1 + 1344);
    v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v49);
    v8 = v38;
    if ( v38 < 0 )
      goto LABEL_70;
    v18 = v45;
    v16 = 1;
    v37 = 1;
    ++*v45;
  }
  else
  {
    v18 = v45;
  }
  if ( v8 < 0 )
    goto LABEL_70;
  if ( (v9[16] & 0x10) == 0 && (v9[16] & 0x20) == 0 )
  {
    v20 = 0;
    goto LABEL_27;
  }
  v19 = *(_DWORD *)(a1 + 1344);
  v46 = 0LL;
  v48 = v19;
  v47 = 1065353216;
  v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v46);
  v8 = v38;
  if ( v38 < 0 )
  {
LABEL_70:
    v31 = v42;
    goto LABEL_71;
  }
  v18 = v45;
  v20 = 1;
  v36 = 1;
  ++*v45;
LABEL_27:
  if ( *v18 > 0 )
  {
    v21 = *(_DWORD *)(a4 + 32) - *v18;
    v40 = v21;
    v22 = v21 + 1;
    if ( !v17 )
      v22 = v21;
    v41 = v22;
    v23 = v22 + 1;
    if ( !v16 )
      v23 = v22;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v39 = v23;
    if ( v21 > 3LL )
    {
      v24 = v37;
      v25 = 3LL;
      v26 = v40;
      v27 = 48LL;
      v46 = 3LL;
      v49 = 48LL;
      while ( 1 )
      {
        if ( v17 )
        {
          v28 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v28 + 16LL * (unsigned int)v26,
                                  v28 + 16LL * v14) )
            *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v49 + v28 + 12);
          v17 = *(_DWORD *)(a1 + 812) != 7;
          if ( !v24 )
            goto LABEL_44;
        }
        else if ( !v24 )
        {
          if ( !v20 )
            goto LABEL_50;
          goto LABEL_45;
        }
        v29 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v29 + 16LL * v41, v29 + 16LL * v14) )
          *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v49 + v29 + 12);
        v24 = *(_DWORD *)(a1 + 816) != 7;
LABEL_44:
        v23 = v39;
        v25 = v46;
        v20 = v36;
        v27 = v49;
LABEL_45:
        if ( v20 )
        {
          v30 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v30 + 16LL * v23, v30 + 16LL * v14) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v49 + v30 + 12);
          v27 = v49;
          v25 = v46;
          v20 = *(_DWORD *)(a1 + 820) != 7;
          v36 = v20;
        }
        v23 = v39;
        ++v25;
        v27 += 16LL;
        v46 = v25;
        ++v14;
        v49 = v27;
        if ( v25 >= v26 )
        {
LABEL_50:
          v8 = v38;
          v9 = (char *)v43;
          break;
        }
      }
    }
  }
  v31 = v42;
  if ( !*(_BYTE *)a4 && !*(_BYTE *)(a4 + 1) && v42 != *(_QWORD *)v9 )
  {
    if ( (*(_BYTE *)(a1 + 808) & 4) == 0 && v54 == 1.0 )
    {
      v32 = v51;
    }
    else
    {
      v32 = v51;
      if ( (v9[16] & 0x30) != 0 )
        *(_BYTE *)(v51 + 2) = 1;
    }
    if ( !*(_BYTE *)(v32 + 2) )
    {
      if ( v55 == 1 )
      {
        if ( (v9[16] & 1) == 0 && (v9[16] & 2) == 0 )
          goto LABEL_71;
        v43 = 1065353216LL;
      }
      else
      {
        if ( v55 != 2 || (v9[16] & 4) == 0 && (v9[16] & 8) == 0 )
          goto LABEL_71;
        v43 = 0x3F80000000000000LL;
      }
      v44 = 0;
      anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v51);
      v52 = *(_DWORD *)(a1 + 1344);
      v8 = DynArray<AxisWithType,0>::AddMultipleAndSet(v32 + 8, &v51);
      if ( v8 >= 0 )
        ++*a7;
    }
  }
LABEL_71:
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v70 = 0;
    v73 = 0;
    v76 = 0;
    v79 = 0;
    v59 = &v43;
    v51 = *(_QWORD *)v9;
    v62 = &v51;
    v65 = &v46;
    v41 = *(_DWORD *)(a1 + 788);
    v68 = &v41;
    v40 = *(_DWORD *)(a1 + 784);
    v71 = &v40;
    v74 = v45;
    v43 = a1;
    v60 = 8;
    v63 = 8;
    v46 = v31;
    v66 = 8;
    v69 = 4;
    v72 = 4;
    v75 = 4;
    v77 = v34;
    v78 = 4;
    TlgWrite(v33, &unk_1802DE223, 0LL, 0LL, 9u, &pData);
  }
  return (unsigned int)v8;
}
