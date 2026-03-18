/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F242C
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801EF390 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801F16D4 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1801F30EC (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021A1EC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  bool v6; // zf
  unsigned __int8 v10; // di
  char RailsEnabled; // bl
  char v12; // al
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // r10
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  struct D2DMatrix *v23; // [rsp+48h] [rbp-C0h] BYREF
  CInteractionProcessor *v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  CInteractionProcessor **v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  int *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  struct D2DMatrix **v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  char *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  char *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  char *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  __int64 *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  char *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  int *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]

  v6 = *((_BYTE *)a4 + 1) == 0;
  v23 = a2;
  v10 = 1;
  if ( !v6 )
    v10 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v10 &= -(*(_BYTE *)a5 != 0);
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v12 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( RailsEnabled || v12 )
  {
    v13 = *((_DWORD *)a5 + 3);
    v30 = *(_QWORD *)((char *)a5 + 4);
    v31 = v13;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v30, (const struct D2DVector3 *)&v30, a3);
    v15 = v14;
    if ( !v10 )
    {
LABEL_11:
      *(_DWORD *)a6 = *((_DWORD *)this + 196);
      *(_WORD *)a5 = 0;
      LODWORD(v29) = 0;
      *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a5 + 3) = 0;
      goto LABEL_12;
    }
    do
    {
      if ( v15 >= *((_DWORD *)a4 + 8) )
        break;
      v16 = *((_QWORD *)a4 + 1);
      v17 = *(_QWORD *)(v16 + 16LL * v15);
      LODWORD(v16) = *(_DWORD *)(v16 + 16LL * v15 + 8);
      v28 = v17;
      LODWORD(v29) = v16;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v28, (const struct D2DVector3 *)&v28, v23);
      ++v15;
      v10 = anonymous_namespace_::VectorInsideAngleThreshold(&v30, &v28);
    }
    while ( v10 );
  }
  if ( !v10 )
    goto LABEL_11;
LABEL_12:
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v24 = this;
    v33 = &v24;
    v25 = *(_QWORD *)this;
    v35 = &v25;
    v26 = *((_QWORD *)this + 20);
    v37 = &v26;
    v27 = *((_QWORD *)this + 40);
    v39 = &v27;
    v28 = *((_QWORD *)this + 60);
    v41 = &v28;
    v20 = *((_DWORD *)this + 197);
    v43 = &v20;
    v21 = v10;
    v45 = &v21;
    LODWORD(v22) = *(unsigned __int8 *)a5;
    v47 = &v22;
    LODWORD(v23) = *((unsigned __int8 *)a5 + 1);
    v49 = &v23;
    v51 = (char *)a5 + 4;
    v53 = (char *)a5 + 8;
    v55 = (char *)a5 + 12;
    v57 = &v30;
    v59 = (char *)&v30 + 4;
    v61 = &v31;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = v18;
    v46 = v18;
    v48 = v18;
    v50 = v18;
    v52 = v18;
    v54 = v18;
    v56 = v18;
    v58 = v18;
    v60 = v18;
    v62 = v18;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B7A45, 0LL, 0LL, 0x11u, &pData);
  }
  return v10;
}
