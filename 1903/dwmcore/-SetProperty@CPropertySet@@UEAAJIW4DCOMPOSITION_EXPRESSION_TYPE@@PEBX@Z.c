/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770
 * Callers:
 *     <none>
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001E13C (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800BBB20 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F45D8 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801F4660 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1801F46E8 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801F477C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801F4804 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 */

__int64 __fastcall CPropertySet::SetProperty(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v11; // r12d
  char *v12; // rsi
  struct _RTL_GENERIC_TABLE *v13; // rcx
  __int64 v14; // r13
  char *v15; // rdx
  unsigned int i; // r8d
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // esi
  __int64 v22; // r9
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD, unsigned __int8 *); // rcx
  unsigned int v24; // r13d
  char *v25; // rsi
  struct _RTL_GENERIC_TABLE *v26; // rcx
  __int64 v27; // r12
  char *v28; // rdx
  unsigned int j; // r8d
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int updated; // eax
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  int v50; // edx
  int v51; // r9d
  int v52; // edx
  int v53; // r9d
  int v54; // edx
  int v55; // r9d
  int v56; // edx
  int v57; // r9d
  int v58; // edx
  int v59; // r9d
  int v60; // edx
  int v61; // r9d
  int v62; // edx
  int v63; // r9d
  int v64; // edx
  int v65; // r9d
  int v66; // edx
  int v67; // r9d
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  int v73; // [rsp+30h] [rbp-D0h] BYREF
  int v74; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v75; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v76; // [rsp+3Ch] [rbp-C4h] BYREF
  int v77; // [rsp+40h] [rbp-C0h] BYREF
  int v78; // [rsp+44h] [rbp-BCh] BYREF
  int v79; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v80; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v81; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+54h] [rbp-ACh] BYREF
  int v83; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v84; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v85; // [rsp+60h] [rbp-A0h] BYREF
  int v86; // [rsp+64h] [rbp-9Ch] BYREF
  int v87; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v88; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v89; // [rsp+70h] [rbp-90h] BYREF
  int v90; // [rsp+74h] [rbp-8Ch] BYREF
  int v91; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v92; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v93; // [rsp+80h] [rbp-80h] BYREF
  int v94; // [rsp+84h] [rbp-7Ch] BYREF
  int v95; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v96; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v97; // [rsp+90h] [rbp-70h] BYREF
  int v98; // [rsp+94h] [rbp-6Ch] BYREF
  int v99; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v100; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v101; // [rsp+A0h] [rbp-60h] BYREF
  int v102; // [rsp+A4h] [rbp-5Ch] BYREF
  int v103; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v104; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v105; // [rsp+B0h] [rbp-50h] BYREF
  int v106; // [rsp+B4h] [rbp-4Ch] BYREF
  int v107; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v108; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v109; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int Buffer; // [rsp+C8h] [rbp-38h] BYREF
  void *lpMem[2]; // [rsp+D0h] [rbp-30h]
  __int64 v112; // [rsp+E0h] [rbp-20h]
  int v113; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+F0h] [rbp-10h] BYREF
  int *v115; // [rsp+110h] [rbp+10h]
  __int64 v116; // [rsp+118h] [rbp+18h]
  int *v117; // [rsp+120h] [rbp+20h]
  __int64 v118; // [rsp+128h] [rbp+28h]
  int *v119; // [rsp+130h] [rbp+30h]
  __int64 v120; // [rsp+138h] [rbp+38h]
  unsigned int *v121; // [rsp+140h] [rbp+40h]
  __int64 v122; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v123; // [rsp+150h] [rbp+50h]
  __int64 v124; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v125; // [rsp+160h] [rbp+60h]
  __int64 v126; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v127; // [rsp+170h] [rbp+70h]
  __int64 v128; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v129; // [rsp+180h] [rbp+80h]
  __int64 v130; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v131; // [rsp+190h] [rbp+90h]
  __int64 v132; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v133; // [rsp+1A0h] [rbp+A0h]
  __int64 v134; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *v135; // [rsp+1B0h] [rbp+B0h]
  __int64 v136; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v137; // [rsp+1C0h] [rbp+C0h]
  __int64 v138; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 *v139; // [rsp+1D0h] [rbp+D0h]
  __int64 v140; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 *v141; // [rsp+1E0h] [rbp+E0h]
  __int64 v142; // [rsp+1E8h] [rbp+E8h]
  unsigned __int8 *v143; // [rsp+1F0h] [rbp+F0h]
  __int64 v144; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 *v145; // [rsp+200h] [rbp+100h]
  __int64 v146; // [rsp+208h] [rbp+108h]
  unsigned __int8 *v147; // [rsp+210h] [rbp+110h]
  __int64 v148; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v149; // [rsp+220h] [rbp+120h]
  __int64 v150; // [rsp+228h] [rbp+128h]
  unsigned __int8 *v151; // [rsp+230h] [rbp+130h]
  __int64 v152; // [rsp+238h] [rbp+138h]
  unsigned __int8 *v153; // [rsp+240h] [rbp+140h]
  __int64 v154; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v155; // [rsp+250h] [rbp+150h] BYREF
  int *v156; // [rsp+270h] [rbp+170h]
  __int64 v157; // [rsp+278h] [rbp+178h]
  int *v158; // [rsp+280h] [rbp+180h]
  __int64 v159; // [rsp+288h] [rbp+188h]
  int *v160; // [rsp+290h] [rbp+190h]
  __int64 v161; // [rsp+298h] [rbp+198h]
  unsigned int *v162; // [rsp+2A0h] [rbp+1A0h]
  __int64 v163; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int8 *v164; // [rsp+2B0h] [rbp+1B0h]
  __int64 v165; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 *v166; // [rsp+2C0h] [rbp+1C0h]
  __int64 v167; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int8 *v168; // [rsp+2D0h] [rbp+1D0h]
  __int64 v169; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int8 *v170; // [rsp+2E0h] [rbp+1E0h]
  __int64 v171; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int8 *v172; // [rsp+2F0h] [rbp+1F0h]
  __int64 v173; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int8 *v174; // [rsp+300h] [rbp+200h]
  __int64 v175; // [rsp+308h] [rbp+208h]
  EVENT_DATA_DESCRIPTOR v176; // [rsp+310h] [rbp+210h] BYREF
  int *v177; // [rsp+330h] [rbp+230h]
  __int64 v178; // [rsp+338h] [rbp+238h]
  int *v179; // [rsp+340h] [rbp+240h]
  __int64 v180; // [rsp+348h] [rbp+248h]
  int *v181; // [rsp+350h] [rbp+250h]
  __int64 v182; // [rsp+358h] [rbp+258h]
  unsigned int *v183; // [rsp+360h] [rbp+260h]
  __int64 v184; // [rsp+368h] [rbp+268h]
  unsigned __int8 *v185; // [rsp+370h] [rbp+270h]
  __int64 v186; // [rsp+378h] [rbp+278h]
  unsigned __int8 *v187; // [rsp+380h] [rbp+280h]
  __int64 v188; // [rsp+388h] [rbp+288h]
  unsigned __int8 *v189; // [rsp+390h] [rbp+290h]
  __int64 v190; // [rsp+398h] [rbp+298h]
  unsigned __int8 *v191; // [rsp+3A0h] [rbp+2A0h]
  __int64 v192; // [rsp+3A8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR v193; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v194; // [rsp+3D0h] [rbp+2D0h]
  __int64 v195; // [rsp+3D8h] [rbp+2D8h]
  int *v196; // [rsp+3E0h] [rbp+2E0h]
  __int64 v197; // [rsp+3E8h] [rbp+2E8h]
  int *v198; // [rsp+3F0h] [rbp+2F0h]
  __int64 v199; // [rsp+3F8h] [rbp+2F8h]
  unsigned int *v200; // [rsp+400h] [rbp+300h]
  __int64 v201; // [rsp+408h] [rbp+308h]
  unsigned __int8 *v202; // [rsp+410h] [rbp+310h]
  __int64 v203; // [rsp+418h] [rbp+318h]
  unsigned __int8 *v204; // [rsp+420h] [rbp+320h]
  __int64 v205; // [rsp+428h] [rbp+328h]
  unsigned __int8 *v206; // [rsp+430h] [rbp+330h]
  __int64 v207; // [rsp+438h] [rbp+338h]
  unsigned __int8 *v208; // [rsp+440h] [rbp+340h]
  __int64 v209; // [rsp+448h] [rbp+348h]
  EVENT_DATA_DESCRIPTOR v210; // [rsp+450h] [rbp+350h] BYREF
  int *v211; // [rsp+470h] [rbp+370h]
  __int64 v212; // [rsp+478h] [rbp+378h]
  int *v213; // [rsp+480h] [rbp+380h]
  __int64 v214; // [rsp+488h] [rbp+388h]
  int *v215; // [rsp+490h] [rbp+390h]
  __int64 v216; // [rsp+498h] [rbp+398h]
  unsigned int *v217; // [rsp+4A0h] [rbp+3A0h]
  __int64 v218; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int8 *v219; // [rsp+4B0h] [rbp+3B0h]
  __int64 v220; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int8 *v221; // [rsp+4C0h] [rbp+3C0h]
  __int64 v222; // [rsp+4C8h] [rbp+3C8h]
  unsigned __int8 *v223; // [rsp+4D0h] [rbp+3D0h]
  __int64 v224; // [rsp+4D8h] [rbp+3D8h]
  unsigned __int8 *v225; // [rsp+4E0h] [rbp+3E0h]
  __int64 v226; // [rsp+4E8h] [rbp+3E8h]
  EVENT_DATA_DESCRIPTOR v227; // [rsp+4F0h] [rbp+3F0h] BYREF
  int *v228; // [rsp+510h] [rbp+410h]
  __int64 v229; // [rsp+518h] [rbp+418h]
  int *v230; // [rsp+520h] [rbp+420h]
  __int64 v231; // [rsp+528h] [rbp+428h]
  int *v232; // [rsp+530h] [rbp+430h]
  __int64 v233; // [rsp+538h] [rbp+438h]
  unsigned int *v234; // [rsp+540h] [rbp+440h]
  __int64 v235; // [rsp+548h] [rbp+448h]
  unsigned __int8 *v236; // [rsp+550h] [rbp+450h]
  __int64 v237; // [rsp+558h] [rbp+458h]
  unsigned __int8 *v238; // [rsp+560h] [rbp+460h]
  __int64 v239; // [rsp+568h] [rbp+468h]
  unsigned __int8 *v240; // [rsp+570h] [rbp+470h]
  __int64 v241; // [rsp+578h] [rbp+478h]
  EVENT_DATA_DESCRIPTOR v242; // [rsp+580h] [rbp+480h] BYREF
  int *v243; // [rsp+5A0h] [rbp+4A0h]
  __int64 v244; // [rsp+5A8h] [rbp+4A8h]
  int *v245; // [rsp+5B0h] [rbp+4B0h]
  __int64 v246; // [rsp+5B8h] [rbp+4B8h]
  int *v247; // [rsp+5C0h] [rbp+4C0h]
  __int64 v248; // [rsp+5C8h] [rbp+4C8h]
  unsigned int *v249; // [rsp+5D0h] [rbp+4D0h]
  __int64 v250; // [rsp+5D8h] [rbp+4D8h]
  unsigned __int8 *v251; // [rsp+5E0h] [rbp+4E0h]
  __int64 v252; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int8 *v253; // [rsp+5F0h] [rbp+4F0h]
  __int64 v254; // [rsp+5F8h] [rbp+4F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+600h] [rbp+500h] BYREF
  int *v256; // [rsp+620h] [rbp+520h]
  __int64 v257; // [rsp+628h] [rbp+528h]
  int *v258; // [rsp+630h] [rbp+530h]
  __int64 v259; // [rsp+638h] [rbp+538h]
  int *v260; // [rsp+640h] [rbp+540h]
  __int64 v261; // [rsp+648h] [rbp+548h]
  unsigned int *v262; // [rsp+650h] [rbp+550h]
  __int64 v263; // [rsp+658h] [rbp+558h]
  int *v264; // [rsp+660h] [rbp+560h]
  __int64 v265; // [rsp+668h] [rbp+568h]
  EVENT_DATA_DESCRIPTOR v266; // [rsp+670h] [rbp+570h] BYREF
  int *v267; // [rsp+690h] [rbp+590h]
  __int64 v268; // [rsp+698h] [rbp+598h]
  int *v269; // [rsp+6A0h] [rbp+5A0h]
  __int64 v270; // [rsp+6A8h] [rbp+5A8h]
  int *v271; // [rsp+6B0h] [rbp+5B0h]
  __int64 v272; // [rsp+6B8h] [rbp+5B8h]
  unsigned int *v273; // [rsp+6C0h] [rbp+5C0h]
  __int64 v274; // [rsp+6C8h] [rbp+5C8h]
  unsigned __int8 *v275; // [rsp+6D0h] [rbp+5D0h]
  __int64 v276; // [rsp+6D8h] [rbp+5D8h]
  void *retaddr; // [rsp+738h] [rbp+638h]

  if ( (_DWORD)a3 == 104 )
  {
    v7 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(v7 + 8LL * a2) != 104 )
    {
      v20 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x189u, 0LL);
LABEL_86:
      MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v20, 0x10Fu, 0LL);
      return v20;
    }
    v8 = *(_QWORD *)(a1 + 112);
    v9 = *(_DWORD *)(v7 + 8LL * a2 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v9 + v8) = *(_OWORD *)a4;
    *(_QWORD *)(v9 + v8 + 16) = *((_QWORD *)a4 + 2);
    v10 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 72);
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2);
    if ( v10 )
    {
      v70 = (**v10)(v10, a2, v11);
      v20 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x1B4u, 0LL);
LABEL_85:
        MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v20, 0x190u, 0LL);
        goto LABEL_86;
      }
    }
    v12 = 0LL;
    v13 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
    if ( v13 )
    {
      v112 = 0LL;
      v113 = 0;
      *(_OWORD *)lpMem = 0LL;
      Buffer = a2;
      v12 = (char *)RtlLookupElementGenericTable(v13, &Buffer);
      if ( lpMem[0] != lpMem[1] )
      {
        operator delete(lpMem[0]);
        lpMem[0] = 0LL;
      }
    }
    v15 = v12 + 8;
    if ( !v12 )
      v15 = 0LL;
    if ( v15 )
    {
      for ( i = 0; i < *((_DWORD *)v15 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v17) + 272LL) = v14 )
        v17 = i++;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 416LL) |= 2u;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 96LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL),
        0LL,
        8LL);
    }
    CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>(a1, a2, v11, 1u, a4);
    v18 = CPropertySet::NotifyPropertyValue(a1, a2, v11);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1C7u, 0LL);
      goto LABEL_85;
    }
    return 0;
  }
  if ( (_DWORD)a3 == 18 )
  {
    v22 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(v22 + 8LL * a2) == 18 )
    {
      *(_DWORD *)((*(_DWORD *)(v22 + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 112)) = *(_DWORD *)a4;
      v23 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, unsigned __int8 *))(a1 + 72);
      v24 = *(_DWORD *)(v22 + 8LL * a2);
      if ( v23 && (v35 = (**v23)(v23, a2, v24, a4), v20 = v35, v35 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1B4u, 0LL);
      }
      else
      {
        v25 = 0LL;
        v26 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
        if ( v26 )
        {
          v112 = 0LL;
          v113 = 0;
          *(_OWORD *)lpMem = 0LL;
          Buffer = a2;
          v25 = (char *)RtlLookupElementGenericTable(v26, &Buffer);
          if ( lpMem[0] != lpMem[1] )
          {
            operator delete(lpMem[0]);
            lpMem[0] = 0LL;
          }
        }
        v28 = v25 + 8;
        if ( !v25 )
          v28 = 0LL;
        if ( v28 )
        {
          for ( j = 0; j < *((_DWORD *)v28 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8 * v30) + 272LL) = v27 )
            v30 = j++;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 416LL) |= 2u;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 96LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL),
            0LL,
            8LL);
        }
        if ( *(_DWORD *)(a1 + 144) )
        {
          switch ( v24 )
          {
            case 0x11u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v73 = v51;
                v256 = &v73;
                v258 = &v74;
                v260 = (int *)&v75;
                v262 = &v76;
                v77 = *a4;
                v264 = &v77;
                v257 = 4LL;
                v74 = v50;
                v259 = 4LL;
                v75 = v24;
                v261 = 4LL;
                v76 = a2;
                v263 = 4LL;
                v265 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD2F4, 0LL, 0LL, 7u, &pData);
              }
              break;
            case 0x12u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v78 = v53;
                v267 = &v78;
                v269 = &v79;
                v271 = (int *)&v80;
                v273 = &v81;
                v268 = 4LL;
                v79 = v52;
                v270 = 4LL;
                v80 = v24;
                v272 = 4LL;
                v81 = a2;
                v274 = 4LL;
                v275 = a4;
                v276 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD1AE, 0LL, 0LL, 7u, &v266);
              }
              break;
            case 0x23u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v82 = v55;
                v243 = &v82;
                v245 = &v83;
                v247 = (int *)&v84;
                v249 = &v85;
                v253 = a4 + 4;
                v244 = 4LL;
                v83 = v54;
                v246 = 4LL;
                v84 = v24;
                v248 = 4LL;
                v85 = a2;
                v250 = 4LL;
                v251 = a4;
                v252 = 4LL;
                v254 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD215, 0LL, 0LL, 8u, &v242);
              }
              break;
            case 0x34u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v86 = v57;
                v228 = &v86;
                v230 = &v87;
                v232 = (int *)&v88;
                v234 = &v89;
                v238 = a4 + 4;
                v240 = a4 + 8;
                v229 = 4LL;
                v87 = v56;
                v231 = 4LL;
                v88 = v24;
                v233 = 4LL;
                v89 = a2;
                v235 = 4LL;
                v236 = a4;
                v237 = 4LL;
                v239 = 4LL;
                v241 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD283, 0LL, 0LL, 9u, &v227);
              }
              break;
            case 0x45u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v90 = v59;
                v177 = &v90;
                v179 = &v91;
                v181 = (int *)&v92;
                v183 = &v93;
                v187 = a4 + 4;
                v189 = a4 + 8;
                v191 = a4 + 12;
                v178 = 4LL;
                v91 = v58;
                v180 = 4LL;
                v92 = v24;
                v182 = 4LL;
                v93 = a2;
                v184 = 4LL;
                v185 = a4;
                v186 = 4LL;
                v188 = 4LL;
                v190 = 4LL;
                v192 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DCFFC, 0LL, 0LL, 0xAu, &v176);
              }
              break;
            case 0x46u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v94 = v61;
                v194 = &v94;
                v196 = &v95;
                v198 = (int *)&v96;
                v200 = &v97;
                v204 = a4 + 4;
                v206 = a4 + 8;
                v208 = a4 + 12;
                v195 = 4LL;
                v95 = v60;
                v197 = 4LL;
                v96 = v24;
                v199 = 4LL;
                v97 = a2;
                v201 = 4LL;
                v202 = a4;
                v203 = 4LL;
                v205 = 4LL;
                v207 = 4LL;
                v209 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DCF88, 0LL, 0LL, 0xAu, &v193);
              }
              break;
            case 0x47u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v98 = v63;
                v211 = &v98;
                v213 = &v99;
                v215 = (int *)&v100;
                v217 = &v101;
                v221 = a4 + 4;
                v223 = a4 + 8;
                v225 = a4 + 12;
                v212 = 4LL;
                v99 = v62;
                v214 = 4LL;
                v100 = v24;
                v216 = 4LL;
                v101 = a2;
                v218 = 4LL;
                v219 = a4;
                v220 = 4LL;
                v222 = 4LL;
                v224 = 4LL;
                v226 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DCFFC, 0LL, 0LL, 0xAu, &v210);
              }
              break;
            case 0x68u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v102 = v65;
                v156 = &v102;
                v158 = &v103;
                v160 = (int *)&v104;
                v162 = &v105;
                v166 = a4 + 4;
                v168 = a4 + 8;
                v170 = a4 + 12;
                v172 = a4 + 16;
                v174 = a4 + 20;
                v157 = 4LL;
                v103 = v64;
                v159 = 4LL;
                v104 = v24;
                v161 = 4LL;
                v105 = a2;
                v163 = 4LL;
                v164 = a4;
                v165 = 4LL;
                v167 = 4LL;
                v169 = 4LL;
                v171 = 4LL;
                v173 = 4LL;
                v175 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD070, 0LL, 0LL, 0xCu, &v155);
              }
              break;
            case 0x109u:
              if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v106 = v67;
                v115 = &v106;
                v117 = &v107;
                v119 = (int *)&v108;
                v121 = &v109;
                v125 = a4 + 4;
                v127 = a4 + 8;
                v129 = a4 + 12;
                v131 = a4 + 16;
                v133 = a4 + 20;
                v135 = a4 + 24;
                v137 = a4 + 28;
                v139 = a4 + 32;
                v141 = a4 + 36;
                v143 = a4 + 40;
                v145 = a4 + 44;
                v147 = a4 + 48;
                v149 = a4 + 52;
                v151 = a4 + 56;
                v153 = a4 + 60;
                v116 = 4LL;
                v107 = v66;
                v118 = 4LL;
                v108 = v24;
                v120 = 4LL;
                v109 = a2;
                v122 = 4LL;
                v123 = a4;
                v124 = 4LL;
                v126 = 4LL;
                v128 = 4LL;
                v130 = 4LL;
                v132 = 4LL;
                v134 = 4LL;
                v136 = 4LL;
                v138 = 4LL;
                v140 = 4LL;
                v142 = 4LL;
                v144 = 4LL;
                v146 = 4LL;
                v148 = 4LL;
                v150 = 4LL;
                v152 = 4LL;
                v154 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DD0F6, 0LL, 0LL, 0x16u, &v114);
              }
              break;
            default:
              ModuleFailFastForHRESULT(2147942487LL, retaddr, a3);
          }
        }
        v31 = CPropertySet::NotifyPropertyValue(a1, a2, v24);
        v20 = v31;
        if ( v31 >= 0 )
          return 0;
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1C7u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v20, 0x190u, 0LL);
    }
    else
    {
      v20 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x189u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v20, 0xF7u, 0LL);
    return v20;
  }
  switch ( (int)a3 )
  {
    case 17:
      updated = CPropertySet::UpdateProperty<bool>((CResource *)a1, a2);
      v20 = updated;
      if ( updated >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, updated, 0xF3u, 0LL);
      break;
    case 35:
      v39 = CPropertySet::UpdateProperty<D2DVector2>((CResource *)a1);
      v20 = v39;
      if ( v39 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xFBu, 0LL);
      break;
    case 52:
      v41 = CPropertySet::UpdateProperty<D2DVector3>((CResource *)a1, a2);
      v20 = v41;
      if ( v41 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xFFu, 0LL);
      break;
    case 69:
      v43 = CPropertySet::UpdateProperty<D2DQuaternion>((CResource *)a1);
      v20 = v43;
      if ( v43 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x103u, 0LL);
      break;
    case 70:
      v45 = CPropertySet::UpdateProperty<_D3DCOLORVALUE>((CResource *)a1);
      v20 = v45;
      if ( v45 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x107u, 0LL);
      break;
    case 71:
      v47 = CPropertySet::UpdateProperty<D2DQuaternion>((CResource *)a1);
      v20 = v47;
      if ( v47 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x10Bu, 0LL);
      break;
    case 265:
      v33 = CPropertySet::UpdateProperty<D2DMatrix>((CResource *)a1);
      v20 = v33;
      if ( v33 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x113u, 0LL);
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  }
  return v20;
}
