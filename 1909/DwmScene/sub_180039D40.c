/*
 * XREFs of sub_180039D40 @ 0x180039D40
 * Callers:
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 *     sub_18004057C @ 0x18004057C (sub_18004057C.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015A44 @ 0x180015A44 (sub_180015A44.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002EAB4 @ 0x18002EAB4 (sub_18002EAB4.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18009DF38 @ 0x18009DF38 (sub_18009DF38.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180039D40(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  volatile signed __int32 *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-A9h] BYREF
  volatile signed __int32 *v28; // [rsp+28h] [rbp-A1h]
  __int64 v29; // [rsp+30h] [rbp-99h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v31; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v32; // [rsp+58h] [rbp-71h]
  __int128 v33; // [rsp+60h] [rbp-69h] BYREF
  __int128 v34; // [rsp+70h] [rbp-59h]
  __int64 v35; // [rsp+80h] [rbp-49h]
  _QWORD *v36; // [rsp+88h] [rbp-41h]
  __int64 *v37; // [rsp+90h] [rbp-39h]
  __int64 v38; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v39; // [rsp+A0h] [rbp-29h]
  _QWORD v40[3]; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v41; // [rsp+C0h] [rbp-9h]
  __int128 v42; // [rsp+C8h] [rbp-1h]

  v35 = -2LL;
  v36 = a2;
  v37 = a3;
  v42 = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v42 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v10 = sub_180015A44(v42, &v38);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v10);
  v11 = v39;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v27 = 0LL;
  v28 = 0LL;
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 104);
  }
  v30[0] = *(_QWORD *)(a1 + 96);
  v30[1] = v12;
  sub_1800171D4(&v27, v30);
  v13 = *a3;
  v29 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_18002EAB4(v27, &v29, a4);
  v14 = (_QWORD *)sub_18006CE94(v42);
  sub_180015F14(v14, &v31, 1u);
  v15 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v31);
  v16 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  v17 = (_QWORD *)sub_180064408(a1, v40);
  v18 = std::string::append(v17, "Shared Texture", 0xEuLL);
  v34 = 0uLL;
  v33 = *(_OWORD *)v18;
  v34 = *((_OWORD *)v18 + 1);
  v18[2] = 0LL;
  v18[3] = 15LL;
  *(_BYTE *)v18 = 0;
  sub_1800645F4(*v15, &v33);
  if ( v41 >= 0x10 )
  {
    v19 = v40[0];
    if ( v41 + 1 >= 0x1000 )
    {
      v19 = *(_QWORD *)(v40[0] - 8LL);
      if ( (unsigned __int64)(v40[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v41 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  result = sub_18009DF38(*v15);
  v21 = *(_QWORD *)(a1 + 112);
  v22 = *a2;
  if ( v21 != *a2 )
  {
    if ( v22 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*a2);
      v21 = *(_QWORD *)(a1 + 112);
    }
    *(_QWORD *)(a1 + 112) = v22;
    if ( v21 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      v23 = v28;
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v23 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  if ( *((_QWORD *)&v42 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v24 = *((_QWORD *)&v42 + 1);
      (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
    }
  }
  v25 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return result;
}
