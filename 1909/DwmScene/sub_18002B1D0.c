/*
 * XREFs of sub_18002B1D0 @ 0x18002B1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18002B1D0(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  unsigned int v17; // eax
  _QWORD v18[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp-A8h]
  __int64 v21[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v23[4]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v25[12]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v26[4]; // [rsp+138h] [rbp+30h] BYREF

  v18[1] = -2LL;
  v18[2] = a2;
  v25[9] = 0;
  v25[3] = 1;
  v25[8] = 32;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v25[4] = sub_180029AD8(v4, v5 != 0);
  v25[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v25[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v25[2] = 1;
  v25[5] = 1;
  v25[6] = 0;
  v25[10] = 512;
  v25[7] = 0;
  *a2 = 0LL;
  *a2 = 0LL;
  v6 = *sub_1800299E8(a1, v18);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v25, 0LL, a2);
  v9 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = sub_180029C14(a1, &v19);
  sub_1800254C0(*v10, v8);
  v11 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v8 < 0 )
  {
    sub_18000E4E8(v26);
    v13 = (void *)unknown_libname_174(v26, (__int64)" File=");
    unknown_libname_174(v13, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
    v14 = (void *)unknown_libname_174(v26, (__int64)" Line=");
    unknown_libname_174(v14, (__int64)"917");
    v15 = (void *)unknown_libname_174(v26, (__int64)" Message=");
    unknown_libname_174(v15, (__int64)"\"GetDevice()->CreateTexture2D failure\"");
    sub_18000F7E4(v21, v8);
    v16 = (void *)unknown_libname_174(v26, (__int64)" HRESULT=");
    unknown_libname_112(v16);
    std::string::_Tidy_deallocate(v21);
    unknown_libname_3(v26);
    sub_18000E4E8(v23);
    v17 = (unsigned int)sub_18000E4E8(v22);
    sub_180065920((unsigned int)pExceptionObject, v17, 917, v8, (__int64)v23, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return a2;
}
