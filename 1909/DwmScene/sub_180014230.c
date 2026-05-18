/*
 * XREFs of sub_180014230 @ 0x180014230
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180077B00 @ 0x180077B00 (sub_180077B00.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_18008C058 @ 0x18008C058 (sub_18008C058.c)
 *     sub_18008C610 @ 0x18008C610 (sub_18008C610.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180014230(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rcx
  __int64 *v12; // rax
  char v13; // di
  __int64 v14; // rcx
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // rax
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int128 v32; // [rsp+20h] [rbp-E0h] BYREF
  int v33; // [rsp+30h] [rbp-D0h]
  __int128 v34; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+68h] [rbp-98h] BYREF
  __int128 v39; // [rsp+78h] [rbp-88h] BYREF
  __int128 v40; // [rsp+88h] [rbp-78h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v44; // [rsp+C8h] [rbp-38h]
  _QWORD v45[5]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v47; // [rsp+100h] [rbp+0h]
  __int128 v48; // [rsp+108h] [rbp+8h]
  __int128 v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+128h] [rbp+28h] BYREF
  __int64 v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h] BYREF
  __int64 v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h] BYREF
  __int64 v57; // [rsp+160h] [rbp+60h]

  v45[4] = -2LL;
  v33 = 0;
  v3 = qword_180269E48;
  v4 = (_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 32);
  v48 = 0LL;
  v6 = *(_QWORD *)(v5 + 80);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v48 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  v56 = 0LL;
  v57 = 0LL;
  sub_1800632D0(v48 + 16, &v56);
  v8 = *v4;
  sub_180087450(*v4);
  v49 = 0LL;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v49 = *(_OWORD *)(v8 + 56);
        break;
      }
    }
  }
  v32 = 0uLL;
  if ( a2 )
  {
    v11 = *(volatile signed __int32 **)(a2 + 40);
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = *(volatile signed __int32 **)(a2 + 40);
    }
    v36 = *(_QWORD *)(a2 + 32);
    v37 = v11;
    v12 = &v36;
    v13 = 5;
  }
  else
  {
    v38 = 0LL;
    v12 = (__int64 *)&v38;
    v13 = 6;
  }
  v14 = v12[1];
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  *(_QWORD *)&v32 = *v12;
  *((_QWORD *)&v32 + 1) = v14;
  if ( (v13 & 2) != 0 )
  {
    v13 &= ~2u;
    if ( *((_QWORD *)&v38 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v15 = *((_QWORD *)&v38 + 1);
        (***((void (__fastcall ****)(_QWORD))&v38 + 1))(*((_QWORD *)&v38 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v38 + 1) + 8LL))(*((_QWORD *)&v38 + 1));
      }
    }
  }
  if ( (v13 & 1) != 0 )
  {
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v37;
        (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
      }
    }
  }
  if ( (_QWORD)v49 != (_QWORD)v32 )
  {
    v34 = 0LL;
    if ( (_QWORD)v32 )
    {
      v35 = 0LL;
      v21 = *(_QWORD *)(v32 + 80);
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = *(_DWORD *)(v21 + 8);
          if ( !v22 )
            break;
          if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
          {
            v35 = *(_OWORD *)(v32 + 72);
            break;
          }
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, (__int64 *)&v35);
      if ( *((_QWORD *)&v35 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v23 = *((_QWORD *)&v35 + 1);
          (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 8LL))(*((_QWORD *)&v35 + 1));
        }
      }
    }
    else
    {
      sub_180077B00(*(_QWORD *)(v3 + 56), &v43);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v43);
      v17 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
      v50 = 0LL;
      v51 = 0LL;
      v18 = v34;
      sub_1800632D0(v34 + 16, &v50);
      v45[2] = 0LL;
      v45[3] = 0LL;
      sub_18001115C(v45, (__int64)&unk_1802597A8);
      v19 = (__int64 *)sub_18008B3B0(v18, v46, v45);
      std::shared_ptr<__ExceptionPtr>::operator=(&v32, v19);
      v20 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      if ( (_BYTE)v51 )
        sub_180063778(v50);
    }
    if ( (_QWORD)v48 == (_QWORD)v34 )
    {
      v42 = 0LL;
      if ( *((_QWORD *)&v32 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL));
      v42 = v32;
      v40 = 0LL;
      v26 = v4[1];
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        v26 = v4[1];
      }
      *(_QWORD *)&v40 = *v4;
      *((_QWORD *)&v40 + 1) = v26;
      sub_18008C610(v48, &v40, &v42);
    }
    else
    {
      v54 = 0LL;
      v55 = 0LL;
      sub_1800632D0(v34 + 16, &v54);
      v52 = 0LL;
      v53 = 0LL;
      v41 = 0LL;
      if ( *((_QWORD *)&v32 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL));
      v41 = v32;
      sub_180082948(*v4, &v52, 131075LL, &v41);
      v39 = 0LL;
      v24 = v4[1];
      if ( v24 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
        v24 = v4[1];
      }
      *(_QWORD *)&v39 = *v4;
      *((_QWORD *)&v39 + 1) = v24;
      sub_18008C058(v48, &v39);
      std::shared_ptr<__ExceptionPtr>::operator=(v4, &v52);
      v25 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
      if ( (_BYTE)v55 )
        sub_180063778(v54);
    }
    if ( *((_QWORD *)&v34 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v27 = *((_QWORD *)&v34 + 1);
        (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v32 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v28 = *((_QWORD *)&v32 + 1);
      (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
    }
  }
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v29 = *((_QWORD *)&v49 + 1);
      (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
    }
  }
  if ( (_BYTE)v57 )
    sub_180063778(v56);
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v30 = *((_QWORD *)&v48 + 1);
      (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
    }
  }
  return 0LL;
}
