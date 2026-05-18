/*
 * XREFs of sub_18002FC7C @ 0x18002FC7C
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
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
__int64 **__fastcall sub_18002FC7C(__int64 a1, __int64 **a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 **v19; // rcx
  __int64 *v20; // rcx
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  unsigned int v26; // eax
  __int64 v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v33; // [rsp+110h] [rbp+10h] BYREF
  __int64 **v34; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v35[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v36; // [rsp+130h] [rbp+30h]
  _QWORD v37[4]; // [rsp+138h] [rbp+38h] BYREF
  char v38[16]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v39; // [rsp+168h] [rbp+68h]
  unsigned int v40; // [rsp+16Ch] [rbp+6Ch]

  v34 = a2;
  if ( (a4 & 1) != 0 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v38);
    v9 = v39;
    if ( v39 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( v39 == 39 )
    {
      v9 = 41;
    }
    v35[0] = v9;
    v10 = 4;
    if ( v40 > 1 )
      v10 = 6;
    if ( (a4 & 0x10) != 0 )
      v10 = 9;
    v35[1] = v10;
    v35[2] = 0;
    v11 = -1;
    if ( a5 )
      v11 = a5;
    v35[3] = v11;
    v33 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v12 = *(_QWORD *)(a1 + 72);
          v13 = *(volatile signed __int32 **)(a1 + 80);
          if ( v13 )
            _InterlockedIncrement(v13 + 2);
          break;
        }
      }
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v34 = 0LL;
    sub_18002328C(v12, &v34);
    v16 = ((__int64 (__fastcall *)(__int64 **, __int64, _DWORD *, __int64 **))(*v34)[7])(v34, a3, v35, &v33);
    sub_1800254C0(v12, v16);
    if ( v16 < 0 )
    {
      sub_18000E4E8(v37);
      v22 = (void *)unknown_libname_174(v37, (__int64)" File=");
      unknown_libname_174(v22, (__int64)"..\\Source\\TextureD3D11.cpp");
      v23 = (void *)unknown_libname_174(v37, (__int64)" Line=");
      unknown_libname_174(v23, (__int64)"723");
      v24 = (void *)unknown_libname_174(v37, (__int64)" Message=");
      unknown_libname_174(v24, (__int64)"\"TextureD3D11::CreateResourceView2D(): Unable to create resource view\"");
      sub_18000F7E4(v29, v16);
      v25 = (void *)unknown_libname_174(v37, (__int64)" HRESULT=");
      unknown_libname_112(v25);
      std::string::_Tidy_deallocate(v29);
      unknown_libname_3(v37);
      sub_18000E4E8(v31);
      v26 = (unsigned int)sub_18000E4E8(v30);
      sub_180065920((unsigned int)pExceptionObject, v26, 723, v16, (__int64)v31, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v17 = sub_180064408(a1, v27);
    if ( *(_QWORD *)(v17 + 24) >= 0x10uLL )
      v17 = *(_QWORD *)v17;
    sub_18000EE78(v33, (const char *)v17);
    if ( v28 >= 0x10 )
    {
      v18 = v27[0];
      if ( v28 + 1 >= 0x1000 )
      {
        v18 = *(_QWORD *)(v27[0] - 8);
        if ( (unsigned __int64)(v27[0] - v18 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v18, v28 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v18);
    }
    v19 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 **))(*v19)[2])(v19);
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    *a2 = 0LL;
    if ( a2 == &v33 )
    {
      v20 = v33;
    }
    else
    {
      *a2 = v33;
      v20 = 0LL;
    }
    if ( v20 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
