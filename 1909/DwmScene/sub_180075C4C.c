/*
 * XREFs of sub_180075C4C @ 0x180075C4C
 * Callers:
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001DA04 @ 0x18001DA04 (sub_18001DA04.c)
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18006CF04 @ 0x18006CF04 (sub_18006CF04.c)
 *     sub_18006CF84 @ 0x18006CF84 (sub_18006CF84.c)
 *     sub_18006D698 @ 0x18006D698 (sub_18006D698.c)
 *     sub_18006EDF4 @ 0x18006EDF4 (sub_18006EDF4.c)
 *     sub_180072F70 @ 0x180072F70 (sub_180072F70.c)
 *     sub_1800762E4 @ 0x1800762E4 (sub_1800762E4.c)
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180078158 @ 0x180078158 (sub_180078158.c)
 *     sub_180079C94 @ 0x180079C94 (sub_180079C94.c)
 *     sub_180079FDC @ 0x180079FDC (sub_180079FDC.c)
 *     sub_1800A3AA8 @ 0x1800A3AA8 (sub_1800A3AA8.c)
 *     sub_1800B3A54 @ 0x1800B3A54 (sub_1800B3A54.c)
 *     sub_1800B3F08 @ 0x1800B3F08 (sub_1800B3F08.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_180075C4C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  const char *v7; // rax
  const char *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  _QWORD *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 i; // r14
  __int64 v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  void ***v25; // rcx
  __int64 *v26; // rbx
  __int64 *v27; // r14
  void ***v28; // rdx
  __int64 result; // rax
  __int64 *v30; // rax
  __int128 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v38[3]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+B0h] [rbp-58h]
  _QWORD v40[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v41[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v43; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v44; // [rsp+150h] [rbp+48h]
  __int64 v45; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v46; // [rsp+160h] [rbp+58h]
  __int64 v47; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h] BYREF
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 v51; // [rsp+188h] [rbp+80h] BYREF
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 v53; // [rsp+198h] [rbp+90h] BYREF
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 v55; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  void **v57; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  volatile signed __int32 *v59; // [rsp+1C8h] [rbp+C0h]
  void ***v60; // [rsp+1F0h] [rbp+E8h]

  v34 = -2LL;
  v55 = 0LL;
  v56 = 0LL;
  sub_180063288(a1 + 8, &v55);
  v53 = 0LL;
  v54 = 0LL;
  sub_180063288(a1 + 1104, &v53);
  sub_1800635BC(*a2 + 24, v4);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_18000E4E8(v41);
        v30 = sub_18000E4E8(v40);
        sub_18006586C(pExceptionObject, v30, 1202LL, (__int64)v41, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18011DA98(
    &unk_1802596D8,
    3LL,
    "-----------------------------------------------------------------------------------");
  v7 = (const char *)sub_18001DA04(v38);
  v8 = v7;
  if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
    v8 = *(const char **)v7;
  v9 = sub_18006CEC8(*a2);
  sub_18011DA98(&unk_1802596D8, 3LL, "Engine::CreateDevice() -- attaching device id %u -- %s", v9, v8);
  if ( v39 >= 0x10 )
  {
    v10 = v38[0];
    if ( v39 + 1 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v38[0] - 8LL);
      if ( (unsigned __int64)(v38[0] - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v39 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
  if ( (unsigned int)sub_18006CF84(*a2) )
  {
    v43 = 0LL;
    v44 = 0LL;
    sub_1800762E4(a1, &v43, 1LL, 0LL);
    v47 = 0LL;
    v48 = 0LL;
    v33 = 0LL;
    sub_180077710(a1, &v47, 0LL, &v33);
    if ( v47 )
      sub_1800B3A54(v43, &v47);
    v11 = v48;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v12 = sub_18006CF04(*a2, &v35, 0);
    sub_1800B3F08(v43, v12);
    v13 = v36;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v31 = 0LL;
    v14 = a2[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      v14 = a2[1];
    }
    *(_QWORD *)&v31 = *a2;
    *((_QWORD *)&v31 + 1) = v14;
    sub_180072F70((__int64 **)(a1 + 184), (__int64)&v37, &v31);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v37 + 48), &v43);
    v15 = *((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    v16 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v49 = 0LL;
  v50 = 0LL;
  sub_1800632D0(a1 + 112, &v49);
  v17 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 104) == v17 )
  {
    sub_18000FC30((char **)(a1 + 88), (char *)v17, a2);
  }
  else
  {
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
    v18 = a2[1];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *(_QWORD *)v17 = *a2;
    *(_QWORD *)(v17 + 8) = a2[1];
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  if ( (_BYTE)v50 )
    sub_180063778(v49);
  sub_180079FDC(a1);
  v32 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a2[1];
  }
  *(_QWORD *)&v32 = *a2;
  *((_QWORD *)&v32 + 1) = v19;
  sub_1800A3AA8(*(_QWORD *)(a1 + 512), &v32);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    v45 = 0LL;
    v46 = 0LL;
    sub_180078158(a1, &v45, i);
    v21 = v45;
    if ( v45 && sub_180064430(v45, 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, a2);
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        v22 = v46;
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
  }
  v23 = (volatile signed __int32 *)a2[1];
  if ( v23 )
  {
    _InterlockedIncrement(v23 + 2);
    v23 = (volatile signed __int32 *)a2[1];
  }
  v24 = *a2;
  v60 = 0LL;
  v57 = &std::_Func_impl_no_alloc<_lambda_d933bf6ac68c182153bad2a88c3cd5c9_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v58 = 0LL;
  v59 = 0LL;
  if ( v23 )
    _InterlockedIncrement(v23 + 2);
  v58 = v24;
  v59 = v23;
  v25 = &v57;
  v60 = &v57;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
    v25 = v60;
  }
  v26 = *(__int64 **)(a1 + 704);
  v27 = *(__int64 **)(a1 + 712);
  if ( v26 != v27 )
  {
    do
    {
      v51 = 0LL;
      v52 = 0LL;
      sub_1800632D0(*v26 + 16, &v51);
      sub_18006EDF4(*v26, (__int64)&v57);
      if ( (_BYTE)v52 )
        sub_180063778(v51);
      v26 += 2;
    }
    while ( v26 != v27 );
    v25 = v60;
  }
  if ( v25 )
  {
    v28 = &v57;
    LOBYTE(v28) = v25 != &v57;
    ((void (__fastcall *)(void ***, void ***))(*v25)[4])(v25, v28);
  }
  sub_18006D698(*a2);
  result = sub_180079C94(a1);
  if ( (_BYTE)v54 )
    result = sub_180063778(v53);
  if ( (_BYTE)v56 )
    return sub_180063778(v55);
  return result;
}
