/*
 * XREFs of sub_18003E400 @ 0x18003E400
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_18003E16C @ 0x18003E16C (sub_18003E16C.c)
 *     sub_18003E6E8 @ 0x18003E6E8 (sub_18003E6E8.c)
 *     sub_18003EA08 @ 0x18003EA08 (sub_18003EA08.c)
 *     sub_18003EB9C @ 0x18003EB9C (sub_18003EB9C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18003E400(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // r15
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  unsigned __int128 v8; // kr00_16
  __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rbx
  signed __int32 v21; // eax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int128 v27; // [rsp+50h] [rbp-B8h]
  _BYTE v28[40]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[64]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v30[272]; // [rsp+C8h] [rbp-40h] BYREF

  if ( *a2 )
  {
    v4 = a1 + 12;
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, a2);
  }
  else
  {
    v5 = sub_18003E16C(&v24);
    v4 = a1 + 12;
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, v5);
    v6 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
  }
  v27 = 0LL;
  v7 = a1[10];
  if ( v7 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)(v7 + 8);
      if ( !v21 )
        break;
      if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v21 + 1, v21) )
      {
        v22 = a1[9];
        *(_QWORD *)&v27 = v22;
        v23 = a1[10];
        *((_QWORD *)&v27 + 1) = v23;
        v8 = __PAIR128__(v23, v22);
        goto LABEL_9;
      }
    }
  }
  v8 = v27;
LABEL_9:
  v26 = 0LL;
  sub_18002328C(v8, &v26);
  sub_18003EB9C(*v4, v28);
  v9 = v26;
  v10 = a1[14];
  if ( v10 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v9 + 176LL))(v9, v28, a1 + 14);
  sub_1800254C0(v8, v11);
  sub_18003E6E8(*v4, v30);
  v12 = v26;
  v13 = a1[15];
  if ( v13 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v12 + 160LL))(v12, v30, a1 + 15);
  sub_1800254C0(v8, v14);
  sub_18003EA08(*v4, v29);
  v15 = v26;
  v16 = a1[16];
  if ( v16 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v15 + 168LL))(v15, v29, a1 + 16);
  sub_1800254C0(v8, v17);
  v18 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL)) )
    {
      v19 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v19 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 && !_InterlockedDecrement(v20 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
    if ( !_InterlockedDecrement(v20 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  }
}
