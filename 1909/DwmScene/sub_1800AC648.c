/*
 * XREFs of sub_1800AC648 @ 0x1800AC648
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010AE98 @ 0x18010AE98 (sub_18010AE98.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800AAAA0 @ 0x1800AAAA0 (sub_1800AAAA0.c)
 *     sub_1800B1210 @ 0x1800B1210 (sub_1800B1210.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800AC648(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  _QWORD v13[2]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp-11h] BYREF
  char v15[8]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  __int128 v19; // [rsp+98h] [rbp+2Fh] BYREF

  v19 = 0LL;
  v15[0] = 1;
  v16 = a2;
  v17 = a3;
  v18 = a5;
  std::shared_ptr<__ExceptionPtr>::operator=(&v19, a4);
  v7 = a1[14];
  if ( a1[15] == v7 )
  {
    sub_1800AAAA0(a1 + 13, v7, (__int64)v15);
    v8 = *((_QWORD *)&v19 + 1);
  }
  else
  {
    *(_BYTE *)v7 = v15[0];
    *(_QWORD *)(v7 + 8) = v16;
    *(_QWORD *)(v7 + 16) = v17;
    *(_QWORD *)(v7 + 24) = v18;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    v8 = *((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
      v8 = *((_QWORD *)&v19 + 1);
    }
    *(_QWORD *)(v7 + 32) = v19;
    *(_QWORD *)(v7 + 40) = v8;
    a1[14] += 48LL;
  }
  v9 = (*((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26)) / 48 - 1;
  v13[0] = COERCE_UNSIGNED_INT((float)(int)v9);
  v13[1] = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18000F444(v14, (__int64)&qword_18025CAF8);
  sub_1800B1210(a1, v14, v13, v9, -2LL, v13[0], 0LL);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return v9;
}
