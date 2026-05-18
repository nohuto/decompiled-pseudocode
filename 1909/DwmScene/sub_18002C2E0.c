/*
 * XREFs of sub_18002C2E0 @ 0x18002C2E0
 * Callers:
 *     sub_18000EA20 @ 0x18000EA20 (sub_18000EA20.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18004057C @ 0x18004057C (sub_18004057C.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015A44 @ 0x180015A44 (sub_180015A44.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002EAB4 @ 0x18002EAB4 (sub_18002EAB4.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180065658 @ 0x180065658 (sub_180065658.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18002C2E0(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, int a5, int a6)
{
  int v10; // r13d
  int v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  _QWORD *v19; // rsi
  volatile signed __int32 *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __int64 result; // rax
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v46; // [rsp+88h] [rbp-78h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 *v49; // [rsp+B0h] [rbp-50h]
  _QWORD *v50; // [rsp+B8h] [rbp-48h]
  _QWORD *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v55; // [rsp+E0h] [rbp-20h]
  _QWORD v56[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v57; // [rsp+100h] [rbp+0h]
  __int128 v58; // [rsp+108h] [rbp+8h]

  v48 = -2LL;
  v49 = a2;
  v50 = a3;
  v51 = a4;
  v10 = a5;
  if ( !a5 )
    v10 = 1;
  v11 = a6;
  if ( !a6 )
    v11 = 1;
  v37 = v11;
  v58 = 0LL;
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 8);
      if ( !v13 )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
      {
        v58 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v14 = sub_180015A44(v58, &v52);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v14);
  v15 = v53;
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v40 = 0LL;
  v41 = 0LL;
  v16 = *(_QWORD *)(a1 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = *(_QWORD *)(a1 + 104);
  }
  v44[0] = *(_QWORD *)(a1 + 96);
  v44[1] = v16;
  sub_1800171D4(&v40, v44);
  v17 = *a3;
  v42 = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  sub_18002EAB4(v40, &v42, 0LL);
  if ( *a4 )
  {
    v18 = sub_180015A44(v58, &v54);
    v19 = (_QWORD *)(a1 + 112);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 112), v18);
    v20 = v55;
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = (_QWORD *)sub_180064408(a1, v56);
    v22 = std::string::append(v21, "Staging", 7uLL);
    v47 = 0uLL;
    v46 = *(_OWORD *)v22;
    v47 = *((_OWORD *)v22 + 1);
    v22[2] = 0LL;
    v22[3] = 15LL;
    *(_BYTE *)v22 = 0;
    sub_1800645F4(*v19, &v46);
    if ( v57 >= 0x10 )
    {
      v23 = v56[0];
      if ( v57 + 1 >= 0x1000 )
      {
        v23 = *(_QWORD *)(v56[0] - 8LL);
        if ( (unsigned __int64)(v56[0] - v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v57 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v23);
    }
    v38 = 0LL;
    v39 = 0LL;
    v24 = *(_QWORD *)(a1 + 120);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      v24 = *(_QWORD *)(a1 + 120);
    }
    v45[0] = *v19;
    v45[1] = v24;
    sub_1800171D4(&v38, v45);
    v36[0] = 0LL;
    if ( v36 != a4 )
    {
      v36[0] = *a4;
      *a4 = 0LL;
    }
    sub_18002EAB4(v38, v36, 128LL);
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        v25 = v39;
        (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      }
    }
  }
  v26 = 0LL;
  if ( &v43 != a2 )
  {
    v26 = *a2;
    *a2 = 0LL;
  }
  v43 = *(_QWORD *)(a1 + 128);
  v27 = v43;
  *(_QWORD *)(a1 + 128) = v26;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = 0LL;
  v28.m128_f32[0] = (float)v37;
  v29 = 0LL;
  v29.m128_f32[0] = (float)v10;
  result = sub_180065658(a1, _mm_unpacklo_ps(v29, v28).m128_u64[0]);
  if ( v41 )
  {
    result = (unsigned int)_InterlockedDecrement(v41 + 2);
    if ( !(_DWORD)result )
    {
      v31 = v41;
      (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
    }
  }
  if ( *((_QWORD *)&v58 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v58 + 1);
      (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v58 + 1) + 8LL))(*((_QWORD *)&v58 + 1));
    }
  }
  v33 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return result;
}
