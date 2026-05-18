/*
 * XREFs of sub_180076608 @ 0x180076608
 * Callers:
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_18006CB20 @ 0x18006CB20 (sub_18006CB20.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_18006CE74 @ 0x18006CE74 (sub_18006CE74.c)
 *     sub_18006D548 @ 0x18006D548 (sub_18006D548.c)
 *     sub_18006DA3C @ 0x18006DA3C (sub_18006DA3C.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_180072E60 @ 0x180072E60 (sub_180072E60.c)
 *     sub_180076E40 @ 0x180076E40 (sub_180076E40.c)
 *     sub_180076EC4 @ 0x180076EC4 (sub_180076EC4.c)
 *     sub_180077CCC @ 0x180077CCC (sub_180077CCC.c)
 *     sub_180078A58 @ 0x180078A58 (sub_180078A58.c)
 *     sub_180078BEC @ 0x180078BEC (sub_180078BEC.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18007A0A4 @ 0x18007A0A4 (sub_18007A0A4.c)
 *     sub_18007B208 @ 0x18007B208 (sub_18007B208.c)
 *     sub_18007EA78 @ 0x18007EA78 (sub_18007EA78.c)
 *     sub_18007EFB0 @ 0x18007EFB0 (sub_18007EFB0.c)
 *     sub_1800A3EA0 @ 0x1800A3EA0 (sub_1800A3EA0.c)
 *     sub_1800A4044 @ 0x1800A4044 (sub_1800A4044.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180076608(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  const char *v6; // rax
  const char *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *i; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // edi
  int v15; // eax
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rbx
  unsigned int v23; // edi
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 result; // rax
  __int64 v29; // rbx
  __int128 v30; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+98h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-40h]
  _QWORD *v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v43; // [rsp+108h] [rbp+0h] BYREF
  __int64 v44[3]; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v45; // [rsp+130h] [rbp+28h]
  __int64 v46; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v47; // [rsp+140h] [rbp+38h]
  __int64 v48; // [rsp+148h] [rbp+40h] BYREF
  __int64 v49; // [rsp+150h] [rbp+48h]
  _Mtx_t v50; // [rsp+158h] [rbp+50h] BYREF
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int64 v52; // [rsp+168h] [rbp+60h] BYREF
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 v54; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v55; // [rsp+180h] [rbp+78h]
  __int64 v56; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v57; // [rsp+190h] [rbp+88h]
  __int64 v58; // [rsp+198h] [rbp+90h] BYREF
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  __int64 v60; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  __int64 v62; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  __int64 v64; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v65; // [rsp+1D0h] [rbp+C8h]

  v38 = -2LL;
  *(_QWORD *)&v30 = *a2;
  v3 = a2[1];
  v4 = v3;
  *((_QWORD *)&v30 + 1) = v3;
  LOBYTE(v5) = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v37 = 0LL;
  *(_OWORD *)&v33[1] = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v4 = *((_QWORD *)&v30 + 1);
  }
  *(_OWORD *)&v33[1] = v30;
  sub_180078A58(a1, 8LL, &v33[1], &v37);
  v64 = 0LL;
  v65 = 0LL;
  sub_1800631C0(a1 + 8, &v64);
  v62 = 0LL;
  v63 = 0LL;
  sub_180063178(a1 + 1104, &v62);
  v34 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v4 = *((_QWORD *)&v30 + 1);
  }
  v34 = v30;
  sub_18007B208(a1, &v34);
  sub_18011D988(
    &unk_1802586D8,
    3LL,
    "-----------------------------------------------------------------------------------");
  v6 = (const char *)sub_18001D8F4(v44);
  v7 = v6;
  if ( *((_QWORD *)v6 + 3) >= 0x10uLL )
    v7 = *(const char **)v6;
  v8 = sub_18006CDB8(v30);
  sub_18011D988(&unk_1802586D8, 3LL, "Engine::DeleteDevice() -- removing device id %u -- %s", v8, v7);
  if ( v45 >= 0x10 )
  {
    v9 = v44[0];
    if ( v45 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v44[0] - 8);
      if ( (unsigned __int64)(v44[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v45 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  v48 = 0LL;
  v49 = 0LL;
  sub_180063358(a1 + 112, &v48);
  if ( sub_18006CD84(v30) != a1 )
    goto LABEL_83;
  v10 = *(_QWORD **)(a1 + 96);
  v39 = v10;
  for ( i = *(_QWORD **)(a1 + 88); i != v10 && *i != (_QWORD)v30; i += 2 )
    ;
  if ( i == v10 )
  {
LABEL_83:
    result = sub_18011D988(&unk_1802586D8, 3LL, "Engine::DeleteDevice() -- device is not attached to this engine");
    if ( (_BYTE)v49 )
      result = sub_180063670(v48);
  }
  else
  {
    if ( (_BYTE)v49 )
      sub_180063670(v48);
    v58 = 0LL;
    v59 = 0LL;
    sub_1800631C0(v30 + 24, &v58);
    v12 = sub_18006CDB8(v30);
    v13 = sub_18006CE74(v30);
    v14 = 0;
    if ( v13 )
    {
      do
      {
        v46 = 0LL;
        v47 = 0LL;
        sub_18006CDF4(v30, &v46, v14);
        v52 = 0LL;
        v53 = 0LL;
        sub_180063178(v46 + 8, &v52);
        v50 = 0LL;
        v51 = 0LL;
        (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)v46 + 320LL))(v46, &v50);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 360LL))(v46, 0LL);
        if ( (_BYTE)v51 )
        {
          v15 = Mtx_unlock(v50);
          if ( v15 )
            std::_Throw_C_error(v15);
        }
        if ( (_BYTE)v53 )
          sub_180063668(v52);
        v16 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        ++v14;
      }
      while ( v14 < v13 );
      v4 = *((_QWORD *)&v30 + 1);
    }
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
      v4 = *((_QWORD *)&v30 + 1);
    }
    v41 = v30;
    v5 = sub_18007EA78(a1 + 184, &v41);
    if ( v4 )
    {
      v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF);
      v4 = *((_QWORD *)&v30 + 1);
      if ( v17 == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
    if ( v5 )
    {
      v35 = 0LL;
      LODWORD(v5) = 0;
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
        v4 = *((_QWORD *)&v30 + 1);
      }
      v35 = v30;
      sub_180072E60((__int64 **)(a1 + 184), (__int64)&v42, &v35);
      v18 = v42;
      v19 = *(_QWORD *)(v42 + 56);
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v19 = *(_QWORD *)(v18 + 56);
        v4 = *((_QWORD *)&v30 + 1);
      }
      v31 = *(_QWORD *)(v18 + 48);
      v32[0] = v19;
      v20 = *((_QWORD *)&v35 + 1);
      if ( *((_QWORD *)&v35 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v4 = *((_QWORD *)&v30 + 1);
      }
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
        v4 = *((_QWORD *)&v30 + 1);
      }
      v43 = v30;
      sub_18007EFB0(a1 + 184, &v43);
      if ( v4 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1;
        v4 = *((_QWORD *)&v30 + 1);
        if ( v21 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
      sub_180076E40(a1, &v31);
      if ( v32[0] )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v32[0] + 8LL)) )
        {
          v22 = v32[0];
          (**(void (__fastcall ***)(_QWORD))v32[0])(v32[0]);
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v22 + 12)) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 8LL))(v32[0]);
        }
        v4 = *((_QWORD *)&v30 + 1);
      }
    }
    v36 = 0LL;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v36 = v30;
    sub_180076EC4(a1, &v36);
    if ( sub_18006D548(v30) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(v30);
    v23 = v5;
    if ( v13 )
    {
      do
      {
        v54 = 0LL;
        v55 = 0LL;
        sub_18006CDF4(v30, &v54, v23);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 176LL))(v54);
        v24 = v55;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
        }
        ++v23;
      }
      while ( v23 < v13 );
    }
    sub_1800A4044(*(_QWORD *)(a1 + 512));
    sub_1800A3EA0(*(_QWORD *)(a1 + 512), v12);
    while ( (unsigned int)sub_18006CE74(v30) )
    {
      v56 = 0LL;
      v57 = 0LL;
      sub_18006CDF4(v30, &v56, 0);
      sub_18006CB20(v30, &v56);
      v25 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( sub_18006D548(v30) )
      sub_18006DA3C((_BYTE *)v30);
    if ( (_BYTE)v59 != (_BYTE)v5 )
      sub_180063668(v58);
    v60 = 0LL;
    v61 = 0LL;
    sub_1800631C0(a1 + 112, &v60);
    v26 = sub_180077CCC(a1, &v30);
    sub_18006E3C8(a1 + 88, &v40, *(_QWORD *)(a1 + 88) + 16LL * v26);
    if ( (_BYTE)v61 != (_BYTE)v5 )
      sub_180063668(v60);
    *(_OWORD *)&v32[1] = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(&v30, &v32[1]);
    if ( v32[2] )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v32[2] + 8LL)) )
      {
        v27 = v32[2];
        (**(void (__fastcall ***)(_QWORD))v32[2])(v32[2]);
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v27 + 12)) )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[2] + 8LL))(v32[2]);
      }
    }
    sub_18011D988(&unk_1802586D8, 3LL, "Engine::DeleteDevice() -- completed");
    sub_18011D988(
      &unk_1802586D8,
      3LL,
      "-----------------------------------------------------------------------------------");
    sub_180079B84(a1);
    sub_18007A0A4(a1);
    result = sub_180078BEC(a1);
    v4 = *((_QWORD *)&v30 + 1);
  }
  if ( (_BYTE)v63 != (_BYTE)v5 )
    result = sub_180063668(v62);
  if ( (_BYTE)v65 != (_BYTE)v5 )
    result = sub_180063668(v64);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    if ( !(_DWORD)result )
    {
      v29 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  return result;
}
