/*
 * XREFs of sub_18000EA20 @ 0x18000EA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DA30 @ 0x18000DA30 (sub_18000DA30.c)
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180064BFC @ 0x180064BFC (sub_180064BFC.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_180068A30 @ 0x180068A30 (sub_180068A30.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18000EA20(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v28[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  _QWORD *v32; // [rsp+90h] [rbp-78h]
  __int64 v33[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v34[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v35[4]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v37; // [rsp+138h] [rbp+30h] BYREF
  __int128 v38; // [rsp+148h] [rbp+40h] BYREF
  __int64 v39; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v40; // [rsp+160h] [rbp+58h]
  __int64 v41; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v42; // [rsp+170h] [rbp+68h]
  _QWORD v43[4]; // [rsp+178h] [rbp+70h] BYREF
  _DWORD v44[12]; // [rsp+198h] [rbp+90h] BYREF

  v31 = -2LL;
  v32 = a2;
  v41 = 0LL;
  v42 = 0LL;
  result = sub_180029C14(a1, &v41);
  if ( v41 )
  {
    v39 = 0LL;
    v40 = 0LL;
    sub_18000DA30(v41, &v39);
    v30 = 15LL;
    v28[0] = 0;
    v29 = 6LL;
    memmove(v28, "Output", 6uLL);
    v28[6] = 0;
    sub_1800645F4(v39, v28);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v44);
    v37 = 0LL;
    v5 = *(_QWORD *)sub_18002328C(v41, &v24);
    v6 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, *a2, 0LL, &v37);
    v8 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v7 < 0 )
    {
      sub_18000E4E8(v43);
      v17 = unknown_libname_174(v43, " File=");
      unknown_libname_174(v17, "RenderOutputDwm.cpp");
      v18 = unknown_libname_174(v43, " Line=");
      unknown_libname_174(v18, "155");
      v19 = unknown_libname_174(v43, " Message=");
      unknown_libname_174(v19, "\"GetDevice()->CreateRenderTargetView failure\"");
      v20 = sub_18000F7E4(v33, (unsigned int)v7);
      v21 = unknown_libname_174(v43, " HRESULT=");
      unknown_libname_112(v21, v20);
      std::string::_Tidy_deallocate(v33);
      unknown_libname_3(v43);
      sub_18000E4E8(v35);
      v22 = (unsigned int)sub_18000E4E8(v34);
      sub_180065920((unsigned int)pExceptionObject, v22, 155, v7, (__int64)v35, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18000EE78(*a2, "RenderOutput ColorBuffer");
    sub_18000EE78(v37, "RenderOutput ColorBuffer");
    v9 = _RTDynamicCast(
           v39,
           0LL,
           &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
           &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
           0);
    v25 = 0LL;
    v10 = *a2;
    v26 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v23 = v37;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    sub_18002C2E0(v9, (unsigned int)&v23, (unsigned int)&v26, (unsigned int)&v25, v44[0], v44[1]);
    v11 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = sub_18006CE94(v41);
    v38 = 0uLL;
    sub_18000DCC0(v12, &v38, 0);
    sub_180064BFC(v38, &v39);
    v27 = v38;
    v38 = 0uLL;
    result = sub_180068A30(a1, &v27);
    v13 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
    if ( *((_QWORD *)&v38 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        result = (unsigned int)_InterlockedDecrement(v13 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v14 = v40;
    if ( v40 )
    {
      result = (unsigned int)_InterlockedDecrement(v40 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        result = (unsigned int)_InterlockedDecrement(v14 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  v15 = v42;
  if ( v42 )
  {
    result = (unsigned int)_InterlockedDecrement(v42 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}
