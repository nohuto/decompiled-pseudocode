/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1802310F0
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18022E084 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1802280F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1802303CC (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1802320B8 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  unsigned __int8 v9; // bl
  unsigned __int8 RailsEnabled; // r13
  char v11; // al
  unsigned __int8 v12; // r12
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // r10
  char v20; // [rsp+38h] [rbp-D0h]
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  enum InteractionState *v29; // [rsp+60h] [rbp-A8h] BYREF
  struct D2DMatrix *v30; // [rsp+68h] [rbp-A0h] BYREF
  CInteractionProcessor *v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  CInteractionProcessor **v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  __int64 *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  enum InteractionState **v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  struct D2DMatrix **v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  char *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  char *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  char *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  __int64 *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  char *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]

  v30 = a2;
  v29 = a6;
  v9 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v9 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v9 &= -(*(_BYTE *)a5 != 0);
  if ( *((_BYTE *)a4 + 2) && *((float *)a5 + 3) == 0.0 )
    v9 &= -((*((_BYTE *)this + 808) & 4) != 0);
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v11 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  v20 = v11;
  v12 = v11;
  if ( RailsEnabled || v11 )
  {
    v13 = *((_DWORD *)a5 + 3);
    v37 = *(_QWORD *)((char *)a5 + 4);
    v38 = v13;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v37, (const struct D2DVector3 *)&v37, a3);
    v15 = v14;
    if ( !v9 )
    {
LABEL_15:
      *(_DWORD *)v29 = *((_DWORD *)this + 196);
      *(_WORD *)a5 = 0;
      v36 = 0;
      *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a5 + 3) = 0;
      goto LABEL_16;
    }
    do
    {
      if ( v15 >= *((_DWORD *)a4 + 8) )
        break;
      v16 = *((_QWORD *)a4 + 1);
      v17 = *(_QWORD *)(v16 + 16LL * v15);
      LODWORD(v16) = *(_DWORD *)(v16 + 16LL * v15 + 8);
      v35 = v17;
      v36 = v16;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v35, (const struct D2DVector3 *)&v35, v30);
      ++v15;
      v9 = anonymous_namespace_::VectorInsideAngleThreshold(&v37, &v35);
    }
    while ( v9 );
    v12 = v20;
  }
  if ( !v9 )
    goto LABEL_15;
LABEL_16:
  if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v31 = this;
    v40 = &v31;
    v32 = *(_QWORD *)this;
    v42 = &v32;
    v33 = *((_QWORD *)this + 20);
    v44 = &v33;
    v34 = *((_QWORD *)this + 40);
    v46 = &v34;
    v35 = *((_QWORD *)this + 60);
    v48 = &v35;
    v21 = *((_DWORD *)this + 197);
    v50 = &v21;
    v22 = v9;
    v52 = &v22;
    v23 = RailsEnabled;
    v54 = &v23;
    v24 = v12;
    v56 = &v24;
    v25 = *(unsigned __int8 *)a4;
    v58 = &v25;
    v26 = *((unsigned __int8 *)a4 + 1);
    v60 = &v26;
    v27 = *((unsigned __int8 *)a4 + 2);
    v62 = &v27;
    LODWORD(v28) = *((_DWORD *)a4 + 8);
    v64 = &v28;
    LODWORD(v29) = *(unsigned __int8 *)a5;
    v66 = &v29;
    LODWORD(v30) = *((unsigned __int8 *)a5 + 1);
    v68 = &v30;
    v70 = (char *)a5 + 4;
    v72 = (char *)a5 + 8;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v51 = v18;
    v53 = v18;
    v55 = v18;
    v57 = v18;
    v59 = v18;
    v61 = v18;
    v63 = v18;
    v65 = v18;
    v67 = v18;
    v69 = v18;
    v71 = v18;
    v73 = v18;
    v74 = (char *)a5 + 12;
    v76 = &v37;
    v78 = (char *)&v37 + 4;
    v80 = &v38;
    v75 = v18;
    v77 = v18;
    v79 = v18;
    v81 = v18;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DC745, 0LL, 0LL, 0x17u, &pData);
  }
  return v9;
}
