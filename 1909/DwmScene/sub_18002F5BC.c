/*
 * XREFs of sub_18002F5BC @ 0x18002F5BC
 * Callers:
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_18002DD48 @ 0x18002DD48 (sub_18002DD48.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_180031234 @ 0x180031234 (sub_180031234.c)
 *     sub_18006456C @ 0x18006456C (sub_18006456C.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_DWORD *__fastcall sub_18002F5BC(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  __int64 v12; // r13
  unsigned int v13; // ebx
  char v14; // di
  int v15; // edx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdi
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // cf
  int v31; // r15d
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *result; // rax
  int v38; // edx
  __int64 v39; // rbx
  _QWORD *v40; // rdi
  _QWORD *v41; // rcx
  _QWORD *v42; // r14
  __int64 v43; // rcx
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int128 v53; // [rsp+58h] [rbp-A8h]
  _BYTE v54[20]; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  volatile signed __int32 *v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  char v58; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v59[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v61[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v64[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v65[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v67; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v68; // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1F0h] [rbp+F0h]
  __int128 v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v72; // [rsp+218h] [rbp+118h] BYREF
  int v73; // [rsp+220h] [rbp+120h] BYREF
  int v74; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v75; // [rsp+230h] [rbp+130h] BYREF
  int v76; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v77; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v78; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v79[4]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v80; // [rsp+270h] [rbp+170h] BYREF

  v57 = -2LL;
  LODWORD(v72) = a2;
  v12 = a7;
  v13 = a6;
  v14 = a8;
  v74 = a2;
  v78 = a3;
  v77 = a4;
  v76 = a6;
  v75 = a7;
  v73 = a8;
  v52 = a9;
  LODWORD(v50) = a8 & 1;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    sub_18000E4E8(v61);
    v49 = (unsigned int)sub_18000E4E8(v60);
    sub_18006586C((unsigned int)v65, v49, 755, (unsigned int)v61, 0);
    throw (Spectre::Engine::EngineException *)v65;
  }
  *(_OWORD *)&v54[4] = 0LL;
  LODWORD(v53) = a3;
  *(_QWORD *)((char *)&v53 + 4) = a4;
  HIDWORD(v53) = 1;
  if ( (unsigned int)(a6 - 23) <= 1 )
    v15 = 2;
  else
    v15 = (a8 & 8) != 0;
  v16 = sub_180029AD8(a6, v15);
  if ( v16 == 45 )
  {
    v16 = 44;
  }
  else if ( v16 == 40 )
  {
    v16 = 39;
  }
  *(_DWORD *)v54 = v16;
  v17 = 0;
  v18 = v59;
  do
    *v18++ = v17++;
  while ( v17 < 4 );
  *(_DWORD *)&v54[4] = v59[v12];
  if ( (unsigned int)(v12 - 2) <= 1 )
  {
    v19 = *(_DWORD *)&v54[12] | 0x10000;
    *(_DWORD *)&v54[12] |= 0x10000u;
    if ( (_DWORD)v12 == 3 )
      *(_DWORD *)&v54[12] = v19 | 0x20000;
  }
  if ( (_DWORD)v50 )
    *(_DWORD *)&v54[8] |= 8u;
  v67 = v53;
  v68 = *(_OWORD *)v54;
  v69 = *(_DWORD *)&v54[16];
  DWORD2(v67) = a5;
  if ( (v14 & 0x20) != 0 )
  {
    v20 = a3;
    if ( a3 < a4 )
      v20 = a4;
    v21 = 0;
    while ( v20 > 1 )
    {
      v20 >>= 1;
      ++v21;
    }
    HIDWORD(v67) = v21 != -1;
    v69 = *(_DWORD *)&v54[16] | 1;
    DWORD2(v68) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  *(_QWORD *)&v70 = v52;
  DWORD2(v70) = (_DWORD)v72;
  HIDWORD(v70) = sub_180031234(v13, a3, a4, &v74);
  if ( (v14 & 0x20) != 0 )
    *(_QWORD *)(a1 + 200) = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
  v22 = 11LL;
  if ( (v14 & 6) != 0 )
    v22 = 3LL;
  sub_18006456C(a1, *(_QWORD *)(a1 + 200), v22);
  v80 = v70;
  v71 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 )
  {
    while ( 1 )
    {
      v26 = *(_DWORD *)(v25 + 8);
      if ( !v26 )
        break;
      if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
      {
        v23 = *(_QWORD *)(a1 + 72);
        v24 = *(volatile signed __int32 **)(a1 + 80);
        if ( v24 )
          _InterlockedIncrement(v24 + 2);
        break;
      }
    }
  }
  v55 = v23;
  v56 = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v72 = 0LL;
  sub_18002328C(v23, &v72);
  v27 = v72;
  v28 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *v27;
  v30 = v52 != 0;
  v52 = -v52;
  v31 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, unsigned __int64, __int64 *))(v29 + 48))(
          v27,
          &v67,
          (unsigned __int64)&v80 & -(__int64)v30,
          &v71);
  sub_1800254C0(v23, v31);
  if ( v31 < 0 )
  {
    sub_18000E4E8(v79);
    v44 = (void *)unknown_libname_174(v79, (__int64)" File=");
    unknown_libname_174(v44, (__int64)"..\\Source\\TextureD3D11.cpp");
    v45 = (void *)unknown_libname_174(v79, (__int64)" Line=");
    unknown_libname_174(v45, (__int64)"811");
    v46 = (void *)unknown_libname_174(v79, (__int64)" Message=");
    unknown_libname_174(v46, (__int64)"\"TextureD3D11::CreateRendererResources3D(): unable to create texture (3D)\"");
    sub_18000F7E4(v62, v31);
    v47 = (void *)unknown_libname_174(v79, (__int64)" HRESULT=");
    unknown_libname_112(v47);
    std::string::_Tidy_deallocate(v62);
    unknown_libname_3(v79);
    sub_18000E4E8(v64);
    v48 = (unsigned int)sub_18000E4E8(v63);
    sub_180065920((unsigned int)pExceptionObject, v48, 811, v31, (__int64)v64, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v32 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v32 + 16))(v32);
  }
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v51 = 0LL;
  sub_18002DD48(&v51, &v78, &v77, &a5, &v76, &v73, &v75);
  v50 = 0LL;
  sub_180030058(a1, (unsigned int)&v50, v71, v73, HIDWORD(v67));
  v33 = v71;
  v71 = 0LL;
  v34 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = v33;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  v35 = v50;
  v50 = 0LL;
  v36 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v35;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  result = operator new(0x10uLL);
  v52 = (__int64)result;
  if ( result )
  {
    v38 = HIDWORD(v67);
    v39 = 0LL;
    *(_QWORD *)result = v51;
    result[2] = v38;
    result[3] = 1;
  }
  else
  {
    v39 = v51;
  }
  v40 = result;
  v41 = (_QWORD *)(a1 + 112);
  if ( (char *)(a1 + 112) != &v58 )
  {
    v40 = 0LL;
    v42 = (_QWORD *)*v41;
    *v41 = result;
    if ( !v42 )
      goto LABEL_64;
    if ( *v42 )
      j__o_free(*v42);
    j__o_free(v42);
    result = 0LL;
  }
  if ( result )
  {
    if ( *v40 )
      j__o_free(*v40);
    result = (_DWORD *)j__o_free(v40);
  }
LABEL_64:
  if ( v39 )
    result = (_DWORD *)j__o_free(v39);
  v43 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    return (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  return result;
}
