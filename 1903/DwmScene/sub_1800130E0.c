/*
 * XREFs of sub_1800130E0 @ 0x1800130E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012784 @ 0x180012784 (sub_180012784.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800130E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  _QWORD *v11; // rcx
  volatile signed __int32 *v12; // rbx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  volatile signed __int32 *v18; // [rsp+48h] [rbp-60h]
  _QWORD v19[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v19[2] = -2LL;
  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    if ( v4 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v5 = *(volatile signed __int32 **)(v4 + 40);
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 2);
        v5 = *(volatile signed __int32 **)(v4 + 40);
      }
      v6 = *(_QWORD *)(v4 + 32);
      v17 = v6;
      v18 = v5;
      v20 = 0LL;
      v21 = 0LL;
      v14 = 0LL;
      v7 = *(_QWORD *)(v6 + 80);
      if ( v7 )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v7 + 8);
          if ( !v8 )
            break;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
          {
            v14 = *(_OWORD *)(v6 + 72);
            break;
          }
        }
      }
      sub_1800631C0(v14 + 16, &v20);
      if ( *((_QWORD *)&v14 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
        }
      }
      v15 = 0LL;
      v16 = 0LL;
      sub_180012784(v17, &v15);
      if ( a2 )
        v9 = a2 + 2;
      else
        v9 = (_QWORD *)(qword_180268E48 + 96);
      v10 = (volatile signed __int32 *)v9[1];
      if ( v10 )
      {
        _InterlockedIncrement(v10 + 2);
        v10 = (volatile signed __int32 *)v9[1];
      }
      v19[0] = *v9;
      v19[1] = v10;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v15 + 88), v19);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      v11 = (_QWORD *)a1[1];
      if ( v11 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
          v11 = (_QWORD *)a1[1];
        }
        a1[1] = a2;
        if ( v11 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      }
      if ( v16 )
      {
        if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          v12 = v16;
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      if ( (_BYTE)v21 )
        sub_180063668(v20);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
          if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 64, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
