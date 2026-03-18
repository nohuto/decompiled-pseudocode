/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18022E72C
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1802304A4 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180228D88 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180229808 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x180232D44 (_anonymous_namespace_--ReverseAndLeftShift.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4,
        struct D2DMatrix *a5)
{
  __int64 v5; // r15
  _OWORD *v10; // rax
  const struct D2DMatrix *v11; // rax
  const struct _TlgProvider_t *v12; // rcx
  __int64 result; // rax
  float v14; // ecx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  float v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v21; // [rsp+64h] [rbp-9Ch] BYREF
  char v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+70h] [rbp-90h] BYREF
  char v24; // [rsp+74h] [rbp-8Ch] BYREF
  char v25; // [rsp+78h] [rbp-88h] BYREF
  char v26; // [rsp+80h] [rbp-80h] BYREF
  char v27; // [rsp+84h] [rbp-7Ch] BYREF
  char v28; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  float *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  _BYTE *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  char *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  char *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  char *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  char *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  char *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  __int64 v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  __int64 *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]
  __int64 v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  __int64 v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  __int64 *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  __int64 v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  __int64 v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+218h] [rbp+118h]
  __int64 *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  __int64 v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]

  v5 = (__int64)a3 + 20;
  v10 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v20, (char *)a3 + 20);
  *(_OWORD *)a5 = *v10;
  *((_OWORD *)a5 + 1) = v10[1];
  *((_OWORD *)a5 + 2) = v10[2];
  *((_OWORD *)a5 + 3) = v10[3];
  v11 = D2DMatrixTranspose((struct D2DMatrix *)v20, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v18, a4, v11);
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v16 = a1;
    v30 = &v16;
    v17 = *a3;
    v32 = &v17;
    v15 = *(_DWORD *)(a1 + 788);
    v34 = &v15;
    v36 = &v18;
    v38 = (char *)&v18 + 4;
    v40 = &v19;
    v42 = v20;
    v44 = &v21;
    v46 = &v22;
    v48 = &v23;
    v50 = &v24;
    v52 = &v25;
    v54 = &v26;
    v56 = &v27;
    v58 = &v28;
    v62 = a3 + 3;
    v64 = (__int64)a3 + 28;
    v66 = (__int64)a3 + 36;
    v68 = a3 + 5;
    v70 = (__int64)a3 + 44;
    v72 = (__int64)a3 + 52;
    v74 = a3 + 7;
    v76 = (__int64)a3 + 60;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v60 = v5;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    TlgWrite(v12, &unk_1802DE2F1, 0LL, 0LL, 0x1Au, &pData);
  }
  if ( *(float *)&v18 > 0.0 && (a3[2] & 1) == 0 || *(float *)&v18 < 0.0 && (a3[2] & 2) == 0 )
    LODWORD(v18) = 0;
  if ( *((float *)&v18 + 1) > 0.0 && (a3[2] & 4) == 0 || *((float *)&v18 + 1) < 0.0 && (a3[2] & 8) == 0 )
    HIDWORD(v18) = 0;
  if ( v19 < 0.0 && (a3[2] & 0x10) == 0 || v19 > 0.0 && (a3[2] & 0x20) == 0 )
    v19 = 0.0;
  result = a2;
  v14 = v19;
  *(_QWORD *)(a2 + 4) = v18;
  *(float *)(a2 + 12) = v14;
  *(_WORD *)a2 = 0;
  return result;
}
