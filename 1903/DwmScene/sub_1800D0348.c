/*
 * XREFs of sub_1800D0348 @ 0x1800D0348
 * Callers:
 *     sub_1800D06B8 @ 0x1800D06B8 (sub_1800D06B8.c)
 *     sub_1800DCAC0 @ 0x1800DCAC0 (sub_1800DCAC0.c)
 *     sub_1800DD5DC @ 0x1800DD5DC (sub_1800DD5DC.c)
 *     sub_180100F88 @ 0x180100F88 (sub_180100F88.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800390B0 @ 0x1800390B0 (sub_1800390B0.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D0348(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // r14
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  bool v16; // zf
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rdi
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rdi
  _BYTE v26[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v29[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]

  if ( a6 )
    sub_180064574((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v11 = (__int64 *)sub_1800D0858(v26, v10, a2, a3, a4, 0, a5);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 14, v11);
  v12 = v27;
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  LOBYTE(v13) = sub_180064320((__int64)a1, 1);
  if ( (_BYTE)v13 )
  {
    if ( a6 )
    {
      v30 = 0LL;
      v31 = 0LL;
      sub_1800390B0(a6, &v30);
      v14 = sub_1800642F8((__int64)a1, v28);
      sub_1800644E4(v30, v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v30 + 40LL))(v30, a2, a3, a4, a5);
      sub_1800CFDC8((__int64)a1, &v30);
      sub_180064574((__int64)a1, 2, 0);
      LOBYTE(v13) = sub_180064574((__int64)a1, 4, 0);
      v15 = v31;
      if ( v31 )
      {
        v13 = _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF);
        v16 = v13 == 1;
        LOBYTE(v13) = v13 - 1;
        if ( v16 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          v13 = _InterlockedDecrement(v15 + 3);
          if ( !v13 )
            LOBYTE(v13) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      sub_18007B178(v10, &v34);
      v17 = 0;
      v18 = v34;
      if ( (v35 - v34) >> 4 )
      {
        v19 = 0LL;
        do
        {
          v20 = 2 * v19;
          v21 = *(volatile signed __int32 **)(v18 + 8 * v20 + 8);
          if ( v21 )
          {
            _InterlockedIncrement(v21 + 2);
            v21 = *(volatile signed __int32 **)(v18 + 8 * v20 + 8);
          }
          v22 = *(_QWORD *)(v18 + 8 * v20);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22) )
          {
            v32 = 0LL;
            v33 = 0LL;
            sub_1800390B0(v22, &v32);
            v23 = sub_1800642F8((__int64)a1, v29);
            sub_1800644E4(v32, v23);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v32 + 40LL))(v32, a2, a3, a4, a5);
            sub_1800CFDC8((__int64)a1, &v32);
            v24 = v33;
            if ( v33 )
            {
              if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
                if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              }
            }
          }
          if ( v21 )
          {
            if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
              if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            }
          }
          ++v17;
          v18 = v34;
          v19 = v17;
        }
        while ( v17 < (unsigned __int64)((v35 - v34) >> 4) );
      }
      LOBYTE(v13) = sub_180011388(&v34);
    }
  }
  return v13;
}
