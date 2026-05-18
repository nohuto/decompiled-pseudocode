/*
 * XREFs of sub_18002EC2C @ 0x18002EC2C
 * Callers:
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_18002D8D8 @ 0x18002D8D8 (sub_18002D8D8.c)
 *     sub_18002DE44 @ 0x18002DE44 (sub_18002DE44.c)
 *     sub_18002E850 @ 0x18002E850 (sub_18002E850.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_180031124 @ 0x180031124 (sub_180031124.c)
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _o_pow @ 0x180125A60 (_o_pow.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_18002EC2C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6; // rax
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int i; // eax
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  double v17; // xmm0_8
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rdx
  signed __int32 v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 j; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rbx
  __int64 *v47; // rcx
  _QWORD *v48; // r15
  signed __int32 v49; // eax
  __int64 v50; // rcx
  bool v51; // zf
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  void *v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  __int64 v65; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v68; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v70; // [rsp+68h] [rbp-A0h]
  unsigned int v71; // [rsp+6Ch] [rbp-9Ch]
  __int64 v72; // [rsp+70h] [rbp-98h]
  __int64 v73; // [rsp+78h] [rbp-90h]
  volatile signed __int32 *v74; // [rsp+80h] [rbp-88h]
  __int64 v75; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  __int64 v77[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v78[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v79[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v80[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v81[4]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v82[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v83[4]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v84[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v85[64]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v86[64]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+218h] [rbp+110h] BYREF
  unsigned int v88[12]; // [rsp+258h] [rbp+150h] BYREF
  __int128 v89; // [rsp+288h] [rbp+180h] BYREF
  __int128 v90; // [rsp+298h] [rbp+190h] BYREF
  __int64 v91; // [rsp+2A8h] [rbp+1A0h]
  unsigned int v92; // [rsp+2B0h] [rbp+1A8h]
  __int64 v93; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v94; // [rsp+2C0h] [rbp+1B8h] BYREF
  __int64 v95; // [rsp+2D0h] [rbp+1C8h]
  _QWORD v96[4]; // [rsp+2D8h] [rbp+1D0h] BYREF

  v75 = -2LL;
  v94 = 0LL;
  v95 = 0LL;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    sub_18000E498(v78);
    v62 = (unsigned int)sub_18000E498(v77);
    sub_18006575C((unsigned int)v85, v62, 552, (unsigned int)v78, 0);
    throw (Spectre::Engine::EngineException *)v85;
  }
  v6 = sub_18002E850(v88, a2, *(_DWORD *)(a3 + 48));
  v89 = *(_OWORD *)v6;
  v90 = *((_OWORD *)v6 + 1);
  v91 = *((_QWORD *)v6 + 4);
  v92 = v6[10];
  if ( *(_QWORD *)(a3 + 8) )
  {
    v7 = DWORD2(v89);
    if ( (unsigned int)(DWORD2(v89) * HIDWORD(v89)) > (unsigned __int64)((v95 - (__int64)v94) >> 4) )
    {
      sub_180031C20(&v94);
      v7 = DWORD2(v89);
    }
    v8 = 0;
    for ( i = HIDWORD(v89); v8 < i; ++v8 )
    {
      v10 = 0;
      if ( v7 )
      {
        v70 = v8;
        do
        {
          v71 = v10;
          v11 = v8 * *(_DWORD *)(a3 + 48);
          v12 = v10 + v11;
          v13 = (__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 24)) >> 5;
          if ( v12 >= v13 || (v14 = *(_QWORD *)(a3 + 24) + 32 * v12, *(_DWORD *)(v14 + 28) != v71) )
            v14 = 0LL;
          if ( v14 )
          {
            v15 = *(_QWORD *)(a3 + 8);
            if ( v15 )
              *(_QWORD *)&v68 = *(_QWORD *)v14 + v15;
            else
              *(_QWORD *)&v68 = 0LL;
            DWORD2(v68) = *(_DWORD *)(v14 + 20);
            v16 = *(_DWORD *)(v14 + 24);
          }
          else
          {
            if ( !v10 )
            {
              sub_18000E498(v80);
              v63 = (unsigned int)sub_18000E498(v79);
              sub_18006575C((unsigned int)v86, v63, 587, (unsigned int)v80, 0);
              throw (Spectre::Engine::EngineException *)v86;
            }
            v17 = o_pow();
            v18 = (int)((double)*(int *)a2 / v17);
            v19 = 1LL;
            if ( v18 > 1 )
              v19 = v18;
            LODWORD(v66) = v19;
            v20 = 1;
            if ( (unsigned int)(int)((double)*(int *)(a2 + 4) / v17) > 1 )
              v20 = (int)((double)*(int *)(a2 + 4) / v17);
            LODWORD(v65) = v20;
            v72 = v8;
            if ( v11 >= v13 || (v21 = *(_QWORD *)(a3 + 24) + 32LL * v11, *(_DWORD *)(v21 + 28)) )
              v21 = 0LL;
            if ( v21 && (v22 = *(_QWORD *)(a3 + 8)) != 0 )
              v23 = *(_QWORD *)v21 + v22;
            else
              v23 = 0LL;
            *(_QWORD *)&v68 = v23;
            DWORD2(v68) = sub_18003107C(*(unsigned int *)(a2 + 16), v19);
            v16 = sub_180031124(*(unsigned int *)(a2 + 16), (unsigned int)v66, (unsigned int)v65, 0LL);
          }
          HIDWORD(v68) = v16;
          if ( v95 == *((_QWORD *)&v94 + 1) )
          {
            sub_18002D8D8((const void **)&v94, *((_BYTE **)&v94 + 1), &v68);
          }
          else
          {
            **((_OWORD **)&v94 + 1) = v68;
            *((_QWORD *)&v94 + 1) += 16LL;
          }
          ++v10;
          v7 = DWORD2(v89);
        }
        while ( v10 < DWORD2(v89) );
        i = HIDWORD(v89);
      }
    }
  }
  v73 = 0LL;
  v74 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = *(_QWORD *)(a1 + 80);
  if ( v26 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      if ( !v27 )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27) )
      {
        v24 = *(_QWORD *)(a1 + 72);
        v25 = *(volatile signed __int32 **)(a1 + 80);
        if ( v25 )
          _InterlockedIncrement(v25 + 2);
        break;
      }
    }
  }
  v73 = v24;
  v74 = v25;
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v24 + 80LL))(v24, (char *)&v90 + 4, (char *)&v90 + 8);
    v28 = DWORD1(v90);
  }
  else
  {
    v28 = 1LL;
    *(_QWORD *)((char *)&v90 + 4) = 1LL;
  }
  v29 = 0LL;
  for ( j = v94; j != *((_QWORD *)&v94 + 1); j += 16LL )
    v29 += *(unsigned int *)(j + 12);
  v31 = v29 * v28;
  *(_QWORD *)(a1 + 200) = v31;
  v32 = 11LL;
  if ( (*(_BYTE *)(a2 + 20) & 6) != 0 )
    v32 = 3LL;
  sub_18006445C(a1, v31, v32);
  v93 = 0LL;
  v33 = v94;
  if ( (_QWORD)v94 == *((_QWORD *)&v94 + 1) )
    v33 = 0LL;
  v34 = *sub_18002317C(v24, &v66);
  v35 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)v34 + 40LL))(
          v34,
          &v89,
          v33,
          &v93);
  v37 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  sub_1800253B0(v24, v36);
  if ( v36 < 0 )
  {
    sub_18000E498(v96);
    v55 = (void *)unknown_libname_174(v96, (__int64)" File=");
    unknown_libname_174(v55, (__int64)"..\\Source\\TextureD3D11.cpp");
    v56 = (void *)unknown_libname_174(v96, (__int64)" Line=");
    unknown_libname_174(v56, (__int64)"626");
    v57 = (void *)unknown_libname_174(v96, (__int64)" Message=");
    unknown_libname_174(v57, (__int64)"\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"");
    sub_1800316AC(v81, &v89, &v94);
    v58 = (void *)unknown_libname_174(v96, (__int64)" Details=\"");
    v59 = (void *)unknown_libname_112(v58);
    unknown_libname_174(v59, (__int64)"\"");
    std::string::_Tidy_deallocate(v81);
    sub_18000F794(v82, v36);
    v60 = (void *)unknown_libname_174(v96, (__int64)" HRESULT=");
    unknown_libname_112(v60);
    std::string::_Tidy_deallocate(v82);
    unknown_libname_3(v96);
    sub_18000E498(v84);
    v61 = (unsigned int)sub_18000E498(v83);
    sub_180065810((unsigned int)pExceptionObject, v61, 626, v36, (__int64)v84, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v38 = (__int64 *)sub_18002FB6C(a1, (unsigned int)&v65, v93, *(_DWORD *)(a2 + 20), DWORD2(v89));
  v39 = 0LL;
  if ( &v67 != v38 )
  {
    v39 = *v38;
    *v38 = 0LL;
  }
  v67 = *(_QWORD *)(a1 + 160);
  v40 = v67;
  *(_QWORD *)(a1 + 160) = v39;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v93;
  v93 = 0LL;
  v76 = *(_QWORD *)(a1 + 168);
  v43 = v76;
  *(_QWORD *)(a1 + 168) = v42;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  v44 = operator new(0x10uLL);
  v69 = (__int64)v44;
  if ( v44 )
    v45 = sub_18002DE44((__int64)v44, a2, SDWORD2(v89), SDWORD1(v90));
  else
    v45 = 0LL;
  v46 = (_QWORD *)v45;
  v69 = v45;
  v47 = (__int64 *)(a1 + 112);
  if ( (__int64 *)(a1 + 112) != &v69 )
  {
    v46 = 0LL;
    v69 = 0LL;
    v48 = (_QWORD *)*v47;
    *v47 = v45;
    if ( !v48 )
      goto LABEL_82;
    if ( *v48 )
      j__o_free(*v48);
    j__o_free(v48);
    v45 = 0LL;
  }
  if ( v45 )
  {
    if ( *v46 )
      j__o_free(*v46);
    j__o_free(v46);
  }
LABEL_82:
  LOBYTE(v49) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  *(_BYTE *)(a1 + 208) = v49;
  v50 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    LOBYTE(v49) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  if ( v25 )
  {
    v49 = _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF);
    v51 = v49 == 1;
    LOBYTE(v49) = v49 - 1;
    if ( v51 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      v49 = _InterlockedDecrement(v25 + 3);
      if ( !v49 )
        LOBYTE(v49) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  v52 = v94;
  if ( (_QWORD)v94 )
  {
    v53 = (v95 - v94) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v53 >= 0x1000 )
    {
      v54 = v53 + 39;
      v52 = *(_QWORD *)(v94 - 8);
      if ( (unsigned __int64)(v94 - v52 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v52, v54);
        __debugbreak();
      }
    }
    LOBYTE(v49) = j_j__o_free(v52);
  }
  return v49;
}
