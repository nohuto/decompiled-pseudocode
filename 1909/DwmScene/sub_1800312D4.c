/*
 * XREFs of sub_1800312D4 @ 0x1800312D4
 * Callers:
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
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
 *     unknown_libname_175 @ 0x18002DF40 (unknown_libname_175.c)
 *     sub_18002E21C @ 0x18002E21C (sub_18002E21C.c)
 *     sub_1800317BC @ 0x1800317BC (sub_1800317BC.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_18009EC3C @ 0x18009EC3C (sub_18009EC3C.c)
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_1800312D4(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  char v8; // bl
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rdx
  signed __int32 v17; // eax
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  unsigned int v31; // eax
  __int64 v32[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v36[5]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v38; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v39; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v40[12]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v41[4]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v42[12]; // [rsp+190h] [rbp+90h] BYREF

  v39 = a2;
  v8 = sub_18009EC3C(a1);
  v9 = sub_18009EC90(a1);
  if ( (unsigned int)(v9 - 23) <= 1 )
    v10 = 2;
  else
    v10 = (v8 & 8) != 0;
  v11 = sub_180029AD8(v9, v10);
  v12 = a1[23];
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 80LL))(v12, v42);
    if ( v42[0] != a3 || v42[1] != a4 || v42[4] != v11 )
    {
      v13 = a1[23];
      if ( v13 )
      {
        a1[23] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( !a1[23] )
  {
    v40[10] = 0;
    v40[0] = a3;
    v40[1] = a4;
    v40[2] = 1;
    v40[7] = 2;
    v40[9] = 0x10000;
    v40[4] = v11;
    v40[5] = 1;
    v40[6] = 0;
    v40[3] = 1;
    v40[8] = 8;
    v14 = 0LL;
    v15 = 0LL;
    v16 = a1[10];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v14 = a1[9];
          v15 = (volatile signed __int32 *)a1[10];
          if ( v15 )
            _InterlockedAdd(v15 + 2, 1u);
          break;
        }
      }
    }
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v39 = 0LL;
    sub_18002328C(v14, &v39);
    v38 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, _QWORD, __int64 *))(*v39 + 40LL))(v39, v40, 0LL, &v38);
    sub_1800254C0(v14, v18);
    if ( v18 < 0 )
    {
      sub_18000E4E8(v41);
      v25 = (void *)unknown_libname_174(v41, (__int64)" File=");
      unknown_libname_174(v25, (__int64)"..\\Source\\TextureD3D11.cpp");
      v26 = (void *)unknown_libname_174(v41, (__int64)" Line=");
      unknown_libname_174(v26, (__int64)"929");
      v27 = (void *)unknown_libname_174(v41, (__int64)" Message=");
      unknown_libname_174(
        v27,
        (__int64)"\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"");
      unknown_libname_175(v32);
      sub_1800317BC(v33, v40, v32);
      v28 = (void *)unknown_libname_174(v41, (__int64)" Details=\"");
      v29 = (void *)unknown_libname_112(v28);
      unknown_libname_174(v29, (__int64)"\"");
      std::string::_Tidy_deallocate(v33);
      sub_18002E21C(v32);
      sub_18000F7E4(v34, v18);
      v30 = (void *)unknown_libname_174(v41, (__int64)" HRESULT=");
      unknown_libname_112(v30);
      std::string::_Tidy_deallocate(v34);
      unknown_libname_3(v41);
      sub_18000E4E8(v36);
      v31 = (unsigned int)sub_18000E4E8(v35);
      sub_180065920((unsigned int)pExceptionObject, v31, 929, v18, (__int64)v36, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v19 = a1[23];
    v20 = v38;
    if ( v19 != v38 )
    {
      v21 = v38;
      if ( v38 )
      {
        (*(void (**)(void))(*(_QWORD *)v38 + 8LL))();
        v19 = a1[23];
        v20 = v38;
      }
      a1[23] = v21;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = v38;
      }
    }
    if ( v20 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v22 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    }
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v23 = a1[23];
  *a2 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  return a2;
}
