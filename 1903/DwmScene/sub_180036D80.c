/*
 * XREFs of sub_180036D80 @ 0x180036D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032DEC @ 0x180032DEC (sub_180032DEC.c)
 *     sub_18009F894 @ 0x18009F894 (sub_18009F894.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180036D80(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  int v12; // edi
  int v13; // edi
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-18h]

  v17 = 0LL;
  v5 = *a3;
  if ( *a3 )
  {
    v8 = *(unsigned int *)(a1 + 88);
    v18 = 0LL;
    v19 = 0LL;
    sub_18009F894(v5, &v18, v8);
    v14 = 0LL;
    v15 = 0LL;
    sub_180032DEC(&v14, &v18);
    v9 = *(_QWORD *)(v14 + 184);
    v16 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v17 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v15 )
    {
      if ( !_InterlockedDecrement(v15 + 2) )
      {
        v10 = v15;
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v11 = v19;
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v12 = a2 - 1;
  if ( v12 )
  {
    v13 = v12 - 3;
    if ( v13 )
    {
      if ( v13 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v17);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v17);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v17);
  }
}
