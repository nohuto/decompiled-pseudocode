/*
 * XREFs of SPCall2ServerInternal @ 0x14064A46C
 * Callers:
 *     Callout @ 0x14064A200 (Callout.c)
 * Callees:
 *     RtlUIntAdd @ 0x140003F38 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlULongLongAdd @ 0x14009C31C (RtlULongLongAdd.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     StringCbLengthW @ 0x1400D5CD0 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     sub_140344570 @ 0x140344570 (sub_140344570.c)
 *     sub_140344B2C @ 0x140344B2C (sub_140344B2C.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     sub_1406BCFD0 @ 0x1406BCFD0 (sub_1406BCFD0.c)
 *     sub_1406BD0C0 @ 0x1406BD0C0 (sub_1406BD0C0.c)
 *     sub_1406BD780 @ 0x1406BD780 (sub_1406BD780.c)
 *     sub_1406BDFC0 @ 0x1406BDFC0 (sub_1406BDFC0.c)
 *     sub_1406BE400 @ 0x1406BE400 (sub_1406BE400.c)
 *     sub_1406BE710 @ 0x1406BE710 (sub_1406BE710.c)
 *     sub_1406BEB00 @ 0x1406BEB00 (sub_1406BEB00.c)
 *     sub_1406BEDE0 @ 0x1406BEDE0 (sub_1406BEDE0.c)
 *     sub_1406BEE60 @ 0x1406BEE60 (sub_1406BEE60.c)
 *     sub_1406BEEE0 @ 0x1406BEEE0 (sub_1406BEEE0.c)
 *     sub_1406C4410 @ 0x1406C4410 (sub_1406C4410.c)
 *     sub_1406C4440 @ 0x1406C4440 (sub_1406C4440.c)
 *     sub_1406C4580 @ 0x1406C4580 (sub_1406C4580.c)
 *     sub_1406C4630 @ 0x1406C4630 (sub_1406C4630.c)
 *     sub_1406C48E0 @ 0x1406C48E0 (sub_1406C48E0.c)
 *     sub_1406C5570 @ 0x1406C5570 (sub_1406C5570.c)
 *     sub_1406C5B00 @ 0x1406C5B00 (sub_1406C5B00.c)
 *     sub_1406C5BA0 @ 0x1406C5BA0 (sub_1406C5BA0.c)
 *     sub_1406C7B40 @ 0x1406C7B40 (sub_1406C7B40.c)
 *     sub_1406CC6B0 @ 0x1406CC6B0 (sub_1406CC6B0.c)
 *     sub_1406CC920 @ 0x1406CC920 (sub_1406CC920.c)
 *     sub_1406CCB50 @ 0x1406CCB50 (sub_1406CCB50.c)
 *     sub_1406CD570 @ 0x1406CD570 (sub_1406CD570.c)
 *     sub_1406D46D0 @ 0x1406D46D0 (sub_1406D46D0.c)
 *     sub_1406D7BB0 @ 0x1406D7BB0 (sub_1406D7BB0.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406DE5C4 (SPCallServerHandleIsAppLicensed.c)
 *     sub_1406E0D20 @ 0x1406E0D20 (sub_1406E0D20.c)
 *     sub_1406E0DD0 @ 0x1406E0DD0 (sub_1406E0DD0.c)
 *     sub_1406E2AD0 @ 0x1406E2AD0 (sub_1406E2AD0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406E5DF8 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleClepKdf @ 0x1406E71B8 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleCheckLicense @ 0x1406EA214 (SPCallServerHandleCheckLicense.c)
 *     sub_1406EA740 @ 0x1406EA740 (sub_1406EA740.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406EF3D8 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406EFBBC (SPCallServerHandleAuthenticateCaller.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407493A8 (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_14091B448 @ 0x14091B448 (sub_14091B448.c)
 *     sub_14091B860 @ 0x14091B860 (sub_14091B860.c)
 *     sub_14091BCEC @ 0x14091BCEC (sub_14091BCEC.c)
 *     sub_14091C08C @ 0x14091C08C (sub_14091C08C.c)
 *     sub_14091C308 @ 0x14091C308 (sub_14091C308.c)
 *     sub_14091C6C0 @ 0x14091C6C0 (sub_14091C6C0.c)
 *     sub_14091CCE4 @ 0x14091CCE4 (sub_14091CCE4.c)
 *     sub_14091D36C @ 0x14091D36C (sub_14091D36C.c)
 *     sub_14091D794 @ 0x14091D794 (sub_14091D794.c)
 *     sub_14091DCAC @ 0x14091DCAC (sub_14091DCAC.c)
 *     sub_14091E2F4 @ 0x14091E2F4 (sub_14091E2F4.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091EF0C @ 0x14091EF0C (sub_14091EF0C.c)
 *     sub_14091F398 @ 0x14091F398 (sub_14091F398.c)
 *     sub_14091F638 @ 0x14091F638 (sub_14091F638.c)
 *     sub_14091FC58 @ 0x14091FC58 (sub_14091FC58.c)
 *     sub_1409200DC @ 0x1409200DC (sub_1409200DC.c)
 *     sub_140920348 @ 0x140920348 (sub_140920348.c)
 *     sub_140920480 @ 0x140920480 (sub_140920480.c)
 *     sub_1409206EC @ 0x1409206EC (sub_1409206EC.c)
 *     sub_140920B70 @ 0x140920B70 (sub_140920B70.c)
 *     sub_140920DE0 @ 0x140920DE0 (sub_140920DE0.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  unsigned int *v5; // r12
  _QWORD *v7; // rbx
  const void **v8; // r15
  unsigned int *v9; // r14
  SIZE_T v10; // r12
  unsigned int *v11; // rcx
  unsigned int *v12; // r9
  SIZE_T v13; // rdi
  unsigned int *v14; // rcx
  unsigned int v15; // r9d
  unsigned int *v16; // r8
  unsigned int v17; // r10d
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int *PoolWithTag; // rax
  unsigned int *v21; // rbx
  int Acl; // esi
  unsigned int *v23; // rbx
  UINT *v24; // rcx
  void *v25; // rax
  unsigned __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rbx
  unsigned __int8 v29; // di
  unsigned __int8 *v30; // rax
  unsigned __int8 *v31; // rdx
  char *v32; // r8
  UINT v33; // r10d
  UINT v34; // r11d
  _BYTE *v35; // r12
  ACCESS_MASK v36; // r13d
  unsigned __int8 *v37; // rsi
  UINT v38; // r14d
  size_t v39; // rcx
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // r11d
  unsigned int v46; // r8d
  int v47; // r11d
  int v48; // r8d
  int v49; // r11d
  int v50; // r11d
  __int64 v51; // rdi
  UINT v52; // r11d
  int v53; // edx
  unsigned int v54; // r11d
  unsigned __int8 *v55; // rbx
  UINT v56; // edx
  int v57; // ecx
  ULONGLONG v58; // r8
  unsigned __int8 *v59; // rax
  int v60; // r11d
  unsigned __int8 v61; // cl
  int v62; // r11d
  int v63; // edx
  bool v64; // zf
  int v65; // eax
  int v66; // eax
  unsigned __int64 v67; // rax
  unsigned __int8 *v68; // r8
  unsigned __int64 v69; // r10
  int v70; // ebx
  unsigned int v71; // edx
  UINT *v72; // rdi
  UINT v73; // r11d
  SIZE_T v74; // rsi
  char *v75; // rbx
  unsigned __int64 v76; // r8
  size_t v77; // r9
  PVOID v78; // rax
  int v79; // edx
  char *v80; // rcx
  unsigned int v81; // eax
  char *v82; // r10
  int v83; // edx
  unsigned int *v84; // rax
  ACCESS_MASK *v85; // rax
  int v86; // edx
  __int64 v87; // r8
  unsigned int *v88; // rcx
  ACCESS_MASK v89; // ecx
  unsigned int *v90; // rdx
  unsigned int *v91; // rax
  UINT *v92; // rax
  unsigned int i; // edx
  __int64 v94; // r8
  unsigned int *v95; // rcx
  UINT v96; // ecx
  unsigned int *v97; // rdx
  unsigned int *v98; // rax
  unsigned int *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned int *v103; // rbx
  ACCESS_MASK v104; // eax
  PVOID v105; // rax
  size_t v106; // rax
  PVOID v107; // rax
  int AppPolicyValue; // eax
  bool v109; // sf
  void *v110; // r11
  UINT v111; // eax
  char *v112; // rax
  char *v113; // rbx
  unsigned int v114; // r9d
  ULONGLONG v115; // rcx
  void *v116; // rcx
  __int64 *v117; // rdi
  unsigned int v118; // ecx
  unsigned int v119; // edx
  __int64 v120; // rdi
  unsigned __int8 v121; // bl
  unsigned __int64 k; // rcx
  char *v123; // rax
  UINT v124; // ecx
  unsigned __int8 *v125; // rdx
  unsigned int v126; // esi
  int v127; // r12d
  int v128; // edi
  unsigned __int8 *v129; // r13
  NTSTATUS v130; // ebx
  size_t v131; // r8
  unsigned __int8 *v132; // r9
  __int64 v133; // r15
  unsigned __int8 *v134; // rdi
  int v135; // edx
  int v136; // eax
  int v137; // ecx
  int v138; // edx
  int v139; // esi
  NTSTATUS v140; // edx
  int v141; // r12d
  ULONGLONG v142; // rdx
  _BYTE *v143; // rax
  unsigned __int8 v144; // cl
  unsigned int v145; // esi
  int v146; // r12d
  int v147; // esi
  int v148; // r12d
  int v149; // esi
  int v150; // r12d
  int v151; // esi
  unsigned int v152; // r12d
  int v153; // esi
  int v154; // r12d
  _BYTE *v155; // r8
  int v156; // esi
  int v157; // r12d
  void *v158; // r12
  __int64 v159; // rdi
  PVOID v160; // rax
  PVOID v161; // rbx
  UINT v162; // edx
  UINT v163; // eax
  _DWORD *v164; // rax
  void *v165; // rbx
  ULONGLONG v166; // rcx
  ULONGLONG v167; // rcx
  void *v168; // rdi
  _DWORD *v169; // rcx
  void *v170; // rcx
  void *v171; // rcx
  void *v172; // rcx
  void *v173; // rcx
  void *v174; // rcx
  void *v175; // rcx
  int v177; // eax
  int v178; // eax
  const void *v179; // rax
  PVOID v180; // rax
  void *v181; // rdi
  void *v182; // rcx
  void *v183; // rcx
  void *v184; // rcx
  SIZE_T v185; // rax
  PVOID v186; // rax
  size_t v187; // r12
  PVOID v188; // rax
  __int64 v189; // rsi
  ULONG v190; // ebx
  ULONG v191; // ebx
  ULONG v192; // esi
  ACL *v193; // rax
  ACL *v194; // rbx
  BOOLEAN v195; // bl
  const void *v196; // rbx
  int v197; // eax
  void *v198; // rcx
  void *v199; // rcx
  void *v200; // rcx
  unsigned int v201; // ebx
  int v202; // r10d
  int v203; // r11d
  ACCESS_MASK v204; // r12d
  int v205; // r9d
  char v206; // r8
  int v207; // eax
  __int64 v208; // r15
  unsigned __int8 *v209; // r12
  unsigned __int8 *v210; // rax
  __int64 v211; // rdx
  unsigned __int8 v212; // cl
  int v213; // eax
  int v214; // eax
  ACCESS_MASK v215; // r10d
  int v216; // eax
  _BYTE *v217; // rcx
  char v218; // dl
  void *v219; // rcx
  void *v220; // rcx
  void *v221; // rcx
  __int64 v222; // rsi
  ULONG v223; // ebx
  ULONG v224; // ebx
  ULONG v225; // esi
  ACL *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // r8
  ACL *v229; // rbx
  BOOLEAN v230; // bl
  const void *v231; // rbx
  const void *v232; // rbx
  int updated; // eax
  int v234; // eax
  unsigned int *v235; // rax
  unsigned int j; // edx
  __int64 v237; // r8
  unsigned int *v238; // rcx
  unsigned int v239; // ecx
  unsigned int *v240; // rdx
  int *v241; // rax
  unsigned int v242; // edx
  unsigned int v243; // ecx
  _DWORD *v244; // rax
  unsigned int v245; // edx
  unsigned int v246; // eax
  _DWORD *v247; // rax
  unsigned int *v248; // rax
  unsigned int m; // edx
  __int64 v250; // r8
  unsigned int *v251; // rcx
  unsigned int v252; // ecx
  const wchar_t *v253; // r9
  unsigned int v254; // eax
  size_t v255; // rsi
  PVOID v256; // rax
  void *v257; // rbx
  unsigned int *v258; // rax
  unsigned int n; // edx
  __int64 v260; // r8
  unsigned int *v261; // rcx
  unsigned int v262; // ecx
  unsigned int *v263; // rdx
  int *v264; // rax
  unsigned __int64 v265; // rbx
  PVOID v266; // rax
  unsigned int v267; // edx
  unsigned int v268; // eax
  _DWORD *v269; // rax
  const void *v270; // rbx
  int v271; // r8d
  const void *v272; // rbx
  unsigned int v273; // r9d
  UINT v274; // r10d
  int v275; // r8d
  char v276; // r11
  int v277; // eax
  ULONGLONG v278; // rdx
  unsigned __int8 *v279; // r13
  unsigned __int8 *v280; // rax
  __int64 v281; // r15
  unsigned __int8 v282; // cl
  int v283; // eax
  int v284; // eax
  unsigned int v285; // r12d
  int v286; // eax
  _BYTE *v287; // rcx
  char *v288; // r8
  char v289; // dl
  UINT puResult; // [rsp+50h] [rbp-B0h] BYREF
  void *v291; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v292; // [rsp+60h] [rbp-A0h]
  UINT v293; // [rsp+64h] [rbp-9Ch]
  int v294; // [rsp+68h] [rbp-98h]
  UINT v295; // [rsp+6Ch] [rbp-94h]
  UINT v296; // [rsp+70h] [rbp-90h]
  ACCESS_MASK NumberOfBytes[3]; // [rsp+74h] [rbp-8Ch] BYREF
  UINT uAddend[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v299; // [rsp+88h] [rbp-78h]
  ULONGLONG ullAugend; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG pullResult; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v302; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v303; // [rsp+A8h] [rbp-58h]
  unsigned int v304; // [rsp+B0h] [rbp-50h]
  UINT v305; // [rsp+B4h] [rbp-4Ch]
  UINT AccessStatus; // [rsp+B8h] [rbp-48h] BYREF
  UINT v307; // [rsp+BCh] [rbp-44h] BYREF
  void *Src; // [rsp+C0h] [rbp-40h]
  size_t Size; // [rsp+C8h] [rbp-38h] BYREF
  NTSTATUS v310; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v311; // [rsp+D4h] [rbp-2Ch]
  UINT v312; // [rsp+D8h] [rbp-28h]
  void *v313; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v314; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v315; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v316; // [rsp+F8h] [rbp-8h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+100h] [rbp+0h] BYREF
  int v318; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v319; // [rsp+10Ch] [rbp+Ch]
  UINT v320; // [rsp+110h] [rbp+10h]
  const void **v321; // [rsp+118h] [rbp+18h]
  PVOID v322; // [rsp+120h] [rbp+20h]
  PVOID v323; // [rsp+128h] [rbp+28h]
  PVOID v324; // [rsp+130h] [rbp+30h]
  unsigned int *v325; // [rsp+138h] [rbp+38h]
  ULONG v326; // [rsp+140h] [rbp+40h] BYREF
  int v327; // [rsp+144h] [rbp+44h]
  int v328; // [rsp+148h] [rbp+48h]
  int v329; // [rsp+150h] [rbp+50h]
  unsigned int v330; // [rsp+158h] [rbp+58h]
  __int64 v331; // [rsp+160h] [rbp+60h]
  ULONG ReturnLength; // [rsp+168h] [rbp+68h] BYREF
  int v333; // [rsp+16Ch] [rbp+6Ch]
  int v334; // [rsp+170h] [rbp+70h]
  ULONG v335; // [rsp+178h] [rbp+78h] BYREF
  ACCESS_MASK v336; // [rsp+17Ch] [rbp+7Ch]
  PVOID P; // [rsp+180h] [rbp+80h]
  UINT v338; // [rsp+188h] [rbp+88h]
  unsigned int v339; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v340; // [rsp+190h] [rbp+90h]
  __int64 SystemInformation; // [rsp+198h] [rbp+98h] BYREF
  __int64 v342; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v343; // [rsp+1A8h] [rbp+A8h]
  __int64 v344; // [rsp+1B0h] [rbp+B0h] BYREF
  int v345; // [rsp+1B8h] [rbp+B8h]
  int v346; // [rsp+1BCh] [rbp+BCh]
  int v347; // [rsp+1C0h] [rbp+C0h]
  unsigned int v348; // [rsp+1C4h] [rbp+C4h]
  unsigned int v349; // [rsp+1C8h] [rbp+C8h]
  unsigned int v350; // [rsp+1CCh] [rbp+CCh]
  int v351; // [rsp+1D0h] [rbp+D0h]
  int v352; // [rsp+1D4h] [rbp+D4h]
  unsigned int v353; // [rsp+1D8h] [rbp+D8h]
  int v354; // [rsp+1DCh] [rbp+DCh]
  int v355; // [rsp+1E0h] [rbp+E0h]
  int v356; // [rsp+1E4h] [rbp+E4h]
  int v357; // [rsp+1E8h] [rbp+E8h]
  int v358; // [rsp+1ECh] [rbp+ECh]
  unsigned int *v359; // [rsp+1F0h] [rbp+F0h]
  unsigned int *v360; // [rsp+1F8h] [rbp+F8h]
  wchar_t *v361; // [rsp+200h] [rbp+100h]
  void *v362; // [rsp+208h] [rbp+108h]
  __int64 v363; // [rsp+210h] [rbp+110h]
  _QWORD *v364; // [rsp+218h] [rbp+118h]
  __int64 v365; // [rsp+220h] [rbp+120h]
  int v366; // [rsp+228h] [rbp+128h]
  unsigned int v367; // [rsp+22Ch] [rbp+12Ch]
  unsigned int *v368; // [rsp+230h] [rbp+130h]
  int *v369; // [rsp+238h] [rbp+138h]
  int *v370; // [rsp+240h] [rbp+140h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+248h] [rbp+148h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+268h] [rbp+168h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v374[40]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v375; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v376; // [rsp+2E0h] [rbp+1E0h] BYREF

  v5 = 0LL;
  v364 = a4;
  v304 = a3;
  v7 = 0LL;
  v365 = a5;
  v8 = 0LL;
  v323 = 0LL;
  v311 = 0;
  v9 = 0LL;
  v302 = 0LL;
  v303 = 0LL;
  *(_QWORD *)uAddend = 0LL;
  v299 = 0LL;
  v324 = 0LL;
  v305 = 0;
  v343 = 0LL;
  v321 = 0LL;
  v291 = 0LL;
  v320 = 0;
  v359 = 0LL;
  v336 = 0;
  v360 = 0LL;
  v338 = 0;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    v168 = 0LL;
    goto LABEL_203;
  }
  v10 = *a1;
  v11 = a1 + 1;
  pullResult = (ULONGLONG)(a1 + 1);
  if ( a1 + 1 < a1 )
    goto LABEL_313;
  if ( a2 - 4 < (unsigned int)v10 )
    goto LABEL_312;
  v12 = (unsigned int *)((char *)v11 + v10);
  v325 = (unsigned int *)((char *)v11 + v10);
  if ( (unsigned int *)((char *)v11 + v10) < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
    goto LABEL_313;
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
    goto LABEL_312;
  v13 = *v12;
  v14 = v12 + 1;
  if ( v12 + 1 < v12 )
    goto LABEL_313;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_313;
  if ( a2 - v15 < (unsigned int)v13 )
    goto LABEL_312;
  v16 = (unsigned int *)((char *)v14 + v13);
  if ( (unsigned int *)((char *)v14 + v13) < v14 )
    goto LABEL_313;
  v17 = v13 + v15;
  if ( (unsigned int)v13 + v15 < v15 )
    goto LABEL_313;
  if ( a2 - v17 < 4 )
    goto LABEL_312;
  v18 = *v16;
  NumberOfBytes[0] = *v16;
  Src = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_313;
  v19 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_313;
  if ( a2 - v19 < v18 )
  {
LABEL_312:
    Acl = -1073741762;
LABEL_314:
    v168 = 0LL;
    goto LABEL_261;
  }
  if ( v18 + v19 < v19 )
  {
LABEL_313:
    Acl = -1073741675;
    goto LABEL_314;
  }
  if ( a2 != v18 + v19 || (unsigned int)v10 + (_DWORD)v13 + v18 + 12LL != a2 )
    goto LABEL_312;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  v21 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Acl = -1073741801;
    v5 = 0LL;
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  v179 = (const void *)pullResult;
  Acl = 0;
  if ( pullResult )
  {
    *v21 = v10;
    if ( (_DWORD)v10 )
    {
      v180 = ExAllocatePoolWithTag(PagedPool, v10, 0x20534C53u);
      if ( v180 )
        *((_QWORD *)v21 + 1) = v180;
      else
        Acl = -1073741801;
      v179 = (const void *)pullResult;
    }
    else
    {
      Acl = -1073741762;
    }
    if ( Acl < 0 )
      goto LABEL_240;
    memmove(*((void **)v21 + 1), v179, v10);
  }
  v5 = v325 + 1;
  if ( v325 == (unsigned int *)-4LL )
  {
    v21[4] = (unsigned int)v5;
    *((_QWORD *)v21 + 3) = v5;
  }
  else
  {
    v21[4] = v13;
    if ( !(_DWORD)v13 )
    {
      Acl = -1073741762;
LABEL_240:
      v5 = 0LL;
      goto LABEL_241;
    }
    v186 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
    if ( !v186 )
    {
LABEL_315:
      Acl = -1073741801;
      goto LABEL_240;
    }
    *((_QWORD *)v21 + 3) = v186;
    Acl = 0;
    memmove(v186, v5, v13);
    v5 = 0LL;
  }
  v181 = Src;
  if ( !Src )
  {
    v21[8] = (unsigned int)v5;
    *((_QWORD *)v21 + 5) = v5;
LABEL_239:
    v9 = v21;
    v21 = v5;
    goto LABEL_241;
  }
  v185 = NumberOfBytes[0];
  v21[8] = NumberOfBytes[0];
  if ( (_DWORD)v185 )
  {
    v187 = v185;
    v188 = ExAllocatePoolWithTag(PagedPool, v185, 0x20534C53u);
    if ( v188 )
    {
      *((_QWORD *)v21 + 5) = v188;
      Acl = 0;
      memmove(v188, v181, v187);
      v5 = 0LL;
      goto LABEL_239;
    }
    goto LABEL_315;
  }
  Acl = -1073741762;
LABEL_241:
  if ( v21 )
  {
    v182 = (void *)*((_QWORD *)v21 + 1);
    if ( v182 )
    {
      ExFreePoolWithTag(v182, 0x20534C53u);
      *((_QWORD *)v21 + 1) = v5;
    }
    v183 = (void *)*((_QWORD *)v21 + 3);
    if ( v183 )
    {
      ExFreePoolWithTag(v183, 0x20534C53u);
      *((_QWORD *)v21 + 3) = v5;
    }
    v184 = (void *)*((_QWORD *)v21 + 5);
    if ( v184 )
    {
      ExFreePoolWithTag(v184, 0x20534C53u);
      *((_QWORD *)v21 + 5) = v5;
    }
    ExFreePoolWithTag(v21, 0x20534C53u);
  }
LABEL_23:
  v23 = v5;
  if ( Acl < 0 )
  {
    v23 = v9;
    v9 = v5;
  }
  v325 = v9;
  if ( v23 )
  {
    v198 = (void *)*((_QWORD *)v23 + 1);
    if ( v198 )
    {
      ExFreePoolWithTag(v198, 0x20534C53u);
      *((_QWORD *)v23 + 1) = v5;
    }
    v199 = (void *)*((_QWORD *)v23 + 3);
    if ( v199 )
    {
      ExFreePoolWithTag(v199, 0x20534C53u);
      *((_QWORD *)v23 + 3) = v5;
    }
    v200 = (void *)*((_QWORD *)v23 + 5);
    if ( v200 )
    {
      ExFreePoolWithTag(v200, 0x20534C53u);
      *((_QWORD *)v23 + 5) = v5;
    }
    ExFreePoolWithTag(v23, 0x20534C53u);
  }
  v7 = v9;
  if ( Acl < 0 )
    goto LABEL_356;
  v331 = (__int64)v5;
  v24 = v5;
  v316 = (unsigned __int8 *)v5;
  Acl = (int)v5;
  v310 = (int)v5;
  if ( !v9
    || *((unsigned int **)v9 + 1) == v5
    || !*v9
    || *((unsigned int **)v9 + 5) == v5
    || v9[8] == (_DWORD)v5
    || *((unsigned int **)v9 + 3) == v5
    || v9[4] == (_DWORD)v5 )
  {
    Acl = -1073741811;
    v168 = 0LL;
    goto LABEL_261;
  }
  v331 = *v9;
  v25 = (void *)*((_QWORD *)v9 + 1);
  AccessStatus = (unsigned int)v5;
  Src = v25;
  if ( !v25 )
    goto LABEL_352;
  v26 = *v9;
  *(_QWORD *)&NumberOfBytes[1] = v26;
  if ( !v26 )
    goto LABEL_352;
  v314 = *((_QWORD *)v9 + 3);
  if ( !v314 )
    goto LABEL_352;
  v27 = (__int64 *)*((_QWORD *)v9 + 5);
  if ( !v27 || v9[8] != 8 || v9[4] != 160 || v26 <= 8 )
    goto LABEL_352;
  v28 = *v27;
  v29 = 0;
  v292 = 0;
  v30 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v26 - 8, 0x20534C53u);
  v315 = v30;
  if ( !v30 )
  {
    v24 = (UINT *)v316;
LABEL_352:
    v5 = 0LL;
LABEL_353:
    v71 = v311;
    Acl = -1073741823;
    v72 = (UINT *)v323;
    goto LABEL_63;
  }
  v31 = (unsigned __int8 *)Src;
  v32 = (char *)v30;
  v313 = v30;
  v375 = v28;
  ullAugend = (ULONGLONG)Src;
  pullResult = (LOBYTE(NumberOfBytes[1]) - 8) & 7;
  puResult = 0;
  if ( ((LOBYTE(NumberOfBytes[1]) - 8) & 7) != 0 )
  {
    v201 = pullResult;
    v202 = -1;
    v293 = -1;
    v203 = 0;
    v295 = 0;
    v204 = 0;
    NumberOfBytes[0] = 0;
    v205 = 0;
    if ( (_DWORD)pullResult )
    {
      v206 = 56;
      do
      {
        v207 = *v31++;
        if ( v205 >= 4 )
          v204 |= v207 << v206;
        else
          puResult |= v207 << (v206 - 32);
        ++v205;
        v206 -= 8;
      }
      while ( v205 < (int)pullResult );
      NumberOfBytes[0] = v204;
      ullAugend = (ULONGLONG)v31;
    }
    v208 = 30LL;
    v209 = (unsigned __int8 *)(v314 + 126);
    v210 = (unsigned __int8 *)(v314 + 158);
    v211 = 16LL;
    pullResult = v314 + 158;
    *(_QWORD *)GrantedAccess = 16LL;
    do
    {
      v212 = v210[1];
      if ( v212 < 0x1Fu )
      {
        v213 = funcs_14064AAAA[v212](v208 + 1, *(v209 - 2), *(v209 - 1), *v209, v209[1], (__int64)&v375, v203);
        v203 = v295;
        v202 = v213 ^ v293;
        v210 = (unsigned __int8 *)pullResult;
        v211 = *(_QWORD *)GrantedAccess;
        v293 = v202;
      }
      if ( *v210 < 0x1Fu )
      {
        v214 = funcs_14064AAAA[*v210](v208, *(v209 - 6), *(v209 - 5), *(v209 - 4), *(v209 - 3), (__int64)&v375, v202);
        v202 = v293;
        v203 = v214 ^ v295;
        v210 = (unsigned __int8 *)pullResult;
        v211 = *(_QWORD *)GrantedAccess;
        v295 = v203;
      }
      v210 -= 2;
      v208 -= 2LL;
      v209 -= 8;
      pullResult = (ULONGLONG)v210;
      *(_QWORD *)GrantedAccess = --v211;
    }
    while ( v211 );
    v34 = puResult ^ v203;
    v5 = 0LL;
    v215 = NumberOfBytes[0] ^ v202;
    v216 = 0;
    v295 = v34;
    v8 = 0LL;
    v293 = v215;
    v29 = 0;
    if ( v201 )
    {
      v217 = v313;
      do
      {
        v32 = v217 + 1;
        if ( v216 >= 4 )
        {
          v215 = __ROL4__(v215, 8);
          v218 = v215;
        }
        else
        {
          v34 = __ROL4__(v34, 8);
          v218 = v34;
        }
        ++v216;
        *v217++ = v218;
      }
      while ( v216 < (int)v201 );
      v34 = v295;
      v215 = v293;
    }
    else
    {
      v32 = (char *)v313;
    }
    v31 = (unsigned __int8 *)ullAugend;
    if ( v201 <= 4 )
    {
      v33 = 0;
      v293 = 0;
      if ( v201 < 4 )
      {
        v34 = v34 >> (8 * (4 - v201)) << (8 * (4 - v201));
        v295 = v34;
      }
    }
    else
    {
      v33 = v215 >> (8 * (8 - v201)) << (8 * (8 - v201));
      v293 = v33;
    }
    LODWORD(v28) = v375;
  }
  else
  {
    NumberOfBytes[0] = -1;
    v5 = 0LL;
    v33 = 0;
    v293 = 0;
    v34 = 0;
    v295 = 0;
  }
  v313 = (void *)((unsigned __int64)(*(_QWORD *)&NumberOfBytes[1] - 8LL) >> 3);
  if ( v313 )
  {
    v35 = v32 + 7;
    v36 = NumberOfBytes[0];
    v37 = v31 + 2;
    v38 = puResult;
    v39 = v314 + 158;
    v314 += 126LL;
    Size = v39;
    while ( 1 )
    {
      v40 = *(v37 - 1) | (*(v37 - 2) << 8);
      v41 = v37[2] << 8;
      v42 = *v37;
      v37 += 8;
      v43 = *(v37 - 7) | ((v42 | (v40 << 8)) << 8);
      v44 = *(v37 - 5);
      v45 = v43 ^ v34;
      NumberOfBytes[0] = v43;
      GrantedAccess[0] = *(v37 - 3) | ((*(v37 - 4) | ((v44 | v41) << 8)) << 8);
      v46 = v45 ^ GrantedAccess[0] ^ v33 ^ v28 ^ HIDWORD(v375);
      v47 = (v46 >> 8) ^ (WORD2(v375) * (WORD1(v375) ^ v46)) ^ v45;
      puResult = (WORD1(v375) * __ROR4__(HIDWORD(v375) - v47, 11) - __ROR4__(v47, 12)) ^ v46;
      v48 = (unsigned __int16)v28;
      v49 = ((unsigned __int16)v28 * __ROL4__(puResult ^ HIDWORD(v375), 8) - __ROL4__(puResult, 2)) ^ v47;
      puResult ^= __ROR4__(v49, 9) ^ (HIWORD(v375) * __ROR4__(v49 - v28, 4));
      v50 = (__ROR4__(puResult, 4) + WORD2(v375) * __ROR4__(v28 - puResult, 10)) ^ v49;
      v51 = 30LL;
      puResult ^= WORD1(v375) * __ROL4__(HIWORD(v375) ^ v50, 4) - __ROR4__(v50, 16);
      v52 = ((unsigned __int16)v28 * (WORD1(v375) ^ puResult) - __ROR4__(puResult, 7)) ^ v50;
      v53 = (v52 - v28 - HIWORD(v375)) ^ puResult;
      v54 = __ROR4__(v53, 11) ^ (WORD2(v375) * __ROR4__(v28 - v53, 9)) ^ v52;
      v55 = (unsigned __int8 *)v314;
      v56 = (WORD1(v375) * (v54 - WORD2(v375)) - (v54 >> 13)) ^ v53;
      puResult = v56;
      v293 = v56;
      v57 = v48 * __ROL4__(v56 - WORD2(v375), 3);
      v58 = 16LL;
      ullAugend = 16LL;
      v59 = (unsigned __int8 *)Size;
      v60 = (v56 >> 15) ^ v57 ^ v54;
      pullResult = Size;
      v295 = v60;
      do
      {
        v61 = v59[1];
        if ( v61 < 0x1Fu )
        {
          v66 = funcs_14064AAAA[v61](v51 + 1, *(v55 - 2), *(v55 - 1), *v55, v55[1], (__int64)&v375, v60);
          v60 = v295;
          v56 = v66 ^ v293;
          v59 = (unsigned __int8 *)pullResult;
          v58 = ullAugend;
          puResult = v56;
          v293 = v56;
        }
        if ( *v59 < 0x1Fu )
        {
          v65 = funcs_14064AAAA[*v59](v51, *(v55 - 6), *(v55 - 5), *(v55 - 4), *(v55 - 3), (__int64)&v375, puResult);
          v56 = v293;
          v60 = v65 ^ v295;
          v59 = (unsigned __int8 *)pullResult;
          v58 = ullAugend;
          v295 = v60;
          puResult = v293;
        }
        v59 -= 2;
        v51 -= 2LL;
        v55 -= 8;
        pullResult = (ULONGLONG)v59;
        ullAugend = --v58;
      }
      while ( v58 );
      v62 = v38 ^ v60;
      v63 = v36 ^ v56;
      v38 = NumberOfBytes[0];
      v36 = GrantedAccess[0];
      v295 = v62;
      v293 = v63;
      *(v35 - 4) = v62;
      v295 = __ROR4__(v295, 8);
      *v35 = v293;
      v293 = __ROR4__(v293, 8);
      *(v35 - 5) = v295;
      v295 = __ROR4__(v295, 8);
      *(v35 - 1) = v293;
      v293 = __ROR4__(v293, 8);
      *(v35 - 6) = v295;
      v295 = __ROR4__(v295, 8);
      *(v35 - 2) = v293;
      v293 = __ROR4__(v293, 8);
      *(v35 - 7) = v295;
      *(v35 - 3) = v293;
      v35 += 8;
      v34 = __ROR4__(v295, 8);
      v33 = __ROR4__(v293, 8);
      v64 = v313 == (void *)1;
      v313 = (char *)v313 - 1;
      v295 = v34;
      v293 = v33;
      if ( v64 )
        break;
      LODWORD(v28) = v375;
    }
    v29 = v292;
    Acl = v310;
    v5 = 0LL;
    v9 = v325;
    v8 = v321;
  }
  v67 = 0LL;
  v68 = v315;
  v69 = *(_QWORD *)&NumberOfBytes[1] - 8LL;
  if ( *(_QWORD *)&NumberOfBytes[1] != 8LL )
  {
    do
      v29 ^= v315[v67++];
    while ( v67 < v69 );
  }
  if ( v29 == *(_QWORD *)((char *)Src + v69) )
  {
    v70 = AccessStatus;
    v24 = (UINT *)v315;
    v316 = v315;
    v68 = 0LL;
    v331 = *(_QWORD *)&NumberOfBytes[1] - 8LL;
  }
  else
  {
    v24 = (UINT *)v316;
    v70 = -1073425151;
  }
  if ( v68 )
  {
    ExFreePoolWithTag(v68, 0x20534C53u);
    v24 = (UINT *)v316;
  }
  if ( v70 < 0 )
    goto LABEL_353;
  v71 = v331;
  v72 = v24;
  v323 = v24;
  v24 = 0LL;
  v316 = 0LL;
  v311 = v331;
LABEL_63:
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x20534C53u);
    v71 = v311;
    v316 = 0LL;
  }
  v7 = v9;
  if ( Acl < 0 )
    goto LABEL_356;
  if ( v71 >= 4 )
  {
    v73 = *v72;
    puResult = *v72;
    if ( v72 + 1 < v72 )
    {
      Acl = -1073741675;
      goto LABEL_356;
    }
    if ( v71 - 4 >= 4 )
    {
      v74 = v72[1];
      v75 = (char *)(v72 + 2);
      if ( v72 + 2 >= v72 + 1 )
      {
        if ( v71 - 8 < (unsigned int)v74 )
        {
          Acl = -1073741762;
LABEL_642:
          v7 = v9;
          goto LABEL_356;
        }
        if ( (unsigned int)v74 < 0xFFFFFFF8 )
        {
          v76 = (unsigned __int64)&v75[v74];
          v77 = (unsigned int)v74;
          if ( (char *)v72 + v71 < &v75[v74] || (unsigned __int64)v323 + v71 - (_QWORD)v75 - v74 >= 8 )
          {
            Acl = -1073741762;
          }
          else
          {
            v78 = 0LL;
            v79 = 0;
            memset(NumberOfBytes, 0, sizeof(NumberOfBytes));
            if ( v72 == (UINT *)-8LL )
              goto LABEL_85;
            v80 = (char *)(v72 + 2);
            if ( v76 < (unsigned __int64)v75 )
            {
LABEL_359:
              Acl = -1073741675;
            }
            else
            {
              if ( v76 <= (unsigned __int64)v75 )
                goto LABEL_84;
              do
              {
                if ( v80 + 4 < v80 )
                  goto LABEL_359;
                if ( (unsigned __int64)(v80 + 4) > v76 )
                  goto LABEL_358;
                v81 = *(_DWORD *)v80 + 4;
                if ( *(_DWORD *)v80 >= 0xFFFFFFFC )
                {
                  Acl = -1073741675;
                  goto LABEL_92;
                }
                v354 = *(_DWORD *)v80 + 4;
                v82 = &v80[v81];
                if ( v82 < v80 )
                  goto LABEL_359;
                v80 += v81;
                if ( (unsigned __int64)v82 > v76 )
                  goto LABEL_358;
                NumberOfBytes[0] = ++v79;
              }
              while ( (unsigned __int64)v82 < v76 );
              v78 = *(PVOID *)&NumberOfBytes[1];
LABEL_84:
              if ( v80 == (char *)v76 )
              {
LABEL_85:
                if ( !(_DWORD)v74 )
                  goto LABEL_88;
                v78 = ExAllocatePoolWithTag(PagedPool, v74, 0x20534C53u);
                *(_QWORD *)&NumberOfBytes[1] = v78;
                if ( v78 )
                {
                  v77 = v74;
LABEL_88:
                  if ( v72 != (UINT *)-8LL )
                  {
                    memmove(v78, v75, v77);
                    v78 = *(PVOID *)&NumberOfBytes[1];
                  }
                  v303 = v78;
                  v302 = __PAIR64__(v74, NumberOfBytes[0]);
                  Acl = 0;
                }
                else
                {
                  Acl = -1073741801;
                }
                v73 = puResult;
LABEL_92:
                if ( Acl >= 0 && v73 != (_DWORD)v302 )
                {
                  Acl = -1073741762;
LABEL_364:
                  v7 = v9;
                  goto LABEL_260;
                }
              }
              else
              {
LABEL_358:
                Acl = -1073741811;
              }
            }
          }
          v7 = v9;
          if ( Acl < 0 )
            goto LABEL_355;
          if ( v303 && (_DWORD)v302 )
          {
            v83 = *(_DWORD *)v303;
            if ( (char *)v303 + 4 < v303 )
            {
              Acl = -1073741675;
            }
            else
            {
              v355 = *(_DWORD *)v303;
              v84 = 0LL;
              if ( v83 )
                v84 = (unsigned int *)((char *)v303 + 4);
              v368 = v84;
              Acl = 0;
              if ( v83 != 4 )
              {
                Acl = -1073741789;
                goto LABEL_369;
              }
              v340 = *v84;
            }
          }
          else
          {
            Acl = -1073741811;
          }
          if ( Acl < 0 )
          {
LABEL_355:
            v5 = 0LL;
            goto LABEL_356;
          }
          if ( !v303 )
          {
            Acl = -1073741811;
            v168 = 0LL;
            v5 = 0LL;
            goto LABEL_205;
          }
          if ( (unsigned int)v302 <= 1 )
          {
LABEL_372:
            Acl = -1073741811;
            goto LABEL_369;
          }
          v85 = (ACCESS_MASK *)v303;
          v86 = 0;
          do
          {
            v87 = *v85;
            v88 = v85 + 1;
            if ( v85 + 1 < v85 )
              goto LABEL_368;
            v85 = (unsigned int *)((char *)v88 + v87);
            if ( (unsigned int *)((char *)v88 + v87) < v88 )
              goto LABEL_368;
            ++v86;
          }
          while ( !v86 );
          v89 = *v85;
          v90 = v85 + 1;
          NumberOfBytes[0] = *v85;
          if ( v85 + 1 >= v85 )
          {
            v336 = v89;
            v91 = 0LL;
            if ( v89 )
              v91 = v90;
            *(_QWORD *)&NumberOfBytes[1] = v91;
            v359 = v91;
            if ( (unsigned int)v302 > 2 )
            {
              v92 = (UINT *)v303;
              for ( i = 0; i < 2; ++i )
              {
                v94 = *v92;
                v95 = v92 + 1;
                if ( v92 + 1 < v92 )
                  goto LABEL_368;
                v92 = (unsigned int *)((char *)v95 + v94);
                if ( (unsigned int *)((char *)v95 + v94) < v95 )
                  goto LABEL_368;
              }
              v96 = *v92;
              v97 = v92 + 1;
              AccessStatus = *v92;
              if ( v92 + 1 < v92 )
                goto LABEL_368;
              v338 = v96;
              v98 = 0LL;
              if ( v96 )
                v98 = v97;
              Src = v98;
              v360 = v98;
              v99 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
              v103 = v99;
              if ( !v99 )
              {
                Acl = -1073741801;
                goto LABEL_134;
              }
              memset(v99, 0, 0x30uLL);
              Acl = 0;
              v101 = *(_QWORD *)&NumberOfBytes[1];
              if ( *(_QWORD *)&NumberOfBytes[1] )
              {
                v104 = NumberOfBytes[0];
                v103[4] = NumberOfBytes[0];
                if ( v104 )
                {
                  v105 = ExAllocatePoolWithTag(PagedPool, v104, 0x20534C53u);
                  v101 = *(_QWORD *)&NumberOfBytes[1];
                  if ( v105 )
                    *((_QWORD *)v103 + 3) = v105;
                  else
                    Acl = -1073741801;
                  v104 = NumberOfBytes[0];
                }
                else
                {
                  Acl = -1073741762;
                }
                v102 = v104;
                if ( Acl < 0 )
                  goto LABEL_133;
                memmove(*((void **)v103 + 3), (const void *)v101, v104);
              }
              if ( !Src )
              {
                v103[8] = 0;
                *((_QWORD *)v103 + 5) = 0LL;
                goto LABEL_132;
              }
              v106 = AccessStatus;
              v103[8] = AccessStatus;
              if ( (_DWORD)v106 )
              {
                Size = v106;
                v107 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v106, 0x20534C53u);
                if ( v107 )
                {
                  *((_QWORD *)v103 + 5) = v107;
                  Acl = 0;
                  memmove(v107, Src, Size);
LABEL_132:
                  v8 = (const void **)v103;
                  v321 = (const void **)v103;
                  v103 = 0LL;
                  goto LABEL_133;
                }
                Acl = -1073741801;
              }
              else
              {
                Acl = -1073741762;
              }
LABEL_133:
              if ( v103 )
              {
                v219 = (void *)*((_QWORD *)v103 + 1);
                if ( v219 )
                {
                  ExFreePoolWithTag(v219, 0x20534C53u);
                  *((_QWORD *)v103 + 1) = 0LL;
                }
                v220 = (void *)*((_QWORD *)v103 + 3);
                if ( v220 )
                {
                  ExFreePoolWithTag(v220, 0x20534C53u);
                  *((_QWORD *)v103 + 3) = 0LL;
                }
                v221 = (void *)*((_QWORD *)v103 + 5);
                if ( v221 )
                {
                  ExFreePoolWithTag(v221, 0x20534C53u);
                  *((_QWORD *)v103 + 5) = 0LL;
                }
                ExFreePoolWithTag(v103, 0x20534C53u);
              }
LABEL_134:
              v7 = v9;
              if ( Acl < 0 )
                goto LABEL_355;
              if ( v340 > 0x68 )
              {
                v101 = 204LL;
                if ( v340 > 0xCC )
                {
                  switch ( v340 )
                  {
                    case 0xCDu:
                      AppPolicyValue = SPCallServerHandleCheckLicense(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0xCEu:
                      v335 = 0;
                      v342 = 8LL;
                      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v342, 8u, &v335);
                      if ( v9[4] != 160 )
                        goto LABEL_401;
                      v270 = (const void *)*((_QWORD *)v9 + 3);
                      if ( (memcmp(qword_14094AC20, v270, 0xA0uLL)
                         || *((_DWORD *)v8 + 4) != 160
                         || memcmp(qword_14094B080, v8[3], 0xA0uLL)
                         || v9[8] != 8
                         || **((_QWORD **)v9 + 5) != 0x5638EBB72F3355A5LL
                         || *((_DWORD *)v8 + 8) != 8
                         || *(_QWORD *)v8[5] != 0x9F2DD8784FE939B7uLL)
                        && (memcmp(qword_14094AEA0, v270, 0xA0uLL)
                         || *((_DWORD *)v8 + 4) != 160
                         || memcmp(qword_14094AFE0, v8[3], 0xA0uLL)
                         || v9[8] != 8
                         || **((_QWORD **)v9 + 5) != 0x5638EBB72F3355A5LL
                         || *((_DWORD *)v8 + 8) != 8
                         || *(_QWORD *)v8[5] != 0x9F2DD8784FE939B7uLL) )
                      {
                        v272 = (const void *)*((_QWORD *)v9 + 3);
                        if ( (memcmp(qword_14094A860, v272, 0xA0uLL)
                           || *((_DWORD *)v8 + 4) != 160
                           || memcmp(qword_14094AAE0, v8[3], 0xA0uLL)
                           || v9[8] != 8
                           || **((_QWORD **)v9 + 5) != 0xF10D668DB2BB8BB9uLL
                           || *((_DWORD *)v8 + 8) != 8
                           || *(_QWORD *)v8[5] != 0x768DFD321621EA95LL)
                          && (memcmp(qword_14094A5E0, v272, 0xA0uLL)
                           || *((_DWORD *)v8 + 4) != 160
                           || memcmp(qword_14094A7C0, v8[3], 0xA0uLL)
                           || v9[8] != 8
                           || **((_QWORD **)v9 + 5) != 0xF10D668DB2BB8BB9uLL
                           || *((_DWORD *)v8 + 8) != 8
                           || *(_QWORD *)v8[5] != 0x768DFD321621EA95LL) )
                        {
                          goto LABEL_401;
                        }
                      }
                      AppPolicyValue = sub_140344B2C((__int64)&v302, (__int64)v8, v271, (__int64)uAddend);
LABEL_460:
                      v7 = v9;
                      goto LABEL_141;
                    case 0xCFu:
                      AppPolicyValue = sub_14091CCE4(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0xD0u:
                      AppPolicyValue = SPCallServerHandleGetAppPolicyValue(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0xD1u:
                      AppPolicyValue = sub_14091FC58(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0xD2u:
                      AppPolicyValue = sub_14091B860(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0xD3u:
                      AppPolicyValue = sub_14091B448(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                  }
                }
                else
                {
                  switch ( v340 )
                  {
                    case 0xCCu:
                      AppPolicyValue = sub_1409206EC(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x69u:
                      AppPolicyValue = sub_14091EF0C(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x6Au:
                      AppPolicyValue = sub_14091E6EC(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x6Bu:
                      AppPolicyValue = sub_140344570((__int64)&v302, (__int64)v8, v102, (__int64)uAddend);
                      goto LABEL_141;
                    case 0x6Du:
                      AppPolicyValue = SPCallServerHandleIsAppLicensed(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x6Eu:
                      AppPolicyValue = sub_14091D36C(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x6Fu:
                      AppPolicyValue = sub_14091C08C(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x70u:
                      AppPolicyValue = sub_14091C308(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                    case 0x71u:
                      AppPolicyValue = SPCallServerHandleClepKdf(&v302, v8, v102, uAddend);
                      goto LABEL_141;
                  }
                }
LABEL_570:
                Acl = sub_140920348(v101, uAddend, v102);
                if ( Acl < 0 )
                {
                  v7 = v9;
                  v168 = 0LL;
                  goto LABEL_261;
                }
                goto LABEL_143;
              }
              if ( v340 == 104 )
              {
                AppPolicyValue = sub_14091F638(&v302, v8, v102, uAddend);
                goto LABEL_141;
              }
              if ( v340 <= 0x17 )
              {
                if ( v340 != 23 )
                {
                  if ( !v340 )
                  {
                    AppPolicyValue = sub_1406494FC((__int64)&v302, (__int64)v8, v304, (__int64)uAddend);
LABEL_141:
                    Acl = AppPolicyValue;
                    v109 = AppPolicyValue < 0;
                    goto LABEL_142;
                  }
                  if ( v340 != 1 )
                  {
                    switch ( v340 )
                    {
                      case 2u:
                        AppPolicyValue = SPCallServerHandleAuthenticateCaller(v101, v8, v304, uAddend);
                        goto LABEL_141;
                      case 4u:
                        AppPolicyValue = sub_14091BCEC(&v302, v8, v102, uAddend);
                        goto LABEL_141;
                      case 5u:
                        AppPolicyValue = SPCallServerHandleWaitForDisplayWindow(&v302, v8, v102, uAddend);
                        goto LABEL_141;
                      case 6u:
                        AppPolicyValue = sub_140920B70(&v302, v8, v102, uAddend);
                        goto LABEL_141;
                      case 7u:
                        AppPolicyValue = sub_14091F398(&v302, v8, v102, uAddend);
                        goto LABEL_141;
                      case 0x16u:
                        AppPolicyValue = sub_14091E2F4(&v302, v100, v102, uAddend);
                        goto LABEL_141;
                    }
                    goto LABEL_570;
                  }
                  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
                  memset(&SubjectContext, 0, sizeof(SubjectContext));
                  v189 = qword_1409AD4E0;
                  *(_QWORD *)&NumberOfBytes[1] = qword_1409AD4E0;
                  v190 = RtlLengthSid(*(PSID *)(qword_1409AD4E0 + 384));
                  v191 = RtlLengthSid(*(PSID *)(v189 + 272)) + v190;
                  v192 = v191 + RtlLengthSid(*(PSID *)(v189 + 392)) + 32;
                  v193 = (ACL *)ExAllocatePoolWithTag(PagedPool, v192, 0x20534C53u);
                  Size = (size_t)v193;
                  v194 = v193;
                  if ( !v193 )
                  {
                    Acl = -1073741801;
LABEL_306:
                    v7 = v9;
                    if ( Acl < 0 )
                      goto LABEL_260;
                    AppPolicyValue = SPCallServerHandleUpdatePolicies(&v302, v8, v304, uAddend);
                    goto LABEL_141;
                  }
                  Acl = RtlCreateAcl(v193, v192, 2u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(
                            v194,
                            2u,
                            0,
                            32,
                            *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 384LL),
                            0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(
                              v194,
                              2u,
                              0,
                              32,
                              *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 392LL),
                              0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(
                                v194,
                                2u,
                                0,
                                32,
                                *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 272LL),
                                0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v194, 0);
                            if ( Acl >= 0 )
                            {
                              SeCaptureSubjectContext(&SubjectContext);
                              v195 = SeAccessCheck(
                                       SecurityDescriptor,
                                       &SubjectContext,
                                       0,
                                       0x20u,
                                       0,
                                       0LL,
                                       (PGENERIC_MAPPING)&IopFileMapping,
                                       1,
                                       GrantedAccess,
                                       (PNTSTATUS)&AccessStatus);
                              SeReleaseSubjectContext(&SubjectContext);
                              v64 = v195 == 0;
                              v194 = (ACL *)Size;
                              if ( v64 )
                                Acl = AccessStatus;
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v194, 0x20534C53u);
                  if ( Acl < 0 )
                    goto LABEL_306;
                  ReturnLength = 0;
                  SystemInformation = 8LL;
                  ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
                  if ( v9[4] == 160 )
                  {
                    if ( (v196 = (const void *)*((_QWORD *)v9 + 3), !memcmp(qword_14094A900, v196, 0xA0uLL))
                      && *((_DWORD *)v8 + 4) == 160
                      && !memcmp(qword_14094AF40, v8[3], 0xA0uLL)
                      && v9[8] == 8
                      && **((_QWORD **)v9 + 5) == 0xA564595855B292C4uLL
                      && *((_DWORD *)v8 + 8) == 8
                      && *(_QWORD *)v8[5] == 0x1B732BD76B4D09FCLL
                      || !memcmp(qword_14094AE00, v196, 0xA0uLL)
                      && *((_DWORD *)v8 + 4) == 160
                      && !memcmp(qword_14094A720, v8[3], 0xA0uLL)
                      && v9[8] == 8
                      && **((_QWORD **)v9 + 5) == 0x93278D843BBDC445uLL
                      && *((_DWORD *)v8 + 8) == 8
                      && *(_QWORD *)v8[5] == 0x6223E824AB21D998LL )
                    {
                      v197 = 0;
                      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x70000) == 0 )
                        v197 = -2147024891;
                      Acl = v197;
                      goto LABEL_306;
                    }
                  }
LABEL_401:
                  Acl = -2147024891;
                  goto LABEL_364;
                }
                memset(v374, 0, sizeof(v374));
                memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
                v222 = qword_1409AD4E0;
                *(_QWORD *)&NumberOfBytes[1] = qword_1409AD4E0;
                v223 = RtlLengthSid(*(PSID *)(qword_1409AD4E0 + 384));
                v224 = RtlLengthSid(*(PSID *)(v222 + 272)) + v223;
                v225 = v224 + RtlLengthSid(*(PSID *)(v222 + 392)) + 32;
                v226 = (ACL *)ExAllocatePoolWithTag(PagedPool, v225, 0x20534C53u);
                Size = (size_t)v226;
                v229 = v226;
                if ( v226 )
                {
                  Acl = RtlCreateAcl(v226, v225, 2u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(
                            v229,
                            2u,
                            0,
                            32,
                            *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 384LL),
                            0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(
                              v229,
                              2u,
                              0,
                              32,
                              *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 392LL),
                              0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(
                                v229,
                                2u,
                                0,
                                32,
                                *(unsigned __int8 **)(*(_QWORD *)&NumberOfBytes[1] + 272LL),
                                0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlCreateSecurityDescriptor(v374, 1u);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(v374, 1u, v229, 0);
                            if ( Acl >= 0 )
                            {
                              SeCaptureSubjectContext(&SubjectSecurityContext);
                              v230 = SeAccessCheck(
                                       v374,
                                       &SubjectSecurityContext,
                                       0,
                                       0x20u,
                                       0,
                                       0LL,
                                       (PGENERIC_MAPPING)&IopFileMapping,
                                       1,
                                       NumberOfBytes,
                                       &v310);
                              SeReleaseSubjectContext(&SubjectSecurityContext);
                              v64 = v230 == 0;
                              v229 = (ACL *)Size;
                              if ( v64 )
                                Acl = v310;
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v229, 0x20534C53u);
                  if ( Acl >= 0 )
                  {
                    v326 = 0;
                    v344 = 8LL;
                    ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v344, 8u, &v326);
                    if ( v9[4] != 160 )
                      goto LABEL_401;
                    v231 = (const void *)*((_QWORD *)v9 + 3);
                    if ( (memcmp(qword_14094A9A0, v231, 0xA0uLL)
                       || *((_DWORD *)v8 + 4) != 160
                       || memcmp(qword_14094AA40, v8[3], 0xA0uLL)
                       || v9[8] != 8
                       || **((_QWORD **)v9 + 5) != 0x35DCEB18766AABAALL
                       || *((_DWORD *)v8 + 8) != 8
                       || *(_QWORD *)v8[5] != 0x14CEA8BAE086077CLL)
                      && (memcmp(qword_14094AD60, v231, 0xA0uLL)
                       || *((_DWORD *)v8 + 4) != 160
                       || memcmp(qword_14094B1C0, v8[3], 0xA0uLL)
                       || v9[8] != 8
                       || **((_QWORD **)v9 + 5) != 0xF10D668DB2BB8BB9uLL
                       || *((_DWORD *)v8 + 8) != 8
                       || *(_QWORD *)v8[5] != 0x768DFD321621EA95LL) )
                    {
                      v232 = (const void *)*((_QWORD *)v9 + 3);
                      if ( (memcmp(qword_14094B120, v232, 0xA0uLL)
                         || *((_DWORD *)v8 + 4) != 160
                         || memcmp(sub_14094A680, v8[3], 0xA0uLL)
                         || v9[8] != 8
                         || **((_QWORD **)v9 + 5) != 0xA10B922F1A2F2A8AuLL
                         || *((_DWORD *)v8 + 8) != 8
                         || *(_QWORD *)v8[5] != 0xC349B50B0A716A96uLL)
                        && (memcmp(qword_14094AB80, v232, 0xA0uLL)
                         || *((_DWORD *)v8 + 4) != 160
                         || memcmp(qword_14094ACC0, v8[3], 0xA0uLL)
                         || v9[8] != 8
                         || **((_QWORD **)v9 + 5) != 0xA6723CF736811074uLL
                         || *((_DWORD *)v8 + 8) != 8
                         || *(_QWORD *)v8[5] != 0x7511056E178DA076LL) )
                      {
                        goto LABEL_401;
                      }
                    }
                    v318 = 0;
                    Acl = 0;
                    updated = QueryUpdateFileEaAllowedExt(&v318);
                    if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v318 != 1 )
                    {
                      v234 = Acl;
                      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x70000) == 0 )
                        v234 = -2147024891;
                      Acl = v234;
                    }
                  }
                }
                else
                {
                  Acl = -1073741801;
                }
                v7 = v9;
                if ( Acl >= 0 )
                {
                  AppPolicyValue = sub_14091DCAC(&v302, v227, v228, uAddend);
                  goto LABEL_141;
                }
LABEL_260:
                v168 = v291;
LABEL_261:
                v5 = 0LL;
                goto LABEL_203;
              }
              if ( v340 == 24 )
              {
                AppPolicyValue = sub_14091D794(&v302, v100, v102, uAddend);
                goto LABEL_460;
              }
              if ( v340 != 30 )
              {
                if ( v340 != 31 )
                {
                  if ( v340 != 37 )
                  {
                    switch ( v340 )
                    {
                      case 'd':
                        AppPolicyValue = sub_140920480(&v302, v8, v102, uAddend);
                        break;
                      case 'e':
                        AppPolicyValue = sub_1409200DC(&v302, v8, v102, uAddend);
                        break;
                      case 'f':
                        Acl = -1073741822;
                        goto LABEL_364;
                      case 'g':
                        AppPolicyValue = sub_14091C6C0(&v302, v8, v102, uAddend);
                        break;
                      default:
                        goto LABEL_570;
                    }
                    goto LABEL_460;
                  }
                  if ( (unsigned int)v302 > 3 )
                  {
                    v235 = (unsigned int *)v303;
                    for ( j = 0; j < 3; ++j )
                    {
                      v237 = *v235;
                      v238 = v235 + 1;
                      if ( v235 + 1 < v235 )
                        goto LABEL_475;
                      v235 = (unsigned int *)((char *)v238 + v237);
                      if ( (unsigned int *)((char *)v238 + v237) < v238 )
                        goto LABEL_475;
                    }
                    v239 = *v235;
                    v240 = v235 + 1;
                    if ( v235 + 1 < v235 )
                    {
LABEL_475:
                      Acl = -1073741675;
                      goto LABEL_476;
                    }
                    v350 = *v235;
                    v241 = 0LL;
                    if ( v239 )
                      v241 = (int *)v240;
                    v369 = v241;
                    Acl = 0;
                    if ( v239 == 4 )
                    {
                      v327 = *v241;
                      goto LABEL_476;
                    }
                  }
                  else
                  {
                    Acl = -1073741811;
LABEL_476:
                    if ( Acl < 0 )
                      goto LABEL_488;
                    v356 = 8;
                    v357 = 16;
                    v366 = 24;
                    v242 = *((_DWORD *)v8 + 8);
                    if ( *((_DWORD *)v8 + 4) >= 0xFFFFFFE0 )
                      goto LABEL_487;
                    v243 = *((_DWORD *)v8 + 4) + 36;
                    if ( v243 < *((_DWORD *)v8 + 4) + 32 || v243 + v242 < v243 )
                      goto LABEL_487;
                    v367 = v243 + v242;
                    if ( v304 >= v243 + v242 )
                      dword_1409AD0F0 = v327;
                    uAddend[1] = 8;
                    v244 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                    if ( !v244 )
                    {
                      Acl = -1073741801;
                      goto LABEL_488;
                    }
                    v299 = v244;
                    uAddend[0] = 0;
                    v328 = 0;
                    if ( v244 + 1 < v244 )
                    {
LABEL_487:
                      Acl = -1073741675;
                      goto LABEL_488;
                    }
                    Acl = 0;
                    if ( v244 + 2 <= (_DWORD *)((char *)v244 + uAddend[1]) )
                    {
                      *v244 = 4;
                      v244[1] = v328;
                      ++uAddend[0];
                      goto LABEL_488;
                    }
                  }
                  Acl = -1073741789;
LABEL_488:
                  v7 = v9;
                  v109 = Acl < 0;
LABEL_142:
                  if ( v109 )
                    goto LABEL_260;
LABEL_143:
                  v343 = __rdtsc();
                  v307 = 8;
                  Acl = RtlUIntAdd(8u, uAddend[1], &v307);
                  if ( Acl >= 0 )
                  {
                    v111 = (v307 + 7) & 0xFFFFFFF8;
                    if ( v111 < v307 )
                    {
                      Acl = -1073741675;
                    }
                    else
                    {
                      v307 = (v307 + 7) & 0xFFFFFFF8;
                      if ( v111 )
                      {
                        v112 = (char *)ExAllocatePoolWithTag(PagedPool, v111, 0x20534C53u);
                        v110 = 0LL;
                        v113 = v112;
                        if ( v112 )
                        {
                          pullResult = (ULONGLONG)v112;
                          *(_DWORD *)v112 = uAddend[0];
                          Acl = RtlULongLongAdd((ULONGLONG)v112, 4uLL, &pullResult);
                          if ( Acl >= 0 )
                          {
                            v115 = pullResult;
                            *(_DWORD *)pullResult = uAddend[1];
                            Acl = RtlULongLongAdd(v115, v114, &pullResult);
                            if ( Acl >= 0 )
                            {
                              v116 = (void *)pullResult;
                              *(_QWORD *)&v113[v307 - 8] = v343;
                              memmove(v116, v299, uAddend[1]);
                              v110 = 0LL;
                              v324 = v113;
                              v113 = 0LL;
                              v305 = v307;
                            }
                          }
                          if ( v113 )
                          {
                            ExFreePoolWithTag(v113, 0x20534C53u);
                            v110 = 0LL;
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
                    }
                  }
                  v7 = v9;
                  if ( Acl >= 0 )
                  {
                    P = v110;
                    v363 = (__int64)v110;
                    if ( v324 )
                    {
                      if ( v305 )
                      {
                        v117 = (__int64 *)v8[5];
                        if ( v117 )
                        {
                          v118 = *((_DWORD *)v8 + 8);
                          if ( v118 )
                          {
                            v315 = (unsigned __int8 *)v8[3];
                            if ( v315 )
                            {
                              v119 = *((_DWORD *)v8 + 4);
                              if ( v119 )
                              {
                                v5 = 0LL;
                                if ( v118 != 8 )
                                  goto LABEL_635;
                                if ( v119 != 160 )
                                  goto LABEL_635;
                                v120 = *v117;
                                v121 = 0;
                                v292 = 0;
                                for ( k = 0LL; k < v305; ++k )
                                  v121 ^= *((_BYTE *)v324 + k);
                                v292 = v121;
                                v123 = (char *)ExAllocatePoolWithTag(PagedPool, v305 + 8LL, 0x20534C53u);
                                v313 = v123;
                                if ( v123 )
                                {
                                  v124 = v305;
                                  v125 = (unsigned __int8 *)v324;
                                  v126 = 0;
                                  v376 = v120;
                                  v296 = 0;
                                  v127 = -1;
                                  pullResult = (ULONGLONG)v324;
                                  Src = v123;
                                  v294 = -1;
                                  v304 = 0;
                                  puResult = 0;
                                  v128 = v305 & 7;
                                  if ( (v305 & 7) != 0 )
                                  {
                                    v304 = 0;
                                    v273 = 0;
                                    puResult = 0;
                                    v274 = 0;
                                    v275 = 0;
                                    v276 = 56;
                                    do
                                    {
                                      v277 = *v125++;
                                      if ( v275 >= 4 )
                                        v273 |= v277 << v276;
                                      else
                                        v274 |= v277 << (v276 - 32);
                                      ++v275;
                                      v276 -= 8;
                                    }
                                    while ( v275 < v128 );
                                    puResult = v274;
                                    v304 = v273;
                                    pullResult = (ULONGLONG)v125;
                                    v278 = 16LL;
                                    ullAugend = 16LL;
                                    v279 = v315 + 126;
                                    v280 = v315 + 158;
                                    *(_QWORD *)&NumberOfBytes[1] = v315 + 158;
                                    v281 = 30LL;
                                    do
                                    {
                                      v282 = v280[1];
                                      if ( v282 < 0x1Fu )
                                      {
                                        v283 = funcs_14064AAAA[v282](
                                                 v281 + 1,
                                                 *(v279 - 2),
                                                 *(v279 - 1),
                                                 *v279,
                                                 v279[1],
                                                 (__int64)&v376,
                                                 v126);
                                        v126 = v296;
                                        v127 = v283 ^ v294;
                                        v280 = *(unsigned __int8 **)&NumberOfBytes[1];
                                        v278 = ullAugend;
                                        v294 = v127;
                                      }
                                      if ( *v280 < 0x1Fu )
                                      {
                                        v284 = funcs_14064AAAA[*v280](
                                                 v281,
                                                 *(v279 - 6),
                                                 *(v279 - 5),
                                                 *(v279 - 4),
                                                 *(v279 - 3),
                                                 (__int64)&v376,
                                                 v127);
                                        v127 = v294;
                                        v126 = v284 ^ v296;
                                        v280 = *(unsigned __int8 **)&NumberOfBytes[1];
                                        v278 = ullAugend;
                                        v296 = v126;
                                      }
                                      v280 -= 2;
                                      v281 -= 2LL;
                                      v279 -= 8;
                                      *(_QWORD *)&NumberOfBytes[1] = v280;
                                      ullAugend = --v278;
                                    }
                                    while ( v278 );
                                    v126 ^= puResult;
                                    v285 = v304 ^ v127;
                                    v286 = 0;
                                    v121 = v292;
                                    v8 = v321;
                                    v296 = v126;
                                    v294 = v285;
                                    if ( v128 )
                                    {
                                      v287 = Src;
                                      do
                                      {
                                        v288 = v287 + 1;
                                        if ( v286 >= 4 )
                                        {
                                          v285 = __ROL4__(v285, 8);
                                          v289 = v285;
                                        }
                                        else
                                        {
                                          v126 = __ROL4__(v126, 8);
                                          v289 = v126;
                                        }
                                        ++v286;
                                        *v287++ = v289;
                                      }
                                      while ( v286 < v128 );
                                      v126 = v296;
                                      v123 = v288;
                                      v285 = v294;
                                    }
                                    else
                                    {
                                      v123 = (char *)Src;
                                    }
                                    if ( (unsigned int)v128 <= 4 )
                                    {
                                      v127 = 0;
                                      v294 = 0;
                                      if ( (unsigned int)v128 < 4 )
                                      {
                                        v126 = v126 >> (8 * (4 - v128)) << (8 * (4 - v128));
                                        v296 = v126;
                                      }
                                    }
                                    else
                                    {
                                      v127 = v285 >> (8 * (8 - v128)) << (8 * (8 - v128));
                                      v294 = v127;
                                    }
                                    v125 = (unsigned __int8 *)pullResult;
                                    v124 = v305;
                                  }
                                  v314 = (unsigned __int64)v124 >> 3;
                                  if ( v314 )
                                  {
                                    v129 = v125 + 2;
                                    v130 = v304;
                                    Src = v123 + 7;
                                    v131 = (size_t)(v315 + 129);
                                    v132 = v315 + 2;
                                    Size = (size_t)(v315 + 129);
                                    v315 += 2;
                                    do
                                    {
                                      v133 = 0LL;
                                      v134 = v132;
                                      v135 = v129[2] << 8;
                                      v136 = *v129;
                                      v137 = (*(v129 - 1) | (*(v129 - 2) << 8)) << 8;
                                      v129 += 8;
                                      v138 = *(v129 - 5) | v135;
                                      AccessStatus = *(v129 - 7) | ((v136 | v137) << 8);
                                      v139 = AccessStatus ^ v126;
                                      v140 = *(v129 - 3) | ((*(v129 - 4) | (v138 << 8)) << 8);
                                      v296 = v139;
                                      v141 = v140 ^ v127;
                                      v310 = v140;
                                      v142 = 16LL;
                                      v294 = v141;
                                      v143 = (_BYTE *)v131;
                                      pullResult = 16LL;
                                      *(_QWORD *)&NumberOfBytes[1] = v131;
                                      do
                                      {
                                        v144 = *(v143 - 1);
                                        if ( v144 < 0x1Fu )
                                        {
                                          v177 = funcs_14064AAAA[v144](
                                                   v133,
                                                   *(v134 - 2),
                                                   *(v134 - 1),
                                                   *v134,
                                                   v134[1],
                                                   (__int64)&v376,
                                                   v141);
                                          v141 = v294;
                                          v139 = v177 ^ v296;
                                          v143 = *(_BYTE **)&NumberOfBytes[1];
                                          v142 = pullResult;
                                          v296 = v139;
                                        }
                                        if ( *v143 < 0x1Fu )
                                        {
                                          v178 = funcs_14064AAAA[(unsigned __int8)*v143](
                                                   v133 + 1,
                                                   v134[2],
                                                   v134[3],
                                                   v134[4],
                                                   v134[5],
                                                   (__int64)&v376,
                                                   v139);
                                          v139 = v296;
                                          v141 = v178 ^ v294;
                                          v143 = *(_BYTE **)&NumberOfBytes[1];
                                          v142 = pullResult;
                                          v294 = v141;
                                        }
                                        v143 += 2;
                                        v133 += 2LL;
                                        v134 += 8;
                                        *(_QWORD *)&NumberOfBytes[1] = v143;
                                        pullResult = --v142;
                                      }
                                      while ( v142 );
                                      v145 = (HIWORD(v376) * ((unsigned __int16)v376 + __ROR4__(~v141, 5))) ^ v139;
                                      v146 = (v145 >> 10) ^ (WORD1(v376) * (HIWORD(v376) ^ v145)) ^ v141;
                                      v147 = __ROR4__(v146, 10) ^ (WORD2(v376) * __ROR4__(v376 ^ v146, 12)) ^ v145;
                                      v148 = (HIWORD(v376) * __ROR4__(v147 - v376, 14) - __ROL4__(v147, 8)) ^ v146;
                                      v149 = (__ROL4__(v148, 2)
                                            + (unsigned __int16)v376 * __ROR4__(v148 + HIDWORD(v376), 15)) ^ v147;
                                      v150 = (WORD1(v376) * (WORD2(v376) ^ v149)) ^ __ROR4__(v149, 6) ^ v148;
                                      v151 = (HIDWORD(v376) - (v150 ^ v376)) ^ v149;
                                      v152 = (HIWORD(v376) * __ROL4__(WORD1(v376) ^ v151, 6) - __ROL4__(v151, 2)) ^ v150;
                                      v153 = ((unsigned __int16)v376 * (v152 - WORD2(v376)) - (v152 >> 13)) ^ v151;
                                      v154 = (WORD1(v376) * __ROR4__(HIDWORD(v376) + v153, 9) - __ROL4__(v153, 2)) ^ v152;
                                      v155 = Src;
                                      v132 = v315;
                                      v156 = (__ROL4__(v154, 10) + WORD2(v376) * __ROL4__(v154 - v376, 5)) ^ v153;
                                      v296 = puResult ^ v156;
                                      v157 = v130 ^ v156 ^ v376 ^ HIDWORD(v376) ^ v154;
                                      v130 = v310;
                                      v294 = v157;
                                      *((char *)Src - 4) = puResult ^ v156;
                                      v296 = __ROR4__(v296, 8);
                                      *v155 = v294;
                                      v294 = __ROR4__(v294, 8);
                                      *(v155 - 5) = v296;
                                      v296 = __ROR4__(v296, 8);
                                      *(v155 - 1) = v294;
                                      v294 = __ROR4__(v294, 8);
                                      *(v155 - 6) = v296;
                                      v296 = __ROR4__(v296, 8);
                                      *(v155 - 2) = v294;
                                      v294 = __ROR4__(v294, 8);
                                      *(v155 - 7) = v296;
                                      *(v155 - 3) = v294;
                                      v126 = __ROR4__(v296, 8);
                                      v127 = __ROR4__(v294, 8);
                                      v64 = v314-- == 1;
                                      v294 = v127;
                                      Src = v155 + 8;
                                      v131 = Size;
                                      puResult = AccessStatus;
                                      v296 = v126;
                                    }
                                    while ( !v64 );
                                    v121 = v292;
                                    v9 = v325;
                                    v8 = v321;
                                  }
                                  v158 = v313;
                                  v159 = v305 + 8LL;
                                  *(_QWORD *)((char *)v313 + v305) = v121;
                                  v363 = v159;
                                  P = v158;
                                  Acl = 0;
                                  if ( (_DWORD)v159 )
                                  {
                                    Size = (unsigned int)v159;
                                    v160 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v159, 0x20534C53u);
                                    v161 = v160;
                                    if ( v160 )
                                    {
                                      memmove(v160, v158, Size);
                                      v8[1] = v161;
                                      *(_DWORD *)v8 = v159;
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
                                  v5 = 0LL;
                                }
                                else
                                {
LABEL_635:
                                  Acl = -1073741823;
                                }
                                if ( P )
                                {
                                  ExFreePoolWithTag(P, 0x20534C53u);
                                  P = 0LL;
                                }
                                v7 = v9;
                                if ( Acl >= 0 )
                                {
                                  v162 = *(_DWORD *)v8;
                                  puResult = 4;
                                  Acl = RtlUIntAdd(4u, v162, &puResult);
                                  if ( Acl < 0
                                    || (Acl = RtlUIntAdd(puResult, 4u, &puResult), Acl < 0)
                                    || (Acl = RtlUIntAdd(puResult, *((_DWORD *)v8 + 4), &puResult), Acl < 0)
                                    || (Acl = RtlUIntAdd(puResult, 4u, &puResult), Acl < 0) )
                                  {
                                    v163 = v312;
                                  }
                                  else
                                  {
                                    Acl = RtlUIntAdd(puResult, *((_DWORD *)v8 + 8), &puResult);
                                    v163 = v312;
                                    if ( Acl >= 0 )
                                      v163 = puResult;
                                    v312 = v163;
                                  }
                                  if ( Acl >= 0 )
                                  {
                                    if ( v163 )
                                    {
                                      v164 = ExAllocatePoolWithTag(PagedPool, v163, 0x20534C53u);
                                      v165 = v164;
                                      if ( v164 )
                                      {
                                        ullAugend = (ULONGLONG)v164;
                                        *v164 = *(_DWORD *)v8;
                                        Acl = RtlULongLongAdd((ULONGLONG)v164, 4uLL, &ullAugend);
                                        if ( Acl < 0 )
                                          goto LABEL_640;
                                        memmove((void *)ullAugend, v8[1], *(unsigned int *)v8);
                                        Acl = RtlULongLongAdd(ullAugend, *(unsigned int *)v8, &ullAugend);
                                        if ( Acl < 0 )
                                          goto LABEL_640;
                                        v166 = ullAugend;
                                        *(_DWORD *)ullAugend = *((_DWORD *)v8 + 4);
                                        Acl = RtlULongLongAdd(v166, 4uLL, &ullAugend);
                                        if ( Acl < 0
                                          || (memmove((void *)ullAugend, v8[3], *((unsigned int *)v8 + 4)),
                                              Acl = RtlULongLongAdd(ullAugend, *((unsigned int *)v8 + 4), &ullAugend),
                                              Acl < 0)
                                          || (v167 = ullAugend,
                                              *(_DWORD *)ullAugend = *((_DWORD *)v8 + 8),
                                              Acl = RtlULongLongAdd(v167, 4uLL, &ullAugend),
                                              Acl < 0)
                                          || (memmove((void *)ullAugend, v8[5], *((unsigned int *)v8 + 8)),
                                              Acl = RtlULongLongAdd(ullAugend, *((unsigned int *)v8 + 8), &ullAugend),
                                              Acl < 0) )
                                        {
LABEL_640:
                                          v168 = v291;
                                        }
                                        else
                                        {
                                          v168 = v165;
                                          v165 = 0LL;
                                          v320 = v312;
                                        }
                                        if ( v165 )
                                          ExFreePoolWithTag(v165, 0x20534C53u);
                                        goto LABEL_201;
                                      }
                                      Acl = -1073741801;
                                    }
                                    else
                                    {
                                      Acl = -1073741762;
                                    }
                                  }
                                  v168 = v291;
LABEL_201:
                                  v7 = v9;
                                  if ( Acl >= 0 )
                                  {
                                    v169 = (_DWORD *)v365;
                                    *v364 = v168;
                                    v168 = 0LL;
                                    *v169 = v320;
                                  }
                                  goto LABEL_203;
                                }
                                goto LABEL_356;
                              }
                            }
                          }
                        }
                      }
                    }
                    Acl = -1073741811;
                  }
                  goto LABEL_260;
                }
                stru_1409AD268.Length = 0;
                stru_1409AD268.Buffer = 0LL;
                if ( qword_1409AD0C8 )
                {
                  ExFreePoolWithTag(qword_1409AD0C8, 0x20534C53u);
                  qword_1409AD0C8 = 0LL;
                }
                dword_1409AD10C = 0;
                dword_1409AD0F0 = 0;
                v345 = 8;
                v346 = 16;
                v347 = 24;
                v245 = *((_DWORD *)v8 + 8);
                if ( *((_DWORD *)v8 + 4) >= 0xFFFFFFE0 )
                  goto LABEL_500;
                v246 = *((_DWORD *)v8 + 4) + 36;
                if ( v246 < *((_DWORD *)v8 + 4) + 32 || v246 + v245 < v246 )
                  goto LABEL_500;
                v348 = v246 + v245;
                uAddend[1] = 8;
                v247 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                if ( !v247 )
                {
                  Acl = -1073741801;
                  goto LABEL_501;
                }
                v299 = v247;
                uAddend[0] = 0;
                v329 = 0;
                if ( v247 + 1 < v247 )
                {
LABEL_500:
                  Acl = -1073741675;
                }
                else
                {
                  Acl = 0;
                  if ( v247 + 2 <= (_DWORD *)((char *)v247 + uAddend[1]) )
                  {
                    *v247 = 4;
                    v247[1] = v329;
                    ++uAddend[0];
                  }
                  else
                  {
                    Acl = -1073741789;
                  }
                }
LABEL_501:
                v7 = v9;
                if ( Acl >= 0 )
                  goto LABEL_143;
                goto LABEL_355;
              }
              v322 = 0LL;
              if ( (unsigned int)v302 > 3 )
              {
                v248 = (unsigned int *)v303;
                for ( m = 0; m < 3; ++m )
                {
                  v250 = *v248;
                  v251 = v248 + 1;
                  if ( v248 + 1 < v248 )
                    goto LABEL_521;
                  v248 = (unsigned int *)((char *)v251 + v250);
                  if ( (unsigned int *)((char *)v251 + v250) < v251 )
                    goto LABEL_521;
                }
                v252 = *v248;
                if ( v248 + 1 < v248 )
                {
LABEL_521:
                  Acl = -1073741675;
                  goto LABEL_522;
                }
                v330 = *v248;
                v253 = 0LL;
                if ( v252 )
                  v253 = (const wchar_t *)(v248 + 1);
                v361 = (wchar_t *)v253;
                Acl = 0;
                if ( v252
                  && (v252 & 1) == 0
                  && !v253[((unsigned __int64)v252 >> 1) - 1]
                  && StringCbLengthW(v253, v252, &Size) >= 0
                  && Size + 2 == v330 )
                {
                  v362 = v361;
                  v319 = Size >> 1;
                  goto LABEL_522;
                }
              }
              else
              {
                Acl = -1073741811;
LABEL_522:
                if ( Acl < 0 )
                  goto LABEL_555;
                v254 = 2 * v319 + 2;
                if ( 2 * v319 != -2 )
                {
                  v255 = v254;
                  v256 = ExAllocatePoolWithTag(PagedPool, v254, 0x20534C53u);
                  v257 = v256;
                  if ( !v256 )
                  {
                    Acl = -1073741801;
                    goto LABEL_555;
                  }
                  memmove(v256, v362, v255);
                  v339 = v319;
                  v322 = v257;
                  if ( (unsigned int)v302 > 4 )
                  {
                    v258 = (unsigned int *)v303;
                    for ( n = 0; n < 4; ++n )
                    {
                      v260 = *v258;
                      v261 = v258 + 1;
                      if ( v258 + 1 < v258 )
                        goto LABEL_537;
                      v258 = (unsigned int *)((char *)v261 + v260);
                      if ( (unsigned int *)((char *)v261 + v260) < v261 )
                        goto LABEL_537;
                    }
                    v262 = *v258;
                    v263 = v258 + 1;
                    if ( v258 + 1 < v258 )
                    {
LABEL_537:
                      Acl = -1073741675;
                      goto LABEL_538;
                    }
                    v349 = *v258;
                    v264 = 0LL;
                    if ( v262 )
                      v264 = (int *)v263;
                    v370 = v264;
                    Acl = 0;
                    if ( v262 == 4 )
                    {
                      v333 = *v264;
                      goto LABEL_538;
                    }
                    goto LABEL_536;
                  }
                  Acl = -1073741811;
LABEL_538:
                  if ( Acl < 0 )
                    goto LABEL_555;
                  v358 = 8;
                  if ( qword_1409AD0C8 )
                  {
                    ExFreePoolWithTag(qword_1409AD0C8, 0x20534C53u);
                    qword_1409AD0C8 = 0LL;
                  }
                  v265 = 2LL * v339;
                  stru_1409AD268.Length = 0;
                  stru_1409AD268.Buffer = 0LL;
                  if ( v265 > 0xFFFFFFFF || (int)v265 + 2 < (unsigned int)v265 )
                    goto LABEL_554;
                  if ( (_DWORD)v265 == -2 )
                  {
                    Acl = -1073741762;
                    goto LABEL_555;
                  }
                  v266 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v265 + 2), 0x20534C53u);
                  if ( v266 )
                  {
                    qword_1409AD0C8 = v266;
                    memset(v266, 0, (unsigned int)(v265 + 2));
                    memmove(qword_1409AD0C8, v322, (unsigned int)v265);
                    RtlInitUnicodeString(&stru_1409AD268, (PCWSTR)qword_1409AD0C8);
                    dword_1409AD10C = v333;
                    v351 = 16;
                    v352 = 24;
                    v267 = *((_DWORD *)v8 + 8);
                    if ( *((_DWORD *)v8 + 4) >= 0xFFFFFFE0
                      || (v268 = *((_DWORD *)v8 + 4) + 36, v268 < *((_DWORD *)v8 + 4) + 32)
                      || v268 + v267 < v268 )
                    {
LABEL_554:
                      Acl = -1073741675;
LABEL_555:
                      if ( v322 )
                      {
                        ExFreePoolWithTag(v322, 0x20534C53u);
                        v322 = 0LL;
                      }
                      goto LABEL_488;
                    }
                    v353 = v268 + v267;
                    uAddend[1] = 8;
                    v269 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                    if ( v269 )
                    {
                      v299 = v269;
                      uAddend[0] = 0;
                      v334 = 0;
                      if ( v269 + 1 >= v269 )
                      {
                        Acl = 0;
                        if ( v269 + 2 <= (_DWORD *)((char *)v269 + uAddend[1]) )
                        {
                          *v269 = 4;
                          v269[1] = v334;
                          ++uAddend[0];
                          goto LABEL_555;
                        }
LABEL_536:
                        Acl = -1073741789;
                        goto LABEL_555;
                      }
                      goto LABEL_554;
                    }
                  }
                  Acl = -1073741801;
                  goto LABEL_555;
                }
              }
              Acl = -1073741762;
              goto LABEL_555;
            }
            goto LABEL_372;
          }
LABEL_368:
          Acl = -1073741675;
LABEL_369:
          v168 = 0LL;
          goto LABEL_261;
        }
      }
      Acl = -1073741675;
      goto LABEL_642;
    }
  }
  Acl = -1073741762;
LABEL_356:
  v168 = v291;
LABEL_203:
  if ( v303 )
    ExFreePoolWithTag(v303, 0x20534C53u);
LABEL_205:
  *(_QWORD *)uAddend = 0LL;
  if ( v299 )
  {
    ExFreePoolWithTag(v299, 0x20534C53u);
    v299 = v5;
  }
  if ( v323 )
    ExFreePoolWithTag(v323, 0x20534C53u);
  if ( v7 )
  {
    v170 = (void *)v7[1];
    if ( v170 )
    {
      ExFreePoolWithTag(v170, 0x20534C53u);
      v7[1] = v5;
    }
    v171 = (void *)v7[3];
    if ( v171 )
    {
      ExFreePoolWithTag(v171, 0x20534C53u);
      v7[3] = v5;
    }
    v172 = (void *)v7[5];
    if ( v172 )
    {
      ExFreePoolWithTag(v172, 0x20534C53u);
      v7[5] = v5;
    }
    ExFreePoolWithTag(v7, 0x20534C53u);
  }
  if ( v168 )
    ExFreePoolWithTag(v168, 0x20534C53u);
  if ( v8 )
  {
    v173 = (void *)v8[1];
    if ( v173 )
    {
      ExFreePoolWithTag(v173, 0x20534C53u);
      v8[1] = v5;
    }
    v174 = (void *)v8[3];
    if ( v174 )
    {
      ExFreePoolWithTag(v174, 0x20534C53u);
      v8[3] = v5;
    }
    v175 = (void *)v8[5];
    if ( v175 )
    {
      ExFreePoolWithTag(v175, 0x20534C53u);
      v8[5] = v5;
    }
    ExFreePoolWithTag(v8, 0x20534C53u);
  }
  if ( v324 )
    ExFreePoolWithTag(v324, 0x20534C53u);
  return (unsigned int)Acl;
}
