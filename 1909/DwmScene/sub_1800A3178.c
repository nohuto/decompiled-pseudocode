/*
 * XREFs of sub_1800A3178 @ 0x1800A3178
 * Callers:
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A4EA0 @ 0x1800A4EA0 (sub_1800A4EA0.c)
 *     sub_1800A81A0 @ 0x1800A81A0 (sub_1800A81A0.c)
 *     sub_1800A90A8 @ 0x1800A90A8 (sub_1800A90A8.c)
 *     sub_1800A94C0 @ 0x1800A94C0 (sub_1800A94C0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800A3178(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  size_t v12; // rcx
  volatile signed __int32 *v13; // rbx
  const void **v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int128 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  volatile signed __int32 *v22; // [rsp+60h] [rbp-A8h]
  _QWORD v23[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v24[6]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v26[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v27[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v28[4]; // [rsp+108h] [rbp+0h] BYREF
  const void *Src; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v30[32]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v31[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v33; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v34; // [rsp+1F0h] [rbp+E8h]
  __int64 v35; // [rsp+1F8h] [rbp+F0h]
  __int64 v36; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v37; // [rsp+208h] [rbp+100h]
  size_t v38[2]; // [rsp+210h] [rbp+108h] BYREF
  __m128i si128; // [rsp+220h] [rbp+118h]

  v24[4] = -2LL;
  v24[5] = a2;
  if ( !*a2 )
  {
    sub_18000E4E8(v27);
    v17 = sub_18000E4E8(v26);
    sub_180027880(v31, v17, 444, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v31;
  }
  sub_1800A90A8(*a2, v38);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18000F444(v23, (__int64)v38);
  if ( (unsigned __int8)sub_1800A4EA0(a1, v23) )
  {
    v14 = sub_18009FC40(&Src, "ShaderManager::AddExtension() -- Extension with name '", v38);
    v15 = sub_18002C088((__int64)v30, v14, "' is already installed");
    v16 = sub_18000E4E8(v28);
    sub_180027880(pExceptionObject, v16, 448, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800A94C0(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  sub_1800A205C((__int64 *)(a1 + 18592), (__int64)&v25, v38);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v25 + 64), a2);
  v19 = 0LL;
  v20 = 0LL;
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F444(v24, (__int64)v38);
  sub_1800A4B48(a1, &v19, v24);
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  sub_18007B288(*(_QWORD *)(a1 + 18688), &v33);
  v4 = 0;
  v5 = v33;
  if ( (v34 - v33) >> 4 )
  {
    v6 = 0LL;
    do
    {
      v21 = 0LL;
      v22 = 0LL;
      v7 = 2 * v6;
      v8 = *(volatile signed __int32 **)(v5 + 8 * v7 + 8);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = *(volatile signed __int32 **)(v5 + 8 * v7 + 8);
      }
      v9 = *(_QWORD *)(v5 + 8 * v7);
      v21 = v9;
      v22 = v8;
      if ( (unsigned int)sub_18006CEC8(v9) )
      {
        v36 = 0LL;
        v37 = 0LL;
        sub_180063288(v9 + 24, &v36);
        v18 = 0LL;
        if ( v8 )
        {
          _InterlockedIncrement(v8 + 2);
          v9 = v21;
        }
        *(_QWORD *)&v18 = v9;
        *((_QWORD *)&v18 + 1) = v8;
        sub_1800A81A0(v19, &v18);
        if ( (_BYTE)v37 )
          sub_180063778(v36);
      }
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      ++v4;
      v5 = v33;
      v6 = v4;
    }
    while ( v4 < (unsigned __int64)((v34 - v33) >> 4) );
  }
  result = sub_1800113D8(&v33);
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 2);
    if ( !(_DWORD)result )
    {
      v11 = v20;
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v38[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v38[0] - 8);
      if ( v38[0] - v12 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v38[0]) = 0;
  v13 = (volatile signed __int32 *)a2[1];
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
