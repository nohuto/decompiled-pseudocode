/*
 * XREFs of sub_1800F74A8 @ 0x1800F74A8
 * Callers:
 *     sub_18008FE08 @ 0x18008FE08 (sub_18008FE08.c)
 *     sub_1800F7314 @ 0x1800F7314 (sub_1800F7314.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800A4C50 @ 0x1800A4C50 (sub_1800A4C50.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     sub_1800CBF00 @ 0x1800CBF00 (sub_1800CBF00.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800CE4D0 @ 0x1800CE4D0 (sub_1800CE4D0.c)
 *     sub_1800D144C @ 0x1800D144C (sub_1800D144C.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800D1C04 @ 0x1800D1C04 (sub_1800D1C04.c)
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800F6620 @ 0x1800F6620 (sub_1800F6620.c)
 *     sub_1800F68B0 @ 0x1800F68B0 (sub_1800F68B0.c)
 *     sub_1800F6B0C @ 0x1800F6B0C (sub_1800F6B0C.c)
 *     sub_1800F6C1C @ 0x1800F6C1C (sub_1800F6C1C.c)
 *     sub_1800F6C88 @ 0x1800F6C88 (sub_1800F6C88.c)
 *     sub_1800F6CF4 @ 0x1800F6CF4 (sub_1800F6CF4.c)
 *     sub_1800F6D60 @ 0x1800F6D60 (sub_1800F6D60.c)
 *     sub_1800F6DCC @ 0x1800F6DCC (sub_1800F6DCC.c)
 *     sub_1800F8380 @ 0x1800F8380 (sub_1800F8380.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800F74A8(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  __int64 *v6; // r14
  volatile signed __int32 *v7; // rbx
  int v8; // ecx
  char v9; // al
  __int64 *v10; // r15
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // r15
  volatile signed __int32 *v13; // rbx
  __int64 *v14; // r15
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int64 *v32; // rax
  _QWORD *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  __int64 result; // rax
  __int64 v38; // rcx
  __int64 *v39; // rcx
  char v40; // di
  __int64 v41; // rax
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  __int64 *v44; // rcx
  char v45; // r14
  __int64 v46; // rax
  char v47; // r14
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  __int64 *v50; // rcx
  char v51; // di
  __int64 v52; // rax
  char v53; // di
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  __int64 *v56; // rcx
  char v57; // al
  __int64 v58; // rdx
  char v59; // di
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  __int64 v62; // r15
  __int64 *v63; // r14
  __int64 *v64; // rsi
  __int64 *v65; // rdi
  __int64 *v66; // rbx
  __int64 *v67; // rax
  volatile signed __int32 *v68; // rbx
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  volatile signed __int32 *v71; // rbx
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  volatile signed __int32 *v74; // rbx
  _QWORD *v75; // [rsp+48h] [rbp-C0h]
  __int64 **v76; // [rsp+48h] [rbp-C0h]
  __int64 v77; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v78; // [rsp+58h] [rbp-B0h]
  __int64 v79; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v82; // [rsp+78h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v86; // [rsp+98h] [rbp-70h]
  char v87; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v88; // [rsp+A8h] [rbp-60h]
  char v89; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v90; // [rsp+B8h] [rbp-50h]
  char v91; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v92; // [rsp+C8h] [rbp-40h]
  char v93; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v94; // [rsp+D8h] [rbp-30h]
  __int64 v95; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v96; // [rsp+E8h] [rbp-20h]
  __int64 v97; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v98; // [rsp+F8h] [rbp-10h]
  __int64 v99; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v100; // [rsp+108h] [rbp+0h]
  __int64 v101; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v102; // [rsp+118h] [rbp+10h]
  __int64 v103; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v104; // [rsp+128h] [rbp+20h]
  __int64 v105; // [rsp+130h] [rbp+28h]
  _BYTE v106[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v107; // [rsp+140h] [rbp+38h]
  _BYTE v108[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v109; // [rsp+150h] [rbp+48h]
  _BYTE v110[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v111; // [rsp+160h] [rbp+58h]
  _BYTE v112[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v113; // [rsp+170h] [rbp+68h]
  __int64 v114; // [rsp+178h] [rbp+70h] BYREF
  __int64 v115; // [rsp+188h] [rbp+80h] BYREF
  __int64 v116; // [rsp+198h] [rbp+90h] BYREF
  __int64 v117; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v118; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v119; // [rsp+1C8h] [rbp+C0h] BYREF
  int v120; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v121; // [rsp+1E0h] [rbp+D8h]
  __int64 v122[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v123[5]; // [rsp+208h] [rbp+100h] BYREF
  int v124; // [rsp+230h] [rbp+128h] BYREF
  unsigned int v125[4]; // [rsp+238h] [rbp+130h] BYREF
  int v126; // [rsp+248h] [rbp+140h] BYREF
  __int64 v127; // [rsp+24Ch] [rbp+144h]
  int v128; // [rsp+254h] [rbp+14Ch]
  int v129; // [rsp+258h] [rbp+150h]
  int v130; // [rsp+25Ch] [rbp+154h]
  char v131; // [rsp+260h] [rbp+158h]
  __int64 v132; // [rsp+264h] [rbp+15Ch]
  __int64 v133; // [rsp+26Ch] [rbp+164h]
  __int64 v134; // [rsp+274h] [rbp+16Ch]
  __int64 v135; // [rsp+27Ch] [rbp+174h]
  int v136; // [rsp+284h] [rbp+17Ch]
  char v137; // [rsp+288h] [rbp+180h]
  int v138; // [rsp+28Ch] [rbp+184h]
  __int64 v139; // [rsp+298h] [rbp+190h] BYREF
  volatile signed __int32 *v140; // [rsp+2A0h] [rbp+198h]
  __int64 v141; // [rsp+2A8h] [rbp+1A0h] BYREF
  volatile signed __int32 *v142; // [rsp+2B0h] [rbp+1A8h]

  v105 = -2LL;
  v123[4] = a2;
  v125[0] = 0;
  sub_1800634AC(*a2 + 24, (__int64)a2);
  v4 = sub_18006CDB8(*a2);
  v5 = (_QWORD *)sub_18006CD84(*a2);
  v75 = v5;
  v6 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    sub_18001D7D4(v5, &v103, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 48), &v103);
    v7 = v104;
    if ( v104 )
    {
      if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    sub_180064574(*v6, 1, 0);
    v126 = 0;
    v127 = 2LL;
    v128 = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0LL;
    v133 = 0LL;
    v134 = 0LL;
    v135 = 0LL;
    v136 = 65793;
    v137 = 1;
    v138 = 3;
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
      HIDWORD(v127) = *(_DWORD *)(a1 + 112);
      LODWORD(v127) = *(_DWORD *)(a1 + 116);
      LOBYTE(v136) = *(_BYTE *)(a1 + 125);
      v8 = *(_DWORD *)(a1 + 120);
      BYTE1(v136) = ((v8 - 1) & 0xFFFFFFFD) == 0;
      BYTE2(v136) = (unsigned int)(v8 - 2) <= 1;
    }
    sub_1800CC090(*v6, (__int64)&v126, 0LL);
    v9 = *(_BYTE *)(a1 + 124);
    if ( (v9 & 2) != 0 )
    {
      LODWORD(v127) = 1;
      sub_18001D7D4(v5, &v95, 1u);
      v10 = (__int64 *)(a1 + 64);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), &v95);
      v11 = v96;
      if ( v96 )
      {
        if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      sub_180064574(*v10, 1, 0);
      sub_1800CC090(*v10, (__int64)&v126, 0LL);
      v9 = *(_BYTE *)(a1 + 124);
      v5 = v75;
    }
    if ( (v9 & 4) != 0 )
    {
      LODWORD(v127) = 1;
      v137 = 0;
      sub_18001D7D4(v5, &v101, 1u);
      v12 = (__int64 *)(a1 + 80);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 80), &v101);
      v13 = v102;
      if ( v102 )
      {
        if ( !_InterlockedDecrement(v102 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( !_InterlockedDecrement(v13 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      sub_180064574(*v12, 1, 0);
      sub_1800CC090(*v12, (__int64)&v126, 0LL);
      v9 = *(_BYTE *)(a1 + 124);
    }
    if ( (v9 & 8) != 0 )
    {
      LODWORD(v127) = *(_DWORD *)(a1 + 116);
      v137 = 0;
      sub_18001D7D4(v75, &v99, 1u);
      v14 = (__int64 *)(a1 + 96);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), &v99);
      v15 = v100;
      if ( v100 )
      {
        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      sub_180064574(*v14, 1, 0);
      sub_1800CC090(*v14, (__int64)&v126, 0LL);
      v5 = v75;
    }
    else
    {
      v5 = v75;
    }
  }
  v16 = *(__int64 **)(*v6 + 128);
  v17 = v16;
  v18 = (__int64 *)v16[1];
  if ( *((_BYTE *)v18 + 25) )
    goto LABEL_34;
  do
  {
    if ( *((_DWORD *)v18 + 8) >= v4 )
    {
      v17 = v18;
      v18 = (__int64 *)*v18;
    }
    else
    {
      v18 = (__int64 *)v18[2];
    }
  }
  while ( !*((_BYTE *)v18 + 25) );
  if ( v17 == v16 || v4 < *((_DWORD *)v17 + 8) )
LABEL_34:
    v17 = *(__int64 **)(*v6 + 128);
  if ( v17 == v16 )
    sub_1800CBF00(*v6, a2);
  v19 = *(_QWORD *)(a1 + 64);
  if ( v19 )
  {
    v20 = *(__int64 **)(v19 + 128);
    v21 = v20;
    v22 = (__int64 *)v20[1];
    if ( *((_BYTE *)v22 + 25) )
      goto LABEL_45;
    do
    {
      if ( *((_DWORD *)v22 + 8) >= v4 )
      {
        v21 = v22;
        v22 = (__int64 *)*v22;
      }
      else
      {
        v22 = (__int64 *)v22[2];
      }
    }
    while ( !*((_BYTE *)v22 + 25) );
    if ( v21 == v20 || v4 < *((_DWORD *)v21 + 8) )
LABEL_45:
      v21 = *(__int64 **)(v19 + 128);
    if ( v21 == v20 )
      sub_1800CBF00(*(_QWORD *)(a1 + 64), a2);
  }
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
  {
    v24 = *(__int64 **)(v23 + 128);
    v25 = v24;
    v26 = (__int64 *)v24[1];
    if ( *((_BYTE *)v26 + 25) )
      goto LABEL_56;
    do
    {
      if ( *((_DWORD *)v26 + 8) >= v4 )
      {
        v25 = v26;
        v26 = (__int64 *)*v26;
      }
      else
      {
        v26 = (__int64 *)v26[2];
      }
    }
    while ( !*((_BYTE *)v26 + 25) );
    if ( v25 == v24 || v4 < *((_DWORD *)v25 + 8) )
LABEL_56:
      v25 = *(__int64 **)(v23 + 128);
    if ( v25 == v24 )
      sub_1800CBF00(*(_QWORD *)(a1 + 80), a2);
  }
  v27 = *(_QWORD *)(a1 + 96);
  if ( v27 )
  {
    v28 = *(__int64 **)(v27 + 128);
    v29 = v28;
    v30 = (__int64 *)v28[1];
    if ( *((_BYTE *)v30 + 25) )
      goto LABEL_67;
    do
    {
      if ( *((_DWORD *)v30 + 8) >= v4 )
      {
        v29 = v30;
        v30 = (__int64 *)*v30;
      }
      else
      {
        v30 = (__int64 *)v30[2];
      }
    }
    while ( !*((_BYTE *)v30 + 25) );
    if ( v29 == v28 || v4 < *((_DWORD *)v29 + 8) )
LABEL_67:
      v29 = *(__int64 **)(v27 + 128);
    if ( v29 == v28 )
      sub_1800CBF00(*(_QWORD *)(a1 + 96), a2);
  }
  v77 = 0LL;
  v78 = 0LL;
  sub_1800F8380(a1, &v77, 1LL);
  if ( v77 && !*(_QWORD *)(a1 + 176) )
  {
    sub_1800F68B0(v5, &v97, 1);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 176), &v97);
    v31 = v98;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v141 = 0LL;
    v142 = 0LL;
    sub_1800A9304(*(_QWORD *)(a1 + 16), &v141);
    v32 = sub_1800CE4D0(v77, v123);
    v33 = (_QWORD *)sub_1800A4C50(v141, v32);
    v120 = *(_DWORD *)(a1 + 128);
    v121 = *(_QWORD *)(a1 + 136);
    sub_1800D144C(v122, (__int64 *)(a1 + 144));
    v122[3] = *(_QWORD *)(a1 + 168);
    sub_1800D1CB0(*(_QWORD *)(a1 + 176), (__int64)&v120, v33);
    v34 = v142;
    if ( v142 )
    {
      if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
  }
  v35 = *(_QWORD *)(a1 + 176);
  if ( v35 && !sub_1800D1C04(v35, v4) && v77 )
    sub_1800D1870(*(_QWORD *)(a1 + 176), a2);
  v36 = (__int64 *)(a1 + 480);
  v76 = (__int64 **)(a1 + 480);
  result = *(_QWORD *)(a1 + 480);
  v38 = *(_QWORD *)(result + 8);
  if ( *(_BYTE *)(v38 + 25) )
    goto LABEL_91;
  do
  {
    if ( *(_DWORD *)(v38 + 32) >= v4 )
    {
      result = v38;
      v38 = *(_QWORD *)v38;
    }
    else
    {
      v38 = *(_QWORD *)(v38 + 16);
    }
  }
  while ( !*(_BYTE *)(v38 + 25) );
  if ( result == *v36 || v4 < *(_DWORD *)(result + 32) )
LABEL_91:
    result = *v36;
  if ( result == *v36 || !*(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)*a2 + 192LL))(*a2, &v124);
    v85 = 0LL;
    v86 = 0LL;
    if ( (v124 & 0x20) != 0 )
    {
      v39 = (__int64 *)sub_1800F8380(a1, v106, 5LL);
      v40 = 1;
      v41 = *v39;
    }
    else
    {
      v88 = 0LL;
      v39 = (__int64 *)&v87;
      v40 = 2;
      v41 = 0LL;
    }
    v85 = v41;
    v86 = (volatile signed __int32 *)v39[1];
    *v39 = 0LL;
    v39[1] = 0LL;
    if ( (v40 & 2) != 0 )
    {
      v40 &= ~2u;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          v42 = v88;
          (**(void (__fastcall ***)(volatile signed __int32 *))v88)(v88);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
        }
      }
    }
    if ( (v40 & 1) != 0 )
    {
      v40 &= ~1u;
      v43 = v107;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
    v83 = 0LL;
    v84 = 0LL;
    if ( (v124 & 0x10) != 0 )
    {
      v44 = (__int64 *)sub_1800F8380(a1, v108, 4LL);
      v45 = 4;
      v46 = *v44;
    }
    else
    {
      v90 = 0LL;
      v44 = (__int64 *)&v89;
      v46 = 0LL;
      v45 = 8;
    }
    v47 = v40 | v45;
    v83 = v46;
    v84 = (volatile signed __int32 *)v44[1];
    *v44 = 0LL;
    v44[1] = 0LL;
    if ( (v47 & 8) != 0 )
    {
      v47 &= ~8u;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          v48 = v90;
          (**(void (__fastcall ***)(volatile signed __int32 *))v90)(v90);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
        }
      }
    }
    if ( (v47 & 4) != 0 )
    {
      v47 &= ~4u;
      v49 = v109;
      if ( v109 )
      {
        if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        }
      }
    }
    v81 = 0LL;
    v82 = 0LL;
    if ( (v124 & 8) != 0 )
    {
      v50 = (__int64 *)sub_1800F8380(a1, v110, 3LL);
      v51 = 16;
      v52 = *v50;
    }
    else
    {
      v92 = 0LL;
      v50 = (__int64 *)&v91;
      v51 = 32;
      v52 = 0LL;
    }
    v53 = v47 | v51;
    v81 = v52;
    v82 = (volatile signed __int32 *)v50[1];
    *v50 = 0LL;
    v50[1] = 0LL;
    if ( (v53 & 0x20) != 0 )
    {
      v53 &= ~0x20u;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          v54 = v92;
          (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
        }
      }
    }
    if ( (v53 & 0x10) != 0 )
    {
      v53 &= ~0x10u;
      v55 = v111;
      if ( v111 )
      {
        if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        }
      }
    }
    v79 = 0LL;
    v80 = 0LL;
    if ( (v124 & 4) != 0 )
    {
      v56 = (__int64 *)sub_1800F8380(a1, v112, 2LL);
      v57 = 64;
      v58 = *v56;
    }
    else
    {
      v94 = 0LL;
      v56 = (__int64 *)&v93;
      v57 = 0x80;
      v58 = 0LL;
    }
    v59 = v57 | v53;
    v79 = v58;
    v80 = (volatile signed __int32 *)v56[1];
    *v56 = 0LL;
    v56[1] = 0LL;
    if ( v59 < 0 )
    {
      v59 &= ~0x80u;
      if ( v94 )
      {
        if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
        {
          v60 = v94;
          (**(void (__fastcall ***)(volatile signed __int32 *))v94)(v94);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
        }
      }
    }
    if ( (v59 & 0x40) != 0 )
    {
      v61 = v113;
      if ( v113 )
      {
        if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v61)(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
        }
      }
    }
    v139 = 0LL;
    v140 = 0LL;
    sub_1800F6620(*a2, &v139);
    v62 = v139;
    v63 = sub_1800F6C88(&v114, &v83);
    v64 = sub_1800F6C1C(&v115, &v81);
    v65 = sub_1800F6CF4(&v116, &v79);
    v66 = sub_1800F6D60(&v117, &v85);
    v67 = sub_1800F6DCC(&v118, &v77);
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v62 + 40LL))(
      v62,
      v67,
      v66,
      v65,
      v64,
      v63);
    v125[0] = v4;
    sub_1800F6B0C(v76, (__int64)&v119, v125);
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v119 + 40), &v139);
    v68 = v140;
    if ( v140 )
    {
      result = (unsigned int)_InterlockedDecrement(v140 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v68)(v68);
        result = (unsigned int)_InterlockedDecrement(v68 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      }
    }
    if ( v80 )
    {
      result = (unsigned int)_InterlockedDecrement(v80 + 2);
      if ( !(_DWORD)result )
      {
        v69 = v80;
        (**(void (__fastcall ***)(volatile signed __int32 *))v80)(v80);
        result = (unsigned int)_InterlockedDecrement(v69 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
      }
    }
    if ( v82 )
    {
      result = (unsigned int)_InterlockedDecrement(v82 + 2);
      if ( !(_DWORD)result )
      {
        v70 = v82;
        (**(void (__fastcall ***)(volatile signed __int32 *))v82)(v82);
        result = (unsigned int)_InterlockedDecrement(v70 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 8LL))(v82);
      }
    }
    if ( v84 )
    {
      result = (unsigned int)_InterlockedDecrement(v84 + 2);
      if ( !(_DWORD)result )
      {
        v71 = v84;
        (**(void (__fastcall ***)(volatile signed __int32 *))v84)(v84);
        result = (unsigned int)_InterlockedDecrement(v71 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
      }
    }
    if ( v86 )
    {
      result = (unsigned int)_InterlockedDecrement(v86 + 2);
      if ( !(_DWORD)result )
      {
        v72 = v86;
        (**(void (__fastcall ***)(volatile signed __int32 *))v86)(v86);
        result = (unsigned int)_InterlockedDecrement(v72 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
      }
    }
  }
  if ( v78 )
  {
    result = (unsigned int)_InterlockedDecrement(v78 + 2);
    if ( !(_DWORD)result )
    {
      v73 = v78;
      (**(void (__fastcall ***)(volatile signed __int32 *))v78)(v78);
      result = (unsigned int)_InterlockedDecrement(v73 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
    }
  }
  v74 = (volatile signed __int32 *)a2[1];
  if ( v74 )
  {
    result = (unsigned int)_InterlockedDecrement(v74 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v74)(v74);
      result = (unsigned int)_InterlockedDecrement(v74 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
    }
  }
  return result;
}
