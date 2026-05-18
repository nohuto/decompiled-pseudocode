/*
 * XREFs of sub_18002CFB8 @ 0x18002CFB8
 * Callers:
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800159D4 @ 0x1800159D4 (sub_1800159D4.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18009D200 @ 0x18009D200 (sub_18009D200.c)
 *     sub_18009DD94 @ 0x18009DD94 (sub_18009DD94.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002CFB8(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // r12d
  int v7; // r15d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 *v11; // rax
  _QWORD *v12; // r14
  volatile signed __int32 *v13; // rbx
  _BYTE *v14; // rbx
  __int64 result; // rax
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  const void **v18; // rax
  void *v19; // rcx
  __int64 v20; // rbx
  _QWORD v21[5]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp-88h]
  const void *Src; // [rsp+80h] [rbp-80h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h]
  void *v28[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-38h]
  _BYTE v31[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v32[32]; // [rsp+F0h] [rbp-10h] BYREF

  v21[4] = -2LL;
  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  v27 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v27 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v11 = sub_1800159D4(v27, &v22);
  v12 = (_QWORD *)(a1 + 96);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v11);
  v13 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  sub_1800642F8(a1, v28);
  if ( !v29 )
  {
    if ( v30 < 0x11 )
    {
      sub_18000E118((__int64 *)v28, 0x11uLL, 0LL, "RenderTargetD3D11");
    }
    else
    {
      v14 = v28[0];
      v29 = 17LL;
      memmove(v28[0], "RenderTargetD3D11", 0x11uLL);
      v14[17] = 0;
    }
  }
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_18000F3F4(v21, (__int64)v28);
  sub_1800644E4(*v12, v21);
  sub_18009D200((unsigned int)v31, v7, v6, a4, a5 & 0xFFFFFF7C | 3, 0);
  result = sub_18009DD94(*v12, v31);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v16 = sub_1800159D4(v27, &v24);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 112), v16);
      v17 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    v18 = sub_18002BFD4(&Src, v28, " (staging)");
    sub_1800644E4(*(_QWORD *)(a1 + 112), v18);
    sub_18009D200((unsigned int)v32, v7, v6, a4, a5 & 0xFFFFFF7C | 0x80, 3);
    result = sub_18009DD94(*(_QWORD *)(a1 + 112), v32);
  }
  if ( v30 >= 0x10 )
  {
    v19 = v28[0];
    if ( v30 + 1 >= 0x1000 )
    {
      v19 = (void *)*((_QWORD *)v28[0] - 1);
      if ( (unsigned __int64)((char *)v28[0] - (char *)v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v30 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v19);
  }
  v29 = 0LL;
  v30 = 15LL;
  LOBYTE(v28[0]) = 0;
  if ( *((_QWORD *)&v27 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v20 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  return result;
}
