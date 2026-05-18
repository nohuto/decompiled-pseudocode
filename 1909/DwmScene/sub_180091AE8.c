/*
 * XREFs of sub_180091AE8 @ 0x180091AE8
 * Callers:
 *     sub_1800EF4E0 @ 0x1800EF4E0 (sub_1800EF4E0.c)
 *     sub_1800F0270 @ 0x1800F0270 (sub_1800F0270.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_18009185C @ 0x18009185C (sub_18009185C.c)
 *     sub_180091A40 @ 0x180091A40 (sub_180091A40.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     sub_1800F3154 @ 0x1800F3154 (sub_1800F3154.c)
 *     sub_1800F397C @ 0x1800F397C (sub_1800F397C.c)
 *     sub_1800F39C0 @ 0x1800F39C0 (sub_1800F39C0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _alloca_probe @ 0x180126130 (_alloca_probe.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=65
__int64 __fastcall sub_180091AE8(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v2; // r13
  unsigned __int16 v3; // r12
  unsigned __int16 v4; // r15
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // si
  unsigned __int16 v7; // di
  unsigned __int16 v8; // bx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned __int16 v15; // [rsp+28h] [rbp-D8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v25[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v28[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v29[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v30[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v31[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v32[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v33[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v34[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v35[4]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v36[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v37[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v38[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v39[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v40[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v41[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v42[4]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v43[4]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v44[4]; // [rsp+340h] [rbp+240h] BYREF
  __int64 v45[4]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v46[4]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v47[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v48[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v49[4]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v50[4]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v51[4]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v52[4]; // [rsp+440h] [rbp+340h] BYREF
  __int64 v53[4]; // [rsp+460h] [rbp+360h] BYREF
  __int64 v54[4]; // [rsp+480h] [rbp+380h] BYREF
  __int64 v55[4]; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int64 v56[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 v57[4]; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 v58[4]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v59[4]; // [rsp+520h] [rbp+420h] BYREF
  __int64 v60[4]; // [rsp+540h] [rbp+440h] BYREF
  __int64 v61[4]; // [rsp+560h] [rbp+460h] BYREF
  __int64 v62[4]; // [rsp+580h] [rbp+480h] BYREF
  __int64 v63[4]; // [rsp+5A0h] [rbp+4A0h] BYREF
  __int64 v64[4]; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int64 v65[4]; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v66[4]; // [rsp+600h] [rbp+500h] BYREF
  __int64 v67[4]; // [rsp+620h] [rbp+520h] BYREF
  __int64 v68[4]; // [rsp+640h] [rbp+540h] BYREF
  __int64 v69[4]; // [rsp+660h] [rbp+560h] BYREF
  __int64 v70[4]; // [rsp+680h] [rbp+580h] BYREF
  __int64 v71[4]; // [rsp+6A0h] [rbp+5A0h] BYREF
  __int64 v72[4]; // [rsp+6C0h] [rbp+5C0h] BYREF
  __int64 v73[4]; // [rsp+6E0h] [rbp+5E0h] BYREF
  __int64 v74[4]; // [rsp+700h] [rbp+600h] BYREF
  __int64 v75[4]; // [rsp+720h] [rbp+620h] BYREF
  __int64 v76[4]; // [rsp+740h] [rbp+640h] BYREF
  __int64 v77[4]; // [rsp+760h] [rbp+660h] BYREF
  __int64 v78[4]; // [rsp+780h] [rbp+680h] BYREF
  __int64 v79[4]; // [rsp+7A0h] [rbp+6A0h] BYREF
  __int64 v80[4]; // [rsp+7C0h] [rbp+6C0h] BYREF
  __int64 v81[6]; // [rsp+7E0h] [rbp+6E0h] BYREF
  __int64 v82[8]; // [rsp+810h] [rbp+710h] BYREF
  __int64 v83[8]; // [rsp+850h] [rbp+750h] BYREF
  __int64 v84[8]; // [rsp+890h] [rbp+790h] BYREF
  __int64 v85[8]; // [rsp+8D0h] [rbp+7D0h] BYREF
  __int64 v86[8]; // [rsp+910h] [rbp+810h] BYREF
  __int64 v87[8]; // [rsp+950h] [rbp+850h] BYREF
  __int64 v88[8]; // [rsp+990h] [rbp+890h] BYREF
  __int64 v89[8]; // [rsp+9D0h] [rbp+8D0h] BYREF
  __int64 v90[8]; // [rsp+A10h] [rbp+910h] BYREF
  __int64 v91[8]; // [rsp+A50h] [rbp+950h] BYREF
  __int64 v92[8]; // [rsp+A90h] [rbp+990h] BYREF
  __int64 v93[8]; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int64 v94[8]; // [rsp+B10h] [rbp+A10h] BYREF
  __int64 v95[8]; // [rsp+B50h] [rbp+A50h] BYREF
  __int64 v96[8]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v97[8]; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int128 v98; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v99; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v100; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v101; // [rsp+C40h] [rbp+B40h] BYREF
  _BYTE v102[64]; // [rsp+C50h] [rbp+B50h] BYREF
  _BYTE v103[64]; // [rsp+C90h] [rbp+B90h] BYREF
  _BYTE v104[64]; // [rsp+CD0h] [rbp+BD0h] BYREF
  _BYTE v105[64]; // [rsp+D10h] [rbp+C10h] BYREF
  _BYTE v106[64]; // [rsp+D50h] [rbp+C50h] BYREF
  _BYTE v107[64]; // [rsp+D90h] [rbp+C90h] BYREF
  _BYTE v108[64]; // [rsp+DD0h] [rbp+CD0h] BYREF
  _BYTE v109[64]; // [rsp+E10h] [rbp+D10h] BYREF
  _BYTE v110[64]; // [rsp+E50h] [rbp+D50h] BYREF
  _BYTE v111[64]; // [rsp+E90h] [rbp+D90h] BYREF
  _BYTE v112[64]; // [rsp+ED0h] [rbp+DD0h] BYREF
  _BYTE v113[64]; // [rsp+F10h] [rbp+E10h] BYREF
  _BYTE v114[64]; // [rsp+F50h] [rbp+E50h] BYREF
  _BYTE v115[64]; // [rsp+F90h] [rbp+E90h] BYREF
  _BYTE v116[64]; // [rsp+FD0h] [rbp+ED0h] BYREF
  _BYTE v117[64]; // [rsp+1010h] [rbp+F10h] BYREF
  _BYTE v118[64]; // [rsp+1050h] [rbp+F50h] BYREF
  _BYTE v119[64]; // [rsp+1090h] [rbp+F90h] BYREF
  _BYTE v120[64]; // [rsp+10D0h] [rbp+FD0h] BYREF
  _BYTE v121[64]; // [rsp+1110h] [rbp+1010h] BYREF
  _BYTE v122[64]; // [rsp+1150h] [rbp+1050h] BYREF
  _BYTE v123[64]; // [rsp+1190h] [rbp+1090h] BYREF
  _BYTE v124[64]; // [rsp+11D0h] [rbp+10D0h] BYREF
  _BYTE v125[64]; // [rsp+1210h] [rbp+1110h] BYREF
  _BYTE v126[64]; // [rsp+1250h] [rbp+1150h] BYREF
  _BYTE v127[64]; // [rsp+1290h] [rbp+1190h] BYREF
  _BYTE v128[64]; // [rsp+12D0h] [rbp+11D0h] BYREF
  _BYTE v129[64]; // [rsp+1310h] [rbp+1210h] BYREF
  _BYTE v130[64]; // [rsp+1350h] [rbp+1250h] BYREF
  _BYTE v131[64]; // [rsp+1390h] [rbp+1290h] BYREF
  _BYTE v132[64]; // [rsp+13D0h] [rbp+12D0h] BYREF
  _BYTE v133[64]; // [rsp+1410h] [rbp+1310h] BYREF
  _BYTE v134[64]; // [rsp+1450h] [rbp+1350h] BYREF
  _BYTE v135[64]; // [rsp+1490h] [rbp+1390h] BYREF
  _BYTE v136[64]; // [rsp+14D0h] [rbp+13D0h] BYREF
  _BYTE v137[64]; // [rsp+1510h] [rbp+1410h] BYREF
  _BYTE v138[64]; // [rsp+1550h] [rbp+1450h] BYREF
  _BYTE v139[64]; // [rsp+1590h] [rbp+1490h] BYREF
  _BYTE v140[64]; // [rsp+15D0h] [rbp+14D0h] BYREF
  _BYTE v141[64]; // [rsp+1610h] [rbp+1510h] BYREF
  _BYTE v142[64]; // [rsp+1650h] [rbp+1550h] BYREF
  _BYTE v143[64]; // [rsp+1690h] [rbp+1590h] BYREF
  _BYTE v144[64]; // [rsp+16D0h] [rbp+15D0h] BYREF
  _BYTE v145[64]; // [rsp+1710h] [rbp+1610h] BYREF

  v81[4] = -2LL;
  v81[5] = (__int64)a2;
  v98 = 0uLL;
  sub_1800A3BB0(a1, &v98, 6LL);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18000F444(v28, (__int64)&qword_18025CC98);
  sub_180091460((__int64)v117, v28, 2);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18000F444(v29, (__int64)&qword_18025CC38);
  sub_180091460((__int64)v118, v29, 2);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18000F444(v30, (__int64)&qword_18025CC78);
  sub_18009185C((__int64)v119, v30, 2LL, 1.0);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F444(v31, (__int64)&qword_18025CC58);
  sub_180091460((__int64)v120, v31, 2);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18000F444(v32, (__int64)&qword_18025CDF8);
  sub_180091460((__int64)v121, v32, 5);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F444(v33, (__int64)&qword_18025CAD8);
  sub_180091460((__int64)v122, v33, 5);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F444(v34, (__int64)&qword_18025CAF8);
  sub_180091460((__int64)v123, v34, 5);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F444(v35, (__int64)&qword_18025CB18);
  sub_180091460((__int64)v124, v35, 5);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18000F444(v36, (__int64)&qword_18025CB38);
  sub_180091460((__int64)v125, v36, 5);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18000F444(v37, (__int64)&qword_18025CB58);
  sub_180091460((__int64)v126, v37, 5);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_18000F444(v38, (__int64)&qword_18025D0D8);
  sub_180091460((__int64)v127, v38, 5);
  v39[2] = 0LL;
  v39[3] = 0LL;
  sub_18000F444(v39, (__int64)&qword_18025D0F8);
  sub_180091460((__int64)v128, v39, 5);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_18000F444(v40, (__int64)&qword_18025D118);
  sub_180091460((__int64)v129, v40, 6);
  v41[2] = 0LL;
  v41[3] = 0LL;
  sub_18000F444(v41, (__int64)&qword_18025CBF8);
  sub_180091460((__int64)v130, v41, 2);
  v42[2] = 0LL;
  v42[3] = 0LL;
  sub_18000F444(v42, (__int64)&qword_18025CC18);
  sub_18009185C((__int64)v131, v42, 2LL, 1.0);
  v43[2] = 0LL;
  v43[3] = 0LL;
  sub_18000F444(v43, (__int64)&qword_18025CCB8);
  sub_180091460((__int64)v132, v43, 2);
  v44[2] = 0LL;
  v44[3] = 0LL;
  sub_18000F444(v44, (__int64)&qword_18025CCD8);
  sub_180091460((__int64)v133, v44, 2);
  v45[2] = 0LL;
  v45[3] = 0LL;
  sub_18000F444(v45, (__int64)&qword_18025CD58);
  sub_180091460((__int64)v134, v45, 2);
  v46[2] = 0LL;
  v46[3] = 0LL;
  sub_18000F444(v46, (__int64)&qword_18025CD78);
  sub_180091460((__int64)v135, v46, 2);
  v47[2] = 0LL;
  v47[3] = 0LL;
  sub_18000F444(v47, (__int64)&qword_18025CD98);
  sub_180091460((__int64)v136, v47, 2);
  v48[2] = 0LL;
  v48[3] = 0LL;
  sub_18000F444(v48, (__int64)&qword_18025CDB8);
  sub_180091460((__int64)v137, v48, 2);
  v49[2] = 0LL;
  v49[3] = 0LL;
  sub_18000F444(v49, (__int64)&qword_18025CDD8);
  sub_180091460((__int64)v138, v49, 2);
  v50[2] = 0LL;
  v50[3] = 0LL;
  sub_18000F444(v50, (__int64)&qword_18025CCF8);
  sub_180091460((__int64)v139, v50, 2);
  v51[2] = 0LL;
  v51[3] = 0LL;
  sub_18000F444(v51, (__int64)&qword_18025CD18);
  sub_180091460((__int64)v140, v51, 2);
  v52[2] = 0LL;
  v52[3] = 0LL;
  sub_18000F444(v52, (__int64)&qword_18025CD38);
  sub_180091460((__int64)v141, v52, 2);
  v53[2] = 0LL;
  v53[3] = 0LL;
  sub_18000F444(v53, (__int64)&qword_18025CB78);
  sub_18009185C((__int64)v142, v53, 2LL, 2.0);
  v54[2] = 0LL;
  v54[3] = 0LL;
  sub_18000F444(v54, (__int64)&qword_18025CB98);
  sub_18009185C((__int64)v143, v54, 2LL, 1.0);
  v55[2] = 0LL;
  v55[3] = 0LL;
  sub_18000F444(v55, (__int64)&qword_18025CBB8);
  sub_18009185C((__int64)v144, v55, 2LL, 1.0);
  v56[2] = 0LL;
  v56[3] = 0LL;
  sub_18000F444(v56, (__int64)&qword_18025CBD8);
  sub_18009185C((__int64)v145, v56, 2LL, 1.0);
  sub_1800F239C(v98, v117, 29LL, 1LL);
  v57[2] = 0LL;
  v57[3] = 0LL;
  sub_18000F444(v57, (__int64)&qword_18025D018);
  sub_180091460((__int64)v82, v57, 8);
  v15 = sub_1800F2454(v98, v82, 1LL);
  sub_180091A40(v82);
  v58[2] = 0LL;
  v58[3] = 0LL;
  sub_18000F444(v58, (__int64)&qword_18025D038);
  sub_180091460((__int64)v83, v58, 8);
  v2 = sub_1800F2454(v98, v83, 1LL);
  sub_180091A40(v83);
  v59[2] = 0LL;
  v59[3] = 0LL;
  sub_18000F444(v59, (__int64)&qword_18025D058);
  sub_180091460((__int64)v84, v59, 8);
  v3 = sub_1800F2454(v98, v84, 1LL);
  sub_180091A40(v84);
  v60[2] = 0LL;
  v60[3] = 0LL;
  sub_18000F444(v60, (__int64)&qword_18025D078);
  sub_180091460((__int64)v85, v60, 8);
  v4 = sub_1800F2454(v98, v85, 1LL);
  sub_180091A40(v85);
  v61[2] = 0LL;
  v61[3] = 0LL;
  sub_18000F444(v61, (__int64)&qword_18025D098);
  sub_180091460((__int64)v86, v61, 8);
  v5 = sub_1800F2454(v98, v86, 1LL);
  sub_180091A40(v86);
  v62[2] = 0LL;
  v62[3] = 0LL;
  sub_18000F444(v62, (__int64)&qword_18025D0B8);
  sub_180091460((__int64)v87, v62, 8);
  v6 = sub_1800F2454(v98, v87, 1LL);
  sub_180091A40(v87);
  v63[2] = 0LL;
  v63[3] = 0LL;
  sub_18000F444(v63, (__int64)&qword_18025D138);
  sub_180091460((__int64)v88, v63, 8);
  v7 = sub_1800F2454(v98, v88, 1LL);
  sub_180091A40(v88);
  v64[2] = 0LL;
  v64[3] = 0LL;
  sub_18000F444(v64, (__int64)&qword_18025D178);
  sub_180091460((__int64)v89, v64, 8);
  v8 = sub_1800F2454(v98, v89, 1LL);
  sub_180091A40(v89);
  sub_1800F39C0(v98, v15, 5LL);
  sub_1800F39C0(v98, v2, 6LL);
  sub_1800F39C0(v98, v3, 7LL);
  sub_1800F39C0(v98, v4, 13LL);
  sub_1800F39C0(v98, v5, 14LL);
  sub_1800F39C0(v98, v6, 15LL);
  sub_1800F39C0(v98, v8, 8LL);
  sub_1800F39C0(v98, v7, 11LL);
  sub_1800F2BD4(v98);
  v20 = 0LL;
  if ( *((_QWORD *)&v98 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v98 + 1) + 8LL), 1u);
  v20 = v98;
  sub_1800A9BE4(*a2, &v20);
  `eh vector destructor iterator'(v117, 0x40uLL, 0x1DuLL, (void (*)(void *))sub_180091A40);
  v9 = (volatile signed __int32 *)*((_QWORD *)&v98 + 1);
  if ( *((_QWORD *)&v98 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v98 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v100 = 0uLL;
  sub_1800A3BB0(a1, &v100, 5LL);
  v65[2] = 0LL;
  v65[3] = 0LL;
  sub_18000F444(v65, (__int64)&qword_18025CE18);
  sub_180091460((__int64)v107, v65, 1);
  v66[2] = 0LL;
  v66[3] = 0LL;
  sub_18000F444(v66, (__int64)&qword_18025CE38);
  sub_180091460((__int64)v108, v66, 1);
  v67[2] = 0LL;
  v67[3] = 0LL;
  sub_18000F444(v67, (__int64)&qword_18025CE58);
  sub_180091460((__int64)v109, v67, 0);
  v68[2] = 0LL;
  v68[3] = 0LL;
  sub_18000F444(v68, (__int64)&qword_18025CE78);
  sub_180091460((__int64)v110, v68, 0);
  v69[2] = 0LL;
  v69[3] = 0LL;
  sub_18000F444(v69, (__int64)&qword_18025CE98);
  sub_180091460((__int64)v111, v69, 0);
  v70[2] = 0LL;
  v70[3] = 0LL;
  sub_18000F444(v70, (__int64)&qword_18025CEB8);
  sub_180091460((__int64)v112, v70, 0);
  v71[2] = 0LL;
  v71[3] = 0LL;
  sub_18000F444(v71, (__int64)&qword_18025CED8);
  sub_180091460((__int64)v113, v71, 0);
  v72[2] = 0LL;
  v72[3] = 0LL;
  sub_18000F444(v72, (__int64)&qword_18025CEF8);
  sub_180091460((__int64)v114, v72, 0);
  v73[2] = 0LL;
  v73[3] = 0LL;
  sub_18000F444(v73, (__int64)&qword_18025CF18);
  sub_180091460((__int64)v115, v73, 0);
  v74[2] = 0LL;
  v74[3] = 0LL;
  sub_18000F444(v74, (__int64)&qword_18025CFD8);
  sub_180091460((__int64)v116, v74, 0);
  sub_1800F239C(v100, v107, 10LL, 1LL);
  sub_1800F3154(v100, 16LL);
  v75[2] = 0LL;
  v75[3] = 0LL;
  sub_18000F444(v75, (__int64)&qword_18025CF38);
  sub_180091460((__int64)v102, v75, 5);
  v76[2] = 0LL;
  v76[3] = 0LL;
  sub_18000F444(v76, (__int64)&qword_18025CF58);
  sub_180091460((__int64)v103, v76, 5);
  v77[2] = 0LL;
  v77[3] = 0LL;
  sub_18000F444(v77, (__int64)&qword_18025CF78);
  sub_180091460((__int64)v104, v77, 5);
  v78[2] = 0LL;
  v78[3] = 0LL;
  sub_18000F444(v78, (__int64)&qword_18025CF98);
  sub_180091460((__int64)v105, v78, 5);
  v79[2] = 0LL;
  v79[3] = 0LL;
  sub_18000F444(v79, (__int64)&qword_18025CFB8);
  sub_180091460((__int64)v106, v79, 5);
  sub_1800F239C(v100, v102, 5LL, 1LL);
  sub_1800F2BD4(v100);
  v21 = 0LL;
  if ( *((_QWORD *)&v100 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v100 + 1) + 8LL), 1u);
  v21 = v100;
  sub_1800A9BE4(*a2, &v21);
  `eh vector destructor iterator'(v102, 0x40uLL, 5uLL, (void (*)(void *))sub_180091A40);
  `eh vector destructor iterator'(v107, 0x40uLL, 0xAuLL, (void (*)(void *))sub_180091A40);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v100 + 1);
  if ( *((_QWORD *)&v100 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v100 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v99 = 0uLL;
  sub_1800A3BB0(a1, &v99, 4LL);
  v80[2] = 0LL;
  v80[3] = 0LL;
  sub_18000F444(v80, (__int64)&qword_18025D198);
  sub_180091460((__int64)v90, v80, 7);
  sub_1800F2454(v99, v90, 1LL);
  sub_180091A40(v90);
  v81[2] = 0LL;
  v81[3] = 0LL;
  sub_18000F444(v81, (__int64)&qword_18025D1B8);
  sub_180091460((__int64)v91, v81, 5);
  sub_1800F2454(v99, v91, 1LL);
  sub_180091A40(v91);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18000F444(v22, (__int64)&qword_18025D1D8);
  sub_180091460((__int64)v92, v22, 7);
  sub_1800F2454(v99, v92, 1LL);
  sub_180091A40(v92);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18000F444(v23, (__int64)&qword_18025D1F8);
  sub_180091460((__int64)v93, v23, 5);
  sub_1800F2454(v99, v93, 1LL);
  sub_180091A40(v93);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F444(v24, (__int64)&qword_18025D218);
  sub_180091460((__int64)v94, v24, 2);
  sub_1800F2454(v99, v94, 1LL);
  sub_180091A40(v94);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18000F444(v25, (__int64)&qword_18025D238);
  sub_180091460((__int64)v95, v25, 8);
  sub_1800F2454(v99, v95, 1LL);
  sub_180091A40(v95);
  sub_1800F397C(v99, &qword_18025D238, 9LL);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18000F444(v26, (__int64)&qword_18025D258);
  sub_180091460((__int64)v96, v26, 8);
  sub_1800F2454(v99, v96, 1LL);
  sub_180091A40(v96);
  sub_1800F397C(v99, &qword_18025D258, 10LL);
  sub_1800F2BD4(v99);
  v18 = 0LL;
  if ( *((_QWORD *)&v99 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v99 + 1) + 8LL), 1u);
  v18 = v99;
  sub_1800A9BE4(*a2, &v18);
  v11 = (volatile signed __int32 *)*((_QWORD *)&v99 + 1);
  if ( *((_QWORD *)&v99 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v99 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v101 = 0uLL;
  sub_1800A3BB0(a1, &v101, 1LL);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18000F444(v27, (__int64)&qword_18025CFF8);
  sub_180091460((__int64)v97, v27, 2);
  sub_1800F2454(v101, v97, 1LL);
  sub_180091A40(v97);
  sub_1800F2BD4(v101);
  v19 = 0LL;
  if ( *((_QWORD *)&v101 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v101 + 1) + 8LL), 1u);
  v19 = v101;
  result = sub_1800A9BE4(*a2, &v19);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v101 + 1);
  if ( *((_QWORD *)&v101 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v101 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
