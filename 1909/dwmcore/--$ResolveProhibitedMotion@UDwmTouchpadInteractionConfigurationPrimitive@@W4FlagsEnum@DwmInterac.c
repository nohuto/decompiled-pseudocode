/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18022D338
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1802314C8 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1802280F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x18022DB40 (_anonymous_namespace_--AxisContainsInteraction.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned __int8 v8; // si
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 *v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v41[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v44[6]; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 **v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  __int64 *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  __int64 *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  __int64 *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  __int64 *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  __int64 v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  __int64 v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  __int64 v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  unsigned __int8 *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  unsigned __int8 *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  int *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  int *v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  _DWORD *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  int *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  int *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  _DWORD *v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  int *v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  int *v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  _DWORD *v96; // [rsp+278h] [rbp+170h]
  __int64 v97; // [rsp+280h] [rbp+178h]

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v23 = 0;
  v9 = 0;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= *((_DWORD *)a2 + 6) )
      break;
    v11 = *a2;
    v12 = 3 * v10;
    v13 = *((_DWORD *)a1 + 198);
    if ( v13 >= *(_DWORD *)(*a2 + 4 * v12) && v13 <= *(_DWORD *)(v11 + 4 * v12 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 4 * v12 + 8) & 0x40) != 0 )
      {
        *a3 = 0;
        v11 = *a2;
      }
      if ( *(char *)(v11 + 4 * v12 + 8) < 0 )
      {
        a3[1] = 0;
        v11 = *a2;
      }
      v44[4] = 0;
      v44[3] = 0;
      v44[2] = 0;
      v44[1] = 0;
      v43 = 0;
      v42 = 0;
      v41[1] = 0;
      v41[0] = 0;
      v39 = 0;
      v38[1] = 0;
      v38[0] = 0;
      v37 = 0;
      v44[5] = 1065353216;
      v44[0] = 1065353216;
      v40 = 1065353216;
      v36 = 1065353216;
      v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      if ( (v14 & 1) != 0 && *((float *)a3 + 1) > 0.0 )
      {
        v36 = 0;
        v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      }
      if ( (v14 & 2) != 0 && *((float *)a3 + 1) < 0.0 )
      {
        v36 = 0;
        v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      }
      if ( (v14 & 4) != 0 && *((float *)a3 + 2) > 0.0 )
      {
        v40 = 0;
        v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      }
      if ( (v14 & 8) != 0 && *((float *)a3 + 2) < 0.0 )
      {
        v40 = 0;
        v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      }
      if ( (v14 & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
      {
        v44[0] = 0;
        v14 = *(_DWORD *)(v11 + 4 * v12 + 8);
      }
      if ( (v14 & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v44[0] = 0;
      v15 = *((_DWORD *)a3 + 3);
      v29 = *(_QWORD *)(a3 + 4);
      LODWORD(v30) = v15;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v29, (const struct D2DVector3 *)&v29, (const struct D2DMatrix *)&v36);
      v16 = v30;
      *(_QWORD *)v17 = v29;
      *(_DWORD *)(v17 + 8) = v16;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v31 = a1;
        v46 = &v31;
        v32 = *a1;
        v48 = &v32;
        v33 = a1[20];
        v50 = &v33;
        v34 = a1[40];
        v52 = &v34;
        v35 = a1[60];
        v54 = &v35;
        v24 = *((_DWORD *)a1 + 197);
        v56 = &v24;
        v25 = v8;
        v60 = &v25;
        v62 = &v23;
        v20 = *a2;
        v47 = 8LL;
        v49 = 8LL;
        v51 = 8LL;
        v21 = v20 + 4 * v18;
        v53 = 8LL;
        v55 = 8LL;
        v66 = v21 + 4;
        v57 = 4LL;
        v58 = a1 + 99;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
        v64 = v21;
        v65 = 4LL;
        v67 = 4LL;
        v26 = *(_DWORD *)(v21 + 8);
        v68 = &v26;
        v27 = *a3;
        v70 = &v27;
        v28 = a3[1];
        v72 = &v28;
        v76 = a3 + 8;
        v78 = a3 + 12;
        v80 = &v36;
        v82 = &v37;
        v84 = v38;
        v86 = &v39;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v74 = v19;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v88 = &v40;
        v90 = v41;
        v92 = &v42;
        v94 = &v43;
        v96 = v44;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DC20D, 0LL, 0LL, 0x1Cu, &pData);
        v9 = v23;
      }
    }
    v23 = ++v9;
    v10 = v9;
  }
  while ( v8 );
  return v8;
}
