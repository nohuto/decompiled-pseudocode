/*
 * XREFs of sub_140686A00 @ 0x140686A00
 * Callers:
 *     Callout @ 0x1406869A0 (Callout.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     RtlULongLongAdd @ 0x1400FC040 (RtlULongLongAdd.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     sub_1403230F0 @ 0x1403230F0 (sub_1403230F0.c)
 *     sub_1403238E4 @ 0x1403238E4 (sub_1403238E4.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     SPCallServerHandleClepKdf @ 0x140685B64 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406860FC (SPCallServerHandleIsAppLicensed.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     sub_14069AA40 @ 0x14069AA40 (sub_14069AA40.c)
 *     sub_14069AB20 @ 0x14069AB20 (sub_14069AB20.c)
 *     sub_14069C480 @ 0x14069C480 (sub_14069C480.c)
 *     sub_14069C760 @ 0x14069C760 (sub_14069C760.c)
 *     sub_14069CEF0 @ 0x14069CEF0 (sub_14069CEF0.c)
 *     sub_14069D150 @ 0x14069D150 (sub_14069D150.c)
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 *     sub_14069D330 @ 0x14069D330 (sub_14069D330.c)
 *     sub_14069E230 @ 0x14069E230 (sub_14069E230.c)
 *     sub_14069E2A0 @ 0x14069E2A0 (sub_14069E2A0.c)
 *     sub_1406A46B0 @ 0x1406A46B0 (sub_1406A46B0.c)
 *     sub_1406A4760 @ 0x1406A4760 (sub_1406A4760.c)
 *     sub_1406A48F0 @ 0x1406A48F0 (sub_1406A48F0.c)
 *     sub_1406A4F70 @ 0x1406A4F70 (sub_1406A4F70.c)
 *     sub_1406A4FA0 @ 0x1406A4FA0 (sub_1406A4FA0.c)
 *     sub_1406A5120 @ 0x1406A5120 (sub_1406A5120.c)
 *     sub_1406A5980 @ 0x1406A5980 (sub_1406A5980.c)
 *     sub_1406A5A20 @ 0x1406A5A20 (sub_1406A5A20.c)
 *     sub_1406A5B30 @ 0x1406A5B30 (sub_1406A5B30.c)
 *     sub_1406ABC60 @ 0x1406ABC60 (sub_1406ABC60.c)
 *     sub_1406ACEB0 @ 0x1406ACEB0 (sub_1406ACEB0.c)
 *     sub_1406ADD80 @ 0x1406ADD80 (sub_1406ADD80.c)
 *     sub_1406AF390 @ 0x1406AF390 (sub_1406AF390.c)
 *     sub_1406AF5E0 @ 0x1406AF5E0 (sub_1406AF5E0.c)
 *     sub_1406B5AC0 @ 0x1406B5AC0 (sub_1406B5AC0.c)
 *     sub_1406BFF80 @ 0x1406BFF80 (sub_1406BFF80.c)
 *     sub_1406C0030 @ 0x1406C0030 (sub_1406C0030.c)
 *     sub_1406C2350 @ 0x1406C2350 (sub_1406C2350.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C2420 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleCheckLicense @ 0x1406C9710 (SPCallServerHandleCheckLicense.c)
 *     sub_1406CAAD0 @ 0x1406CAAD0 (sub_1406CAAD0.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CF024 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406CFBBC (SPCallServerHandleAuthenticateCaller.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071DFCC (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_1408DEEF8 @ 0x1408DEEF8 (sub_1408DEEF8.c)
 *     sub_1408DF4D0 @ 0x1408DF4D0 (sub_1408DF4D0.c)
 *     sub_1408DFB14 @ 0x1408DFB14 (sub_1408DFB14.c)
 *     sub_1408DFEC4 @ 0x1408DFEC4 (sub_1408DFEC4.c)
 *     sub_1408E0220 @ 0x1408E0220 (sub_1408E0220.c)
 *     sub_1408E0700 @ 0x1408E0700 (sub_1408E0700.c)
 *     sub_1408E0F7C @ 0x1408E0F7C (sub_1408E0F7C.c)
 *     sub_1408E18D0 @ 0x1408E18D0 (sub_1408E18D0.c)
 *     sub_1408E1E28 @ 0x1408E1E28 (sub_1408E1E28.c)
 *     sub_1408E23E8 @ 0x1408E23E8 (sub_1408E23E8.c)
 *     sub_1408E2B24 @ 0x1408E2B24 (sub_1408E2B24.c)
 *     sub_1408E3004 @ 0x1408E3004 (sub_1408E3004.c)
 *     sub_1408E3AB8 @ 0x1408E3AB8 (sub_1408E3AB8.c)
 *     sub_1408E40FC @ 0x1408E40FC (sub_1408E40FC.c)
 *     sub_1408E45B0 @ 0x1408E45B0 (sub_1408E45B0.c)
 *     sub_1408E490C @ 0x1408E490C (sub_1408E490C.c)
 *     sub_1408E5128 @ 0x1408E5128 (sub_1408E5128.c)
 *     sub_1408E56F8 @ 0x1408E56F8 (sub_1408E56F8.c)
 *     sub_1408E5A4C @ 0x1408E5A4C (sub_1408E5A4C.c)
 *     sub_1408E5DA4 @ 0x1408E5DA4 (sub_1408E5DA4.c)
 *     sub_1408E6348 @ 0x1408E6348 (sub_1408E6348.c)
 *     sub_1408E6680 @ 0x1408E6680 (sub_1408E6680.c)
 */

__int64 __fastcall sub_140686A00(_DWORD *a1, unsigned int a2, unsigned int a3, _QWORD *a4, UINT *a5)
{
  NTSTATUS *v6; // rbx
  _QWORD *v7; // r13
  unsigned int *v8; // r14
  __int64 v9; // r15
  signed int Acl; // edi
  void *v11; // rsi
  size_t v12; // rbx
  _DWORD *v13; // rax
  bool v14; // cf
  __int64 v15; // r12
  int v16; // esi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // r11
  ULONGLONG v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned __int64 v24; // r10
  unsigned int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  ULONGLONG v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  int v32; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v34; // rbx
  void *v35; // rax
  SIZE_T v36; // rcx
  PVOID v37; // rax
  size_t v38; // rax
  PVOID v39; // rax
  size_t v40; // r8
  const void *v41; // rdx
  size_t v42; // rax
  PVOID v43; // rax
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  size_t v47; // r8
  const void *v48; // rdx
  void *v49; // rcx
  void *v50; // rcx
  void *v51; // rcx
  PVOID v52; // rcx
  unsigned __int64 v53; // rax
  __int64 *v54; // rbx
  __int64 v55; // rbx
  unsigned __int64 v56; // r13
  ULONGLONG v57; // rcx
  unsigned __int8 *v58; // rax
  int v59; // r9d
  int v60; // r11d
  int v61; // r10d
  UINT v62; // r13d
  int v63; // r8d
  char v64; // dl
  unsigned __int8 *v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r15
  unsigned __int8 *v69; // rbx
  unsigned __int8 *v70; // r13
  unsigned __int8 v71; // al
  int v72; // eax
  int v73; // eax
  UINT v74; // r11d
  UINT v75; // r10d
  int v76; // eax
  unsigned int v77; // edx
  _BYTE *v78; // r8
  ULONGLONG v79; // r9
  char v80; // cl
  UINT v81; // r10d
  _BYTE *v82; // r15
  UINT v83; // edi
  unsigned __int8 *v84; // r8
  unsigned __int8 *v85; // r12
  int v86; // edx
  int v87; // eax
  int v88; // r11d
  int v89; // edx
  unsigned int v90; // r14d
  int v91; // r8d
  int v92; // r11d
  int v93; // r14d
  int v94; // r11d
  int v95; // r14d
  int v96; // r11d
  int v97; // r14d
  __int64 v98; // r13
  int v99; // r11d
  int v100; // r14d
  unsigned int v101; // r11d
  unsigned __int8 *v102; // rbx
  unsigned int v103; // r14d
  int v104; // r11d
  ULONGLONG v105; // rcx
  unsigned __int8 v106; // al
  int v107; // eax
  int v108; // eax
  int v109; // r11d
  UINT v110; // esi
  bool v111; // zf
  unsigned __int64 v112; // rax
  __m128i v113; // xmm1
  __m128i v114; // xmm2
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __m128i v117; // xmm1
  __m128i v118; // xmm1
  __m128i v119; // xmm1
  __m128i v120; // xmm1
  int v121; // ecx
  unsigned __int64 v122; // rcx
  SIZE_T v123; // r10
  unsigned __int64 v124; // rbx
  unsigned __int64 v125; // r8
  size_t v126; // r11
  void *v127; // rax
  unsigned int v128; // r13d
  unsigned __int64 v129; // r9
  char *v130; // rdx
  unsigned int v131; // r8d
  unsigned __int64 v132; // rcx
  int v133; // eax
  unsigned int v134; // ecx
  unsigned __int64 v135; // rax
  char *v136; // rcx
  __int64 v137; // r8
  int v138; // edx
  _DWORD *v139; // rax
  unsigned __int64 v140; // rdx
  int v141; // r9d
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // rcx
  int v144; // r8d
  __int64 v145; // rcx
  int v146; // r9d
  void *v147; // rax
  unsigned __int64 v148; // rdx
  unsigned __int64 v149; // r8
  unsigned __int64 v150; // rcx
  int v151; // ecx
  size_t v152; // rax
  SIZE_T v153; // r13
  SIZE_T v154; // r12
  _QWORD *v155; // rax
  __int64 v156; // rcx
  __int64 v157; // r8
  _QWORD *v158; // rbx
  void *v159; // rax
  PVOID v160; // rax
  PVOID v161; // rax
  void *v162; // rcx
  void *v163; // rcx
  void *v164; // rcx
  const void *v165; // rdx
  int v166; // eax
  _QWORD *v167; // rbx
  void *v168; // rcx
  void *v169; // rcx
  void *v170; // rcx
  void *v171; // rcx
  void *v172; // rcx
  void *v173; // rcx
  __int64 v175; // r13
  ULONG v176; // ebx
  ULONG v177; // ebx
  ULONG v178; // ebx
  ACL *v179; // rax
  ACL *v180; // r12
  BOOLEAN v181; // bl
  bool v182; // bl
  const void *v183; // rdi
  int IsAppLicensed; // eax
  UINT v185; // ecx
  __int64 v186; // r13
  ULONG v187; // ebx
  ULONG v188; // ebx
  ULONG v189; // ebx
  ACL *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // r8
  ACL *v193; // r12
  BOOLEAN v194; // bl
  bool v195; // bl
  const void *v196; // rdi
  const void *v197; // rdi
  int updated; // eax
  bool v199; // bl
  int v200; // r8d
  const void *v201; // rdi
  const void *v202; // rdi
  NTSTATUS v203; // eax
  UINT v204; // edx
  UINT *v205; // r10
  unsigned int v206; // ebx
  NTSTATUS v207; // eax
  UINT v208; // r9d
  ULONGLONG v209; // r10
  int v210; // r11d
  _DWORD *v211; // r10
  _DWORD *v212; // rcx
  PVOID v213; // rax
  _DWORD *v214; // r9
  _DWORD *v215; // rcx
  _DWORD *v216; // rbx
  void *v217; // rcx
  UINT v218; // edx
  unsigned __int64 v219; // r13
  __int64 *v220; // rbx
  int v221; // eax
  unsigned __int8 *v222; // r14
  int v223; // ecx
  char v224; // r12
  __int64 v225; // rbx
  unsigned __int64 v226; // rax
  __m128i v227; // xmm1
  __m128i v228; // xmm2
  __m128i v229; // xmm0
  __m128i v230; // xmm0
  __m128i v231; // xmm1
  __m128i v232; // xmm1
  __m128i v233; // xmm1
  __m128i v234; // xmm1
  size_t v235; // rax
  int v236; // r12d
  unsigned int v237; // edi
  UINT v238; // r9d
  UINT v239; // r10d
  int v240; // edx
  char v241; // r11
  int v242; // eax
  ULONGLONG v243; // rcx
  unsigned __int8 *v244; // rbx
  unsigned __int8 *v245; // r14
  __int64 v246; // r15
  unsigned __int8 v247; // al
  int v248; // eax
  int v249; // eax
  UINT v250; // esi
  int v251; // eax
  unsigned int v252; // r12d
  _BYTE *v253; // rcx
  _BYTE *v254; // r8
  char v255; // dl
  ULONGLONG v256; // rcx
  _BYTE *v257; // rdx
  unsigned __int8 *v258; // r8
  unsigned __int8 *v259; // r15
  __int64 v260; // r13
  unsigned __int8 *v261; // rbx
  _BYTE *v262; // r14
  int v263; // r12d
  int v264; // edi
  int v265; // esi
  ULONGLONG v266; // rcx
  unsigned __int8 v267; // al
  int v268; // eax
  int v269; // eax
  unsigned int v270; // edi
  int v271; // esi
  int v272; // edi
  int v273; // esi
  int v274; // edi
  int v275; // esi
  int v276; // edi
  unsigned int v277; // esi
  int v278; // edi
  int v279; // esi
  UINT v280; // r8d
  int v281; // edi
  _BYTE *v282; // rdx
  void *v283; // r12
  unsigned int v284; // r14d
  PVOID v285; // rax
  PVOID v286; // rbx
  UINT v287; // edx
  UINT v288; // ecx
  UINT v289; // eax
  _DWORD *v290; // rsi
  ULONGLONG v291; // rcx
  ULONGLONG v292; // rcx
  UINT v293; // ecx
  _DWORD *v294; // rax
  PVOID v295; // [rsp+58h] [rbp-B0h]
  int v296; // [rsp+60h] [rbp-A8h]
  UINT v297; // [rsp+60h] [rbp-A8h]
  unsigned int v298; // [rsp+60h] [rbp-A8h]
  UINT v299; // [rsp+60h] [rbp-A8h]
  int v300; // [rsp+60h] [rbp-A8h]
  int v301; // [rsp+60h] [rbp-A8h]
  int v302; // [rsp+60h] [rbp-A8h]
  NTSTATUS *v303; // [rsp+68h] [rbp-A0h]
  int v304; // [rsp+70h] [rbp-98h]
  UINT v305; // [rsp+70h] [rbp-98h]
  int v306; // [rsp+70h] [rbp-98h]
  int v307; // [rsp+70h] [rbp-98h]
  int v308; // [rsp+70h] [rbp-98h]
  int v309; // [rsp+70h] [rbp-98h]
  int v310; // [rsp+70h] [rbp-98h]
  int v311; // [rsp+74h] [rbp-94h]
  UINT v312; // [rsp+74h] [rbp-94h]
  int v313; // [rsp+74h] [rbp-94h]
  int v314; // [rsp+74h] [rbp-94h]
  int v315; // [rsp+74h] [rbp-94h]
  int v316; // [rsp+74h] [rbp-94h]
  unsigned int v317; // [rsp+78h] [rbp-90h]
  unsigned int v318; // [rsp+78h] [rbp-90h]
  int v319; // [rsp+78h] [rbp-90h]
  int v320; // [rsp+78h] [rbp-90h]
  int v321; // [rsp+78h] [rbp-90h]
  int v322; // [rsp+78h] [rbp-90h]
  int v323; // [rsp+78h] [rbp-90h]
  UINT uAugend; // [rsp+7Ch] [rbp-8Ch] BYREF
  UINT v325; // [rsp+80h] [rbp-88h] BYREF
  UINT uAddend[2]; // [rsp+88h] [rbp-80h] BYREF
  PVOID v327; // [rsp+90h] [rbp-78h]
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  ULONGLONG ullAugend; // [rsp+A0h] [rbp-68h] BYREF
  UINT v330; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v331; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v332; // [rsp+B8h] [rbp-50h]
  ULONGLONG pullResult; // [rsp+C0h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C8h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp-38h]
  unsigned int v336; // [rsp+D8h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v338; // [rsp+E0h] [rbp-28h]
  UINT puResult; // [rsp+E4h] [rbp-24h] BYREF
  ACCESS_MASK v340[4]; // [rsp+E8h] [rbp-20h] BYREF
  NTSTATUS v341[2]; // [rsp+F8h] [rbp-10h] BYREF
  UINT v342; // [rsp+100h] [rbp-8h]
  UINT v343; // [rsp+104h] [rbp-4h]
  PVOID v344; // [rsp+108h] [rbp+0h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+110h] [rbp+8h] BYREF
  SIZE_T v346; // [rsp+118h] [rbp+10h]
  int v347; // [rsp+120h] [rbp+18h] BYREF
  __int64 v348; // [rsp+128h] [rbp+20h]
  PVOID v349; // [rsp+130h] [rbp+28h]
  ULONGLONG i; // [rsp+138h] [rbp+30h]
  ULONGLONG v351; // [rsp+140h] [rbp+38h] BYREF
  PVOID P; // [rsp+148h] [rbp+40h]
  int v353; // [rsp+150h] [rbp+48h]
  ULONG v354; // [rsp+158h] [rbp+50h] BYREF
  ULONG ReturnLength; // [rsp+15Ch] [rbp+54h] BYREF
  ULONG v356; // [rsp+160h] [rbp+58h] BYREF
  int v357; // [rsp+164h] [rbp+5Ch]
  PVOID v358; // [rsp+168h] [rbp+60h]
  int v359; // [rsp+170h] [rbp+68h]
  ULONGLONG v360; // [rsp+178h] [rbp+70h]
  ULONGLONG v361; // [rsp+180h] [rbp+78h] BYREF
  int v362; // [rsp+188h] [rbp+80h]
  unsigned int v363; // [rsp+190h] [rbp+88h]
  unsigned __int64 v364; // [rsp+198h] [rbp+90h]
  size_t v365; // [rsp+1A0h] [rbp+98h]
  void *v366; // [rsp+1A8h] [rbp+A0h]
  __int64 SystemInformation; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v368; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v369; // [rsp+1C0h] [rbp+B8h] BYREF
  unsigned __int64 v370; // [rsp+1C8h] [rbp+C0h]
  _DWORD *v371; // [rsp+1D0h] [rbp+C8h]
  ULONGLONG v372; // [rsp+1D8h] [rbp+D0h]
  _QWORD *v373; // [rsp+1E0h] [rbp+D8h]
  UINT *v374; // [rsp+1E8h] [rbp+E0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1F0h] [rbp+E8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+210h] [rbp+108h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v378[40]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v379; // [rsp+280h] [rbp+178h] BYREF
  __int64 v380; // [rsp+288h] [rbp+180h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v374 = a5;
  v8 = 0LL;
  v303 = 0LL;
  v9 = 0LL;
  v373 = a4;
  v336 = a3;
  v349 = 0LL;
  v338 = 0;
  v331 = 0LL;
  v332 = 0LL;
  *(_QWORD *)uAddend = 0LL;
  v327 = 0LL;
  v344 = 0LL;
  v330 = 0;
  v370 = 0LL;
  v348 = 0LL;
  v295 = 0LL;
  v366 = 0LL;
  v365 = 0LL;
  v346 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    v11 = 0LL;
    goto LABEL_306;
  }
  v12 = (unsigned int)*a1;
  v13 = a1 + 1;
  v14 = a1 + 1 < a1;
  LODWORD(NumberOfBytes) = *a1;
  v15 = -1LL;
  v16 = -1;
  v17 = -1LL;
  if ( !v14 )
    v17 = (unsigned __int64)v13;
  Acl = v14 ? 0xC0000095 : 0;
  Src = (void *)v17;
  if ( v13 >= a1 )
  {
    if ( a2 - 4 < (unsigned int)v12 )
    {
      Acl = -1073741762;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    Size = v12;
    v18 = -1LL;
    if ( v17 + v12 >= v17 )
      v18 = v17 + v12;
    Acl = v17 + v12 < v17 ? 0xC0000095 : 0;
    if ( v17 + v12 >= v17 )
    {
      v19 = -1;
      if ( (unsigned int)v12 < 0xFFFFFFFC )
        v19 = v12 + 4;
      Acl = (unsigned int)v12 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( (unsigned int)(v12 + 4) >= 4 )
      {
        if ( a2 - v19 < 4 )
        {
          Acl = -1073741762;
          v6 = 0LL;
          v11 = 0LL;
          goto LABEL_306;
        }
        v20 = *(unsigned int *)v18;
        v325 = *(_DWORD *)v18;
        v21 = -1LL;
        if ( v18 + 4 >= v18 )
          v21 = v18 + 4;
        Acl = v18 + 4 < v18 ? 0xC0000095 : 0;
        pullResult = v21;
        if ( v18 + 4 >= v18 )
        {
          v22 = v19 + 4;
          v23 = -1;
          if ( v19 + 4 >= v19 )
            v23 = v19 + 4;
          Acl = v22 < v19 ? 0xC0000095 : 0;
          if ( v22 >= v19 )
          {
            if ( a2 - v23 < (unsigned int)v20 )
            {
              Acl = -1073741762;
              v6 = 0LL;
              v11 = 0LL;
              goto LABEL_306;
            }
            v24 = -1LL;
            if ( v21 + v20 >= v21 )
              v24 = v21 + v20;
            Acl = v21 + v20 < v21 ? 0xC0000095 : 0;
            if ( v21 + v20 >= v21 )
            {
              v25 = v20 + v23;
              v26 = -1;
              if ( (unsigned int)v20 + v23 >= v23 )
                v26 = v20 + v23;
              Acl = v25 < v23 ? 0xC0000095 : 0;
              if ( v25 >= v23 )
              {
                if ( a2 - v26 < 4 )
                {
                  Acl = -1073741762;
                  v6 = 0LL;
                  v11 = 0LL;
                  goto LABEL_306;
                }
                v27 = *(_DWORD *)v24;
                uAugend = *(_DWORD *)v24;
                v28 = -1LL;
                if ( v24 + 4 >= v24 )
                  v28 = v24 + 4;
                Acl = v24 + 4 < v24 ? 0xC0000095 : 0;
                ullAugend = v28;
                if ( v24 + 4 >= v24 )
                {
                  v29 = v26 + 4;
                  v30 = -1;
                  if ( v26 + 4 >= v26 )
                    v30 = v26 + 4;
                  Acl = v29 < v26 ? 0xC0000095 : 0;
                  if ( v29 >= v26 )
                  {
                    if ( a2 - v30 < v27 )
                    {
                      Acl = -1073741762;
                      v6 = 0LL;
                      v11 = 0LL;
                      goto LABEL_306;
                    }
                    v31 = v27 + v30;
                    v32 = -1;
                    if ( v27 + v30 >= v30 )
                      v32 = v27 + v30;
                    Acl = v31 < v30 ? 0xC0000095 : 0;
                    if ( v31 >= v30 )
                    {
                      if ( a2 != v32 )
                      {
                        Acl = -1073741762;
                        v6 = 0LL;
                        v11 = 0LL;
                        goto LABEL_306;
                      }
                      if ( (unsigned int)v12 + v27 + (_DWORD)v20 + 12LL != a2 )
                      {
                        Acl = -1073741762;
                        v6 = 0LL;
                        v11 = 0LL;
                        goto LABEL_306;
                      }
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                      v34 = PoolWithTag;
                      if ( !PoolWithTag )
                      {
                        Acl = -1073741801;
                        goto LABEL_80;
                      }
                      *PoolWithTag = 0LL;
                      PoolWithTag[1] = 0LL;
                      PoolWithTag[2] = 0LL;
                      PoolWithTag[3] = 0LL;
                      PoolWithTag[4] = 0LL;
                      PoolWithTag[5] = 0LL;
                      v35 = Src;
                      Acl = 0;
                      if ( Src )
                      {
                        v36 = (unsigned int)NumberOfBytes;
                        *(_DWORD *)v34 = NumberOfBytes;
                        if ( (_DWORD)v36 )
                        {
                          v37 = ExAllocatePoolWithTag(PagedPool, v36, 0x20534C53u);
                          if ( v37 )
                            v34[1] = v37;
                          else
                            Acl = -1073741801;
                          v35 = Src;
                        }
                        else
                        {
                          Acl = -1073741762;
                        }
                        if ( Acl < 0 )
                          goto LABEL_70;
                        memmove((void *)v34[1], v35, Size);
                      }
                      else
                      {
                        *(_DWORD *)v34 = 0;
                        v34[1] = 0LL;
                      }
                      if ( pullResult )
                      {
                        v38 = v325;
                        *((_DWORD *)v34 + 4) = v325;
                        if ( !(_DWORD)v38 )
                        {
                          Acl = -1073741762;
LABEL_70:
                          v44 = (void *)v34[1];
                          if ( v44 )
                          {
                            ExFreePoolWithTag(v44, 0x20534C53u);
                            v34[1] = 0LL;
                          }
                          v45 = (void *)v34[3];
                          if ( v45 )
                          {
                            ExFreePoolWithTag(v45, 0x20534C53u);
                            v34[3] = 0LL;
                          }
                          v46 = (void *)v34[5];
                          if ( v46 )
                          {
                            ExFreePoolWithTag(v46, 0x20534C53u);
                            v34[5] = 0LL;
                          }
                          ExFreePoolWithTag(v34, 0x20534C53u);
                          goto LABEL_80;
                        }
                        Size = v38;
                        v39 = ExAllocatePoolWithTag(PagedPool, v38, 0x20534C53u);
                        if ( !v39 )
                        {
LABEL_69:
                          Acl = -1073741801;
                          goto LABEL_70;
                        }
                        v40 = Size;
                        v41 = (const void *)pullResult;
                        Acl = 0;
                        v34[3] = v39;
                        memmove(v39, v41, v40);
                      }
                      else
                      {
                        *((_DWORD *)v34 + 4) = 0;
                        v34[3] = 0LL;
                      }
                      if ( ullAugend )
                      {
                        v42 = uAugend;
                        *((_DWORD *)v34 + 8) = uAugend;
                        if ( !(_DWORD)v42 )
                        {
                          Acl = -1073741762;
                          goto LABEL_70;
                        }
                        Size = v42;
                        v43 = ExAllocatePoolWithTag(PagedPool, v42, 0x20534C53u);
                        if ( !v43 )
                          goto LABEL_69;
                        v47 = Size;
                        Acl = 0;
                        v48 = (const void *)ullAugend;
                        v34[5] = v43;
                        memmove(v43, v48, v47);
                      }
                      else
                      {
                        *((_DWORD *)v34 + 8) = 0;
                        v34[5] = 0LL;
                      }
                      v7 = v34;
LABEL_80:
                      if ( Acl < 0 )
                      {
                        if ( v7 )
                        {
                          v49 = (void *)v7[1];
                          if ( v49 )
                          {
                            ExFreePoolWithTag(v49, 0x20534C53u);
                            v7[1] = 0LL;
                          }
                          v50 = (void *)v7[3];
                          if ( v50 )
                          {
                            ExFreePoolWithTag(v50, 0x20534C53u);
                            v7[3] = 0LL;
                          }
                          v51 = (void *)v7[5];
                          if ( v51 )
                          {
                            ExFreePoolWithTag(v51, 0x20534C53u);
                            v7[5] = 0LL;
                          }
                          ExFreePoolWithTag(v7, 0x20534C53u);
                        }
                      }
                      else
                      {
                        v8 = (unsigned int *)v7;
                        v349 = v7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Acl >= 0 )
  {
    v364 = 0LL;
    v52 = 0LL;
    P = 0LL;
    Acl = 0;
    AccessStatus = 0;
    if ( !v8 )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !*((_QWORD *)v8 + 1) )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !*v8 )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !*((_QWORD *)v8 + 5) )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !v8[8] )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !*((_QWORD *)v8 + 3) )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    if ( !v8[4] )
    {
      Acl = -1073741811;
      v6 = 0LL;
      v11 = 0LL;
      goto LABEL_306;
    }
    v364 = *v8;
    Size = *((_QWORD *)v8 + 1);
    if ( Size )
    {
      v53 = *v8;
      if ( *v8 )
      {
        pullResult = *((_QWORD *)v8 + 3);
        if ( pullResult )
        {
          v54 = (__int64 *)*((_QWORD *)v8 + 5);
          if ( v54 )
          {
            if ( v8[8] == 8 && v8[4] == 160 && v53 > 8 )
            {
              v55 = *v54;
              v56 = v53 - 8;
              LOBYTE(NumberOfBytes) = 0;
              *(_QWORD *)GrantedAccess = v53 - 8;
              Src = ExAllocatePoolWithTag(PagedPool, v53 - 8, 0x20534C53u);
              v57 = (ULONGLONG)Src;
              if ( Src )
              {
                v58 = (unsigned __int8 *)Size;
                v59 = v56 & 7;
                v379 = v55;
                v360 = v56 & 7;
                *(_QWORD *)v340 = Size;
                ullAugend = (ULONGLONG)Src;
                if ( (v56 & 7) != 0 )
                {
                  v296 = -1;
                  v311 = 0;
                  v60 = 0;
                  v325 = 0;
                  v61 = -1;
                  uAugend = 0;
                  v62 = 0;
                  v63 = 0;
                  if ( v59 )
                  {
                    v64 = 56;
                    do
                    {
                      v65 = v58 + 1;
                      v66 = *v58;
                      if ( v63 >= 4 )
                        v62 |= v66 << v64;
                      else
                        uAugend |= v66 << (v64 - 32);
                      ++v63;
                      v64 -= 8;
                      v58 = v65;
                    }
                    while ( v63 < v59 );
                    v325 = v62;
                    *(_QWORD *)v340 = v65;
                  }
                  v67 = 16LL;
                  v68 = 30LL;
                  *(_QWORD *)v341 = 16LL;
                  v69 = (unsigned __int8 *)(pullResult + 126);
                  v70 = (unsigned __int8 *)(pullResult + 158);
                  do
                  {
                    v71 = v70[1];
                    if ( v71 < 0x1Fu )
                    {
                      v72 = funcs_1405A2DA1[v71](v68 + 1, *(v69 - 2), *(v69 - 1), *v69, v69[1], (__int64)&v379, v60);
                      v60 = v311;
                      v61 = v72 ^ v296;
                      v67 = *(_QWORD *)v341;
                      v296 ^= v72;
                    }
                    if ( *v70 < 0x1Fu )
                    {
                      v73 = funcs_1405A2DA1[*v70](
                              v68,
                              *(v69 - 6),
                              *(v69 - 5),
                              *(v69 - 4),
                              *(v69 - 3),
                              (__int64)&v379,
                              v61);
                      v61 = v296;
                      v60 = v73 ^ v311;
                      v67 = *(_QWORD *)v341;
                      v311 ^= v73;
                    }
                    v68 -= 2LL;
                    v69 -= 8;
                    v70 -= 2;
                    *(_QWORD *)v341 = --v67;
                  }
                  while ( v67 );
                  v74 = uAugend ^ v60;
                  v75 = v325 ^ v61;
                  v76 = 0;
                  v77 = v360;
                  v9 = 0LL;
                  v8 = (unsigned int *)v349;
                  v312 = v74;
                  v297 = v75;
                  if ( (_DWORD)v360 )
                  {
                    v78 = (_BYTE *)ullAugend;
                    do
                    {
                      v79 = (ULONGLONG)(v78 + 1);
                      if ( v76 >= 4 )
                      {
                        v75 = __ROL4__(v75, 8);
                        v80 = v75;
                      }
                      else
                      {
                        v74 = __ROL4__(v74, 8);
                        v80 = v74;
                      }
                      ++v76;
                      *v78++ = v80;
                    }
                    while ( v76 < (int)v77 );
                    v74 = v312;
                    v57 = v79;
                    v75 = v297;
                    ullAugend = v79;
                  }
                  else
                  {
                    v57 = ullAugend;
                  }
                  LODWORD(v55) = v379;
                  v58 = *(unsigned __int8 **)v340;
                  v56 = *(_QWORD *)GrantedAccess;
                  if ( v77 <= 4 )
                  {
                    v81 = 0;
                    if ( v77 < 4 )
                    {
                      v74 = v74 >> (8 * (4 - v77)) << (8 * (4 - v77));
                      v57 = ullAugend;
                    }
                  }
                  else
                  {
                    v81 = v75 >> (8 * (8 - v77)) << (8 * (8 - v77));
                    v57 = ullAugend;
                  }
                }
                else
                {
                  v325 = -1;
                  uAugend = 0;
                  v81 = 0;
                  v74 = 0;
                }
                *(_QWORD *)v340 = v56 >> 3;
                if ( v56 >> 3 )
                {
                  v82 = (_BYTE *)(v57 + 7);
                  v83 = uAugend;
                  v84 = v58 + 2;
                  v85 = (unsigned __int8 *)(pullResult + 158);
                  v360 = pullResult + 126;
                  for ( i = pullResult + 158; ; v85 = (unsigned __int8 *)i )
                  {
                    v86 = v84[2] << 8;
                    v87 = v84[3];
                    v88 = (v84[1] | ((*v84 | ((*(v84 - 1) | (*(v84 - 2) << 8)) << 8)) << 8)) ^ v74;
                    uAugend = v84[1] | ((*v84 | ((*(v84 - 1) | (*(v84 - 2) << 8)) << 8)) << 8);
                    v89 = v84[5] | ((v84[4] | ((v87 | v86) << 8)) << 8);
                    pullResult = (ULONGLONG)(v84 + 8);
                    v341[0] = v89;
                    v90 = HIDWORD(v379) ^ v88 ^ v89 ^ v81 ^ v55;
                    v91 = (unsigned __int16)v55;
                    v92 = (v90 >> 8) ^ (WORD2(v379) * (v90 ^ WORD1(v379))) ^ v88;
                    v93 = (WORD1(v379) * __ROR4__(HIDWORD(v379) - v92, 11) - __ROR4__(v92, 12)) ^ v90;
                    v94 = ((unsigned __int16)v55 * __ROL4__(HIDWORD(v379) ^ v93, 8) - __ROL4__(v93, 2)) ^ v92;
                    v95 = __ROR4__(v94, 9) ^ (HIWORD(v379) * __ROR4__(v94 - v55, 4)) ^ v93;
                    v96 = (__ROR4__(v95, 4) + WORD2(v379) * __ROR4__(v55 - v95, 10)) ^ v94;
                    v97 = (WORD1(v379) * __ROL4__(HIWORD(v379) ^ v96, 4) - __ROR4__(v96, 16)) ^ v95;
                    v98 = 30LL;
                    v99 = ((unsigned __int16)v55 * (WORD1(v379) ^ v97) - __ROR4__(v97, 7)) ^ v96;
                    v100 = (v99 - v55 - HIWORD(v379)) ^ v97;
                    v101 = __ROR4__(v100, 11) ^ (WORD2(v379) * __ROR4__(v55 - v100, 9)) ^ v99;
                    v102 = (unsigned __int8 *)v360;
                    v103 = (WORD1(v379) * (v101 - WORD2(v379)) - (v101 >> 13)) ^ v100;
                    v298 = v103;
                    v104 = (v103 >> 15) ^ (v91 * __ROL4__(v103 - WORD2(v379), 3)) ^ v101;
                    v105 = 16LL;
                    ullAugend = 16LL;
                    v313 = v104;
                    do
                    {
                      v106 = v85[1];
                      if ( v106 < 0x1Fu )
                      {
                        v107 = funcs_1405A2DA1[v106](
                                 v98 + 1,
                                 *(v102 - 2),
                                 *(v102 - 1),
                                 *v102,
                                 v102[1],
                                 (__int64)&v379,
                                 v104);
                        v104 = v313;
                        v103 = v107 ^ v298;
                        v105 = ullAugend;
                        v298 ^= v107;
                      }
                      if ( *v85 < 0x1Fu )
                      {
                        v108 = funcs_1405A2DA1[*v85](
                                 v98,
                                 *(v102 - 6),
                                 *(v102 - 5),
                                 *(v102 - 4),
                                 *(v102 - 3),
                                 (__int64)&v379,
                                 v103);
                        v103 = v298;
                        v104 = v108 ^ v313;
                        v105 = ullAugend;
                        v313 ^= v108;
                      }
                      v98 -= 2LL;
                      v102 -= 8;
                      v85 -= 2;
                      ullAugend = --v105;
                    }
                    while ( v105 );
                    v109 = v83 ^ v104;
                    v110 = v341[0];
                    v83 = uAugend;
                    v299 = v325 ^ v103;
                    *(v82 - 4) = v109;
                    v314 = __ROR4__(v109, 8);
                    *v82 = v299;
                    v300 = __ROR4__(v299, 8);
                    *(v82 - 5) = v314;
                    v315 = __ROR4__(v314, 8);
                    *(v82 - 1) = v300;
                    v301 = __ROR4__(v300, 8);
                    *(v82 - 6) = v315;
                    v316 = __ROR4__(v315, 8);
                    *(v82 - 2) = v301;
                    v302 = __ROR4__(v301, 8);
                    *(v82 - 7) = v316;
                    *(v82 - 3) = v302;
                    v82 += 8;
                    v74 = __ROR4__(v316, 8);
                    v81 = __ROR4__(v302, 8);
                    v111 = (*(_QWORD *)v340)-- == 1LL;
                    v325 = v110;
                    if ( v111 )
                      break;
                    LODWORD(v55) = v379;
                    v84 = (unsigned __int8 *)pullResult;
                  }
                  Acl = AccessStatus;
                  v16 = -1;
                  v8 = (unsigned int *)v349;
                  v9 = (unsigned int)AccessStatus;
                  v56 = *(_QWORD *)GrantedAccess;
                  v15 = -1LL;
                }
                v112 = 0LL;
                if ( v56 )
                {
                  if ( v56 < 0x20 )
                  {
                    v121 = NumberOfBytes;
                  }
                  else
                  {
                    v113 = 0LL;
                    v114 = 0LL;
                    do
                    {
                      v113 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)Src + v112)), v113);
                      v115 = _mm_loadu_si128((const __m128i *)((char *)Src + v112 + 16));
                      v112 += 32LL;
                      v116 = _mm_xor_si128(v115, v114);
                      v114 = v116;
                    }
                    while ( v112 < (v56 & 0xFFFFFFFFFFFFFFE0uLL) );
                    v117 = _mm_xor_si128(v113, v116);
                    v118 = _mm_xor_si128(v117, _mm_srli_si128(v117, 8));
                    v119 = _mm_xor_si128(v118, _mm_srli_si128(v118, 4));
                    v120 = _mm_xor_si128(v119, _mm_srli_si128(v119, 2));
                    v121 = _mm_cvtsi128_si32(_mm_xor_si128(v120, _mm_srli_si128(v120, 1)));
                    LODWORD(NumberOfBytes) = v121;
                  }
                  if ( v112 < v56 )
                  {
                    do
                      LOBYTE(v121) = *((_BYTE *)Src + v112++) ^ v121;
                    while ( v112 < v56 );
                    LODWORD(NumberOfBytes) = v121;
                  }
                }
                if ( (unsigned __int8)NumberOfBytes == *(_QWORD *)(Size + v56) )
                {
                  v6 = (NTSTATUS *)Src;
                  v303 = (NTSTATUS *)Src;
                  v364 = v56;
                  P = 0LL;
                  v338 = v56;
                  goto LABEL_168;
                }
                ExFreePoolWithTag(Src, 0x20534C53u);
              }
              v52 = P;
            }
          }
        }
      }
    }
    Acl = -1073741823;
    if ( v52 )
    {
      ExFreePoolWithTag(v52, 0x20534C53u);
      P = 0LL;
    }
    v6 = 0LL;
LABEL_168:
    if ( Acl < 0 )
    {
LABEL_305:
      v11 = v295;
      goto LABEL_306;
    }
    if ( v338 < 4 )
    {
      Acl = -1073741762;
      goto LABEL_305;
    }
    v122 = -1LL;
    v341[0] = *v6;
    if ( v6 + 1 >= v6 )
      v122 = (unsigned __int64)(v6 + 1);
    Acl = v6 + 1 < v6 ? 0xC0000095 : 0;
    if ( v6 + 1 < v6 )
    {
LABEL_208:
      if ( Acl < 0 )
        goto LABEL_305;
      if ( v332 )
      {
        if ( (_DWORD)v331 )
        {
          v137 = -1LL;
          v138 = *(_DWORD *)v332;
          if ( (char *)v332 + 4 >= v332 )
            v137 = (__int64)v332 + 4;
          Acl = (char *)v332 + 4 < v332 ? 0xC0000095 : 0;
          if ( (char *)v332 + 4 < v332 )
          {
            v138 = v359;
            v139 = v371;
          }
          else
          {
            v139 = 0LL;
            v359 = *(_DWORD *)v332;
            if ( v138 )
              v139 = (_DWORD *)v137;
            v371 = v139;
          }
          if ( (char *)v332 + 4 < v332 )
            goto LABEL_305;
          if ( v138 != 4 )
          {
            Acl = -1073741789;
            goto LABEL_305;
          }
          v357 = *v139;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_305;
      if ( !v332 )
      {
        v11 = 0LL;
        Acl = -1073741811;
        goto LABEL_308;
      }
      if ( (unsigned int)v331 <= 1 )
      {
        Acl = -1073741811;
        goto LABEL_305;
      }
      v140 = (unsigned __int64)v332;
      v141 = 0;
      do
      {
        v142 = -1LL;
        if ( v140 + 4 >= v140 )
          v142 = v140 + 4;
        Acl = v140 + 4 < v140 ? 0xC0000095 : 0;
        if ( v140 + 4 < v140 )
          goto LABEL_254;
        v143 = v142 + *(unsigned int *)v140;
        v140 = -1LL;
        if ( v143 >= v142 )
          v140 = v143;
        Acl = v143 < v142 ? 0xC0000095 : 0;
        if ( v143 < v142 )
        {
LABEL_254:
          v146 = 0;
          goto LABEL_255;
        }
        ++v141;
      }
      while ( !v141 );
      v144 = *(_DWORD *)v140;
      v145 = -1LL;
      if ( v140 + 4 >= v140 )
        v145 = v140 + 4;
      Acl = v140 + 4 < v140 ? 0xC0000095 : 0;
      v146 = 0;
      if ( v140 + 4 >= v140 )
      {
        HIDWORD(v346) = *(_DWORD *)v140;
        v147 = 0LL;
        if ( v144 )
          v147 = (void *)v145;
        v366 = v147;
      }
LABEL_255:
      if ( Acl < 0 )
        goto LABEL_305;
      if ( (unsigned int)v331 <= 2 )
      {
        Acl = -1073741811;
        goto LABEL_305;
      }
      v148 = (unsigned __int64)v332;
      while ( 1 )
      {
        v149 = -1LL;
        if ( v148 + 4 >= v148 )
          v149 = v148 + 4;
        Acl = v148 + 4 < v148 ? 0xC0000095 : 0;
        if ( v148 + 4 < v148 )
          break;
        v150 = v149 + *(unsigned int *)v148;
        v148 = -1LL;
        if ( v150 >= v149 )
          v148 = v150;
        Acl = v150 < v149 ? 0xC0000095 : 0;
        if ( v150 < v149 )
          break;
        if ( (unsigned int)++v146 >= 2 )
        {
          v151 = *(_DWORD *)v148;
          if ( v148 + 4 >= v148 )
            v15 = v148 + 4;
          Acl = v148 + 4 < v148 ? 0xC0000095 : 0;
          if ( v148 + 4 >= v148 )
          {
            v152 = 0LL;
            LODWORD(v346) = *(_DWORD *)v148;
            if ( v151 )
              v152 = v15;
            v365 = v152;
          }
          break;
        }
      }
      if ( Acl < 0 )
        goto LABEL_305;
      v153 = (unsigned int)v346;
      v154 = HIDWORD(v346);
      Size = v365;
      Src = v366;
      v155 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
      v158 = v155;
      if ( !v155 )
      {
        Acl = -1073741801;
        goto LABEL_300;
      }
      *v155 = 0LL;
      v155[2] = 0LL;
      v155[3] = 0LL;
      v155[4] = 0LL;
      v155[5] = 0LL;
      v156 = 0LL;
      Acl = 0;
      v159 = Src;
      *(_DWORD *)v158 = 0;
      v158[1] = 0LL;
      if ( v159 )
      {
        *((_DWORD *)v158 + 4) = v154;
        if ( (_DWORD)v154 )
        {
          v160 = ExAllocatePoolWithTag(PagedPool, v154, 0x20534C53u);
          if ( v160 )
            v158[3] = v160;
          else
            Acl = -1073741801;
          v159 = Src;
        }
        else
        {
          Acl = -1073741762;
        }
        if ( Acl < 0 )
          goto LABEL_290;
        memmove((void *)v158[3], v159, v154);
        v156 = 0LL;
      }
      else
      {
        *((_DWORD *)v158 + 4) = 0;
        v158[3] = 0LL;
      }
      if ( Size )
      {
        *((_DWORD *)v158 + 8) = v153;
        if ( !(_DWORD)v153 )
        {
          Acl = -1073741762;
LABEL_290:
          v162 = (void *)v158[1];
          if ( v162 )
          {
            ExFreePoolWithTag(v162, 0x20534C53u);
            v158[1] = 0LL;
          }
          v163 = (void *)v158[3];
          if ( v163 )
          {
            ExFreePoolWithTag(v163, 0x20534C53u);
            v158[3] = 0LL;
          }
          v164 = (void *)v158[5];
          if ( v164 )
          {
            ExFreePoolWithTag(v164, 0x20534C53u);
            v158[5] = 0LL;
          }
          ExFreePoolWithTag(v158, 0x20534C53u);
LABEL_300:
          if ( Acl >= 0 )
          {
            switch ( v357 )
            {
              case 0:
                v166 = sub_140689660(&v331, v9, v336, uAddend);
                goto LABEL_303;
              case 1:
                v175 = qword_14096E450;
                v176 = RtlLengthSid(*(PSID *)(qword_14096E450 + 392));
                v177 = RtlLengthSid(*(PSID *)(v175 + 384)) + v176;
                v178 = RtlLengthSid(*(PSID *)(v175 + 272)) + 32 + v177;
                v179 = (ACL *)ExAllocatePoolWithTag(PagedPool, v178, 0x20534C53u);
                v180 = v179;
                if ( v179 )
                {
                  Acl = RtlCreateAcl(v179, v178, 2u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(v180, 2u, 0, 32, *(unsigned __int8 **)(v175 + 384), 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(v180, 2u, 0, 32, *(unsigned __int8 **)(v175 + 392), 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(v180, 2u, 0, 32, *(unsigned __int8 **)(v175 + 272), 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v180, 0);
                            if ( Acl >= 0 )
                            {
                              SeCaptureSubjectContext(&SubjectContext);
                              v181 = SeAccessCheck(
                                       SecurityDescriptor,
                                       &SubjectContext,
                                       0,
                                       0x20u,
                                       0,
                                       0LL,
                                       (PGENERIC_MAPPING)&IopFileMapping,
                                       1,
                                       GrantedAccess,
                                       &AccessStatus);
                              SeReleaseSubjectContext(&SubjectContext);
                              if ( !v181 )
                                Acl = AccessStatus;
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v180, 0x20534C53u);
                  if ( Acl >= 0 )
                  {
                    ReturnLength = 0;
                    v182 = 0;
                    SystemInformation = 8LL;
                    ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
                    if ( v8[4] == 160 )
                    {
                      v183 = (const void *)*((_QWORD *)v8 + 3);
                      if ( !memcmp(qword_14090DA70, v183, 0xA0uLL)
                        && *(_DWORD *)(v9 + 16) == 160
                        && !memcmp(qword_14090E0B0, *(const void **)(v9 + 24), 0xA0uLL)
                        && v8[8] == 8
                        && **((_QWORD **)v8 + 5) == 0xA564595855B292C4uLL
                        && *(_DWORD *)(v9 + 32) == 8
                        && **(_QWORD **)(v9 + 40) == 0x1B732BD76B4D09FCLL )
                      {
                        v182 = 1;
                      }
                      else if ( !memcmp(qword_14090DE30, v183, 0xA0uLL)
                             && *(_DWORD *)(v9 + 16) == 160
                             && !memcmp(qword_14090D7F0, *(const void **)(v9 + 24), 0xA0uLL)
                             && v8[8] == 8
                             && **((_QWORD **)v8 + 5) == 0x93278D843BBDC445uLL
                             && *(_DWORD *)(v9 + 32) == 8 )
                      {
                        v182 = **(_QWORD **)(v9 + 40) == 0x6223E824AB21D998LL;
                      }
                    }
                    Acl = -2147024891;
                    if ( v182 )
                    {
                      Acl = -2147024891;
                      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
                        Acl = 0;
                    }
                  }
                }
                else
                {
                  Acl = -1073741801;
                }
                if ( Acl < 0 )
                  goto LABEL_304;
                Acl = SPCallServerHandleUpdatePolicies(&v331, v9, v336, uAddend);
                if ( Acl < 0 )
                  goto LABEL_304;
                goto LABEL_369;
              case 2:
                v166 = SPCallServerHandleAuthenticateCaller(v156, v9, v336, uAddend);
                goto LABEL_303;
              case 4:
                IsAppLicensed = sub_1408DFB14(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 5:
                IsAppLicensed = SPCallServerHandleWaitForDisplayWindow(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 6:
                IsAppLicensed = sub_1408E6348(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 7:
                v166 = sub_1408E45B0(&v331, v9, v157, uAddend);
                goto LABEL_303;
              case 22:
                IsAppLicensed = sub_1408E2B24(&v331, 0x140000000uLL, v157, uAddend);
                goto LABEL_368;
              case 23:
                v186 = qword_14096E450;
                v187 = RtlLengthSid(*(PSID *)(qword_14096E450 + 392));
                v188 = RtlLengthSid(*(PSID *)(v186 + 384)) + v187;
                v189 = RtlLengthSid(*(PSID *)(v186 + 272)) + 32 + v188;
                v190 = (ACL *)ExAllocatePoolWithTag(PagedPool, v189, 0x20534C53u);
                v193 = v190;
                if ( v190 )
                {
                  Acl = RtlCreateAcl(v190, v189, 2u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(v193, 2u, 0, 32, *(unsigned __int8 **)(v186 + 384), 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(v193, 2u, 0, 32, *(unsigned __int8 **)(v186 + 392), 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(v193, 2u, 0, 32, *(unsigned __int8 **)(v186 + 272), 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlCreateSecurityDescriptor(v378, 1u);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(v378, 1u, v193, 0);
                            if ( Acl >= 0 )
                            {
                              SeCaptureSubjectContext(&SubjectSecurityContext);
                              v194 = SeAccessCheck(
                                       v378,
                                       &SubjectSecurityContext,
                                       0,
                                       0x20u,
                                       0,
                                       0LL,
                                       (PGENERIC_MAPPING)&IopFileMapping,
                                       1,
                                       v340,
                                       v341);
                              SeReleaseSubjectContext(&SubjectSecurityContext);
                              if ( !v194 )
                                Acl = v341[0];
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v193, 0x20534C53u);
                  if ( Acl >= 0 )
                  {
                    v356 = 0;
                    v368 = 8LL;
                    v195 = 0;
                    ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v368, 8u, &v356);
                    if ( v8[4] == 160 )
                    {
                      v196 = (const void *)*((_QWORD *)v8 + 3);
                      if ( !memcmp(qword_14090DBB0, v196, 0xA0uLL)
                        && *(_DWORD *)(v9 + 16) == 160
                        && !memcmp(qword_14090DB10, *(const void **)(v9 + 24), 0xA0uLL)
                        && v8[8] == 8
                        && **((_QWORD **)v8 + 5) == 0x35DCEB18766AABAALL
                        && *(_DWORD *)(v9 + 32) == 8
                        && **(_QWORD **)(v9 + 40) == 0x14CEA8BAE086077CLL )
                      {
                        v195 = 1;
                      }
                      else if ( !memcmp(qword_14090DF70, v196, 0xA0uLL)
                             && *(_DWORD *)(v9 + 16) == 160
                             && !memcmp(qword_14090E330, *(const void **)(v9 + 24), 0xA0uLL)
                             && v8[8] == 8
                             && **((_QWORD **)v8 + 5) == 0xF10D668DB2BB8BB9uLL
                             && *(_DWORD *)(v9 + 32) == 8
                             && **(_QWORD **)(v9 + 40) == 0x768DFD321621EA95LL )
                      {
                        v195 = 1;
                      }
                      else
                      {
                        v197 = (const void *)*((_QWORD *)v8 + 3);
                        if ( !memcmp(qword_14090E290, v197, 0xA0uLL)
                          && *(_DWORD *)(v9 + 16) == 160
                          && !memcmp(sub_14090D890, *(const void **)(v9 + 24), 0xA0uLL)
                          && v8[8] == 8
                          && **((_QWORD **)v8 + 5) == 0xA10B922F1A2F2A8AuLL
                          && *(_DWORD *)(v9 + 32) == 8
                          && **(_QWORD **)(v9 + 40) == 0xC349B50B0A716A96uLL )
                        {
                          v195 = 1;
                        }
                        else if ( !memcmp(qword_14090DD90, v197, 0xA0uLL)
                               && *(_DWORD *)(v9 + 16) == 160
                               && !memcmp(qword_14090DED0, *(const void **)(v9 + 24), 0xA0uLL)
                               && v8[8] == 8
                               && **((_QWORD **)v8 + 5) == 0xA6723CF736811074uLL
                               && *(_DWORD *)(v9 + 32) == 8 )
                        {
                          v195 = **(_QWORD **)(v9 + 40) == 0x7511056E178DA076LL;
                        }
                      }
                    }
                    Acl = -2147024891;
                    if ( v195 )
                    {
                      v347 = 0;
                      Acl = 0;
                      updated = QueryUpdateFileEaAllowedExt(&v347);
                      if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v347 != 1 )
                      {
                        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                          Acl = -2147024891;
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741801;
                }
                if ( Acl < 0 )
                  goto LABEL_304;
                Acl = sub_1408E23E8(&v331, v191, v192, uAddend);
                if ( Acl < 0 )
                  goto LABEL_304;
                goto LABEL_369;
              case 24:
                v166 = sub_1408E1E28(&v331, 0x140000000uLL, v157, uAddend);
                goto LABEL_303;
              case 100:
                IsAppLicensed = sub_1408E5A4C(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 101:
                IsAppLicensed = sub_1408E56F8(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 102:
                IsAppLicensed = sub_1408E40FC(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 103:
                IsAppLicensed = sub_1408E0700(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 104:
                IsAppLicensed = sub_1408E490C(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 105:
                IsAppLicensed = sub_1408E3AB8(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 106:
                IsAppLicensed = sub_1408E3004(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 107:
                v166 = sub_1403230F0((__int64)&v331, v9, v157, (__int64)uAddend);
                goto LABEL_303;
              case 109:
                IsAppLicensed = SPCallServerHandleIsAppLicensed((__int64)&v331, v9, v157, (__int64)uAddend);
                goto LABEL_368;
              case 110:
                IsAppLicensed = sub_1408E18D0(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 111:
                IsAppLicensed = sub_1408DFEC4(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 112:
                IsAppLicensed = sub_1408E0220(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 113:
                IsAppLicensed = SPCallServerHandleClepKdf((__int64)&v331, v9, v157, (__int64)uAddend);
                goto LABEL_368;
              case 204:
                IsAppLicensed = sub_1408E5DA4(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 205:
                IsAppLicensed = SPCallServerHandleCheckLicense(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 206:
                v354 = 0;
                v199 = 0;
                v369 = 8LL;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v369, 8u, &v354);
                if ( v8[4] == 160 )
                {
                  v201 = (const void *)*((_QWORD *)v8 + 3);
                  if ( !memcmp(qword_14090DCF0, v201, 0xA0uLL)
                    && *(_DWORD *)(v9 + 16) == 160
                    && !memcmp(qword_14090E1F0, *(const void **)(v9 + 24), 0xA0uLL)
                    && v8[8] == 8
                    && **((_QWORD **)v8 + 5) == 0x5638EBB72F3355A5LL
                    && *(_DWORD *)(v9 + 32) == 8
                    && **(_QWORD **)(v9 + 40) == 0x9F2DD8784FE939B7uLL )
                  {
                    v199 = 1;
                  }
                  else if ( !memcmp(qword_14090E010, v201, 0xA0uLL)
                         && *(_DWORD *)(v9 + 16) == 160
                         && !memcmp(qword_14090E150, *(const void **)(v9 + 24), 0xA0uLL)
                         && v8[8] == 8
                         && **((_QWORD **)v8 + 5) == 0x5638EBB72F3355A5LL
                         && *(_DWORD *)(v9 + 32) == 8
                         && **(_QWORD **)(v9 + 40) == 0x9F2DD8784FE939B7uLL )
                  {
                    v199 = 1;
                  }
                  else
                  {
                    v202 = (const void *)*((_QWORD *)v8 + 3);
                    if ( !memcmp(qword_14090D9D0, v202, 0xA0uLL)
                      && *(_DWORD *)(v9 + 16) == 160
                      && !memcmp(qword_14090DC50, *(const void **)(v9 + 24), 0xA0uLL)
                      && v8[8] == 8
                      && **((_QWORD **)v8 + 5) == 0xF10D668DB2BB8BB9uLL
                      && *(_DWORD *)(v9 + 32) == 8
                      && **(_QWORD **)(v9 + 40) == 0x768DFD321621EA95LL )
                    {
                      v199 = 1;
                    }
                    else if ( !memcmp(qword_14090D750, v202, 0xA0uLL)
                           && *(_DWORD *)(v9 + 16) == 160
                           && !memcmp(qword_14090D930, *(const void **)(v9 + 24), 0xA0uLL)
                           && v8[8] == 8
                           && **((_QWORD **)v8 + 5) == 0xF10D668DB2BB8BB9uLL
                           && *(_DWORD *)(v9 + 32) == 8 )
                    {
                      v199 = **(_QWORD **)(v9 + 40) == 0x768DFD321621EA95LL;
                    }
                  }
                }
                Acl = -2147024891;
                if ( !v199 )
                {
                  v6 = v303;
                  v11 = 0LL;
                  goto LABEL_306;
                }
                Acl = sub_1403238E4((__int64)&v331, v9, v200, (__int64)uAddend);
                if ( Acl < 0 )
                  goto LABEL_304;
                goto LABEL_369;
              case 207:
                IsAppLicensed = sub_1408E0F7C(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 208:
                IsAppLicensed = SPCallServerHandleGetAppPolicyValue(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 209:
                IsAppLicensed = sub_1408E5128(&v331, v9, v157, uAddend);
                goto LABEL_368;
              case 210:
                IsAppLicensed = sub_1408DF4D0(&v331, v9, v157, uAddend);
LABEL_368:
                Acl = IsAppLicensed;
                if ( IsAppLicensed >= 0 )
                  goto LABEL_369;
                goto LABEL_304;
              case 211:
                v166 = sub_1408DEEF8(&v331, v9, v157, uAddend);
LABEL_303:
                Acl = v166;
                if ( v166 < 0 )
                  goto LABEL_304;
                goto LABEL_369;
              default:
                v353 = -2147467263;
                if ( v327 )
                {
                  v205 = (UINT *)v327;
                  v206 = uAddend[0];
                  pullResult = (ULONGLONG)v327;
                  if ( uAddend[0] )
                  {
                    do
                    {
                      v207 = RtlUIntAdd(4u, *v205, &v325);
                      Acl = v207;
                      if ( v207 >= 0 )
                        v208 = v325;
                      v342 = v208;
                      if ( v207 < 0 )
                        goto LABEL_505;
                      Acl = RtlULongLongAdd(v209, v208, &pullResult);
                      if ( Acl < 0 )
                        goto LABEL_505;
                      v205 = (UINT *)pullResult;
                    }
                    while ( v210 + 1 < v206 );
                  }
                  Acl = RtlULongLongAdd((ULONGLONG)v205, 4uLL, &v351);
                  if ( Acl >= 0 )
                  {
                    if ( v211 + 2 > (_DWORD *)((char *)v327 + uAddend[1]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_502;
                    }
                    v212 = (_DWORD *)v351;
                    *v211 = 4;
                    *v212 = v353;
                    ++uAddend[0];
                  }
                }
                else
                {
                  v203 = RtlUIntAdd(4u, 4u, (UINT *)&NumberOfBytes);
                  v204 = v342;
                  Acl = v203;
                  if ( v203 >= 0 )
                    v204 = NumberOfBytes;
                  v342 = v204;
                  if ( v203 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAddend[1], v204, &uAddend[1]);
                    if ( Acl >= 0 )
                    {
                      ++uAddend[0];
                      goto LABEL_506;
                    }
                  }
                }
LABEL_505:
                if ( Acl < 0 )
                  goto LABEL_502;
LABEL_506:
                if ( uAddend[1] )
                {
                  v213 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                  if ( v213 )
                  {
                    v327 = v213;
                    uAddend[0] = 0;
                    v362 = -2147467263;
                    Acl = RtlULongLongAdd((ULONGLONG)v213, 4uLL, &v361);
                    if ( Acl >= 0 )
                    {
                      if ( v214 + 2 <= (_DWORD *)((char *)v214 + uAddend[1]) )
                      {
                        v215 = (_DWORD *)v361;
                        *v214 = 4;
                        *v215 = v362;
                        ++uAddend[0];
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
                else
                {
                  Acl = -1073741762;
                }
LABEL_502:
                if ( Acl < 0 )
                  goto LABEL_304;
LABEL_369:
                v370 = __rdtsc();
                puResult = 8;
                Acl = RtlUIntAdd(8u, uAddend[1], &puResult);
                if ( Acl < 0 )
                  goto LABEL_522;
                v185 = (puResult + 7) & 0xFFFFFFF8;
                if ( v185 >= puResult )
                {
                  puResult = (puResult + 7) & 0xFFFFFFF8;
                  if ( v185 )
                  {
                    v216 = ExAllocatePoolWithTag(PagedPool, v185, 0x20534C53u);
                    if ( v216 )
                    {
                      *v216 = uAddend[0];
                      Src = v216;
                      Acl = RtlULongLongAdd((ULONGLONG)v216, 4uLL, (ULONGLONG *)&Src);
                      if ( Acl >= 0 )
                      {
                        v217 = Src;
                        *(_DWORD *)Src = uAddend[1];
                        Acl = RtlULongLongAdd((ULONGLONG)v217, 4uLL, (ULONGLONG *)&Src);
                        if ( Acl >= 0 )
                        {
                          *(_QWORD *)((char *)v216 + puResult - 8) = v370;
                          memmove(Src, v327, uAddend[1]);
                          v218 = puResult;
                          v219 = (unsigned __int64)v216;
                          v344 = v216;
                          goto LABEL_523;
                        }
                      }
                      ExFreePoolWithTag(v216, 0x20534C53u);
                    }
                    else
                    {
                      Acl = -1073741801;
                    }
                  }
                  else
                  {
                    Acl = -1073741762;
                  }
                }
                else
                {
                  Acl = -1073741675;
                }
LABEL_522:
                v218 = v330;
                v219 = v330;
LABEL_523:
                if ( Acl < 0 )
                  goto LABEL_304;
                v358 = 0LL;
                v372 = 0LL;
                if ( !v219 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                if ( !v218 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                v220 = *(__int64 **)(v9 + 40);
                if ( !v220 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                v221 = *(_DWORD *)(v9 + 32);
                if ( !v221 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                v222 = *(unsigned __int8 **)(v9 + 24);
                Src = v222;
                if ( !v222 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                v223 = *(_DWORD *)(v9 + 16);
                if ( !v223 )
                {
                  Acl = -1073741811;
                  goto LABEL_304;
                }
                v224 = v218;
                ullAugend = v218;
                if ( v221 != 8 || v223 != 160 )
                  goto LABEL_586;
                v225 = *v220;
                LOBYTE(v223) = 0;
                v336 = v223;
                v226 = 0LL;
                if ( v218 >= 0x20uLL )
                {
                  v227 = 0LL;
                  v228 = 0LL;
                  do
                  {
                    v227 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v226 + v219)), v227);
                    v229 = _mm_loadu_si128((const __m128i *)(v226 + v219 + 16));
                    v226 += 32LL;
                    v230 = _mm_xor_si128(v229, v228);
                    v228 = v230;
                  }
                  while ( v226 < (v218 & 0xFFFFFFE0) );
                  v231 = _mm_xor_si128(v227, v230);
                  v232 = _mm_xor_si128(v231, _mm_srli_si128(v231, 8));
                  v233 = _mm_xor_si128(v232, _mm_srli_si128(v232, 4));
                  v234 = _mm_xor_si128(v233, _mm_srli_si128(v233, 2));
                  v223 = _mm_cvtsi128_si32(_mm_xor_si128(v234, _mm_srli_si128(v234, 1)));
                  v336 = v223;
                }
                if ( v226 < v218 )
                {
                  do
                  {
                    LOBYTE(v223) = *(_BYTE *)(v226 + v219) ^ v223;
                    ++v226;
                  }
                  while ( v226 < v218 );
                  v336 = v223;
                }
                v235 = (size_t)ExAllocatePoolWithTag(PagedPool, v218 + 8LL, 0x20534C53u);
                *(_QWORD *)GrantedAccess = v235;
                if ( v235 )
                {
                  v380 = v225;
                  v236 = v224 & 7;
                  Size = v235;
                  i = (unsigned int)v236;
                  v237 = 0;
                  v317 = 0;
                  v304 = -1;
                  v325 = 0;
                  v330 = 0;
                  if ( v236 )
                  {
                    v325 = 0;
                    v238 = 0;
                    v330 = 0;
                    v239 = 0;
                    v240 = 0;
                    v241 = 56;
                    do
                    {
                      v242 = *(unsigned __int8 *)v219;
                      if ( v240 >= 4 )
                        v238 |= v242 << v241;
                      else
                        v239 |= v242 << (v241 - 32);
                      ++v240;
                      v241 -= 8;
                      ++v219;
                    }
                    while ( v240 < v236 );
                    v330 = v239;
                    v325 = v238;
                    v243 = 16LL;
                    v244 = v222 + 126;
                    pullResult = 16LL;
                    v245 = v222 + 158;
                    v246 = 30LL;
                    do
                    {
                      v247 = v245[1];
                      if ( v247 < 0x1Fu )
                      {
                        v248 = funcs_1405A2DA1[v247](
                                 v246 + 1,
                                 *(v244 - 2),
                                 *(v244 - 1),
                                 *v244,
                                 v244[1],
                                 (__int64)&v380,
                                 v237);
                        v237 = v317;
                        v16 = v248 ^ v304;
                        v243 = pullResult;
                        v304 ^= v248;
                      }
                      if ( *v245 < 0x1Fu )
                      {
                        v249 = funcs_1405A2DA1[*v245](
                                 v246,
                                 *(v244 - 6),
                                 *(v244 - 5),
                                 *(v244 - 4),
                                 *(v244 - 3),
                                 (__int64)&v380,
                                 v16);
                        v16 = v304;
                        v237 = v249 ^ v317;
                        v243 = pullResult;
                        v317 ^= v249;
                      }
                      v246 -= 2LL;
                      v244 -= 8;
                      v245 -= 2;
                      pullResult = --v243;
                    }
                    while ( v243 );
                    v237 ^= v330;
                    v250 = v325 ^ v16;
                    v251 = 0;
                    v252 = i;
                    v9 = v348;
                    v318 = v237;
                    v305 = v250;
                    if ( (_DWORD)i )
                    {
                      v253 = (_BYTE *)Size;
                      do
                      {
                        v254 = v253 + 1;
                        if ( v251 >= 4 )
                        {
                          v250 = __ROL4__(v250, 8);
                          v255 = v250;
                        }
                        else
                        {
                          v237 = __ROL4__(v237, 8);
                          v255 = v237;
                        }
                        ++v251;
                        *v253++ = v255;
                      }
                      while ( v251 < (int)v252 );
                      v237 = v318;
                      v235 = (size_t)v254;
                      v250 = v305;
                    }
                    else
                    {
                      v235 = Size;
                    }
                    if ( v252 <= 4 )
                    {
                      v16 = 0;
                      if ( v252 < 4 )
                        v237 = v237 >> (8 * (4 - v252)) << (8 * (4 - v252));
                    }
                    else
                    {
                      v16 = v250 >> (8 * (8 - v252)) << (8 * (8 - v252));
                    }
                    v222 = (unsigned __int8 *)Src;
                  }
                  v256 = ullAugend;
                  Src = (void *)(ullAugend >> 3);
                  if ( ullAugend >> 3 )
                  {
                    v257 = v222 + 129;
                    v258 = v222 + 2;
                    v360 = (ULONGLONG)(v222 + 129);
                    *(_QWORD *)v340 = v222 + 2;
                    v259 = (unsigned __int8 *)(v219 + 2);
                    Size = v235 + 7;
                    do
                    {
                      v260 = 0LL;
                      v261 = v258;
                      v262 = v257;
                      v263 = v259[1] | ((*v259 | ((*(v259 - 1) | (*(v259 - 2) << 8)) << 8)) << 8);
                      v264 = v263 ^ v237;
                      v319 = v264;
                      v265 = (v259[5] | ((v259[4] | ((v259[3] | (v259[2] << 8)) << 8)) << 8)) ^ v16;
                      AccessStatus = v259[5] | ((v259[4] | ((v259[3] | (v259[2] << 8)) << 8)) << 8);
                      v306 = v265;
                      v266 = 16LL;
                      i = (ULONGLONG)(v259 + 8);
                      pullResult = 16LL;
                      do
                      {
                        v267 = *(v262 - 1);
                        if ( v267 < 0x1Fu )
                        {
                          v268 = funcs_1405A2DA1[v267](
                                   v260,
                                   *(v261 - 2),
                                   *(v261 - 1),
                                   *v261,
                                   v261[1],
                                   (__int64)&v380,
                                   v265);
                          v265 = v306;
                          v264 = v268 ^ v319;
                          v266 = pullResult;
                          v319 ^= v268;
                        }
                        if ( *v262 < 0x1Fu )
                        {
                          v269 = funcs_1405A2DA1[(unsigned __int8)*v262](
                                   v260 + 1,
                                   v261[2],
                                   v261[3],
                                   v261[4],
                                   v261[5],
                                   (__int64)&v380,
                                   v264);
                          v264 = v319;
                          v265 = v269 ^ v306;
                          v266 = pullResult;
                          v306 ^= v269;
                        }
                        v260 += 2LL;
                        v261 += 8;
                        v262 += 2;
                        pullResult = --v266;
                      }
                      while ( v266 );
                      v270 = (HIWORD(v380) * ((unsigned __int16)v380 + __ROR4__(~v265, 5))) ^ v264;
                      v271 = (v270 >> 10) ^ (WORD1(v380) * (v270 ^ HIWORD(v380))) ^ v265;
                      v272 = __ROR4__(v271, 10) ^ (WORD2(v380) * __ROR4__(v380 ^ v271, 12)) ^ v270;
                      v273 = (HIWORD(v380) * __ROR4__(v272 - v380, 14) - __ROL4__(v272, 8)) ^ v271;
                      v274 = (__ROL4__(v273, 2) + (unsigned __int16)v380 * __ROR4__(v273 + HIDWORD(v380), 15)) ^ v272;
                      v275 = (WORD1(v380) * (v274 ^ WORD2(v380))) ^ __ROR4__(v274, 6) ^ v273;
                      v276 = (HIDWORD(v380) - (v380 ^ v275)) ^ v274;
                      v277 = (HIWORD(v380) * __ROL4__(v276 ^ WORD1(v380), 6) - __ROL4__(v276, 2)) ^ v275;
                      v278 = ((unsigned __int16)v380 * (v277 - WORD2(v380)) - (v277 >> 13)) ^ v276;
                      v279 = (WORD1(v380) * __ROR4__(v278 + HIDWORD(v380), 9) - __ROL4__(v278, 2)) ^ v277;
                      v280 = AccessStatus;
                      v259 = (unsigned __int8 *)i;
                      v281 = (__ROL4__(v279, 10) + WORD2(v380) * __ROL4__(v279 - v380, 5)) ^ v278;
                      v282 = (_BYTE *)Size;
                      v320 = v330 ^ v281;
                      v330 = v263;
                      v307 = v325 ^ v380 ^ HIDWORD(v380) ^ v279 ^ v281;
                      *(_BYTE *)(Size - 4) = v320;
                      v321 = __ROR4__(v320, 8);
                      *v282 = v307;
                      v308 = __ROR4__(v307, 8);
                      *(v282 - 5) = v321;
                      v322 = __ROR4__(v321, 8);
                      *(v282 - 1) = v308;
                      v309 = __ROR4__(v308, 8);
                      *(v282 - 6) = v322;
                      v323 = __ROR4__(v322, 8);
                      *(v282 - 2) = v309;
                      v310 = __ROR4__(v309, 8);
                      *(v282 - 7) = v323;
                      *(v282 - 3) = v310;
                      v237 = __ROR4__(v323, 8);
                      v16 = __ROR4__(v310, 8);
                      v111 = Src == (void *)1;
                      Src = (char *)Src - 1;
                      v325 = v280;
                      v258 = *(unsigned __int8 **)v340;
                      Size = (size_t)(v282 + 8);
                      v257 = (_BYTE *)v360;
                    }
                    while ( !v111 );
                    v9 = v348;
                    v256 = ullAugend;
                  }
                  v283 = *(void **)GrantedAccess;
                  v284 = v256 + 8;
                  *(_QWORD *)(*(_QWORD *)GrantedAccess + v256) = (unsigned __int8)v336;
                  v358 = v283;
                  Acl = 0;
                  v372 = v256 + 8;
                  if ( (_DWORD)v256 == -8 )
                  {
                    Acl = -1073741762;
                  }
                  else
                  {
                    v285 = ExAllocatePoolWithTag(PagedPool, v284, 0x20534C53u);
                    v286 = v285;
                    if ( v285 )
                    {
                      memmove(v285, v283, v284);
                      *(_QWORD *)(v9 + 8) = v286;
                      *(_DWORD *)v9 = v284;
                    }
                    else
                    {
                      Acl = -1073741801;
                    }
                  }
                }
                else
                {
LABEL_586:
                  Acl = -1073741823;
                }
                if ( v358 )
                {
                  ExFreePoolWithTag(v358, 0x20534C53u);
                  v358 = 0LL;
                }
                if ( Acl < 0 )
                  goto LABEL_304;
                v287 = *(_DWORD *)v9;
                uAugend = 4;
                Acl = RtlUIntAdd(4u, v287, &uAugend);
                if ( Acl < 0
                  || (Acl = RtlUIntAdd(uAugend, v288, &uAugend), Acl < 0)
                  || (Acl = RtlUIntAdd(uAugend, *(_DWORD *)(v9 + 16), &uAugend), Acl < 0)
                  || (Acl = RtlUIntAdd(uAugend, 4u, &uAugend), Acl < 0) )
                {
                  v289 = v343;
                }
                else
                {
                  Acl = RtlUIntAdd(uAugend, *(_DWORD *)(v9 + 32), &uAugend);
                  v289 = v343;
                  if ( Acl >= 0 )
                    v289 = uAugend;
                  v343 = v289;
                }
                if ( Acl < 0 )
                  goto LABEL_611;
                if ( v289 )
                {
                  v290 = ExAllocatePoolWithTag(PagedPool, v289, 0x20534C53u);
                  if ( v290 )
                  {
                    *v290 = *(_DWORD *)v9;
                    ullAugend = (ULONGLONG)v290;
                    Acl = RtlULongLongAdd((ULONGLONG)v290, 4uLL, &ullAugend);
                    if ( Acl >= 0 )
                    {
                      memmove((void *)ullAugend, *(const void **)(v9 + 8), *(unsigned int *)v9);
                      Acl = RtlULongLongAdd(ullAugend, *(unsigned int *)v9, &ullAugend);
                      if ( Acl >= 0 )
                      {
                        v291 = ullAugend;
                        *(_DWORD *)ullAugend = *(_DWORD *)(v9 + 16);
                        Acl = RtlULongLongAdd(v291, 4uLL, &ullAugend);
                        if ( Acl >= 0 )
                        {
                          memmove((void *)ullAugend, *(const void **)(v9 + 24), *(unsigned int *)(v9 + 16));
                          Acl = RtlULongLongAdd(ullAugend, *(unsigned int *)(v9 + 16), &ullAugend);
                          if ( Acl >= 0 )
                          {
                            v292 = ullAugend;
                            *(_DWORD *)ullAugend = *(_DWORD *)(v9 + 32);
                            Acl = RtlULongLongAdd(v292, 4uLL, &ullAugend);
                            if ( Acl >= 0 )
                            {
                              memmove((void *)ullAugend, *(const void **)(v9 + 40), *(unsigned int *)(v9 + 32));
                              Acl = RtlULongLongAdd(ullAugend, *(unsigned int *)(v9 + 32), &ullAugend);
                              if ( Acl >= 0 )
                              {
                                v293 = v343;
                                v294 = v290;
                                v295 = v290;
                                goto LABEL_612;
                              }
                            }
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v290, 0x20534C53u);
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
                else
                {
                  Acl = -1073741762;
                }
LABEL_611:
                v294 = 0LL;
                v293 = 0;
LABEL_612:
                v6 = v303;
                if ( Acl < 0 )
                  goto LABEL_305;
                v11 = 0LL;
                *v373 = v294;
                *v374 = v293;
                break;
            }
            goto LABEL_306;
          }
          goto LABEL_304;
        }
        v161 = ExAllocatePoolWithTag(PagedPool, v153, 0x20534C53u);
        if ( !v161 )
        {
          Acl = -1073741801;
          goto LABEL_290;
        }
        v165 = (const void *)Size;
        Acl = 0;
        v158[5] = v161;
        memmove(v161, v165, v153);
      }
      else
      {
        *((_DWORD *)v158 + 8) = 0;
        v158[5] = 0LL;
      }
      v9 = (__int64)v158;
      v348 = (__int64)v158;
      goto LABEL_300;
    }
    if ( v338 - 4 < 4 )
    {
      Acl = -1073741762;
      goto LABEL_305;
    }
    v123 = *(unsigned int *)v122;
    AccessStatus = *(_DWORD *)v122;
    v124 = -1LL;
    if ( v122 + 4 >= v122 )
      v124 = v122 + 4;
    Acl = v122 + 4 < v122 ? 0xC0000095 : 0;
    if ( v122 + 4 < v122 )
      goto LABEL_207;
    if ( v338 - 8 < (unsigned int)v123 )
    {
      Acl = -1073741762;
LABEL_304:
      v6 = v303;
      goto LABEL_305;
    }
    Acl = (unsigned int)v123 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
    if ( (unsigned int)v123 >= 0xFFFFFFF8 )
    {
LABEL_207:
      v6 = v303;
      goto LABEL_208;
    }
    v125 = v124 + v123;
    v126 = v123;
    i = v123;
    if ( (unsigned __int64)v303 + v338 < v124 + v123 || (unsigned __int64)v303 + v338 - v124 - v123 >= 8 )
    {
      Acl = -1073741762;
      v6 = v303;
      goto LABEL_208;
    }
    v127 = 0LL;
    Acl = 0;
    Src = 0LL;
    v128 = 0;
    if ( v124 )
    {
      v129 = -1LL;
      v130 = (char *)v124;
      if ( v125 >= v124 )
        v129 = v124 + v123;
      Acl = v125 < v124 ? 0xC0000095 : 0;
      if ( v125 < v124 )
        goto LABEL_218;
      if ( v124 < v129 )
      {
        v131 = v363;
        while ( 1 )
        {
          v132 = -1LL;
          if ( v130 + 4 >= v130 )
            v132 = (unsigned __int64)(v130 + 4);
          Acl = v130 + 4 < v130 ? 0xC0000095 : 0;
          if ( v130 + 4 < v130 )
            goto LABEL_218;
          if ( v132 > v129 )
            goto LABEL_206;
          v133 = -1;
          v134 = *(_DWORD *)v130 + 4;
          if ( *(_DWORD *)v130 < 0xFFFFFFFC )
            v133 = *(_DWORD *)v130 + 4;
          Acl = *(_DWORD *)v130 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v134 >= 4 )
            v131 = v133;
          v363 = v131;
          if ( v134 < 4 )
            goto LABEL_218;
          v135 = -1LL;
          v136 = &v130[v131];
          if ( v136 >= v130 )
            v135 = (unsigned __int64)&v130[v131];
          Acl = v136 < v130 ? 0xC0000095 : 0;
          if ( v136 < v130 )
            goto LABEL_218;
          if ( v135 > v129 )
            goto LABEL_206;
          ++v128;
          v130 = (char *)v135;
          if ( v135 >= v129 )
          {
            v127 = Src;
            break;
          }
        }
      }
      if ( v130 != (char *)v129 )
      {
LABEL_206:
        Acl = -1073741811;
        goto LABEL_207;
      }
    }
    if ( (_DWORD)v123 )
    {
      v127 = ExAllocatePoolWithTag(PagedPool, v123, 0x20534C53u);
      Src = v127;
      if ( !v127 )
      {
        Acl = -1073741801;
        goto LABEL_218;
      }
      v126 = i;
      Acl = 0;
    }
    if ( v124 )
    {
      memmove(v127, (const void *)v124, v126);
      v127 = Src;
    }
    v332 = v127;
    v331 = __PAIR64__(AccessStatus, v128);
LABEL_218:
    if ( Acl >= 0 )
    {
      v6 = v303;
      if ( v341[0] != (_DWORD)v331 )
      {
        Acl = -1073741762;
        goto LABEL_305;
      }
      goto LABEL_208;
    }
    goto LABEL_207;
  }
  v6 = 0LL;
  v11 = 0LL;
LABEL_306:
  if ( v332 )
    ExFreePoolWithTag(v332, 0x20534C53u);
LABEL_308:
  *(_QWORD *)uAddend = 0LL;
  if ( v327 )
  {
    ExFreePoolWithTag(v327, 0x20534C53u);
    v327 = 0LL;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20534C53u);
  v167 = v349;
  if ( v349 )
  {
    v168 = (void *)*((_QWORD *)v349 + 1);
    if ( v168 )
    {
      ExFreePoolWithTag(v168, 0x20534C53u);
      v167[1] = 0LL;
    }
    v169 = (void *)v167[3];
    if ( v169 )
    {
      ExFreePoolWithTag(v169, 0x20534C53u);
      v167[3] = 0LL;
    }
    v170 = (void *)v167[5];
    if ( v170 )
    {
      ExFreePoolWithTag(v170, 0x20534C53u);
      v167[5] = 0LL;
    }
    ExFreePoolWithTag(v167, 0x20534C53u);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x20534C53u);
  if ( v9 )
  {
    v171 = *(void **)(v9 + 8);
    if ( v171 )
    {
      ExFreePoolWithTag(v171, 0x20534C53u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    v172 = *(void **)(v9 + 24);
    if ( v172 )
    {
      ExFreePoolWithTag(v172, 0x20534C53u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v173 = *(void **)(v9 + 40);
    if ( v173 )
    {
      ExFreePoolWithTag(v173, 0x20534C53u);
      *(_QWORD *)(v9 + 40) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x20534C53u);
  }
  if ( v344 )
    ExFreePoolWithTag(v344, 0x20534C53u);
  return (unsigned int)Acl;
}
