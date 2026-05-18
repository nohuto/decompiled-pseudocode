/*
 * XREFs of sub_180022F70 @ 0x180022F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_180023618 @ 0x180023618 (sub_180023618.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180022F70(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  _QWORD *v11; // rax
  int v12; // r15d
  __int64 v13; // rcx
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  unsigned int v18; // eax
  _QWORD v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v24; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v25[4]; // [rsp+F0h] [rbp-18h] BYREF

  v19[1] = -2LL;
  result = sub_180023618();
  v7 = 1;
  *a2 = 1;
  *a3 = 0;
  v8 = *(_DWORD *)(a1 + 420);
  if ( v8 != 1 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v7 = 8;
      }
      else
      {
        v7 = 4;
      }
    }
    else
    {
      v7 = 2;
    }
    while ( 1 )
    {
      v24 = 0;
      v11 = (_QWORD *)sub_18002317C(a1, v19);
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v11 + 240LL))(
              *v11,
              10LL,
              v7,
              &v24);
      v13 = v19[0];
      if ( v19[0] )
      {
        v19[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v12 < 0 )
      {
        sub_18000E498(v25);
        v14 = (void *)unknown_libname_174(v25, (__int64)" File=");
        unknown_libname_174(v14, (__int64)"..\\Source\\RendererD3D11.cpp");
        v15 = (void *)unknown_libname_174(v25, (__int64)" Line=");
        unknown_libname_174(v15, (__int64)"945");
        v16 = (void *)unknown_libname_174(v25, (__int64)" Message=");
        unknown_libname_174(v16, (__int64)"\"GetDevice()->CheckMultisampleQualityLevels failure\"");
        sub_18000F794(v20, v12);
        v17 = (void *)unknown_libname_174(v25, (__int64)" HRESULT=");
        unknown_libname_112(v17);
        std::string::_Tidy_deallocate(v20);
        unknown_libname_3(v25);
        sub_18000E498(v22);
        v18 = (unsigned int)sub_18000E498(v21);
        sub_180065810((unsigned int)pExceptionObject, v18, 945, v12, (__int64)v22, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      result = v24;
      if ( v24 )
        break;
      if ( !--v7 )
        return result;
    }
    *a2 = v7;
    result = (unsigned int)(result - 1);
    *a3 = result;
  }
  return result;
}
