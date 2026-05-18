/*
 * XREFs of sub_1800360B0 @ 0x1800360B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_180032CE0 @ 0x180032CE0 (sub_180032CE0.c)
 *     sub_180032D4C @ 0x180032D4C (sub_180032D4C.c)
 *     sub_180032DB8 @ 0x180032DB8 (sub_180032DB8.c)
 *     sub_180033040 @ 0x180033040 (sub_180033040.c)
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 *     sub_1800CE4B8 @ 0x1800CE4B8 (sub_1800CE4B8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_1800360B0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r12d
  _QWORD *v5; // rax
  char *v6; // rcx
  __int16 v7; // si
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int16 v12; // di
  __int64 v13; // rax
  __int16 v14; // di
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int16 v19; // si
  __int64 v20; // rax
  __int16 v21; // si
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int16 v26; // r14
  __int64 v27; // rax
  __int16 v28; // r14
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int16 v33; // di
  __int64 v34; // rax
  __int16 v35; // di
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int16 v40; // si
  __int64 v41; // rax
  __int16 v42; // si
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  __int64 *v45; // rax
  volatile signed __int32 *v46; // rbx
  __int64 *v47; // rax
  volatile signed __int32 *v48; // rbx
  __int64 *v49; // rax
  volatile signed __int32 *v50; // rbx
  __int64 *v51; // rax
  volatile signed __int32 *v52; // rbx
  __int64 *v53; // rax
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  volatile signed __int32 *v58; // rbx
  volatile signed __int32 *v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 result; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  _QWORD *v76; // [rsp+30h] [rbp-D0h]
  volatile signed __int32 *v77; // [rsp+38h] [rbp-C8h]
  __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v81; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v85; // [rsp+78h] [rbp-88h]
  __int128 v86; // [rsp+80h] [rbp-80h] BYREF
  __int128 v87; // [rsp+90h] [rbp-70h] BYREF
  __int128 v88; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v89; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v90; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v91; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v92; // [rsp+D8h] [rbp-28h]
  __int64 v93; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v94; // [rsp+E8h] [rbp-18h]
  char v95; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v96; // [rsp+F8h] [rbp-8h]
  char v97; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v98; // [rsp+108h] [rbp+8h]
  char v99; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v100; // [rsp+118h] [rbp+18h]
  char v101; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v102; // [rsp+128h] [rbp+28h]
  char v103; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v104; // [rsp+138h] [rbp+38h]
  char v105; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v106; // [rsp+148h] [rbp+48h]
  __int64 v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+158h] [rbp+58h]
  char v109[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v110; // [rsp+168h] [rbp+68h]
  char v111[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v112; // [rsp+178h] [rbp+78h]
  char v113[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v114; // [rsp+188h] [rbp+88h]
  char v115[8]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v116; // [rsp+198h] [rbp+98h]
  char v117[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  volatile signed __int32 *v118; // [rsp+1A8h] [rbp+A8h]
  __int64 v119; // [rsp+1B0h] [rbp+B0h] BYREF
  volatile signed __int32 *v120; // [rsp+1B8h] [rbp+B8h]
  __int64 v121; // [rsp+1C0h] [rbp+C0h] BYREF
  volatile signed __int32 *v122; // [rsp+1C8h] [rbp+C8h]
  __int64 v123; // [rsp+1D0h] [rbp+D0h] BYREF
  volatile signed __int32 *v124; // [rsp+1D8h] [rbp+D8h]
  __int64 v125; // [rsp+1E0h] [rbp+E0h] BYREF
  volatile signed __int32 *v126; // [rsp+1E8h] [rbp+E8h]
  __int64 v127; // [rsp+1F0h] [rbp+F0h] BYREF
  volatile signed __int32 *v128; // [rsp+1F8h] [rbp+F8h]

  v107 = -2LL;
  v4 = *(_DWORD *)(a1 + 88);
  v5 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    sub_180033F18((__int64 *)(*(_QWORD *)a2 + 480LL), &v91, v4);
    v6 = (char *)&v91;
    v7 = 1;
    v5 = v91;
  }
  else
  {
    v96 = 0LL;
    v6 = &v95;
    v7 = 2;
  }
  v76 = v5;
  v77 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v96 )
    {
      if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
      {
        v8 = v96;
        (**(void (__fastcall ***)(volatile signed __int32 *))v96)(v96);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 8LL))(v96);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        v9 = v92;
        (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
      }
    }
  }
  v90 = 0LL;
  v89 = 0LL;
  v88 = 0LL;
  v87 = 0LL;
  v86 = 0LL;
  if ( !*(_QWORD *)a2 )
    goto LABEL_125;
  v84 = 0LL;
  v85 = 0LL;
  v10 = v76[12];
  if ( v10 )
  {
    v11 = (__int64 *)sub_1800CE4B8(v10, v109, v4);
    v12 = 4;
    v13 = *v11;
  }
  else
  {
    v98 = 0LL;
    v11 = (__int64 *)&v97;
    v12 = 8;
    v13 = 0LL;
  }
  v14 = v7 | v12;
  v84 = v13;
  v85 = (volatile signed __int32 *)v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v14 & 8) != 0 )
  {
    v14 &= ~8u;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
      {
        v15 = v98;
        (**(void (__fastcall ***)(volatile signed __int32 *))v98)(v98);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 8LL))(v98);
      }
    }
  }
  if ( (v14 & 4) != 0 )
  {
    v14 &= ~4u;
    v16 = v110;
    if ( v110 )
    {
      if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v82 = 0LL;
  v83 = 0LL;
  v17 = v76[14];
  if ( v17 )
  {
    v18 = (__int64 *)sub_1800CE4B8(v17, v111, v4);
    v19 = 16;
    v20 = *v18;
  }
  else
  {
    v100 = 0LL;
    v18 = (__int64 *)&v99;
    v19 = 32;
    v20 = 0LL;
  }
  v21 = v14 | v19;
  v82 = v20;
  v83 = (volatile signed __int32 *)v18[1];
  *v18 = 0LL;
  v18[1] = 0LL;
  if ( (v21 & 0x20) != 0 )
  {
    v21 &= ~0x20u;
    if ( v100 )
    {
      if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
      {
        v22 = v100;
        (**(void (__fastcall ***)(volatile signed __int32 *))v100)(v100);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(v100);
      }
    }
  }
  if ( (v21 & 0x10) != 0 )
  {
    v21 &= ~0x10u;
    v23 = v112;
    if ( v112 )
    {
      if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
  }
  v80 = 0LL;
  v81 = 0LL;
  v24 = v76[16];
  if ( v24 )
  {
    v25 = (__int64 *)sub_1800CE4B8(v24, v113, v4);
    v26 = 64;
    v27 = *v25;
  }
  else
  {
    v102 = 0LL;
    v25 = (__int64 *)&v101;
    v27 = 0LL;
    v26 = 128;
  }
  v28 = v21 | v26;
  v80 = v27;
  v81 = (volatile signed __int32 *)v25[1];
  *v25 = 0LL;
  v25[1] = 0LL;
  if ( (v28 & 0x80u) != 0 )
  {
    v28 &= ~0x80u;
    if ( v102 )
    {
      if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
      {
        v29 = v102;
        (**(void (__fastcall ***)(volatile signed __int32 *))v102)(v102);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
      }
    }
  }
  if ( (v28 & 0x40) != 0 )
  {
    v28 &= ~0x40u;
    v30 = v114;
    if ( v114 )
    {
      if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
  }
  v78 = 0LL;
  v79 = 0LL;
  v31 = v76[18];
  if ( v31 )
  {
    v32 = (__int64 *)sub_1800CE4B8(v31, v115, v4);
    v33 = 256;
    v34 = *v32;
  }
  else
  {
    v104 = 0LL;
    v32 = (__int64 *)&v103;
    v33 = 512;
    v34 = 0LL;
  }
  v35 = v28 | v33;
  v78 = v34;
  v79 = (volatile signed __int32 *)v32[1];
  *v32 = 0LL;
  v32[1] = 0LL;
  if ( (v35 & 0x200) != 0 )
  {
    v35 &= ~0x200u;
    if ( v104 )
    {
      if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
      {
        v36 = v104;
        (**(void (__fastcall ***)(volatile signed __int32 *))v104)(v104);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 8LL))(v104);
      }
    }
  }
  if ( (v35 & 0x100) != 0 )
  {
    v35 &= ~0x100u;
    v37 = v116;
    if ( v116 )
    {
      if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
      }
    }
  }
  v38 = v76[20];
  if ( v38 )
  {
    v39 = (__int64 *)sub_1800CE4B8(v38, v117, v4);
    v40 = 1024;
    v41 = *v39;
  }
  else
  {
    v106 = 0LL;
    v39 = (__int64 *)&v105;
    v40 = 2048;
    v41 = 0LL;
  }
  v42 = v35 | v40;
  v93 = v41;
  v94 = (volatile signed __int32 *)v39[1];
  *v39 = 0LL;
  v39[1] = 0LL;
  if ( (v42 & 0x800) != 0 )
  {
    v42 &= ~0x800u;
    if ( v106 )
    {
      if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
      {
        v43 = v106;
        (**(void (__fastcall ***)(volatile signed __int32 *))v106)(v106);
        if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v106 + 8LL))(v106);
      }
    }
  }
  if ( (v42 & 0x400) != 0 )
  {
    v44 = v118;
    if ( v118 )
    {
      if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
      }
    }
  }
  v45 = sub_180033040(&v119, &v84);
  std::shared_ptr<__ExceptionPtr>::operator=(&v90, v45);
  v46 = v120;
  if ( v120 )
  {
    if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
    }
  }
  v47 = sub_180032DB8(&v121, &v82);
  std::shared_ptr<__ExceptionPtr>::operator=(&v86, v47);
  v48 = v122;
  if ( v122 )
  {
    if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
      if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
    }
  }
  v49 = sub_180032D4C(&v123, &v80);
  std::shared_ptr<__ExceptionPtr>::operator=(&v89, v49);
  v50 = v124;
  if ( v124 )
  {
    if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
    }
  }
  v51 = sub_180032C74(&v125, &v78);
  std::shared_ptr<__ExceptionPtr>::operator=(&v88, v51);
  v52 = v126;
  if ( v126 )
  {
    if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
      if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
    }
  }
  v53 = sub_180032CE0(&v127, &v93);
  std::shared_ptr<__ExceptionPtr>::operator=(&v87, v53);
  v54 = v128;
  if ( v128 )
  {
    if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
      if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
    }
  }
  if ( v94 )
  {
    if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
    {
      v55 = v94;
      (**(void (__fastcall ***)(volatile signed __int32 *))v94)(v94);
      if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
    }
  }
  if ( v79 )
  {
    if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
    {
      v56 = v79;
      (**(void (__fastcall ***)(volatile signed __int32 *))v79)(v79);
      if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
    }
  }
  if ( v81 )
  {
    if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
    {
      v57 = v81;
      (**(void (__fastcall ***)(volatile signed __int32 *))v81)(v81);
      if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
    }
  }
  if ( v83 )
  {
    if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
    {
      v58 = v83;
      (**(void (__fastcall ***)(volatile signed __int32 *))v83)(v83);
      if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
    }
  }
  if ( v85 )
  {
    if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
    {
      v59 = v85;
      (**(void (__fastcall ***)(volatile signed __int32 *))v85)(v85);
      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
    }
  }
  if ( (_QWORD)v90 )
  {
    v60 = *(_QWORD *)(a1 + 144);
    v61 = *(_QWORD *)(v90 + 104);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v60 + 88LL))(v60, v61, 0LL, 0LL);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  else
  {
LABEL_125:
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 88LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( (_QWORD)v89 )
  {
    v62 = *(_QWORD *)(a1 + 144);
    v63 = *(_QWORD *)(v89 + 104);
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v62 + 480LL))(v62, v63, 0LL, 0LL);
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 480LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( (_QWORD)v88 )
  {
    v64 = *(_QWORD *)(a1 + 144);
    v65 = *(_QWORD *)(v88 + 104);
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 512LL))(v64, v65, 0LL, 0LL);
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 512LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( (_QWORD)v87 )
  {
    v66 = *(_QWORD *)(a1 + 144);
    v67 = *(_QWORD *)(v87 + 104);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 8LL))(v67);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v66 + 184LL))(v66, v67, 0LL, 0LL);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 184LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( (_QWORD)v86 )
  {
    v68 = *(_QWORD *)(a1 + 144);
    v69 = *(_QWORD *)(v86 + 104);
    v108 = v69;
    if ( v69 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v68 + 72LL))(v68, v69, 0LL, 0LL);
    if ( v69 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 72LL))(
               *(_QWORD *)(a1 + 144),
               0LL,
               0LL,
               0LL);
  }
  if ( *((_QWORD *)&v86 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v71 = *((_QWORD *)&v86 + 1);
      (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
    }
  }
  if ( *((_QWORD *)&v87 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v72 = *((_QWORD *)&v87 + 1);
      (***((void (__fastcall ****)(_QWORD))&v87 + 1))(*((_QWORD *)&v87 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v87 + 1) + 8LL))(*((_QWORD *)&v87 + 1));
    }
  }
  if ( *((_QWORD *)&v88 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v88 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v73 = *((_QWORD *)&v88 + 1);
      (***((void (__fastcall ****)(_QWORD))&v88 + 1))(*((_QWORD *)&v88 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v73 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v88 + 1) + 8LL))(*((_QWORD *)&v88 + 1));
    }
  }
  if ( *((_QWORD *)&v89 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v74 = *((_QWORD *)&v89 + 1);
      (***((void (__fastcall ****)(_QWORD))&v89 + 1))(*((_QWORD *)&v89 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v74 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v89 + 1) + 8LL))(*((_QWORD *)&v89 + 1));
    }
  }
  if ( *((_QWORD *)&v90 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v75 = *((_QWORD *)&v90 + 1);
      (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v75 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
    }
  }
  if ( v77 )
  {
    result = (unsigned int)_InterlockedDecrement(v77 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v77)(v77);
      result = (unsigned int)_InterlockedDecrement(v77 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
    }
  }
  return result;
}
