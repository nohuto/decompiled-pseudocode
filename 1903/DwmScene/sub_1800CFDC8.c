/*
 * XREFs of sub_1800CFDC8 @ 0x1800CFDC8
 * Callers:
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800D06B8 @ 0x1800D06B8 (sub_1800D06B8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18009D918 @ 0x18009D918 (sub_18009D918.c)
 *     sub_18009EB2C @ 0x18009EB2C (sub_18009EB2C.c)
 *     sub_18009EB80 @ 0x18009EB80 (sub_18009EB80.c)
 *     sub_18009EB9C @ 0x18009EB9C (sub_18009EB9C.c)
 *     sub_18009EBF4 @ 0x18009EBF4 (sub_18009EBF4.c)
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 *     sub_18009F3EC @ 0x18009F3EC (sub_18009F3EC.c)
 *     sub_1800CF934 @ 0x1800CF934 (sub_1800CF934.c)
 *     sub_1800D07C8 @ 0x1800D07C8 (sub_1800D07C8.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CFDC8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 **v3; // rdi
  __int64 v4; // rax
  volatile signed __int32 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // r13d
  __int64 *v9; // r12
  __int64 v10; // rbx
  int v11; // r14d
  int v12; // esi
  int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 result; // rax
  signed __int32 v23; // eax
  bool v24; // zf
  int v25; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 **v30; // [rsp+90h] [rbp-78h]
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  _BYTE v33[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+B8h] [rbp-50h]
  _BYTE v35[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v41; // [rsp+100h] [rbp-8h]

  v32 = -2LL;
  v2 = a2;
  v3 = (__int64 **)a1;
  v30 = (__int64 **)a1;
  v4 = *a2;
  v5 = *(volatile signed __int32 **)(*a2 + 104LL);
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = *(volatile signed __int32 **)(v4 + 104);
  }
  v6 = *(_QWORD *)(v4 + 96);
  if ( v6 )
  {
    v29 = 0LL;
    if ( v5 )
      _InterlockedIncrement(v5 + 2);
    *(_QWORD *)&v29 = v6;
    *((_QWORD *)&v29 + 1) = v5;
    sub_18009D918(*(_QWORD *)(a1 + 112), &v29);
  }
  v7 = ((__int64 (__fastcall *)(__int64 **))(*v3)[4])(v3);
  v28 = v7;
  v8 = 0;
  v9 = (__int64 *)(v3 + 24);
  do
  {
    v39 = 0uLL;
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)*v2 + 72LL))(*v2, &v39, v8);
    v10 = v39;
    v27 = v39;
    if ( (_QWORD)v39 )
    {
      if ( !*(v9 - 8) )
      {
        v11 = sub_18009EB2C(v39);
        v12 = sub_18009EBF4(v10);
        v13 = sub_18009EB80(v10);
        v14 = sub_18009EB9C(v10);
        v15 = sub_18009EC10(v27);
        v25 = v11;
        v7 = v28;
        v16 = (__int64 *)sub_1800D0858(v33, v28, v15, v14, v13, v12, v25);
        v3 = v30;
        std::shared_ptr<__ExceptionPtr>::operator=(&v30[2 * v8 + 16], v16);
        v17 = v34;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        v2 = a2;
      }
      v31 = 0LL;
      if ( *((_QWORD *)&v39 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
      v31 = v39;
      sub_18009D918(*(v9 - 8), &v31);
    }
    v40 = 0LL;
    v41 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*v2 + 80LL))(*v2, &v40, v8);
    if ( v40 )
    {
      if ( !*v9 )
      {
        v18 = (__int64 *)sub_1800D07C8(v35, v7, *(_QWORD *)(v40 + 96));
        std::shared_ptr<__ExceptionPtr>::operator=(&v3[2 * v8 + 24], v18);
        v19 = v36;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
      }
      sub_18009F3EC(*v9, (__int64)&v40);
    }
    v20 = v41;
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
    if ( *((_QWORD *)&v39 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    ++v8;
    v9 += 2;
  }
  while ( v8 < 4 );
  v38 = *(_DWORD *)(*v2 + 88LL);
  sub_1800CF934(v3 + 32, (__int64)&v37, &v38);
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v37 + 40), v2);
  if ( v5 )
  {
    v23 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    v24 = v23 == 1;
    result = (unsigned int)(v23 - 1);
    if ( v24 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
