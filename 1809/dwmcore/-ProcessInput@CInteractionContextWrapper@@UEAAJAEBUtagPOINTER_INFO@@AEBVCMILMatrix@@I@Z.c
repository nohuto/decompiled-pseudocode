/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180089550 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1801EBC7C (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801F38F0 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F4C6C (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x1802215CC (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180221C94 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int updated; // r14d
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  bool *v14; // r8
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  const struct _TlgProvider_t *v23; // rcx
  __int64 v24; // r9
  int v25; // xmm0_4
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm0_4
  int v35; // xmm0_4
  int v36; // xmm0_4
  int v37; // xmm0_4
  int v38; // xmm0_4
  int v39; // xmm0_4
  int v40; // xmm0_4
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+6Ch] [rbp-94h] BYREF
  int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  int v59; // [rsp+78h] [rbp-88h] BYREF
  int v60; // [rsp+7Ch] [rbp-84h] BYREF
  int v61; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  CInteractionContextWrapper *v64; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v65[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int128 v68; // [rsp+F0h] [rbp-10h]
  _DWORD v69[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CInteractionContextWrapper **v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  char *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  char *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  int *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  __int64 *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  char *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  int *v91; // [rsp+1E0h] [rbp+E0h]
  __int64 v92; // [rsp+1E8h] [rbp+E8h]
  int *v93; // [rsp+1F0h] [rbp+F0h]
  __int64 v94; // [rsp+1F8h] [rbp+F8h]
  int *v95; // [rsp+200h] [rbp+100h]
  __int64 v96; // [rsp+208h] [rbp+108h]
  int *v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  int *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  int *v101; // [rsp+230h] [rbp+130h]
  __int64 v102; // [rsp+238h] [rbp+138h]
  int *v103; // [rsp+240h] [rbp+140h]
  __int64 v104; // [rsp+248h] [rbp+148h]
  int *v105; // [rsp+250h] [rbp+150h]
  __int64 v106; // [rsp+258h] [rbp+158h]
  int *v107; // [rsp+260h] [rbp+160h]
  __int64 v108; // [rsp+268h] [rbp+168h]
  int *v109; // [rsp+270h] [rbp+170h]
  __int64 v110; // [rsp+278h] [rbp+178h]
  int *v111; // [rsp+280h] [rbp+180h]
  __int64 v112; // [rsp+288h] [rbp+188h]
  int *v113; // [rsp+290h] [rbp+190h]
  __int64 v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  __int64 v116; // [rsp+2A8h] [rbp+1A8h]
  int *v117; // [rsp+2B0h] [rbp+1B0h]
  __int64 v118; // [rsp+2B8h] [rbp+1B8h]
  int *v119; // [rsp+2C0h] [rbp+1C0h]
  __int64 v120; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 *v121; // [rsp+2D0h] [rbp+1D0h]
  __int64 v122; // [rsp+2D8h] [rbp+1D8h]
  int *v123; // [rsp+2E0h] [rbp+1E0h]
  __int64 v124; // [rsp+2E8h] [rbp+1E8h]

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  *((_DWORD *)this + 81) = a4;
  updated = v8;
  *((_QWORD *)this + 31) = *((_QWORD *)a2 + 2);
  v42 = v8;
  if ( v8 >= 0 )
  {
    v11 = *((_DWORD *)this + 57);
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 56) = *(_DWORD *)a2;
    if ( *((_DWORD *)a2 + 2) != v11 )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 57) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 624),
                           *((_QWORD *)a2 + 10),
                           &v63) )
        v12 = v63;
      else
        v12 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 29) = v12;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 64, (float *)a3) )
    {
      *(_OWORD *)v13 = *(_OWORD *)a3;
      *(_OWORD *)(v13 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v13 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v13 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v13 + 64) = *((_DWORD *)a3 + 16);
      v15 = *(_DWORD *)(v13 + 4);
      v69[0] = *(_DWORD *)v13;
      v16 = *(_DWORD *)(v13 + 16);
      v69[1] = v15;
      v17 = *(_DWORD *)(v13 + 20);
      v69[2] = v16;
      v18 = *(_DWORD *)(v13 + 48);
      v69[3] = v17;
      v19 = *(_DWORD *)(v13 + 52);
      v69[4] = v18;
      v69[5] = v19;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 336),
                  (const struct D2D1::Matrix3x2F *)v69,
                  v14);
      v42 = updated;
    }
  }
  v20 = *((_OWORD *)a2 + 1);
  v65[0] = *(_OWORD *)a2;
  v65[1] = v20;
  v21 = *((_OWORD *)a2 + 3);
  v65[2] = *((_OWORD *)a2 + 2);
  v66 = v21;
  v22 = *((_OWORD *)a2 + 5);
  v67 = *((_OWORD *)a2 + 4);
  v68 = v22;
  if ( updated >= 0 )
  {
    v42 = CInteractionContextTransformHelper::TransformInput(
            (CInteractionContextWrapper *)((char *)this + 336),
            a2,
            *((_BYTE *)this + 328),
            (struct tagPOINTER_INFO *)v65);
    updated = v42;
    if ( v42 >= 0 )
    {
      if ( (HIDWORD(v65[0]) & 0x180000) != 0 )
      {
        updated = CInteractionContextWrapper::UpdateMouseWheelParameters(this);
        v42 = updated;
      }
      if ( updated >= 0 )
      {
        updated = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 3), 1LL, 1LL, v65);
        v42 = updated;
      }
    }
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v25 = *(_DWORD *)a3;
    v71 = &v64;
    v73 = (char *)a2 + 4;
    v43 = *(_DWORD *)a2;
    v75 = &v43;
    v77 = (char *)a2 + 8;
    v79 = (char *)a2 + 72;
    v44 = *((_DWORD *)a2 + 16);
    v81 = &v44;
    v45 = *((_DWORD *)a2 + 14);
    v83 = &v45;
    v46 = *((_DWORD *)a2 + 15);
    v85 = &v46;
    v47 = *((_QWORD *)&v66 + 1);
    v87 = &v47;
    v89 = (char *)&v47 + 4;
    v48 = v25;
    v26 = *((_DWORD *)a3 + 1);
    v91 = &v48;
    v49 = v26;
    v27 = *((_DWORD *)a3 + 2);
    v93 = &v49;
    v50 = v27;
    v28 = *((_DWORD *)a3 + 3);
    v95 = &v50;
    v51 = v28;
    v29 = *((_DWORD *)a3 + 4);
    v97 = &v51;
    v52 = v29;
    v30 = *((_DWORD *)a3 + 5);
    v99 = &v52;
    v53 = v30;
    v31 = *((_DWORD *)a3 + 6);
    v101 = &v53;
    v54 = v31;
    v32 = *((_DWORD *)a3 + 7);
    v103 = &v54;
    v55 = v32;
    v64 = this;
    v72 = 8LL;
    v74 = v24;
    v76 = v24;
    v78 = v24;
    v80 = v24;
    v82 = v24;
    v84 = v24;
    v86 = v24;
    v88 = v24;
    v90 = v24;
    v92 = v24;
    v94 = v24;
    v96 = v24;
    v98 = v24;
    v100 = v24;
    v102 = v24;
    v104 = v24;
    v33 = *((_DWORD *)a3 + 8);
    v105 = &v55;
    v107 = &v56;
    v109 = &v57;
    v56 = v33;
    v34 = *((_DWORD *)a3 + 9);
    v111 = &v58;
    v57 = v34;
    v35 = *((_DWORD *)a3 + 10);
    v113 = &v59;
    v58 = v35;
    v36 = *((_DWORD *)a3 + 11);
    v115 = &v60;
    v59 = v36;
    v37 = *((_DWORD *)a3 + 12);
    v117 = &v61;
    v60 = v37;
    v38 = *((_DWORD *)a3 + 13);
    v119 = &v62;
    v61 = v38;
    v39 = *((_DWORD *)a3 + 14);
    v121 = &v63;
    v62 = v39;
    v40 = *((_DWORD *)a3 + 15);
    v123 = &v42;
    LODWORD(v63) = v40;
    v106 = v24;
    v108 = v24;
    v110 = v24;
    v112 = v24;
    v114 = v24;
    v116 = v24;
    v118 = v24;
    v120 = v24;
    v122 = v24;
    v124 = v24;
    TlgWrite(v23, &unk_1802B81D0, 0LL, 0LL, 0x1Du, &pData);
    return (unsigned int)v42;
  }
  return (unsigned int)updated;
}
