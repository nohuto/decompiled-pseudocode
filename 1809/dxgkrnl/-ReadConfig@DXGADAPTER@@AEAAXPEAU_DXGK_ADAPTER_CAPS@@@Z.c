/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0150E10
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall DXGADAPTER::ReadConfig(DXGADAPTER *this, struct _DXGK_ADAPTER_CAPS *a2)
{
  bool v4; // zf
  bool v5; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  char v13; // al
  bool v14; // al
  char v15; // al
  int v16; // eax
  char v17; // al
  char v18; // dl
  int v19; // r8d
  int v20; // r10d
  char v21; // al
  bool v22; // cl
  bool v23; // al
  char v24; // r9
  char v25; // al
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  int v49; // [rsp+8Ch] [rbp-74h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+94h] [rbp-6Ch] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  int v53; // [rsp+9Ch] [rbp-64h] BYREF
  int v54; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+A4h] [rbp-5Ch] BYREF
  int v56; // [rsp+A8h] [rbp-58h] BYREF
  int v57; // [rsp+ACh] [rbp-54h] BYREF
  int v58; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+B4h] [rbp-4Ch] BYREF
  int v60; // [rsp+B8h] [rbp-48h] BYREF
  int v61; // [rsp+BCh] [rbp-44h] BYREF
  int v62; // [rsp+C0h] [rbp-40h] BYREF
  int v63; // [rsp+C4h] [rbp-3Ch] BYREF
  int v64; // [rsp+C8h] [rbp-38h] BYREF
  int v65; // [rsp+CCh] [rbp-34h] BYREF
  int v66; // [rsp+D0h] [rbp-30h] BYREF
  int v67; // [rsp+D4h] [rbp-2Ch] BYREF
  int v68; // [rsp+D8h] [rbp-28h] BYREF
  int v69; // [rsp+DCh] [rbp-24h] BYREF
  int v70; // [rsp+E0h] [rbp-20h] BYREF
  int v71; // [rsp+E4h] [rbp-1Ch] BYREF
  int v72; // [rsp+E8h] [rbp-18h] BYREF
  int v73; // [rsp+ECh] [rbp-14h] BYREF
  int v74; // [rsp+F0h] [rbp-10h] BYREF
  int v75; // [rsp+F4h] [rbp-Ch] BYREF
  int v76; // [rsp+F8h] [rbp-8h] BYREF
  int v77; // [rsp+FCh] [rbp-4h] BYREF
  int v78; // [rsp+100h] [rbp+0h] BYREF
  int v79; // [rsp+104h] [rbp+4h] BYREF
  int v80; // [rsp+108h] [rbp+8h] BYREF
  int v81; // [rsp+10Ch] [rbp+Ch] BYREF
  int v82; // [rsp+110h] [rbp+10h] BYREF
  int v83; // [rsp+114h] [rbp+14h] BYREF
  int v84; // [rsp+118h] [rbp+18h] BYREF
  int v85; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v86; // [rsp+120h] [rbp+20h] BYREF
  int v87; // [rsp+124h] [rbp+24h] BYREF
  int v88; // [rsp+128h] [rbp+28h] BYREF
  int v89; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v90; // [rsp+130h] [rbp+30h] BYREF
  __int64 v91; // [rsp+138h] [rbp+38h] BYREF
  __int64 v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+150h] [rbp+50h] BYREF
  int v94; // [rsp+158h] [rbp+58h]
  const wchar_t *v95; // [rsp+160h] [rbp+60h]
  int *v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+170h] [rbp+70h]
  int *v98; // [rsp+178h] [rbp+78h]
  int v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  int v101; // [rsp+190h] [rbp+90h]
  const wchar_t *v102; // [rsp+198h] [rbp+98h]
  int *v103; // [rsp+1A0h] [rbp+A0h]
  int v104; // [rsp+1A8h] [rbp+A8h]
  int *v105; // [rsp+1B0h] [rbp+B0h]
  int v106; // [rsp+1B8h] [rbp+B8h]
  __int64 v107; // [rsp+1C0h] [rbp+C0h]
  int v108; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v109; // [rsp+1D0h] [rbp+D0h]
  int *v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1E0h] [rbp+E0h]
  int *v112; // [rsp+1E8h] [rbp+E8h]
  int v113; // [rsp+1F0h] [rbp+F0h]
  __int64 v114; // [rsp+1F8h] [rbp+F8h]
  int v115; // [rsp+200h] [rbp+100h]
  const wchar_t *v116; // [rsp+208h] [rbp+108h]
  __int64 *v117; // [rsp+210h] [rbp+110h]
  int v118; // [rsp+218h] [rbp+118h]
  __int64 *v119; // [rsp+220h] [rbp+120h]
  int v120; // [rsp+228h] [rbp+128h]
  __int64 v121; // [rsp+230h] [rbp+130h]
  int v122; // [rsp+238h] [rbp+138h]
  const wchar_t *v123; // [rsp+240h] [rbp+140h]
  int *v124; // [rsp+248h] [rbp+148h]
  int v125; // [rsp+250h] [rbp+150h]
  int *v126; // [rsp+258h] [rbp+158h]
  int v127; // [rsp+260h] [rbp+160h]
  __int64 v128; // [rsp+268h] [rbp+168h]
  int v129; // [rsp+270h] [rbp+170h]
  const wchar_t *v130; // [rsp+278h] [rbp+178h]
  int *v131; // [rsp+280h] [rbp+180h]
  int v132; // [rsp+288h] [rbp+188h]
  int *v133; // [rsp+290h] [rbp+190h]
  int v134; // [rsp+298h] [rbp+198h]
  __int64 v135; // [rsp+2A0h] [rbp+1A0h]
  int v136; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v137; // [rsp+2B0h] [rbp+1B0h]
  int *v138; // [rsp+2B8h] [rbp+1B8h]
  int v139; // [rsp+2C0h] [rbp+1C0h]
  int *v140; // [rsp+2C8h] [rbp+1C8h]
  int v141; // [rsp+2D0h] [rbp+1D0h]
  __int64 v142; // [rsp+2D8h] [rbp+1D8h]
  int v143; // [rsp+2E0h] [rbp+1E0h]
  const wchar_t *v144; // [rsp+2E8h] [rbp+1E8h]
  int *v145; // [rsp+2F0h] [rbp+1F0h]
  int v146; // [rsp+2F8h] [rbp+1F8h]
  int *v147; // [rsp+300h] [rbp+200h]
  int v148; // [rsp+308h] [rbp+208h]
  __int64 v149; // [rsp+310h] [rbp+210h]
  int v150; // [rsp+318h] [rbp+218h]
  const wchar_t *v151; // [rsp+320h] [rbp+220h]
  int *v152; // [rsp+328h] [rbp+228h]
  int v153; // [rsp+330h] [rbp+230h]
  int *v154; // [rsp+338h] [rbp+238h]
  int v155; // [rsp+340h] [rbp+240h]
  __int64 v156; // [rsp+348h] [rbp+248h]
  int v157; // [rsp+350h] [rbp+250h]
  const wchar_t *v158; // [rsp+358h] [rbp+258h]
  int *v159; // [rsp+360h] [rbp+260h]
  int v160; // [rsp+368h] [rbp+268h]
  int *v161; // [rsp+370h] [rbp+270h]
  int v162; // [rsp+378h] [rbp+278h]
  __int64 v163; // [rsp+380h] [rbp+280h]
  int v164; // [rsp+388h] [rbp+288h]
  const wchar_t *v165; // [rsp+390h] [rbp+290h]
  int *v166; // [rsp+398h] [rbp+298h]
  int v167; // [rsp+3A0h] [rbp+2A0h]
  int *v168; // [rsp+3A8h] [rbp+2A8h]
  int v169; // [rsp+3B0h] [rbp+2B0h]
  __int64 v170; // [rsp+3B8h] [rbp+2B8h]
  int v171; // [rsp+3C0h] [rbp+2C0h]
  const wchar_t *v172; // [rsp+3C8h] [rbp+2C8h]
  int *v173; // [rsp+3D0h] [rbp+2D0h]
  int v174; // [rsp+3D8h] [rbp+2D8h]
  int *v175; // [rsp+3E0h] [rbp+2E0h]
  int v176; // [rsp+3E8h] [rbp+2E8h]
  __int64 v177; // [rsp+3F0h] [rbp+2F0h]
  int v178; // [rsp+3F8h] [rbp+2F8h]
  const wchar_t *v179; // [rsp+400h] [rbp+300h]
  int *v180; // [rsp+408h] [rbp+308h]
  int v181; // [rsp+410h] [rbp+310h]
  int *v182; // [rsp+418h] [rbp+318h]
  int v183; // [rsp+420h] [rbp+320h]
  __int64 v184; // [rsp+428h] [rbp+328h]
  int v185; // [rsp+430h] [rbp+330h]
  const wchar_t *v186; // [rsp+438h] [rbp+338h]
  int *v187; // [rsp+440h] [rbp+340h]
  int v188; // [rsp+448h] [rbp+348h]
  int *v189; // [rsp+450h] [rbp+350h]
  int v190; // [rsp+458h] [rbp+358h]
  __int64 v191; // [rsp+460h] [rbp+360h]
  int v192; // [rsp+468h] [rbp+368h]
  const wchar_t *v193; // [rsp+470h] [rbp+370h]
  int *v194; // [rsp+478h] [rbp+378h]
  int v195; // [rsp+480h] [rbp+380h]
  int *v196; // [rsp+488h] [rbp+388h]
  int v197; // [rsp+490h] [rbp+390h]
  __int64 v198; // [rsp+498h] [rbp+398h]
  int v199; // [rsp+4A0h] [rbp+3A0h]
  const wchar_t *v200; // [rsp+4A8h] [rbp+3A8h]
  int *v201; // [rsp+4B0h] [rbp+3B0h]
  int v202; // [rsp+4B8h] [rbp+3B8h]
  int *v203; // [rsp+4C0h] [rbp+3C0h]
  int v204; // [rsp+4C8h] [rbp+3C8h]
  __int64 v205; // [rsp+4D0h] [rbp+3D0h]
  int v206; // [rsp+4D8h] [rbp+3D8h]
  const wchar_t *v207; // [rsp+4E0h] [rbp+3E0h]
  int *v208; // [rsp+4E8h] [rbp+3E8h]
  int v209; // [rsp+4F0h] [rbp+3F0h]
  int *v210; // [rsp+4F8h] [rbp+3F8h]
  int v211; // [rsp+500h] [rbp+400h]
  __int64 v212; // [rsp+508h] [rbp+408h]
  int v213; // [rsp+510h] [rbp+410h]
  const wchar_t *v214; // [rsp+518h] [rbp+418h]
  int *v215; // [rsp+520h] [rbp+420h]
  int v216; // [rsp+528h] [rbp+428h]
  int *v217; // [rsp+530h] [rbp+430h]
  int v218; // [rsp+538h] [rbp+438h]
  __int64 v219; // [rsp+540h] [rbp+440h]
  int v220; // [rsp+548h] [rbp+448h]
  const wchar_t *v221; // [rsp+550h] [rbp+450h]
  int *v222; // [rsp+558h] [rbp+458h]
  int v223; // [rsp+560h] [rbp+460h]
  int *v224; // [rsp+568h] [rbp+468h]
  int v225; // [rsp+570h] [rbp+470h]
  __int64 v226; // [rsp+578h] [rbp+478h]
  int v227; // [rsp+580h] [rbp+480h]
  const wchar_t *v228; // [rsp+588h] [rbp+488h]
  int *v229; // [rsp+590h] [rbp+490h]
  int v230; // [rsp+598h] [rbp+498h]
  int *v231; // [rsp+5A0h] [rbp+4A0h]
  int v232; // [rsp+5A8h] [rbp+4A8h]
  __int64 v233; // [rsp+5B0h] [rbp+4B0h]
  int v234; // [rsp+5B8h] [rbp+4B8h]
  const wchar_t *v235; // [rsp+5C0h] [rbp+4C0h]
  int *v236; // [rsp+5C8h] [rbp+4C8h]
  int v237; // [rsp+5D0h] [rbp+4D0h]
  int *v238; // [rsp+5D8h] [rbp+4D8h]
  int v239; // [rsp+5E0h] [rbp+4E0h]
  __int64 v240; // [rsp+5E8h] [rbp+4E8h]
  int v241; // [rsp+5F0h] [rbp+4F0h]
  const wchar_t *v242; // [rsp+5F8h] [rbp+4F8h]
  int *v243; // [rsp+600h] [rbp+500h]
  int v244; // [rsp+608h] [rbp+508h]
  int *v245; // [rsp+610h] [rbp+510h]
  int v246; // [rsp+618h] [rbp+518h]
  __int64 v247; // [rsp+620h] [rbp+520h]
  int v248; // [rsp+628h] [rbp+528h]
  const wchar_t *v249; // [rsp+630h] [rbp+530h]
  int *v250; // [rsp+638h] [rbp+538h]
  int v251; // [rsp+640h] [rbp+540h]
  int *v252; // [rsp+648h] [rbp+548h]
  int v253; // [rsp+650h] [rbp+550h]
  __int64 v254; // [rsp+658h] [rbp+558h]
  int v255; // [rsp+660h] [rbp+560h]
  const wchar_t *v256; // [rsp+668h] [rbp+568h]
  int *v257; // [rsp+670h] [rbp+570h]
  int v258; // [rsp+678h] [rbp+578h]
  int *v259; // [rsp+680h] [rbp+580h]
  int v260; // [rsp+688h] [rbp+588h]
  __int64 v261; // [rsp+690h] [rbp+590h]
  int v262; // [rsp+698h] [rbp+598h]
  const wchar_t *v263; // [rsp+6A0h] [rbp+5A0h]
  int *v264; // [rsp+6A8h] [rbp+5A8h]
  int v265; // [rsp+6B0h] [rbp+5B0h]
  int *v266; // [rsp+6B8h] [rbp+5B8h]
  int v267; // [rsp+6C0h] [rbp+5C0h]
  __int64 v268; // [rsp+6C8h] [rbp+5C8h]
  int v269; // [rsp+6D0h] [rbp+5D0h]
  const wchar_t *v270; // [rsp+6D8h] [rbp+5D8h]
  int *v271; // [rsp+6E0h] [rbp+5E0h]
  int v272; // [rsp+6E8h] [rbp+5E8h]
  int *v273; // [rsp+6F0h] [rbp+5F0h]
  int v274; // [rsp+6F8h] [rbp+5F8h]
  __int64 v275; // [rsp+700h] [rbp+600h]
  int v276; // [rsp+708h] [rbp+608h]
  const wchar_t *v277; // [rsp+710h] [rbp+610h]
  int *v278; // [rsp+718h] [rbp+618h]
  int v279; // [rsp+720h] [rbp+620h]
  int *v280; // [rsp+728h] [rbp+628h]
  int v281; // [rsp+730h] [rbp+630h]
  __int64 v282; // [rsp+738h] [rbp+638h]
  int v283; // [rsp+740h] [rbp+640h]
  const wchar_t *v284; // [rsp+748h] [rbp+648h]
  int *v285; // [rsp+750h] [rbp+650h]
  int v286; // [rsp+758h] [rbp+658h]
  int *v287; // [rsp+760h] [rbp+660h]
  int v288; // [rsp+768h] [rbp+668h]
  __int64 v289; // [rsp+770h] [rbp+670h]
  int v290; // [rsp+778h] [rbp+678h]
  const wchar_t *v291; // [rsp+780h] [rbp+680h]
  int *v292; // [rsp+788h] [rbp+688h]
  int v293; // [rsp+790h] [rbp+690h]
  int *v294; // [rsp+798h] [rbp+698h]
  int v295; // [rsp+7A0h] [rbp+6A0h]
  __int64 v296; // [rsp+7A8h] [rbp+6A8h]
  int v297; // [rsp+7B0h] [rbp+6B0h]
  const wchar_t *v298; // [rsp+7B8h] [rbp+6B8h]
  int *v299; // [rsp+7C0h] [rbp+6C0h]
  int v300; // [rsp+7C8h] [rbp+6C8h]
  int *v301; // [rsp+7D0h] [rbp+6D0h]
  int v302; // [rsp+7D8h] [rbp+6D8h]
  __int64 v303; // [rsp+7E0h] [rbp+6E0h]
  int v304; // [rsp+7E8h] [rbp+6E8h]
  const wchar_t *v305; // [rsp+7F0h] [rbp+6F0h]
  int *v306; // [rsp+7F8h] [rbp+6F8h]
  int v307; // [rsp+800h] [rbp+700h]
  int *v308; // [rsp+808h] [rbp+708h]
  int v309; // [rsp+810h] [rbp+710h]
  __int64 v310; // [rsp+818h] [rbp+718h]
  int v311; // [rsp+820h] [rbp+720h]
  const wchar_t *v312; // [rsp+828h] [rbp+728h]
  int *v313; // [rsp+830h] [rbp+730h]
  int v314; // [rsp+838h] [rbp+738h]
  int *v315; // [rsp+840h] [rbp+740h]
  int v316; // [rsp+848h] [rbp+748h]
  __int64 v317; // [rsp+850h] [rbp+750h]
  int v318; // [rsp+858h] [rbp+758h]
  const wchar_t *v319; // [rsp+860h] [rbp+760h]
  int *v320; // [rsp+868h] [rbp+768h]
  int v321; // [rsp+870h] [rbp+770h]
  int *v322; // [rsp+878h] [rbp+778h]
  int v323; // [rsp+880h] [rbp+780h]
  __int64 v324; // [rsp+888h] [rbp+788h]
  int v325; // [rsp+890h] [rbp+790h]
  const wchar_t *v326; // [rsp+898h] [rbp+798h]
  int *v327; // [rsp+8A0h] [rbp+7A0h]
  int v328; // [rsp+8A8h] [rbp+7A8h]
  int *v329; // [rsp+8B0h] [rbp+7B0h]
  int v330; // [rsp+8B8h] [rbp+7B8h]
  __int64 v331; // [rsp+8C0h] [rbp+7C0h]
  int v332; // [rsp+8C8h] [rbp+7C8h]
  const wchar_t *v333; // [rsp+8D0h] [rbp+7D0h]
  unsigned int *v334; // [rsp+8D8h] [rbp+7D8h]
  int v335; // [rsp+8E0h] [rbp+7E0h]
  int *v336; // [rsp+8E8h] [rbp+7E8h]
  int v337; // [rsp+8F0h] [rbp+7F0h]
  __int64 v338; // [rsp+8F8h] [rbp+7F8h]
  int v339; // [rsp+900h] [rbp+800h]
  _BYTE v340[40]; // [rsp+908h] [rbp+808h] BYREF

  v58 = 0;
  v47 = 0;
  v64 = 7000;
  v39 = 7000;
  v59 = 0;
  v95 = L"ForceDirectFlip";
  v48 = 0;
  v63 = 0;
  v49 = 0;
  v61 = 0;
  v33 = 0;
  v29 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v60 = 1;
  v31 = 1;
  v90 = 1395864371LL;
  v91 = 16LL;
  v92 = 1395864371LL;
  v62 = 0;
  v32 = 0;
  v65 = 0;
  v34 = 0;
  v66 = 0;
  v35 = 0;
  v67 = 0;
  v36 = 0;
  v68 = 0;
  v37 = 0;
  v69 = 0;
  v38 = 0;
  v70 = 1;
  v40 = 1;
  v71 = 0;
  v55 = 0;
  v72 = 0;
  v41 = 0;
  v74 = 0;
  v42 = 0;
  v73 = 0;
  v43 = 0;
  v75 = 0;
  v56 = 0;
  v76 = 1;
  v50 = 1;
  v77 = 0;
  v51 = 0;
  v79 = 0;
  v78 = 0;
  v80 = 0;
  v53 = 0;
  v82 = 0;
  v81 = 0;
  v83 = 0;
  v54 = 0;
  v84 = 0;
  v52 = 0;
  v85 = 0;
  v44 = 0;
  v86 = 0;
  v45 = 0;
  v87 = 0;
  v46 = 0;
  v88 = 0;
  v57 = 0;
  v89 = 1;
  v28 = 1;
  v93 = 0LL;
  v94 = 288;
  v96 = &v47;
  v99 = 4;
  v97 = 67108868;
  v98 = &v58;
  v100 = 0LL;
  v102 = L"DisableOverlays";
  v101 = 288;
  v103 = &v48;
  v105 = &v59;
  v109 = L"EnableOfferReclaimOnDriver";
  v110 = &v31;
  v112 = &v60;
  v116 = L"LeanMemoryLimit";
  v117 = &v91;
  v119 = &v90;
  v123 = L"ForceEnableDxgMms2";
  v124 = &v33;
  v126 = &v61;
  v130 = L"ContextNoPatchMode";
  v131 = &v32;
  v133 = &v62;
  v138 = &v26;
  v140 = &v29;
  v145 = &v27;
  v147 = &v30;
  v151 = L"Force32BitFences";
  v104 = 67108868;
  v106 = 4;
  v107 = 0LL;
  v108 = 288;
  v111 = 67108868;
  v113 = 4;
  v114 = 0LL;
  v115 = 288;
  v118 = 184549387;
  v120 = 8;
  v121 = 0LL;
  v122 = 288;
  v125 = 67108868;
  v127 = 4;
  v128 = 0LL;
  v129 = 288;
  v132 = 67108868;
  v134 = 4;
  v135 = 0LL;
  v136 = 288;
  v137 = L"ForceToMapGpuVa";
  v139 = 67108868;
  v141 = 4;
  v142 = 0LL;
  v143 = 288;
  v144 = L"ForceAccessedPhysically";
  v146 = 67108868;
  v148 = 4;
  v149 = 0LL;
  v150 = 288;
  v153 = 67108868;
  v152 = &v49;
  v154 = &v63;
  v158 = L"InitialPagingQueueFenceValue";
  v159 = &v39;
  v161 = &v64;
  v165 = L"ForceInitPagingProcessVaSpace";
  v166 = &v34;
  v168 = &v65;
  v172 = L"DisableGdiContextGpuVa";
  v173 = &v35;
  v175 = &v66;
  v179 = L"DisablePagingContextGpuVa";
  v180 = &v36;
  v182 = &v67;
  v186 = L"DisableMonitoredFenceGpuVa";
  v187 = &v37;
  v189 = &v68;
  v193 = L"ForceExplicitResidencyNotification";
  v194 = &v38;
  v196 = &v69;
  v201 = &v26;
  v203 = &v29;
  v208 = &v27;
  v155 = 4;
  v156 = 0LL;
  v157 = 288;
  v160 = 67108868;
  v162 = 4;
  v163 = 0LL;
  v164 = 288;
  v167 = 67108868;
  v169 = 4;
  v170 = 0LL;
  v171 = 288;
  v174 = 67108868;
  v176 = 4;
  v177 = 0LL;
  v178 = 288;
  v181 = 67108868;
  v183 = 4;
  v184 = 0LL;
  v185 = 288;
  v188 = 67108868;
  v190 = 4;
  v191 = 0LL;
  v192 = 288;
  v195 = 67108868;
  v197 = 4;
  v198 = 0LL;
  v199 = 288;
  v200 = L"ForceToMapGpuVa";
  v202 = 67108868;
  v204 = 4;
  v205 = 0LL;
  v206 = 288;
  v207 = L"ForceAccessedPhysically";
  v209 = 67108868;
  v211 = 4;
  v210 = &v30;
  v214 = L"DriverManagesResidencyOverride";
  v215 = &v40;
  v217 = &v70;
  v221 = L"GdiPhysicalAdapterIndex";
  v222 = &v55;
  v224 = &v71;
  v228 = L"ForceReplicateGdiContent";
  v229 = &v41;
  v231 = &v72;
  v235 = L"EnableTimedCalls";
  v236 = &v43;
  v238 = &v73;
  v242 = L"CreateGdiPrimaryOnSlaveGpu";
  v243 = &v42;
  v245 = &v74;
  v249 = L"ForceSurpriseRemovalSupport";
  v250 = &v56;
  v252 = &v75;
  v256 = L"EnableDecodeMPO";
  v257 = &v50;
  v259 = &v76;
  v263 = L"DisableBadDriverCheckForHwProtection";
  v264 = &v51;
  v212 = 0LL;
  v213 = 288;
  v216 = 67108868;
  v218 = 4;
  v219 = 0LL;
  v220 = 288;
  v223 = 67108868;
  v225 = 4;
  v226 = 0LL;
  v227 = 288;
  v230 = 67108868;
  v232 = 4;
  v233 = 0LL;
  v234 = 288;
  v237 = 67108868;
  v239 = 4;
  v240 = 0LL;
  v241 = 288;
  v244 = 67108868;
  v246 = 4;
  v247 = 0LL;
  v248 = 288;
  v251 = 67108868;
  v253 = 4;
  v254 = 0LL;
  v255 = 288;
  v258 = 67108868;
  v260 = 4;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v266 = &v77;
  v270 = L"ForceSecondaryMPOSupport";
  v271 = &v78;
  v273 = &v79;
  v277 = L"ForceSecondaryIFlipSupport";
  v278 = &v53;
  v280 = &v80;
  v284 = L"EnablePanelFitterSupport";
  v285 = &v81;
  v287 = &v82;
  v291 = L"EnableMultiPlaneOverlay3DDIs";
  v292 = &v54;
  v294 = &v83;
  v298 = L"DisableSecondaryIFlipSupport";
  v299 = &v52;
  v301 = &v84;
  v305 = L"EnableWDDM23Synchronization";
  v306 = &v44;
  v308 = &v85;
  v312 = L"DisableVersionMismatchCheck";
  v313 = &v45;
  v315 = &v86;
  v319 = L"IoMmuFlags";
  v320 = &v46;
  v322 = &v87;
  v267 = 4;
  v268 = 0LL;
  v269 = 288;
  v272 = 67108868;
  v274 = 4;
  v275 = 0LL;
  v276 = 288;
  v279 = 67108868;
  v281 = 4;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v288 = 4;
  v289 = 0LL;
  v290 = 288;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v326 = L"DisableMultiSourceMPOCheck";
  v330 = 4;
  v327 = &v57;
  v337 = 4;
  v329 = &v88;
  v324 = 0LL;
  v333 = L"DriverStoreCopyMode";
  v334 = &v28;
  v336 = &v89;
  v325 = 288;
  v328 = 67108868;
  v331 = 0LL;
  v332 = 288;
  v335 = 67108868;
  v338 = 0LL;
  v339 = 0;
  memset(v340, 0, sizeof(v340));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v93, 0LL, 0LL);
  v4 = v33 == 0;
  *((_BYTE *)this + 2433) = v31 != 0;
  *((_DWORD *)this + 612) = v32;
  *((_QWORD *)this + 305) = v92;
  v5 = !v4;
  v4 = v26 == 0;
  *((_BYTE *)this + 2452) = v5;
  v6 = !v4;
  v4 = v27 == 0;
  *((_BYTE *)this + 2453) = v6;
  v7 = !v4;
  v4 = v34 == 0;
  *((_BYTE *)this + 2454) = v7;
  v8 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2456) = v8;
  v9 = !v4;
  v4 = v36 == 0;
  *((_BYTE *)this + 2457) = v9;
  v10 = !v4;
  v4 = v37 == 0;
  *((_BYTE *)this + 2458) = v10;
  v11 = !v4;
  v4 = v38 == 0;
  *((_BYTE *)this + 2459) = v11;
  v12 = !v4;
  v4 = v40 == 0;
  *((_BYTE *)this + 2455) = v12;
  *((_DWORD *)this + 622) = v39;
  *((_BYTE *)this + 2460) = !v4;
  if ( v41 || (v13 = 0, (*((_DWORD *)this + 473) & 0x100) != 0) )
    v13 = 1;
  v4 = v42 == 0;
  *((_BYTE *)this + 2434) = v13;
  v14 = !v4;
  v4 = v43 == 0;
  *((_BYTE *)this + 2435) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v44 || (v15 = 1, *((int *)this + 540) < 8704) )
    v15 = 0;
  v4 = v45 == 0;
  *((_BYTE *)this + 2469) = v15;
  *((_BYTE *)this + 2475) = !v4;
  *((_DWORD *)this + 620) = v46;
  v16 = 2;
  if ( v28 < 2 )
    v16 = v28;
  *((_DWORD *)this + 621) = v16;
  if ( v47 )
    *((_BYTE *)this + 2363) = 1;
  if ( v48 )
    *((_BYTE *)this + 2364) = 0;
  if ( v49 )
    *((_DWORD *)this + 472) |= 0x20u;
  if ( *((_BYTE *)this + 2364) )
  {
    if ( *((_BYTE *)this + 2430) )
      *((_DWORD *)this + 592) = 2;
  }
  else
  {
    *((_DWORD *)this + 592) = 1;
  }
  v17 = *((_BYTE *)this + 2433);
  if ( *((int *)this + 540) < 4608 )
    v17 = 0;
  *((_BYTE *)this + 2433) = v17;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2460) = 0;
  if ( !v50 || (v21 = 1, !v18) )
    v21 = 0;
  v4 = v51 == 0;
  *((_BYTE *)this + 2461) = v21;
  *((_BYTE *)this + 2464) = 0;
  *((_BYTE *)this + 2462) = !v4;
  if ( !v52 && (*((_DWORD *)this + 471) & 0x10) != 0 )
  {
    if ( v19 >= 8448 )
    {
      *((_BYTE *)this + 2464) = 1;
    }
    else if ( v19 >= 0x2000 )
    {
      *((_BYTE *)this + 2464) = v53 != 0;
    }
  }
  v4 = *((_QWORD *)this + 63) == 0LL;
  v22 = 0;
  *((_BYTE *)this + 2466) = 0;
  *((_BYTE *)this + 2473) = !v4;
  if ( *((_QWORD *)this + 114) )
  {
    v22 = v19 >= v20 || v19 >= 8448 && ((*((_DWORD *)this + 77) & 0x200) != 0 || v54);
    *((_BYTE *)this + 2466) = v22;
  }
  v23 = v22;
  v24 = v18;
  if ( v18 )
  {
    v23 = v22;
    v24 = v18;
    if ( !v22 )
    {
      v23 = 0;
      if ( !*((_QWORD *)this + 94) && !*((_QWORD *)this + 110) )
      {
        *((_BYTE *)this + 2364) = 0;
        v24 = 0;
      }
    }
  }
  *((_BYTE *)this + 2467) = 0;
  if ( !v23 )
    goto LABEL_27;
  if ( v19 >= v20 && (*((_QWORD *)this + 141) || *((_QWORD *)this + 142)) )
    *((_BYTE *)this + 2467) = 1;
  if ( !*((_DWORD *)this + 599) )
LABEL_27:
    *((_DWORD *)this + 599) = 1;
  *((_BYTE *)this + 2465) = v23;
  if ( !v23 || (v25 = 1, !v24) )
    v25 = 0;
  *((_BYTE *)this + 2463) = v25;
  if ( *((_DWORD *)this + 64) > 1u )
    *((_DWORD *)this + 637) = v55;
  if ( v56 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2468) = v57 != 0;
}
