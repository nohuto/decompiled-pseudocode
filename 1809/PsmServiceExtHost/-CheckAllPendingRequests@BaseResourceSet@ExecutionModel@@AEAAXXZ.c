/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001F550
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F3F0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180002F4C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180002F7C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180003014 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003044 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180006BEC (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001E540 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18003E0A0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800632C8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2)
{
  bool v3; // zf
  void **v4; // rbx
  char *v5; // r14
  char *i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void **v16; // rcx
  _QWORD *v17; // rax
  void *v18; // rcx
  char v19; // [rsp+58h] [rbp-B0h] BYREF
  char v20; // [rsp+59h] [rbp-AFh] BYREF
  char v21; // [rsp+5Ah] [rbp-AEh] BYREF
  char v22; // [rsp+5Bh] [rbp-ADh] BYREF
  void *Block[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v24[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  int v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A8h] [rbp-60h]
  __int16 v29; // [rsp+ACh] [rbp-5Ch]
  int v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+C0h] [rbp-48h]
  __int16 v33; // [rsp+C4h] [rbp-44h]
  int v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int v36; // [rsp+D8h] [rbp-30h]
  __int16 v37; // [rsp+DCh] [rbp-2Ch]
  int v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  __int16 v41; // [rsp+F4h] [rbp-14h]
  int v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+108h] [rbp+0h]
  __int16 v45; // [rsp+10Ch] [rbp+4h]
  int v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  __int16 v49; // [rsp+124h] [rbp+1Ch]
  int v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int v52; // [rsp+138h] [rbp+30h]
  __int16 v53; // [rsp+13Ch] [rbp+34h]
  int v54; // [rsp+140h] [rbp+38h]
  __int64 v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+150h] [rbp+48h]
  __int16 v57; // [rsp+154h] [rbp+4Ch]
  int v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+168h] [rbp+60h]
  __int16 v61; // [rsp+16Ch] [rbp+64h]
  int v62; // [rsp+170h] [rbp+68h]
  __int64 v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+180h] [rbp+78h]
  __int16 v65; // [rsp+184h] [rbp+7Ch]
  int v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int v68; // [rsp+198h] [rbp+90h]
  __int16 v69; // [rsp+19Ch] [rbp+94h]
  int v70; // [rsp+1A0h] [rbp+98h]
  __int64 v71; // [rsp+1A8h] [rbp+A0h]
  int v72; // [rsp+1B0h] [rbp+A8h]
  __int16 v73; // [rsp+1B4h] [rbp+ACh]
  int v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  int v76; // [rsp+1C8h] [rbp+C0h]
  __int16 v77; // [rsp+1CCh] [rbp+C4h]
  int v78; // [rsp+1D0h] [rbp+C8h]
  __int64 v79; // [rsp+1D8h] [rbp+D0h]
  int v80; // [rsp+1E0h] [rbp+D8h]
  __int16 v81; // [rsp+1E4h] [rbp+DCh]
  int v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  int v84; // [rsp+1F8h] [rbp+F0h]
  __int16 v85; // [rsp+1FCh] [rbp+F4h]
  int v86; // [rsp+200h] [rbp+F8h]
  __int64 v87; // [rsp+208h] [rbp+100h]
  int v88; // [rsp+210h] [rbp+108h]
  __int16 v89; // [rsp+214h] [rbp+10Ch]
  int v90; // [rsp+218h] [rbp+110h]
  __int64 v91; // [rsp+220h] [rbp+118h]
  int v92; // [rsp+228h] [rbp+120h]
  __int16 v93; // [rsp+22Ch] [rbp+124h]
  int v94; // [rsp+230h] [rbp+128h]
  __int64 v95; // [rsp+238h] [rbp+130h]
  int v96; // [rsp+240h] [rbp+138h]
  __int16 v97; // [rsp+244h] [rbp+13Ch]
  int v98; // [rsp+248h] [rbp+140h]
  __int64 v99; // [rsp+250h] [rbp+148h]
  int v100; // [rsp+258h] [rbp+150h]
  __int16 v101; // [rsp+25Ch] [rbp+154h]
  int v102; // [rsp+260h] [rbp+158h]
  __int64 v103; // [rsp+268h] [rbp+160h]
  int v104; // [rsp+270h] [rbp+168h]
  __int16 v105; // [rsp+274h] [rbp+16Ch]
  int v106; // [rsp+278h] [rbp+170h]
  __int64 v107; // [rsp+280h] [rbp+178h]
  int v108; // [rsp+288h] [rbp+180h]
  __int16 v109; // [rsp+28Ch] [rbp+184h]
  int v110; // [rsp+290h] [rbp+188h]
  __int64 v111; // [rsp+298h] [rbp+190h]
  int v112; // [rsp+2A0h] [rbp+198h]
  __int16 v113; // [rsp+2A4h] [rbp+19Ch]
  int v114; // [rsp+2A8h] [rbp+1A0h]
  __int64 v115; // [rsp+2B0h] [rbp+1A8h]
  int v116; // [rsp+2B8h] [rbp+1B0h]
  __int16 v117; // [rsp+2BCh] [rbp+1B4h]
  int v118; // [rsp+2C0h] [rbp+1B8h]
  __int64 v119; // [rsp+2C8h] [rbp+1C0h]
  int v120; // [rsp+2D0h] [rbp+1C8h]
  __int16 v121; // [rsp+2D4h] [rbp+1CCh]
  int v122; // [rsp+2D8h] [rbp+1D0h]
  __int64 v123; // [rsp+2E0h] [rbp+1D8h]
  int v124; // [rsp+2E8h] [rbp+1E0h]
  __int16 v125; // [rsp+2ECh] [rbp+1E4h]
  int v126; // [rsp+2F0h] [rbp+1E8h]
  __int64 v127; // [rsp+2F8h] [rbp+1F0h]
  int v128; // [rsp+300h] [rbp+1F8h]
  __int16 v129; // [rsp+304h] [rbp+1FCh]
  int v130; // [rsp+308h] [rbp+200h]
  __int64 v131; // [rsp+310h] [rbp+208h]
  int v132; // [rsp+318h] [rbp+210h]
  __int16 v133; // [rsp+31Ch] [rbp+214h]
  int v134; // [rsp+320h] [rbp+218h]
  __int64 v135; // [rsp+328h] [rbp+220h]
  int v136; // [rsp+330h] [rbp+228h]
  __int16 v137; // [rsp+334h] [rbp+22Ch]
  int v138; // [rsp+338h] [rbp+230h]
  __int64 v139; // [rsp+340h] [rbp+238h]
  int v140; // [rsp+348h] [rbp+240h]
  __int16 v141; // [rsp+34Ch] [rbp+244h]
  int v142; // [rsp+350h] [rbp+248h]
  __int64 v143; // [rsp+358h] [rbp+250h]
  int v144; // [rsp+360h] [rbp+258h]
  __int16 v145; // [rsp+364h] [rbp+25Ch]
  int v146; // [rsp+368h] [rbp+260h]
  __int64 v147; // [rsp+370h] [rbp+268h]
  int v148; // [rsp+378h] [rbp+270h]
  __int16 v149; // [rsp+37Ch] [rbp+274h]
  int v150; // [rsp+380h] [rbp+278h]
  __int64 v151; // [rsp+388h] [rbp+280h]
  int v152; // [rsp+390h] [rbp+288h]
  __int16 v153; // [rsp+394h] [rbp+28Ch]
  int v154; // [rsp+398h] [rbp+290h]
  __int64 v155; // [rsp+3A0h] [rbp+298h]
  int v156; // [rsp+3A8h] [rbp+2A0h]
  __int16 v157; // [rsp+3ACh] [rbp+2A4h]
  int v158; // [rsp+3B0h] [rbp+2A8h]
  __int64 v159; // [rsp+3B8h] [rbp+2B0h]
  int v160; // [rsp+3C0h] [rbp+2B8h]
  __int16 v161; // [rsp+3C4h] [rbp+2BCh]
  int v162; // [rsp+3C8h] [rbp+2C0h]
  __int64 v163; // [rsp+3D0h] [rbp+2C8h]
  int v164; // [rsp+3D8h] [rbp+2D0h]
  __int16 v165; // [rsp+3DCh] [rbp+2D4h]
  int v166; // [rsp+3E0h] [rbp+2D8h]
  __int64 v167; // [rsp+3E8h] [rbp+2E0h]
  int v168; // [rsp+3F0h] [rbp+2E8h]
  __int16 v169; // [rsp+3F4h] [rbp+2ECh]
  int v170; // [rsp+3F8h] [rbp+2F0h]
  __int64 v171; // [rsp+400h] [rbp+2F8h]
  int v172; // [rsp+408h] [rbp+300h]
  __int16 v173; // [rsp+40Ch] [rbp+304h]
  int v174; // [rsp+410h] [rbp+308h]
  __int64 v175; // [rsp+418h] [rbp+310h]
  int v176; // [rsp+420h] [rbp+318h]
  __int16 v177; // [rsp+424h] [rbp+31Ch]
  int v178; // [rsp+428h] [rbp+320h]
  __int64 v179; // [rsp+430h] [rbp+328h]
  int v180; // [rsp+438h] [rbp+330h]
  __int16 v181; // [rsp+43Ch] [rbp+334h]
  int v182; // [rsp+440h] [rbp+338h]
  __int64 v183; // [rsp+448h] [rbp+340h]
  int v184; // [rsp+450h] [rbp+348h]
  __int16 v185; // [rsp+454h] [rbp+34Ch]
  int v186; // [rsp+458h] [rbp+350h]
  __int64 v187; // [rsp+460h] [rbp+358h]
  int v188; // [rsp+468h] [rbp+360h]
  __int16 v189; // [rsp+46Ch] [rbp+364h]
  int v190; // [rsp+470h] [rbp+368h]
  __int64 v191; // [rsp+478h] [rbp+370h]
  int v192; // [rsp+480h] [rbp+378h]
  __int16 v193; // [rsp+484h] [rbp+37Ch]
  int v194; // [rsp+488h] [rbp+380h]
  __int64 v195; // [rsp+490h] [rbp+388h]
  int v196; // [rsp+498h] [rbp+390h]
  __int16 v197; // [rsp+49Ch] [rbp+394h]
  int v198; // [rsp+4A0h] [rbp+398h]
  __int64 v199; // [rsp+4A8h] [rbp+3A0h]
  int v200; // [rsp+4B0h] [rbp+3A8h]
  __int16 v201; // [rsp+4B4h] [rbp+3ACh]
  int v202; // [rsp+4B8h] [rbp+3B0h]
  __int64 v203; // [rsp+4C0h] [rbp+3B8h]
  int v204; // [rsp+4C8h] [rbp+3C0h]
  __int16 v205; // [rsp+4CCh] [rbp+3C4h]
  int v206; // [rsp+4D0h] [rbp+3C8h]
  __int64 v207; // [rsp+4D8h] [rbp+3D0h]
  int v208; // [rsp+4E0h] [rbp+3D8h]
  __int16 v209; // [rsp+4E4h] [rbp+3DCh]
  int v210; // [rsp+4E8h] [rbp+3E0h]
  __int64 v211; // [rsp+4F0h] [rbp+3E8h]
  int v212; // [rsp+4F8h] [rbp+3F0h]
  __int16 v213; // [rsp+4FCh] [rbp+3F4h]

  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  v26 = -1;
  v27 = 0LL;
  v28 = 101;
  v29 = 0;
  v30 = -1;
  v31 = 0LL;
  v32 = 101;
  v33 = 0;
  v34 = -1;
  v35 = 0LL;
  v36 = 101;
  v37 = 0;
  v38 = -1;
  v39 = 0LL;
  v40 = 101;
  v41 = 0;
  v42 = -1;
  v43 = 0LL;
  v44 = 101;
  v45 = 0;
  v46 = -1;
  v47 = 0LL;
  v48 = 101;
  v49 = 0;
  v50 = -1;
  v51 = 0LL;
  v52 = 101;
  v53 = 0;
  v54 = -1;
  v55 = 0LL;
  v56 = 101;
  v57 = 0;
  v58 = -1;
  v59 = 0LL;
  v60 = 101;
  v61 = 0;
  v62 = -1;
  v63 = 0LL;
  v64 = 101;
  v65 = 0;
  v66 = -1;
  v67 = 0LL;
  v68 = 101;
  v69 = 0;
  v70 = -1;
  v71 = 0LL;
  v72 = 101;
  v73 = 0;
  v74 = -1;
  v75 = 0LL;
  v76 = 101;
  v77 = 0;
  v78 = -1;
  v79 = 0LL;
  v80 = 101;
  v81 = 0;
  v82 = -1;
  v83 = 0LL;
  v84 = 101;
  v85 = 0;
  v86 = -1;
  v87 = 0LL;
  v88 = 101;
  v89 = 0;
  v90 = -1;
  v91 = 0LL;
  v92 = 101;
  v93 = 0;
  v94 = -1;
  v95 = 0LL;
  v96 = 101;
  v97 = 0;
  v98 = -1;
  v99 = 0LL;
  v100 = 101;
  v101 = 0;
  v102 = -1;
  v103 = 0LL;
  v104 = 101;
  v105 = 0;
  v106 = -1;
  v107 = 0LL;
  v108 = 101;
  v109 = 0;
  v110 = -1;
  v111 = 0LL;
  v112 = 101;
  v113 = 0;
  v114 = -1;
  v115 = 0LL;
  v116 = 101;
  v117 = 0;
  v118 = -1;
  v119 = 0LL;
  v120 = 101;
  v121 = 0;
  v122 = -1;
  v123 = 0LL;
  v124 = 101;
  v125 = 0;
  v126 = -1;
  v127 = 0LL;
  v128 = 101;
  v129 = 0;
  v130 = -1;
  v131 = 0LL;
  v132 = 101;
  v133 = 0;
  v134 = -1;
  v135 = 0LL;
  v136 = 101;
  v137 = 0;
  v138 = -1;
  v139 = 0LL;
  v140 = 101;
  v141 = 0;
  v142 = -1;
  v143 = 0LL;
  v144 = 101;
  v145 = 0;
  v146 = -1;
  v147 = 0LL;
  v148 = 101;
  v149 = 0;
  v150 = -1;
  v151 = 0LL;
  v152 = 101;
  v153 = 0;
  v154 = -1;
  v155 = 0LL;
  v156 = 101;
  v157 = 0;
  v158 = -1;
  v159 = 0LL;
  v160 = 101;
  v161 = 0;
  v162 = -1;
  v163 = 0LL;
  v164 = 101;
  v165 = 0;
  v166 = -1;
  v167 = 0LL;
  v168 = 101;
  v169 = 0;
  v170 = -1;
  v171 = 0LL;
  v172 = 101;
  v173 = 0;
  v174 = -1;
  v175 = 0LL;
  v176 = 101;
  v177 = 0;
  v178 = -1;
  v3 = *((_DWORD *)this + 4) == 1;
  v179 = 0LL;
  v180 = 101;
  v181 = 0;
  v182 = -1;
  v183 = 0LL;
  v184 = 101;
  v185 = 0;
  v186 = -1;
  v187 = 0LL;
  v188 = 101;
  v189 = 0;
  v190 = -1;
  v191 = 0LL;
  v192 = 101;
  v193 = 0;
  v194 = -1;
  v195 = 0LL;
  v196 = 101;
  v197 = 0;
  v198 = -1;
  v199 = 0LL;
  v200 = 101;
  v201 = 0;
  v202 = -1;
  v203 = 0LL;
  v204 = 101;
  v205 = 0;
  v206 = -1;
  v207 = 0LL;
  v208 = 101;
  v209 = 0;
  v210 = -1;
  v211 = 0LL;
  v212 = 101;
  v213 = 0;
  if ( v3 )
  {
    RmpPartitionTableActOnActivePartitions(
      (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 152LL) + 312LL),
      a2,
      (int (*)(struct _RM_PARTITION *, void *))ExecutionModel::ResourceSet::ProcessPendingRequestList,
      0LL);
    v4 = (void **)Block[0];
  }
  else
  {
    v5 = (char *)this + 160;
    for ( i = (char *)*((_QWORD *)this + 20); i != v5; i = *(char **)i )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        &v25,
        *((_QWORD *)i + 2));
      v7 = v25;
      if ( *(_DWORD *)(v25 + 1400) == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(Block, v25) < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        goto LABEL_24;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v4 = (void **)Block[0];
    if ( Block[0] == Block )
      goto LABEL_3;
    while ( v4 != Block )
    {
      v8 = (__int64)v4[2];
      v24[0] = v24;
      v9 = &v26;
      v24[2] = 0LL;
      v24[1] = v24;
      v10 = 8LL;
      v11 = v8 + 264;
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
                  (__int64)&v26,
                  *(unsigned int *)(v8 + 8),
                  *(_DWORD *)(v8 + 1408),
                  1,
                  &v20,
                  &v19) < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v24);
        break;
      }
      if ( v19 )
      {
        if ( v20 )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v13, v24, v14, v15);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            (__int64)this,
            1,
            0x2Fu,
            &v26,
            *(_DWORD *)(v8 + 8),
            1,
            &v22,
            &v21,
            0LL,
            v8);
          v3 = (*(_BYTE *)(v8 + 1472) & 2) == 0;
          *(_DWORD *)(v8 + 1400) = 2;
          if ( v3 )
            ExecutionModel::ExternalResourceSet::QueueMessage(v8, 0);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v24);
      v4 = (void **)*v4;
    }
LABEL_24:
    v4 = (void **)Block[0];
  }
LABEL_3:
  while ( v4 != Block )
  {
    v16 = (void **)v4[1];
    v17 = *v4;
    *v16 = *v4;
    v17[1] = v16;
    v18 = v4[2];
    if ( v18 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
    operator delete(v4);
    v4 = (void **)Block[0];
  }
}
