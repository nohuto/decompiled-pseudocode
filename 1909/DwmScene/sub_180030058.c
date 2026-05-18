/*
 * XREFs of sub_180030058 @ 0x180030058
 * Callers:
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_180030404 @ 0x180030404 (sub_180030404.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 **__fastcall sub_180030058(__int64 a1, __int64 **a2, __int64 a3, char a4, int a5)
{
  int v8; // eax
  __int64 v9; // r14
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rcx
  __int64 *v17; // rcx
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  unsigned int v23; // eax
  __int64 v24[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v30; // [rsp+110h] [rbp+10h] BYREF
  __int64 **v31; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v32[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h]
  _QWORD v34[4]; // [rsp+138h] [rbp+38h] BYREF
  char v35[16]; // [rsp+158h] [rbp+58h] BYREF
  int v36; // [rsp+168h] [rbp+68h]

  v31 = a2;
  if ( (a4 & 1) != 0 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v35);
    v8 = v36;
    if ( v36 == 44 )
    {
      v32[0] = 46;
    }
    else
    {
      if ( v36 == 39 )
        v8 = 41;
      v32[0] = v8;
    }
    v32[1] = 8;
    v32[3] = a5;
    v32[2] = 0;
    v30 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v11 + 8);
        if ( !v12 )
          break;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) )
        {
          v9 = *(_QWORD *)(a1 + 72);
          v10 = *(volatile signed __int32 **)(a1 + 80);
          if ( v10 )
            _InterlockedIncrement(v10 + 2);
          break;
        }
      }
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v31 = 0LL;
    sub_18002328C(v9, &v31);
    v13 = ((__int64 (__fastcall *)(__int64 **, __int64, _DWORD *, __int64 **))(*v31)[7])(v31, a3, v32, &v30);
    sub_1800254C0(v9, v13);
    if ( v13 < 0 )
    {
      sub_18000E4E8(v34);
      v19 = (void *)unknown_libname_174(v34, (__int64)" File=");
      unknown_libname_174(v19, (__int64)"..\\Source\\TextureD3D11.cpp");
      v20 = (void *)unknown_libname_174(v34, (__int64)" Line=");
      unknown_libname_174(v20, (__int64)"876");
      v21 = (void *)unknown_libname_174(v34, (__int64)" Message=");
      unknown_libname_174(v21, (__int64)"\"TextureD3D11::CreateResourceView3D(): Unable to create resource view\"");
      sub_18000F7E4(v26, v13);
      v22 = (void *)unknown_libname_174(v34, (__int64)" HRESULT=");
      unknown_libname_112(v22);
      std::string::_Tidy_deallocate(v26);
      unknown_libname_3(v34);
      sub_18000E4E8(v28);
      v23 = (unsigned int)sub_18000E4E8(v27);
      sub_180065920((unsigned int)pExceptionObject, v23, 876, v13, (__int64)v28, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v14 = sub_180064408(a1, v24);
    if ( *(_QWORD *)(v14 + 24) >= 0x10uLL )
      v14 = *(_QWORD *)v14;
    sub_18000EE78(v30, (const char *)v14);
    if ( v25 >= 0x10 )
    {
      v15 = v24[0];
      if ( v25 + 1 >= 0x1000 )
      {
        v15 = *(_QWORD *)(v24[0] - 8);
        if ( (unsigned __int64)(v24[0] - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, v25 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v15);
    }
    v16 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 **))(*v16)[2])(v16);
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    *a2 = 0LL;
    if ( a2 == &v30 )
    {
      v17 = v30;
    }
    else
    {
      *a2 = v30;
      v17 = 0LL;
    }
    if ( v17 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
