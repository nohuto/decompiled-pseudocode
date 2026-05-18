/*
 * XREFs of sub_1800303E0 @ 0x1800303E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180017164 @ 0x180017164 (sub_180017164.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800231AC @ 0x1800231AC (sub_1800231AC.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_18002DB98 @ 0x18002DB98 (sub_18002DB98.c)
 *     unknown_libname_175 @ 0x18002DE30 (unknown_libname_175.c)
 *     sub_18002DF0C @ 0x18002DF0C (sub_18002DF0C.c)
 *     sub_18002E10C @ 0x18002E10C (sub_18002E10C.c)
 *     sub_180031124 @ 0x180031124 (sub_180031124.c)
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     sub_18009EB80 @ 0x18009EB80 (sub_18009EB80.c)
 *     sub_18009EB9C @ 0x18009EB9C (sub_18009EB9C.c)
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 *     _o__invalid_parameter_noinfo @ 0x180125A19 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x1801265B0 (j_--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
_QWORD *__fastcall sub_1800303E0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // edi
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned __int64 v22; // r14
  void *v23; // rax
  void *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rbx
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  void *v42; // rax
  unsigned int v43; // eax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  unsigned int v48; // eax
  void *v49; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v52; // [rsp+70h] [rbp-98h]
  void **v53; // [rsp+78h] [rbp-90h]
  __int64 v54; // [rsp+80h] [rbp-88h]
  __int64 v55; // [rsp+88h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-78h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-68h]
  __int128 v58; // [rsp+B0h] [rbp-58h]
  _DWORD v59[9]; // [rsp+C8h] [rbp-40h]
  __int64 v60; // [rsp+ECh] [rbp-1Ch]
  int v61; // [rsp+F4h] [rbp-14h]
  int v62; // [rsp+F8h] [rbp-10h]
  int v63; // [rsp+FCh] [rbp-Ch]
  int v64; // [rsp+100h] [rbp-8h]
  __int64 v65; // [rsp+104h] [rbp-4h]
  __int64 v66; // [rsp+10Ch] [rbp+4h]
  int v67; // [rsp+114h] [rbp+Ch]
  int v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+11Ch] [rbp+14h]
  int v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  int v72; // [rsp+128h] [rbp+20h]
  __int128 v73; // [rsp+138h] [rbp+30h] BYREF
  __int64 v74; // [rsp+148h] [rbp+40h]
  __int128 v75; // [rsp+158h] [rbp+50h]
  __int64 v76[4]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v77[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v78[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v79[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v80[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v81[4]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v82[4]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v83[4]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v84[4]; // [rsp+268h] [rbp+160h] BYREF
  __int64 v85[4]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v86[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v87[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v88[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v89[4]; // [rsp+308h] [rbp+200h] BYREF
  __int64 v90[4]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v91[4]; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v92[4]; // [rsp+368h] [rbp+260h] BYREF
  __int64 v93[4]; // [rsp+388h] [rbp+280h] BYREF
  _BYTE v94[64]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v95[64]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _BYTE v96[64]; // [rsp+428h] [rbp+320h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+468h] [rbp+360h] BYREF
  _BYTE v98[64]; // [rsp+4A8h] [rbp+3A0h] BYREF
  _BYTE v99[64]; // [rsp+4E8h] [rbp+3E0h] BYREF
  void *Src[2]; // [rsp+528h] [rbp+420h] BYREF
  __int64 v101; // [rsp+538h] [rbp+430h] BYREF
  __int64 v102; // [rsp+540h] [rbp+438h] BYREF
  __int64 v103; // [rsp+548h] [rbp+440h] BYREF
  __int64 v104; // [rsp+550h] [rbp+448h] BYREF
  _QWORD v105[4]; // [rsp+558h] [rbp+450h] BYREF
  _QWORD v106[4]; // [rsp+578h] [rbp+470h] BYREF
  _QWORD v107[4]; // [rsp+598h] [rbp+490h] BYREF
  _BYTE v108[12]; // [rsp+5B8h] [rbp+4B0h] BYREF
  int v109; // [rsp+5C4h] [rbp+4BCh]
  __int64 v110; // [rsp+5D4h] [rbp+4CCh]
  __int64 v111; // [rsp+5DCh] [rbp+4D4h]
  _BYTE v112[20]; // [rsp+5E8h] [rbp+4E0h] BYREF
  __int64 v113; // [rsp+5FCh] [rbp+4F4h]
  __int64 v114; // [rsp+604h] [rbp+4FCh]

  v76[3] = -2LL;
  v4 = *(__int64 **)(a1 + 112);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0LL;
  if ( v5 && (*(_DWORD *)(v5 + 20) & 0x10) != 0 )
  {
    sub_18000E498(v86);
    v35 = (unsigned int)sub_18000E498(v85);
    sub_18006575C((unsigned int)v99, v35, 350, (unsigned int)v86, 0);
    throw (Spectre::Engine::EngineException *)v99;
  }
  if ( *((_DWORD *)v4 + 3) > 1u )
  {
    sub_18000E498(v88);
    v36 = (unsigned int)sub_18000E498(v87);
    sub_18006575C((unsigned int)v94, v36, 355, (unsigned int)v88, 0);
    throw (Spectre::Engine::EngineException *)v94;
  }
  v51 = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v56 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180017164(&v51, (__int64 *)&v56);
  v102 = 0LL;
  v8 = v51;
  sub_18002317C(v51, &v102);
  v101 = 0LL;
  sub_1800231AC(v8, &v101);
  v54 = 0LL;
  v55 = 0LL;
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 80LL))(v9, v108);
    v110 = 3LL;
    v111 = 0x20000LL;
    v109 = 1;
    v104 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v102 + 40LL))(
            v102,
            v108,
            0LL,
            &v104);
    sub_1800253B0(v8, v10);
    if ( v10 < 0 )
    {
      sub_18000E498(v105);
      v37 = (void *)unknown_libname_174(v105, (__int64)" File=");
      unknown_libname_174(v37, (__int64)"..\\Source\\TextureD3D11.cpp");
      v38 = (void *)unknown_libname_174(v105, (__int64)" Line=");
      unknown_libname_174(v38, (__int64)"384");
      v39 = (void *)unknown_libname_174(v105, (__int64)" Message=");
      unknown_libname_174(v39, (__int64)"\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"");
      unknown_libname_175(v76);
      sub_1800316AC(v89, v108, v76);
      v40 = (void *)unknown_libname_174(v105, (__int64)" Details=\"");
      v41 = (void *)unknown_libname_112(v40);
      unknown_libname_174(v41, (__int64)"\"");
      std::string::_Tidy_deallocate(v89);
      sub_18002E10C(v76);
      sub_18000F794(v90, v10);
      v42 = (void *)unknown_libname_174(v105, (__int64)" HRESULT=");
      unknown_libname_112(v42);
      std::string::_Tidy_deallocate(v90);
      unknown_libname_3(v105);
      sub_18000E498(v92);
      v43 = (unsigned int)sub_18000E498(v91);
      sub_180065810((unsigned int)v95, v43, 384, v10, (__int64)v92, 0);
      throw (Spectre::Engine::EngineException *)v95;
    }
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 168));
    v54 = v11;
    v12 = v104;
    v13 = v104;
    if ( v104 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
      v12 = v104;
    }
    v55 = v13;
    if ( v12 )
    {
      v104 = 0LL;
LABEL_29:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 176);
    if ( !v14 )
    {
      sub_18000E498(v83);
      v34 = (unsigned int)sub_18000E498(v82);
      sub_18006575C((unsigned int)v98, v34, 415, (unsigned int)v83, 0);
      throw (Spectre::Engine::EngineException *)v98;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 80LL))(v14, v112);
    v113 = 3LL;
    v114 = 0x20000LL;
    v103 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v102 + 48LL))(
            v102,
            v112,
            0LL,
            &v103);
    sub_1800253B0(v8, v15);
    if ( v15 < 0 )
    {
      sub_18000E498(v106);
      v44 = (void *)unknown_libname_174(v106, (__int64)" File=");
      unknown_libname_174(v44, (__int64)"..\\Source\\TextureD3D11.cpp");
      v45 = (void *)unknown_libname_174(v106, (__int64)" Line=");
      unknown_libname_174(v45, (__int64)"408");
      v46 = (void *)unknown_libname_174(v106, (__int64)" Message=");
      unknown_libname_174(v46, (__int64)"\"TextureD3D11::GetDeviceBuffer(): unable to create texture (3D)\"");
      sub_18000F794(v93, v15);
      v47 = (void *)unknown_libname_174(v106, (__int64)" HRESULT=");
      unknown_libname_112(v47);
      std::string::_Tidy_deallocate(v93);
      unknown_libname_3(v106);
      sub_18000E498(v79);
      v48 = (unsigned int)sub_18000E498(v78);
      sub_180065810((unsigned int)v96, v48, 408, v15, (__int64)v79, 0);
      throw (Spectre::Engine::EngineException *)v96;
    }
    v11 = *(_QWORD *)(a1 + 176);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 176));
    v54 = v11;
    v12 = v103;
    v13 = v103;
    if ( v103 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 8LL))(v103);
      v12 = v103;
    }
    v55 = v13;
    if ( v12 )
    {
      v103 = 0LL;
      goto LABEL_29;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v101 + 376LL))(v101, v13, v11);
  v75 = 0uLL;
  *(_OWORD *)Src = 0uLL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v101 + 112LL))(
          v101,
          v13,
          0LL,
          1LL,
          0,
          Src);
  sub_1800253B0(v8, v16);
  if ( v16 < 0 )
  {
    sub_18000E498(v107);
    v29 = (void *)unknown_libname_174(v107, (__int64)" File=");
    unknown_libname_174(v29, (__int64)"..\\Source\\TextureD3D11.cpp");
    v30 = (void *)unknown_libname_174(v107, (__int64)" Line=");
    unknown_libname_174(v30, (__int64)"429");
    v31 = (void *)unknown_libname_174(v107, (__int64)" Message=");
    unknown_libname_174(v31, (__int64)"\"TextureD3D11::GetDeviceBuffer(): unable to map resource\"");
    sub_18000F794(v80, v16);
    v32 = (void *)unknown_libname_174(v107, (__int64)" HRESULT=");
    unknown_libname_112(v32);
    std::string::_Tidy_deallocate(v80);
    unknown_libname_3(v107);
    sub_18000E498(v81);
    v33 = (unsigned int)sub_18000E498(v84);
    sub_180065810((unsigned int)pExceptionObject, v33, 429, v16, (__int64)v81, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v17 = sub_18009EB80(a1);
  v59[0] = 0;
  v59[1] = 4;
  v59[2] = 4;
  v59[3] = 4;
  v59[4] = 8;
  v59[5] = 12;
  v59[6] = 16;
  v59[7] = 4;
  v59[8] = 4;
  v60 = 0xC00000008LL;
  v61 = 16;
  v62 = 2;
  v63 = 1;
  v64 = 2;
  v65 = 0x400000004LL;
  v66 = 0x400000004LL;
  v67 = 2;
  v68 = 4;
  v69 = 8;
  v70 = 4;
  v71 = 1;
  v72 = 2;
  LODWORD(v53) = v59[v17];
  LODWORD(v49) = Src[1];
  LODWORD(v50) = Src[1];
  if ( *(_QWORD *)(a1 + 176) )
  {
    v18 = HIDWORD(Src[1]);
  }
  else
  {
    v19 = sub_18009EB9C(a1);
    v20 = sub_18009EC10(a1);
    v21 = sub_18009EB80(a1);
    v18 = sub_180031124(v21, v20, v19, &v50);
  }
  v22 = v18 * *(_DWORD *)(v5 + 8);
  v23 = operator new(v22);
  v24 = v23;
  if ( v23 )
    memset(v23, 0, (unsigned int)v22);
  else
    v24 = 0LL;
  if ( v22 )
  {
    if ( v24 )
    {
      if ( Src[0] )
      {
        memcpy(v24, Src[0], v22);
        goto LABEL_43;
      }
      memset(v24, 0, v22);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_43:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v101 + 120LL))(v101, v13, 0LL);
  *(_QWORD *)&v57 = 0LL;
  *((_QWORD *)&v57 + 1) = v22;
  *(_QWORD *)&v58 = __PAIR64__((unsigned int)v49, (unsigned int)v53);
  *((_QWORD *)&v58 + 1) = v18;
  v53 = &v49;
  v77[0] = v57;
  v77[1] = v58;
  v49 = v24;
  v73 = 0LL;
  v74 = 0LL;
  sub_18002DB98(&v73, (char *)v77, (char *)v78);
  sub_18002DF0C(a2, &v73, &v49);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v25 = v101;
  if ( v101 )
  {
    v101 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v102;
  if ( v102 )
  {
    v102 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
    {
      v27 = v52;
      (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
    }
  }
  return a2;
}
