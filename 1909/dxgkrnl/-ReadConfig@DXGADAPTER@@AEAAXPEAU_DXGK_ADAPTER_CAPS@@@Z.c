/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C016815C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
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
  int v90; // [rsp+130h] [rbp+30h] BYREF
  int v91; // [rsp+134h] [rbp+34h] BYREF
  int v92; // [rsp+138h] [rbp+38h] BYREF
  int v93; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v94; // [rsp+140h] [rbp+40h] BYREF
  int v95; // [rsp+144h] [rbp+44h] BYREF
  int v96; // [rsp+148h] [rbp+48h] BYREF
  int v97; // [rsp+14Ch] [rbp+4Ch] BYREF
  __int64 v98; // [rsp+150h] [rbp+50h] BYREF
  __int64 v99; // [rsp+158h] [rbp+58h] BYREF
  __int64 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+170h] [rbp+70h] BYREF
  int v102; // [rsp+178h] [rbp+78h]
  const wchar_t *v103; // [rsp+180h] [rbp+80h]
  int *v104; // [rsp+188h] [rbp+88h]
  int v105; // [rsp+190h] [rbp+90h]
  int *v106; // [rsp+198h] [rbp+98h]
  int v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  int v109; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v110; // [rsp+1B8h] [rbp+B8h]
  int *v111; // [rsp+1C0h] [rbp+C0h]
  int v112; // [rsp+1C8h] [rbp+C8h]
  int *v113; // [rsp+1D0h] [rbp+D0h]
  int v114; // [rsp+1D8h] [rbp+D8h]
  __int64 v115; // [rsp+1E0h] [rbp+E0h]
  int v116; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v117; // [rsp+1F0h] [rbp+F0h]
  int *v118; // [rsp+1F8h] [rbp+F8h]
  int v119; // [rsp+200h] [rbp+100h]
  int *v120; // [rsp+208h] [rbp+108h]
  int v121; // [rsp+210h] [rbp+110h]
  __int64 v122; // [rsp+218h] [rbp+118h]
  int v123; // [rsp+220h] [rbp+120h]
  const wchar_t *v124; // [rsp+228h] [rbp+128h]
  __int64 *v125; // [rsp+230h] [rbp+130h]
  int v126; // [rsp+238h] [rbp+138h]
  __int64 *v127; // [rsp+240h] [rbp+140h]
  int v128; // [rsp+248h] [rbp+148h]
  __int64 v129; // [rsp+250h] [rbp+150h]
  int v130; // [rsp+258h] [rbp+158h]
  const wchar_t *v131; // [rsp+260h] [rbp+160h]
  int *v132; // [rsp+268h] [rbp+168h]
  int v133; // [rsp+270h] [rbp+170h]
  int *v134; // [rsp+278h] [rbp+178h]
  int v135; // [rsp+280h] [rbp+180h]
  __int64 v136; // [rsp+288h] [rbp+188h]
  int v137; // [rsp+290h] [rbp+190h]
  const wchar_t *v138; // [rsp+298h] [rbp+198h]
  int *v139; // [rsp+2A0h] [rbp+1A0h]
  int v140; // [rsp+2A8h] [rbp+1A8h]
  int *v141; // [rsp+2B0h] [rbp+1B0h]
  int v142; // [rsp+2B8h] [rbp+1B8h]
  __int64 v143; // [rsp+2C0h] [rbp+1C0h]
  int v144; // [rsp+2C8h] [rbp+1C8h]
  const wchar_t *v145; // [rsp+2D0h] [rbp+1D0h]
  int *v146; // [rsp+2D8h] [rbp+1D8h]
  int v147; // [rsp+2E0h] [rbp+1E0h]
  int *v148; // [rsp+2E8h] [rbp+1E8h]
  int v149; // [rsp+2F0h] [rbp+1F0h]
  __int64 v150; // [rsp+2F8h] [rbp+1F8h]
  int v151; // [rsp+300h] [rbp+200h]
  const wchar_t *v152; // [rsp+308h] [rbp+208h]
  int *v153; // [rsp+310h] [rbp+210h]
  int v154; // [rsp+318h] [rbp+218h]
  int *v155; // [rsp+320h] [rbp+220h]
  int v156; // [rsp+328h] [rbp+228h]
  __int64 v157; // [rsp+330h] [rbp+230h]
  int v158; // [rsp+338h] [rbp+238h]
  const wchar_t *v159; // [rsp+340h] [rbp+240h]
  int *v160; // [rsp+348h] [rbp+248h]
  int v161; // [rsp+350h] [rbp+250h]
  int *v162; // [rsp+358h] [rbp+258h]
  int v163; // [rsp+360h] [rbp+260h]
  __int64 v164; // [rsp+368h] [rbp+268h]
  int v165; // [rsp+370h] [rbp+270h]
  const wchar_t *v166; // [rsp+378h] [rbp+278h]
  int *v167; // [rsp+380h] [rbp+280h]
  int v168; // [rsp+388h] [rbp+288h]
  int *v169; // [rsp+390h] [rbp+290h]
  int v170; // [rsp+398h] [rbp+298h]
  __int64 v171; // [rsp+3A0h] [rbp+2A0h]
  int v172; // [rsp+3A8h] [rbp+2A8h]
  const wchar_t *v173; // [rsp+3B0h] [rbp+2B0h]
  int *v174; // [rsp+3B8h] [rbp+2B8h]
  int v175; // [rsp+3C0h] [rbp+2C0h]
  int *v176; // [rsp+3C8h] [rbp+2C8h]
  int v177; // [rsp+3D0h] [rbp+2D0h]
  __int64 v178; // [rsp+3D8h] [rbp+2D8h]
  int v179; // [rsp+3E0h] [rbp+2E0h]
  const wchar_t *v180; // [rsp+3E8h] [rbp+2E8h]
  int *v181; // [rsp+3F0h] [rbp+2F0h]
  int v182; // [rsp+3F8h] [rbp+2F8h]
  int *v183; // [rsp+400h] [rbp+300h]
  int v184; // [rsp+408h] [rbp+308h]
  __int64 v185; // [rsp+410h] [rbp+310h]
  int v186; // [rsp+418h] [rbp+318h]
  const wchar_t *v187; // [rsp+420h] [rbp+320h]
  int *v188; // [rsp+428h] [rbp+328h]
  int v189; // [rsp+430h] [rbp+330h]
  int *v190; // [rsp+438h] [rbp+338h]
  int v191; // [rsp+440h] [rbp+340h]
  __int64 v192; // [rsp+448h] [rbp+348h]
  int v193; // [rsp+450h] [rbp+350h]
  const wchar_t *v194; // [rsp+458h] [rbp+358h]
  int *v195; // [rsp+460h] [rbp+360h]
  int v196; // [rsp+468h] [rbp+368h]
  int *v197; // [rsp+470h] [rbp+370h]
  int v198; // [rsp+478h] [rbp+378h]
  __int64 v199; // [rsp+480h] [rbp+380h]
  int v200; // [rsp+488h] [rbp+388h]
  const wchar_t *v201; // [rsp+490h] [rbp+390h]
  int *v202; // [rsp+498h] [rbp+398h]
  int v203; // [rsp+4A0h] [rbp+3A0h]
  int *v204; // [rsp+4A8h] [rbp+3A8h]
  int v205; // [rsp+4B0h] [rbp+3B0h]
  __int64 v206; // [rsp+4B8h] [rbp+3B8h]
  int v207; // [rsp+4C0h] [rbp+3C0h]
  const wchar_t *v208; // [rsp+4C8h] [rbp+3C8h]
  int *v209; // [rsp+4D0h] [rbp+3D0h]
  int v210; // [rsp+4D8h] [rbp+3D8h]
  int *v211; // [rsp+4E0h] [rbp+3E0h]
  int v212; // [rsp+4E8h] [rbp+3E8h]
  __int64 v213; // [rsp+4F0h] [rbp+3F0h]
  int v214; // [rsp+4F8h] [rbp+3F8h]
  const wchar_t *v215; // [rsp+500h] [rbp+400h]
  int *v216; // [rsp+508h] [rbp+408h]
  int v217; // [rsp+510h] [rbp+410h]
  int *v218; // [rsp+518h] [rbp+418h]
  int v219; // [rsp+520h] [rbp+420h]
  __int64 v220; // [rsp+528h] [rbp+428h]
  int v221; // [rsp+530h] [rbp+430h]
  const wchar_t *v222; // [rsp+538h] [rbp+438h]
  int *v223; // [rsp+540h] [rbp+440h]
  int v224; // [rsp+548h] [rbp+448h]
  int *v225; // [rsp+550h] [rbp+450h]
  int v226; // [rsp+558h] [rbp+458h]
  __int64 v227; // [rsp+560h] [rbp+460h]
  int v228; // [rsp+568h] [rbp+468h]
  const wchar_t *v229; // [rsp+570h] [rbp+470h]
  int *v230; // [rsp+578h] [rbp+478h]
  int v231; // [rsp+580h] [rbp+480h]
  int *v232; // [rsp+588h] [rbp+488h]
  int v233; // [rsp+590h] [rbp+490h]
  __int64 v234; // [rsp+598h] [rbp+498h]
  int v235; // [rsp+5A0h] [rbp+4A0h]
  const wchar_t *v236; // [rsp+5A8h] [rbp+4A8h]
  int *v237; // [rsp+5B0h] [rbp+4B0h]
  int v238; // [rsp+5B8h] [rbp+4B8h]
  int *v239; // [rsp+5C0h] [rbp+4C0h]
  int v240; // [rsp+5C8h] [rbp+4C8h]
  __int64 v241; // [rsp+5D0h] [rbp+4D0h]
  int v242; // [rsp+5D8h] [rbp+4D8h]
  const wchar_t *v243; // [rsp+5E0h] [rbp+4E0h]
  int *v244; // [rsp+5E8h] [rbp+4E8h]
  int v245; // [rsp+5F0h] [rbp+4F0h]
  int *v246; // [rsp+5F8h] [rbp+4F8h]
  int v247; // [rsp+600h] [rbp+500h]
  __int64 v248; // [rsp+608h] [rbp+508h]
  int v249; // [rsp+610h] [rbp+510h]
  const wchar_t *v250; // [rsp+618h] [rbp+518h]
  int *v251; // [rsp+620h] [rbp+520h]
  int v252; // [rsp+628h] [rbp+528h]
  int *v253; // [rsp+630h] [rbp+530h]
  int v254; // [rsp+638h] [rbp+538h]
  __int64 v255; // [rsp+640h] [rbp+540h]
  int v256; // [rsp+648h] [rbp+548h]
  const wchar_t *v257; // [rsp+650h] [rbp+550h]
  int *v258; // [rsp+658h] [rbp+558h]
  int v259; // [rsp+660h] [rbp+560h]
  int *v260; // [rsp+668h] [rbp+568h]
  int v261; // [rsp+670h] [rbp+570h]
  __int64 v262; // [rsp+678h] [rbp+578h]
  int v263; // [rsp+680h] [rbp+580h]
  const wchar_t *v264; // [rsp+688h] [rbp+588h]
  int *v265; // [rsp+690h] [rbp+590h]
  int v266; // [rsp+698h] [rbp+598h]
  int *v267; // [rsp+6A0h] [rbp+5A0h]
  int v268; // [rsp+6A8h] [rbp+5A8h]
  __int64 v269; // [rsp+6B0h] [rbp+5B0h]
  int v270; // [rsp+6B8h] [rbp+5B8h]
  const wchar_t *v271; // [rsp+6C0h] [rbp+5C0h]
  int *v272; // [rsp+6C8h] [rbp+5C8h]
  int v273; // [rsp+6D0h] [rbp+5D0h]
  int *v274; // [rsp+6D8h] [rbp+5D8h]
  int v275; // [rsp+6E0h] [rbp+5E0h]
  __int64 v276; // [rsp+6E8h] [rbp+5E8h]
  int v277; // [rsp+6F0h] [rbp+5F0h]
  const wchar_t *v278; // [rsp+6F8h] [rbp+5F8h]
  int *v279; // [rsp+700h] [rbp+600h]
  int v280; // [rsp+708h] [rbp+608h]
  int *v281; // [rsp+710h] [rbp+610h]
  int v282; // [rsp+718h] [rbp+618h]
  __int64 v283; // [rsp+720h] [rbp+620h]
  int v284; // [rsp+728h] [rbp+628h]
  const wchar_t *v285; // [rsp+730h] [rbp+630h]
  int *v286; // [rsp+738h] [rbp+638h]
  int v287; // [rsp+740h] [rbp+640h]
  int *v288; // [rsp+748h] [rbp+648h]
  int v289; // [rsp+750h] [rbp+650h]
  __int64 v290; // [rsp+758h] [rbp+658h]
  int v291; // [rsp+760h] [rbp+660h]
  const wchar_t *v292; // [rsp+768h] [rbp+668h]
  int *v293; // [rsp+770h] [rbp+670h]
  int v294; // [rsp+778h] [rbp+678h]
  int *v295; // [rsp+780h] [rbp+680h]
  int v296; // [rsp+788h] [rbp+688h]
  __int64 v297; // [rsp+790h] [rbp+690h]
  int v298; // [rsp+798h] [rbp+698h]
  const wchar_t *v299; // [rsp+7A0h] [rbp+6A0h]
  int *v300; // [rsp+7A8h] [rbp+6A8h]
  int v301; // [rsp+7B0h] [rbp+6B0h]
  int *v302; // [rsp+7B8h] [rbp+6B8h]
  int v303; // [rsp+7C0h] [rbp+6C0h]
  __int64 v304; // [rsp+7C8h] [rbp+6C8h]
  int v305; // [rsp+7D0h] [rbp+6D0h]
  const wchar_t *v306; // [rsp+7D8h] [rbp+6D8h]
  int *v307; // [rsp+7E0h] [rbp+6E0h]
  int v308; // [rsp+7E8h] [rbp+6E8h]
  int *v309; // [rsp+7F0h] [rbp+6F0h]
  int v310; // [rsp+7F8h] [rbp+6F8h]
  __int64 v311; // [rsp+800h] [rbp+700h]
  int v312; // [rsp+808h] [rbp+708h]
  const wchar_t *v313; // [rsp+810h] [rbp+710h]
  int *v314; // [rsp+818h] [rbp+718h]
  int v315; // [rsp+820h] [rbp+720h]
  int *v316; // [rsp+828h] [rbp+728h]
  int v317; // [rsp+830h] [rbp+730h]
  __int64 v318; // [rsp+838h] [rbp+738h]
  int v319; // [rsp+840h] [rbp+740h]
  const wchar_t *v320; // [rsp+848h] [rbp+748h]
  int *v321; // [rsp+850h] [rbp+750h]
  int v322; // [rsp+858h] [rbp+758h]
  int *v323; // [rsp+860h] [rbp+760h]
  int v324; // [rsp+868h] [rbp+768h]
  __int64 v325; // [rsp+870h] [rbp+770h]
  int v326; // [rsp+878h] [rbp+778h]
  const wchar_t *v327; // [rsp+880h] [rbp+780h]
  int *v328; // [rsp+888h] [rbp+788h]
  int v329; // [rsp+890h] [rbp+790h]
  int *v330; // [rsp+898h] [rbp+798h]
  int v331; // [rsp+8A0h] [rbp+7A0h]
  __int64 v332; // [rsp+8A8h] [rbp+7A8h]
  int v333; // [rsp+8B0h] [rbp+7B0h]
  const wchar_t *v334; // [rsp+8B8h] [rbp+7B8h]
  int *v335; // [rsp+8C0h] [rbp+7C0h]
  int v336; // [rsp+8C8h] [rbp+7C8h]
  int *v337; // [rsp+8D0h] [rbp+7D0h]
  int v338; // [rsp+8D8h] [rbp+7D8h]
  __int64 v339; // [rsp+8E0h] [rbp+7E0h]
  int v340; // [rsp+8E8h] [rbp+7E8h]
  const wchar_t *v341; // [rsp+8F0h] [rbp+7F0h]
  unsigned int *v342; // [rsp+8F8h] [rbp+7F8h]
  int v343; // [rsp+900h] [rbp+800h]
  int *v344; // [rsp+908h] [rbp+808h]
  int v345; // [rsp+910h] [rbp+810h]
  __int64 v346; // [rsp+918h] [rbp+818h]
  int v347; // [rsp+920h] [rbp+820h]
  const wchar_t *v348; // [rsp+928h] [rbp+828h]
  int *v349; // [rsp+930h] [rbp+830h]
  int v350; // [rsp+938h] [rbp+838h]
  int *v351; // [rsp+940h] [rbp+840h]
  int v352; // [rsp+948h] [rbp+848h]
  __int64 v353; // [rsp+950h] [rbp+850h]
  int v354; // [rsp+958h] [rbp+858h]
  const wchar_t *v355; // [rsp+960h] [rbp+860h]
  int *v356; // [rsp+968h] [rbp+868h]
  int v357; // [rsp+970h] [rbp+870h]
  int *v358; // [rsp+978h] [rbp+878h]
  int v359; // [rsp+980h] [rbp+880h]
  __int64 v360; // [rsp+988h] [rbp+888h]
  int v361; // [rsp+990h] [rbp+890h]
  const wchar_t *v362; // [rsp+998h] [rbp+898h]
  int *v363; // [rsp+9A0h] [rbp+8A0h]
  int v364; // [rsp+9A8h] [rbp+8A8h]
  int *v365; // [rsp+9B0h] [rbp+8B0h]
  int v366; // [rsp+9B8h] [rbp+8B8h]
  __int64 v367; // [rsp+9C0h] [rbp+8C0h]
  int v368; // [rsp+9C8h] [rbp+8C8h]
  const wchar_t *v369; // [rsp+9D0h] [rbp+8D0h]
  int *v370; // [rsp+9D8h] [rbp+8D8h]
  int v371; // [rsp+9E0h] [rbp+8E0h]
  int *v372; // [rsp+9E8h] [rbp+8E8h]
  int v373; // [rsp+9F0h] [rbp+8F0h]
  __int64 v374; // [rsp+9F8h] [rbp+8F8h]
  int v375; // [rsp+A00h] [rbp+900h]
  _BYTE v376[40]; // [rsp+A08h] [rbp+908h] BYREF

  v99 = 16LL;
  v62 = 0;
  v98 = 1395864371LL;
  v100 = 1395864371LL;
  v51 = 0;
  v63 = 0;
  v68 = 7000;
  v39 = 7000;
  v95 = 30000;
  v48 = 30000;
  v96 = 5000;
  v49 = 5000;
  v52 = 0;
  v67 = 0;
  v53 = 0;
  v65 = 0;
  v33 = 0;
  v29 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v64 = 1;
  v31 = 1;
  v66 = 0;
  v32 = 0;
  v69 = 0;
  v34 = 0;
  v70 = 0;
  v35 = 0;
  v71 = 0;
  v36 = 0;
  v72 = 0;
  v37 = 0;
  v73 = 0;
  v38 = 0;
  v74 = 1;
  v40 = 1;
  v75 = 0;
  v59 = 0;
  v76 = 0;
  v41 = 0;
  v78 = 0;
  v42 = 0;
  v77 = 0;
  v43 = 0;
  v79 = 0;
  v60 = 0;
  v80 = 1;
  v54 = 1;
  v81 = 0;
  v55 = 0;
  v83 = 0;
  v82 = 0;
  v84 = 0;
  v57 = 0;
  v86 = 0;
  v85 = 0;
  v87 = 0;
  v58 = 0;
  v88 = 0;
  v56 = 0;
  v89 = 0;
  v44 = 0;
  v90 = 0;
  v45 = 0;
  v91 = 0;
  v46 = 0;
  v92 = 0;
  v61 = 0;
  v93 = 1;
  v28 = 1;
  v94 = 0;
  v47 = 0;
  v101 = 0LL;
  v102 = 288;
  v105 = 67108868;
  v107 = 4;
  v97 = 500;
  v50 = 500;
  v108 = 0LL;
  v103 = L"ForceDirectFlip";
  v104 = &v51;
  v106 = &v62;
  v110 = L"DisableOverlays";
  v111 = &v52;
  v113 = &v63;
  v117 = L"EnableOfferReclaimOnDriver";
  v118 = &v31;
  v120 = &v64;
  v124 = L"LeanMemoryLimit";
  v125 = &v99;
  v127 = &v98;
  v131 = L"ForceEnableDxgMms2";
  v132 = &v33;
  v134 = &v65;
  v138 = L"ContextNoPatchMode";
  v139 = &v32;
  v141 = &v66;
  v146 = &v26;
  v148 = &v29;
  v109 = 288;
  v112 = 67108868;
  v114 = 4;
  v115 = 0LL;
  v116 = 288;
  v119 = 67108868;
  v121 = 4;
  v122 = 0LL;
  v123 = 288;
  v126 = 184549387;
  v128 = 8;
  v129 = 0LL;
  v130 = 288;
  v133 = 67108868;
  v135 = 4;
  v136 = 0LL;
  v137 = 288;
  v140 = 67108868;
  v142 = 4;
  v143 = 0LL;
  v144 = 288;
  v145 = L"ForceToMapGpuVa";
  v147 = 67108868;
  v149 = 4;
  v150 = 0LL;
  v151 = 288;
  v152 = L"ForceAccessedPhysically";
  v153 = &v27;
  v155 = &v30;
  v159 = L"Force32BitFences";
  v160 = &v53;
  v162 = &v67;
  v166 = L"InitialPagingQueueFenceValue";
  v167 = &v39;
  v169 = &v68;
  v173 = L"ForceInitPagingProcessVaSpace";
  v174 = &v34;
  v176 = &v69;
  v180 = L"DisableGdiContextGpuVa";
  v181 = &v35;
  v183 = &v70;
  v187 = L"DisablePagingContextGpuVa";
  v188 = &v36;
  v190 = &v71;
  v194 = L"DisableMonitoredFenceGpuVa";
  v195 = &v37;
  v197 = &v72;
  v201 = L"ForceExplicitResidencyNotification";
  v202 = &v38;
  v204 = &v73;
  v209 = &v26;
  v154 = 67108868;
  v156 = 4;
  v157 = 0LL;
  v158 = 288;
  v161 = 67108868;
  v163 = 4;
  v164 = 0LL;
  v165 = 288;
  v168 = 67108868;
  v170 = 4;
  v171 = 0LL;
  v172 = 288;
  v175 = 67108868;
  v177 = 4;
  v178 = 0LL;
  v179 = 288;
  v182 = 67108868;
  v184 = 4;
  v185 = 0LL;
  v186 = 288;
  v189 = 67108868;
  v191 = 4;
  v192 = 0LL;
  v193 = 288;
  v196 = 67108868;
  v198 = 4;
  v199 = 0LL;
  v200 = 288;
  v203 = 67108868;
  v205 = 4;
  v206 = 0LL;
  v207 = 288;
  v208 = L"ForceToMapGpuVa";
  v210 = 67108868;
  v212 = 4;
  v211 = &v29;
  v216 = &v27;
  v218 = &v30;
  v222 = L"DriverManagesResidencyOverride";
  v223 = &v40;
  v225 = &v74;
  v229 = L"GdiPhysicalAdapterIndex";
  v230 = &v59;
  v232 = &v75;
  v236 = L"ForceReplicateGdiContent";
  v237 = &v41;
  v239 = &v76;
  v243 = L"EnableTimedCalls";
  v244 = &v43;
  v246 = &v77;
  v250 = L"CreateGdiPrimaryOnSlaveGpu";
  v251 = &v42;
  v253 = &v78;
  v257 = L"ForceSurpriseRemovalSupport";
  v258 = &v60;
  v260 = &v79;
  v264 = L"EnableDecodeMPO";
  v265 = &v54;
  v267 = &v80;
  v213 = 0LL;
  v214 = 288;
  v215 = L"ForceAccessedPhysically";
  v217 = 67108868;
  v219 = 4;
  v220 = 0LL;
  v221 = 288;
  v224 = 67108868;
  v226 = 4;
  v227 = 0LL;
  v228 = 288;
  v231 = 67108868;
  v233 = 4;
  v234 = 0LL;
  v235 = 288;
  v238 = 67108868;
  v240 = 4;
  v241 = 0LL;
  v242 = 288;
  v245 = 67108868;
  v247 = 4;
  v248 = 0LL;
  v249 = 288;
  v252 = 67108868;
  v254 = 4;
  v255 = 0LL;
  v256 = 288;
  v259 = 67108868;
  v261 = 4;
  v262 = 0LL;
  v263 = 288;
  v266 = 67108868;
  v268 = 4;
  v271 = L"DisableBadDriverCheckForHwProtection";
  v272 = &v55;
  v274 = &v81;
  v278 = L"ForceSecondaryMPOSupport";
  v279 = &v82;
  v281 = &v83;
  v285 = L"ForceSecondaryIFlipSupport";
  v286 = &v57;
  v288 = &v84;
  v292 = L"EnablePanelFitterSupport";
  v293 = &v85;
  v295 = &v86;
  v299 = L"EnableMultiPlaneOverlay3DDIs";
  v300 = &v58;
  v302 = &v87;
  v306 = L"DisableSecondaryIFlipSupport";
  v307 = &v56;
  v309 = &v88;
  v313 = L"EnableWDDM23Synchronization";
  v314 = &v44;
  v316 = &v89;
  v320 = L"DisableVersionMismatchCheck";
  v321 = &v45;
  v323 = &v90;
  v269 = 0LL;
  v270 = 288;
  v273 = 67108868;
  v275 = 4;
  v276 = 0LL;
  v277 = 288;
  v280 = 67108868;
  v282 = 4;
  v283 = 0LL;
  v284 = 288;
  v287 = 67108868;
  v289 = 4;
  v290 = 0LL;
  v291 = 288;
  v294 = 67108868;
  v296 = 4;
  v297 = 0LL;
  v298 = 288;
  v301 = 67108868;
  v303 = 4;
  v304 = 0LL;
  v305 = 288;
  v308 = 67108868;
  v310 = 4;
  v311 = 0LL;
  v312 = 288;
  v315 = 67108868;
  v317 = 4;
  v318 = 0LL;
  v319 = 288;
  v322 = 67108868;
  v324 = 4;
  v331 = 4;
  v327 = L"IoMmuFlags";
  v338 = 4;
  v328 = &v46;
  v345 = 4;
  v330 = &v91;
  v334 = L"DisableMultiSourceMPOCheck";
  v335 = &v61;
  v337 = &v92;
  v341 = L"DriverStoreCopyMode";
  v342 = &v28;
  v344 = &v93;
  v348 = L"ForceVariableRefresh";
  v349 = &v47;
  v351 = &v94;
  v355 = L"DeadlockTimeout";
  v356 = &v48;
  v358 = &v95;
  v362 = L"DeadlockPulse";
  v363 = &v49;
  v365 = &v96;
  v369 = L"DeadlockPulseTolerance";
  v370 = &v50;
  v352 = 4;
  v359 = 4;
  v366 = 4;
  v373 = 4;
  v372 = &v97;
  v325 = 0LL;
  v326 = 288;
  v329 = 67108868;
  v332 = 0LL;
  v333 = 288;
  v336 = 67108868;
  v339 = 0LL;
  v340 = 288;
  v343 = 67108868;
  v346 = 0LL;
  v347 = 288;
  v350 = 67108868;
  v353 = 0LL;
  v354 = 288;
  v357 = 67108868;
  v360 = 0LL;
  v361 = 288;
  v364 = 67108868;
  v367 = 0LL;
  v368 = 288;
  v371 = 67108868;
  v374 = 0LL;
  v375 = 0;
  memset(v376, 0, sizeof(v376));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v101, 0LL, 0LL);
  v4 = v33 == 0;
  *((_BYTE *)this + 2469) = v31 != 0;
  *((_DWORD *)this + 620) = v32;
  *((_QWORD *)this + 309) = v100;
  v5 = !v4;
  v4 = v26 == 0;
  *((_BYTE *)this + 2484) = v5;
  v6 = !v4;
  v4 = v27 == 0;
  *((_BYTE *)this + 2485) = v6;
  v7 = !v4;
  v4 = v34 == 0;
  *((_BYTE *)this + 2486) = v7;
  v8 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2488) = v8;
  v9 = !v4;
  v4 = v36 == 0;
  *((_BYTE *)this + 2489) = v9;
  v10 = !v4;
  v4 = v37 == 0;
  *((_BYTE *)this + 2490) = v10;
  v11 = !v4;
  v4 = v38 == 0;
  *((_BYTE *)this + 2491) = v11;
  v12 = !v4;
  v4 = v40 == 0;
  *((_BYTE *)this + 2487) = v12;
  *((_DWORD *)this + 631) = v39;
  *((_BYTE *)this + 2492) = !v4;
  if ( v41 || (v13 = 0, (*((_DWORD *)this + 479) & 0x100) != 0) )
    v13 = 1;
  v4 = v42 == 0;
  *((_BYTE *)this + 2470) = v13;
  v14 = !v4;
  v4 = v43 == 0;
  *((_BYTE *)this + 2471) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v44 || (v15 = 1, *((int *)this + 546) < 8704) )
    v15 = 0;
  v4 = v45 == 0;
  *((_BYTE *)this + 2501) = v15;
  *((_BYTE *)this + 2507) = !v4;
  *((_DWORD *)this + 628) = v46;
  v16 = 2;
  if ( v28 < 2 )
    v16 = v28;
  v4 = v47 == 0;
  *((_DWORD *)this + 629) = v16;
  *((_BYTE *)this + 2520) = !v4;
  *((_DWORD *)this + 1088) = v48;
  *((_DWORD *)this + 1089) = v49;
  *((_DWORD *)this + 1090) = v50;
  if ( v51 )
    *((_BYTE *)this + 2387) = 1;
  if ( v52 )
    *((_BYTE *)this + 2388) = 0;
  if ( v53 )
    *((_DWORD *)this + 478) |= 0x20u;
  if ( *((_BYTE *)this + 2388) )
  {
    if ( *((_BYTE *)this + 2466) )
      *((_DWORD *)this + 598) = 2;
  }
  else
  {
    *((_DWORD *)this + 598) = 1;
  }
  v17 = *((_BYTE *)this + 2469);
  if ( *((int *)this + 546) < 4608 )
    v17 = 0;
  *((_BYTE *)this + 2469) = v17;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2492) = 0;
  if ( !v54 || (v21 = 1, !v18) )
    v21 = 0;
  v4 = v55 == 0;
  *((_BYTE *)this + 2493) = v21;
  *((_BYTE *)this + 2496) = 0;
  *((_BYTE *)this + 2494) = !v4;
  if ( !v56 && (*((_DWORD *)this + 477) & 0x10) != 0 )
  {
    if ( v19 >= 8448 )
    {
      *((_BYTE *)this + 2496) = 1;
    }
    else if ( v19 >= 0x2000 )
    {
      *((_BYTE *)this + 2496) = v57 != 0;
    }
  }
  v4 = *((_QWORD *)this + 63) == 0LL;
  v22 = 0;
  *((_BYTE *)this + 2498) = 0;
  *((_BYTE *)this + 2505) = !v4;
  if ( *((_QWORD *)this + 112) )
  {
    v22 = v19 >= v20 || v19 >= 8448 && ((*((_DWORD *)this + 77) & 0x200) != 0 || v58);
    *((_BYTE *)this + 2498) = v22;
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
      if ( !*((_QWORD *)this + 92) && !*((_QWORD *)this + 108) )
      {
        *((_BYTE *)this + 2388) = 0;
        v24 = 0;
      }
    }
  }
  *((_BYTE *)this + 2499) = 0;
  if ( !v23 )
    goto LABEL_27;
  if ( v19 >= v20 && (*((_QWORD *)this + 139) || *((_QWORD *)this + 140)) )
    *((_BYTE *)this + 2499) = 1;
  if ( !*((_DWORD *)this + 605) )
LABEL_27:
    *((_DWORD *)this + 605) = 1;
  *((_BYTE *)this + 2497) = v23;
  if ( !v23 || (v25 = 1, !v24) )
    v25 = 0;
  *((_BYTE *)this + 2495) = v25;
  if ( *((_DWORD *)this + 64) > 1u )
    *((_DWORD *)this + 645) = v59;
  if ( v60 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2500) = v61 != 0;
}
