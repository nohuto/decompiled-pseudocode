/*
 * XREFs of sub_1800B0A34 @ 0x1800B0A34
 * Callers:
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 * Callees:
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     sub_1800A5220 @ 0x1800A5220 (sub_1800A5220.c)
 *     sub_1800A5238 @ 0x1800A5238 (sub_1800A5238.c)
 *     sub_1800A527C @ 0x1800A527C (sub_1800A527C.c)
 *     sub_1800AEA88 @ 0x1800AEA88 (sub_1800AEA88.c)
 *     sub_1800B17CC @ 0x1800B17CC (sub_1800B17CC.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800B0A34(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r14
  char v6; // r13
  char v7; // al
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  volatile signed __int32 *v16; // rdi
  _BYTE v18[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v20; // [rsp+C8h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v26; // [rsp+F8h] [rbp-8h]
  _OWORD v27[4]; // [rsp+100h] [rbp+0h] BYREF

  if ( *(_DWORD *)(a1 + 172) )
  {
    v4 = *(volatile signed __int32 **)(a1 + 160);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(a1 + 160);
    }
    v5 = *(_QWORD *)(a1 + 152);
    v25 = 0LL;
    v26 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v25);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 72LL))(
           v5,
           a2,
           *(unsigned int *)(a1 + 172));
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2, 3LL);
    v8 = v7;
    if ( v6 || v7 )
    {
      v9 = sub_1800F0EB4(a1);
      v10 = sub_180078228(v9);
      if ( *(_QWORD *)(a1 + 200) && v6 )
      {
        v21 = 0LL;
        v22 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 56LL))(
          v5,
          &v21,
          *(unsigned int *)(a1 + 172));
        v19 = 0LL;
        v20 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(
          v5,
          &v19,
          *(unsigned int *)(a1 + 172));
        sub_1800A5238(v10, a1 + 184, &v21);
        sub_1800A527C(v10, a1 + 184, &v19);
        v11 = v20;
        if ( v20 )
        {
          if ( !_InterlockedDecrement(v20 + 2) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( !_InterlockedDecrement(v11 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        v12 = v22;
        if ( v22 )
        {
          if ( !_InterlockedDecrement(v22 + 2) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
            if ( !_InterlockedDecrement(v12 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          }
        }
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        if ( v8 )
        {
          v23 = 0LL;
          v24 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v5 + 56LL))(v5, &v23, 3LL);
          sub_1800A5238(v10, a1 + 216, &v23);
          v13 = v24;
          if ( v24 )
          {
            if ( !_InterlockedDecrement(v24 + 2) )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
              if ( !_InterlockedDecrement(v13 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            }
          }
        }
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        v14 = (_OWORD *)sub_1800AEA88(a1, 2, 0);
        v27[0] = *v14;
        v27[1] = v14[1];
        v27[2] = v14[2];
        v27[3] = v14[3];
        v15 = (_OWORD *)sub_1800B17CC(v27, v18);
        sub_180081DBC(v27, v15);
        sub_1800A5220(v10);
      }
    }
    v16 = v26;
    if ( v26 )
    {
      if ( !_InterlockedDecrement(v26 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    if ( v4 )
    {
      if ( !_InterlockedDecrement(v4 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  return 1;
}
