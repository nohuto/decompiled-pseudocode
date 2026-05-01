/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180021600
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800214A0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180007660 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180007690 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180007728 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180007758 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180034B40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18006FEE4 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800703B8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2)
{
  bool v3; // zf
  void **v4; // rbx
  char *v5; // rbx
  char *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdi
  int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  void **v14; // rcx
  _QWORD *v15; // rax
  void *v16; // rcx
  char v17; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+59h] [rbp-AFh] BYREF
  char v19; // [rsp+5Ah] [rbp-AEh] BYREF
  char v20; // [rsp+5Bh] [rbp-ADh] BYREF
  void *Block[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  int v24; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  __int16 v27; // [rsp+ACh] [rbp-5Ch]
  int v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  __int16 v31; // [rsp+C4h] [rbp-44h]
  int v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D8h] [rbp-30h]
  __int16 v35; // [rsp+DCh] [rbp-2Ch]
  int v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  __int16 v39; // [rsp+F4h] [rbp-14h]
  int v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+108h] [rbp+0h]
  __int16 v43; // [rsp+10Ch] [rbp+4h]
  int v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  int v46; // [rsp+120h] [rbp+18h]
  __int16 v47; // [rsp+124h] [rbp+1Ch]
  int v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  int v50; // [rsp+138h] [rbp+30h]
  __int16 v51; // [rsp+13Ch] [rbp+34h]
  int v52; // [rsp+140h] [rbp+38h]
  __int64 v53; // [rsp+148h] [rbp+40h]
  int v54; // [rsp+150h] [rbp+48h]
  __int16 v55; // [rsp+154h] [rbp+4Ch]
  int v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int v58; // [rsp+168h] [rbp+60h]
  __int16 v59; // [rsp+16Ch] [rbp+64h]
  int v60; // [rsp+170h] [rbp+68h]
  __int64 v61; // [rsp+178h] [rbp+70h]
  int v62; // [rsp+180h] [rbp+78h]
  __int16 v63; // [rsp+184h] [rbp+7Ch]
  int v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int v66; // [rsp+198h] [rbp+90h]
  __int16 v67; // [rsp+19Ch] [rbp+94h]
  int v68; // [rsp+1A0h] [rbp+98h]
  __int64 v69; // [rsp+1A8h] [rbp+A0h]
  int v70; // [rsp+1B0h] [rbp+A8h]
  __int16 v71; // [rsp+1B4h] [rbp+ACh]
  int v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  int v74; // [rsp+1C8h] [rbp+C0h]
  __int16 v75; // [rsp+1CCh] [rbp+C4h]
  int v76; // [rsp+1D0h] [rbp+C8h]
  __int64 v77; // [rsp+1D8h] [rbp+D0h]
  int v78; // [rsp+1E0h] [rbp+D8h]
  __int16 v79; // [rsp+1E4h] [rbp+DCh]
  int v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  int v82; // [rsp+1F8h] [rbp+F0h]
  __int16 v83; // [rsp+1FCh] [rbp+F4h]
  int v84; // [rsp+200h] [rbp+F8h]
  __int64 v85; // [rsp+208h] [rbp+100h]
  int v86; // [rsp+210h] [rbp+108h]
  __int16 v87; // [rsp+214h] [rbp+10Ch]
  int v88; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  int v90; // [rsp+228h] [rbp+120h]
  __int16 v91; // [rsp+22Ch] [rbp+124h]
  int v92; // [rsp+230h] [rbp+128h]
  __int64 v93; // [rsp+238h] [rbp+130h]
  int v94; // [rsp+240h] [rbp+138h]
  __int16 v95; // [rsp+244h] [rbp+13Ch]
  int v96; // [rsp+248h] [rbp+140h]
  __int64 v97; // [rsp+250h] [rbp+148h]
  int v98; // [rsp+258h] [rbp+150h]
  __int16 v99; // [rsp+25Ch] [rbp+154h]
  int v100; // [rsp+260h] [rbp+158h]
  __int64 v101; // [rsp+268h] [rbp+160h]
  int v102; // [rsp+270h] [rbp+168h]
  __int16 v103; // [rsp+274h] [rbp+16Ch]
  int v104; // [rsp+278h] [rbp+170h]
  __int64 v105; // [rsp+280h] [rbp+178h]
  int v106; // [rsp+288h] [rbp+180h]
  __int16 v107; // [rsp+28Ch] [rbp+184h]
  int v108; // [rsp+290h] [rbp+188h]
  __int64 v109; // [rsp+298h] [rbp+190h]
  int v110; // [rsp+2A0h] [rbp+198h]
  __int16 v111; // [rsp+2A4h] [rbp+19Ch]
  int v112; // [rsp+2A8h] [rbp+1A0h]
  __int64 v113; // [rsp+2B0h] [rbp+1A8h]
  int v114; // [rsp+2B8h] [rbp+1B0h]
  __int16 v115; // [rsp+2BCh] [rbp+1B4h]
  int v116; // [rsp+2C0h] [rbp+1B8h]
  __int64 v117; // [rsp+2C8h] [rbp+1C0h]
  int v118; // [rsp+2D0h] [rbp+1C8h]
  __int16 v119; // [rsp+2D4h] [rbp+1CCh]
  int v120; // [rsp+2D8h] [rbp+1D0h]
  __int64 v121; // [rsp+2E0h] [rbp+1D8h]
  int v122; // [rsp+2E8h] [rbp+1E0h]
  __int16 v123; // [rsp+2ECh] [rbp+1E4h]
  int v124; // [rsp+2F0h] [rbp+1E8h]
  __int64 v125; // [rsp+2F8h] [rbp+1F0h]
  int v126; // [rsp+300h] [rbp+1F8h]
  __int16 v127; // [rsp+304h] [rbp+1FCh]
  int v128; // [rsp+308h] [rbp+200h]
  __int64 v129; // [rsp+310h] [rbp+208h]
  int v130; // [rsp+318h] [rbp+210h]
  __int16 v131; // [rsp+31Ch] [rbp+214h]
  int v132; // [rsp+320h] [rbp+218h]
  __int64 v133; // [rsp+328h] [rbp+220h]
  int v134; // [rsp+330h] [rbp+228h]
  __int16 v135; // [rsp+334h] [rbp+22Ch]
  int v136; // [rsp+338h] [rbp+230h]
  __int64 v137; // [rsp+340h] [rbp+238h]
  int v138; // [rsp+348h] [rbp+240h]
  __int16 v139; // [rsp+34Ch] [rbp+244h]
  int v140; // [rsp+350h] [rbp+248h]
  __int64 v141; // [rsp+358h] [rbp+250h]
  int v142; // [rsp+360h] [rbp+258h]
  __int16 v143; // [rsp+364h] [rbp+25Ch]
  int v144; // [rsp+368h] [rbp+260h]
  __int64 v145; // [rsp+370h] [rbp+268h]
  int v146; // [rsp+378h] [rbp+270h]
  __int16 v147; // [rsp+37Ch] [rbp+274h]
  int v148; // [rsp+380h] [rbp+278h]
  __int64 v149; // [rsp+388h] [rbp+280h]
  int v150; // [rsp+390h] [rbp+288h]
  __int16 v151; // [rsp+394h] [rbp+28Ch]
  int v152; // [rsp+398h] [rbp+290h]
  __int64 v153; // [rsp+3A0h] [rbp+298h]
  int v154; // [rsp+3A8h] [rbp+2A0h]
  __int16 v155; // [rsp+3ACh] [rbp+2A4h]
  int v156; // [rsp+3B0h] [rbp+2A8h]
  __int64 v157; // [rsp+3B8h] [rbp+2B0h]
  int v158; // [rsp+3C0h] [rbp+2B8h]
  __int16 v159; // [rsp+3C4h] [rbp+2BCh]
  int v160; // [rsp+3C8h] [rbp+2C0h]
  __int64 v161; // [rsp+3D0h] [rbp+2C8h]
  int v162; // [rsp+3D8h] [rbp+2D0h]
  __int16 v163; // [rsp+3DCh] [rbp+2D4h]
  int v164; // [rsp+3E0h] [rbp+2D8h]
  __int64 v165; // [rsp+3E8h] [rbp+2E0h]
  int v166; // [rsp+3F0h] [rbp+2E8h]
  __int16 v167; // [rsp+3F4h] [rbp+2ECh]
  int v168; // [rsp+3F8h] [rbp+2F0h]
  __int64 v169; // [rsp+400h] [rbp+2F8h]
  int v170; // [rsp+408h] [rbp+300h]
  __int16 v171; // [rsp+40Ch] [rbp+304h]
  int v172; // [rsp+410h] [rbp+308h]
  __int64 v173; // [rsp+418h] [rbp+310h]
  int v174; // [rsp+420h] [rbp+318h]
  __int16 v175; // [rsp+424h] [rbp+31Ch]
  int v176; // [rsp+428h] [rbp+320h]
  __int64 v177; // [rsp+430h] [rbp+328h]
  int v178; // [rsp+438h] [rbp+330h]
  __int16 v179; // [rsp+43Ch] [rbp+334h]
  int v180; // [rsp+440h] [rbp+338h]
  __int64 v181; // [rsp+448h] [rbp+340h]
  int v182; // [rsp+450h] [rbp+348h]
  __int16 v183; // [rsp+454h] [rbp+34Ch]
  int v184; // [rsp+458h] [rbp+350h]
  __int64 v185; // [rsp+460h] [rbp+358h]
  int v186; // [rsp+468h] [rbp+360h]
  __int16 v187; // [rsp+46Ch] [rbp+364h]
  int v188; // [rsp+470h] [rbp+368h]
  __int64 v189; // [rsp+478h] [rbp+370h]
  int v190; // [rsp+480h] [rbp+378h]
  __int16 v191; // [rsp+484h] [rbp+37Ch]
  int v192; // [rsp+488h] [rbp+380h]
  __int64 v193; // [rsp+490h] [rbp+388h]
  int v194; // [rsp+498h] [rbp+390h]
  __int16 v195; // [rsp+49Ch] [rbp+394h]
  int v196; // [rsp+4A0h] [rbp+398h]
  __int64 v197; // [rsp+4A8h] [rbp+3A0h]
  int v198; // [rsp+4B0h] [rbp+3A8h]
  __int16 v199; // [rsp+4B4h] [rbp+3ACh]
  int v200; // [rsp+4B8h] [rbp+3B0h]
  __int64 v201; // [rsp+4C0h] [rbp+3B8h]
  int v202; // [rsp+4C8h] [rbp+3C0h]
  __int16 v203; // [rsp+4CCh] [rbp+3C4h]
  int v204; // [rsp+4D0h] [rbp+3C8h]
  __int64 v205; // [rsp+4D8h] [rbp+3D0h]
  int v206; // [rsp+4E0h] [rbp+3D8h]
  __int16 v207; // [rsp+4E4h] [rbp+3DCh]
  int v208; // [rsp+4E8h] [rbp+3E0h]
  __int64 v209; // [rsp+4F0h] [rbp+3E8h]
  int v210; // [rsp+4F8h] [rbp+3F0h]
  __int16 v211; // [rsp+4FCh] [rbp+3F4h]

  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  v24 = -1;
  v25 = 0LL;
  v26 = 101;
  v27 = 0;
  v28 = -1;
  v29 = 0LL;
  v30 = 101;
  v31 = 0;
  v32 = -1;
  v33 = 0LL;
  v34 = 101;
  v35 = 0;
  v36 = -1;
  v37 = 0LL;
  v38 = 101;
  v39 = 0;
  v40 = -1;
  v41 = 0LL;
  v42 = 101;
  v43 = 0;
  v44 = -1;
  v45 = 0LL;
  v46 = 101;
  v47 = 0;
  v48 = -1;
  v49 = 0LL;
  v50 = 101;
  v51 = 0;
  v52 = -1;
  v53 = 0LL;
  v54 = 101;
  v55 = 0;
  v56 = -1;
  v57 = 0LL;
  v58 = 101;
  v59 = 0;
  v60 = -1;
  v61 = 0LL;
  v62 = 101;
  v63 = 0;
  v64 = -1;
  v65 = 0LL;
  v66 = 101;
  v67 = 0;
  v68 = -1;
  v69 = 0LL;
  v70 = 101;
  v71 = 0;
  v72 = -1;
  v73 = 0LL;
  v74 = 101;
  v75 = 0;
  v76 = -1;
  v77 = 0LL;
  v78 = 101;
  v79 = 0;
  v80 = -1;
  v81 = 0LL;
  v82 = 101;
  v83 = 0;
  v84 = -1;
  v85 = 0LL;
  v86 = 101;
  v87 = 0;
  v88 = -1;
  v89 = 0LL;
  v90 = 101;
  v91 = 0;
  v92 = -1;
  v93 = 0LL;
  v94 = 101;
  v95 = 0;
  v96 = -1;
  v97 = 0LL;
  v98 = 101;
  v99 = 0;
  v100 = -1;
  v101 = 0LL;
  v102 = 101;
  v103 = 0;
  v104 = -1;
  v105 = 0LL;
  v106 = 101;
  v107 = 0;
  v108 = -1;
  v109 = 0LL;
  v110 = 101;
  v111 = 0;
  v112 = -1;
  v113 = 0LL;
  v114 = 101;
  v115 = 0;
  v116 = -1;
  v117 = 0LL;
  v118 = 101;
  v119 = 0;
  v120 = -1;
  v121 = 0LL;
  v122 = 101;
  v123 = 0;
  v124 = -1;
  v125 = 0LL;
  v126 = 101;
  v127 = 0;
  v128 = -1;
  v129 = 0LL;
  v130 = 101;
  v131 = 0;
  v132 = -1;
  v133 = 0LL;
  v134 = 101;
  v135 = 0;
  v136 = -1;
  v137 = 0LL;
  v138 = 101;
  v139 = 0;
  v140 = -1;
  v141 = 0LL;
  v142 = 101;
  v143 = 0;
  v144 = -1;
  v145 = 0LL;
  v146 = 101;
  v147 = 0;
  v148 = -1;
  v149 = 0LL;
  v150 = 101;
  v151 = 0;
  v152 = -1;
  v153 = 0LL;
  v154 = 101;
  v155 = 0;
  v156 = -1;
  v157 = 0LL;
  v158 = 101;
  v159 = 0;
  v160 = -1;
  v161 = 0LL;
  v162 = 101;
  v163 = 0;
  v164 = -1;
  v165 = 0LL;
  v166 = 101;
  v167 = 0;
  v168 = -1;
  v169 = 0LL;
  v170 = 101;
  v171 = 0;
  v172 = -1;
  v173 = 0LL;
  v174 = 101;
  v175 = 0;
  v176 = -1;
  v3 = *((_DWORD *)this + 4) == 1;
  v177 = 0LL;
  v178 = 101;
  v179 = 0;
  v180 = -1;
  v181 = 0LL;
  v182 = 101;
  v183 = 0;
  v184 = -1;
  v185 = 0LL;
  v186 = 101;
  v187 = 0;
  v188 = -1;
  v189 = 0LL;
  v190 = 101;
  v191 = 0;
  v192 = -1;
  v193 = 0LL;
  v194 = 101;
  v195 = 0;
  v196 = -1;
  v197 = 0LL;
  v198 = 101;
  v199 = 0;
  v200 = -1;
  v201 = 0LL;
  v202 = 101;
  v203 = 0;
  v204 = -1;
  v205 = 0LL;
  v206 = 101;
  v207 = 0;
  v208 = -1;
  v209 = 0LL;
  v210 = 101;
  v211 = 0;
  if ( v3 )
  {
    RmpPartitionTableActOnActivePartitions(
      (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 312LL),
      a2,
      (int (*)(struct _RM_PARTITION *, void *))ExecutionModel::ResourceSet::ProcessPendingRequestList,
      0LL);
    v4 = (void **)Block[0];
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 5);
    v6 = (char *)this + 40;
    while ( v5 != v6 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        &v23,
        *((_QWORD *)v5 + 2));
      v7 = v23;
      if ( *(_DWORD *)(v23 + 1280) == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(Block, v23) < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        goto LABEL_24;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v5 = *(char **)v5;
    }
    v4 = (void **)Block[0];
    if ( Block[0] == Block )
      goto LABEL_3;
    while ( v4 != Block )
    {
      v8 = (__int64)v4[2];
      v22[0] = v22;
      v9 = &v24;
      v22[2] = 0LL;
      v22[1] = v22;
      v10 = 8LL;
      v11 = v8 + 144;
      do
      {
        v9 += 32;
        v12 = *(_OWORD *)v11;
        v11 += 128LL;
        *((_OWORD *)v9 - 8) = v12;
        *((_OWORD *)v9 - 7) = *(_OWORD *)(v11 - 112);
        *((_OWORD *)v9 - 6) = *(_OWORD *)(v11 - 96);
        *((_OWORD *)v9 - 5) = *(_OWORD *)(v11 - 80);
        *((_OWORD *)v9 - 4) = *(_OWORD *)(v11 - 64);
        *((_OWORD *)v9 - 3) = *(_OWORD *)(v11 - 48);
        *((_OWORD *)v9 - 2) = *(_OWORD *)(v11 - 32);
        *((_OWORD *)v9 - 1) = *(_OWORD *)(v11 - 16);
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v9 = *(_OWORD *)v11;
      *((_OWORD *)v9 + 1) = *(_OWORD *)(v11 + 16);
      *((_OWORD *)v9 + 2) = *(_OWORD *)(v11 + 32);
      *((_OWORD *)v9 + 3) = *(_OWORD *)(v11 + 48);
      *((_OWORD *)v9 + 4) = *(_OWORD *)(v11 + 64);
      *((_OWORD *)v9 + 5) = *(_OWORD *)(v11 + 80);
      *((_QWORD *)v9 + 12) = *(_QWORD *)(v11 + 96);
      if ( (int)ExecutionModel::BaseResourceSet::CheckResourceAvailability(
                  (__int64)this,
                  47LL,
                  (__int64)&v24,
                  *(unsigned int *)(v8 + 8),
                  *(_DWORD *)(v8 + 1288),
                  1,
                  &v18,
                  &v17) < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v22);
        break;
      }
      if ( v17 )
      {
        if ( v18 )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v13, v22);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            (__int64)this,
            1,
            0x2Fu,
            &v24,
            *(_DWORD *)(v8 + 8),
            1,
            &v20,
            &v19,
            0LL,
            v8);
          v3 = (*(_BYTE *)(v8 + 1352) & 2) == 0;
          *(_DWORD *)(v8 + 1280) = 2;
          if ( v3 )
            ExecutionModel::ExternalResourceSet::QueueMessage(v8, 0LL);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v22);
      v4 = (void **)*v4;
    }
LABEL_24:
    v4 = (void **)Block[0];
  }
LABEL_3:
  while ( v4 != Block )
  {
    v14 = (void **)v4[1];
    v15 = *v4;
    *v14 = *v4;
    v15[1] = v14;
    v16 = v4[2];
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
    operator delete(v4);
    v4 = (void **)Block[0];
  }
}
