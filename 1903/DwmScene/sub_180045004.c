/*
 * XREFs of sub_180045004 @ 0x180045004
 * Callers:
 *     sub_18003DB80 @ 0x18003DB80 (sub_18003DB80.c)
 *     sub_180042290 @ 0x180042290 (sub_180042290.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800231AC @ 0x1800231AC (sub_1800231AC.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180044E10 @ 0x180044E10 (sub_180044E10.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _o__invalid_parameter_noinfo @ 0x180125A19 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x1801265B0 (j_--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_180045004(_QWORD *a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  size_t v14; // rdi
  void *v15; // rax
  void *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v32[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v33[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+C0h] [rbp-40h] BYREF
  void *Src; // [rsp+100h] [rbp+0h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h] BYREF
  __int64 v37; // [rsp+118h] [rbp+18h] BYREF
  int v38; // [rsp+120h] [rbp+20h] BYREF
  __int64 v39; // [rsp+124h] [rbp+24h]
  int v40; // [rsp+12Ch] [rbp+2Ch]
  __int64 v41; // [rsp+130h] [rbp+30h]
  _QWORD v42[4]; // [rsp+138h] [rbp+38h] BYREF

  v30[1] = -2LL;
  v4 = a4;
  v30[0] = (__int64)a1;
  v30[2] = (__int64)a3;
  v7 = *a2;
  v37 = 0LL;
  sub_18002317C(v7, &v37);
  v41 = 0LL;
  v38 = v4;
  v39 = 3LL;
  v40 = 0x20000;
  v36 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v37 + 24LL))(v37, &v38, 0LL, &v36);
  sub_1800253B0(v7, v8);
  v9 = sub_1800231AC(v7, &v29);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v9 + 376LL))(*v9, v36, *a3);
  v10 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = sub_1800231AC(v7, &v29);
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v11 + 112LL))(
          *v11,
          v36,
          0LL,
          1LL,
          0,
          &Src);
  v13 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v12 < 0 )
  {
    sub_18000E498(v42);
    v23 = (void *)unknown_libname_174(v42, (__int64)" File=");
    unknown_libname_174(v23, (__int64)"..\\Source\\D3DBufferUtils.cpp");
    v24 = (void *)unknown_libname_174(v42, (__int64)" Line=");
    unknown_libname_174(v24, (__int64)"125");
    v25 = (void *)unknown_libname_174(v42, (__int64)" Message=");
    unknown_libname_174(v25, (__int64)"\"D3DBufferUtils::RecoverBufferData(): unable to map resource\"");
    sub_18000F794(v31, v12);
    v26 = (void *)unknown_libname_174(v42, (__int64)" HRESULT=");
    unknown_libname_112(v26);
    std::string::_Tidy_deallocate(v31);
    unknown_libname_3(v42);
    sub_18000E498(v33);
    v27 = (unsigned int)sub_18000E498(v32);
    LOBYTE(v28) = 0;
    sub_180065810((unsigned int)pExceptionObject, v27, 125, v12, (__int64)v33, v28);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v14 = v4;
  v15 = operator new(v4);
  v16 = v15;
  if ( v15 )
    memset(v15, 0, v14);
  else
    v16 = 0LL;
  v30[0] = (__int64)v16;
  if ( v14 )
  {
    if ( v16 )
    {
      if ( Src )
      {
        memcpy(v16, Src, v14);
        goto LABEL_15;
      }
      memset(v16, 0, v14);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_15:
  v17 = sub_1800231AC(v7, &v29);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v17 + 120LL))(*v17, v36, 0LL);
  v18 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  sub_180044E10(a1, v30);
  if ( v30[0] )
    j_j__o_free(v30[0]);
  v19 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = (_QWORD *)*a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
  }
  return a1;
}
