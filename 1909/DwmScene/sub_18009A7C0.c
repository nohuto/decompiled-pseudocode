/*
 * XREFs of sub_18009A7C0 @ 0x18009A7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     sub_1800907E8 @ 0x1800907E8 (sub_1800907E8.c)
 *     sub_180099A7C @ 0x180099A7C (sub_180099A7C.c)
 *     sub_1800A9000 @ 0x1800A9000 (sub_1800A9000.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_18009A7C0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int8 v14; // di
  unsigned __int8 v15; // si
  signed __int32 v16; // eax
  __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  volatile signed __int32 *v23; // [rsp+50h] [rbp-30h]
  _BYTE v24[8]; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h]

  v21 = -2LL;
  v4 = 0LL;
  v5 = a1[13];
  v6 = 1;
  if ( (a1[14] - v5) / 88 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v5 + v7);
      if ( v8 && *(_BYTE *)(v5 + v7 + 16) )
      {
        v9 = *(volatile signed __int32 **)(v8 + 144);
        if ( v9 )
        {
          _InterlockedAdd(v9 + 2, 1u);
          v9 = *(volatile signed __int32 **)(v8 + 144);
        }
        v22 = *(_QWORD *)(v8 + 136);
        v23 = v9;
        v10 = (_QWORD *)sub_1800A9000(v22, v24);
        (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, a1, v4, a2);
        v11 = v25;
        if ( v25 )
        {
          if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        if ( v9 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          }
        }
      }
      ++v4;
      v7 += 88LL;
      v5 = a1[13];
    }
    while ( v4 < (a1[14] - v5) / 88 );
  }
  v19 = 0LL;
  v20 = 0LL;
  sub_180099A7C((__int64)a1, &v19, 0LL);
  if ( v19 )
  {
    v26 = 0LL;
    v12 = a1[8];
    if ( v12 )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(v12 + 8);
        if ( !v16 )
          break;
        if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v16 + 1, v16) )
        {
          v13 = a1[7];
          v26 = *(_OWORD *)(a1 + 7);
          goto LABEL_19;
        }
      }
    }
    v13 = v26;
LABEL_19:
    v14 = sub_1800907E8(v19, 9u);
    v15 = sub_1800907E8(v19, 8u);
    sub_180087524(v13);
    if ( v15 )
      *(_QWORD *)(v13 + 448) |= 0x100uLL;
    else
      *(_QWORD *)(v13 + 448) &= ~0x100uLL;
    sub_180087524(v13);
    if ( v14 )
      *(_QWORD *)(v13 + 448) |= 0x200uLL;
    else
      *(_QWORD *)(v13 + 448) &= ~0x200uLL;
    if ( !v14 && v15 )
      v6 = 0;
    sub_180087524(v13);
    if ( v6 )
      *(_QWORD *)(v13 + 448) |= 0x10000uLL;
    else
      *(_QWORD *)(v13 + 448) &= ~0x10000uLL;
    if ( *((_QWORD *)&v26 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL)) )
      {
        v17 = *((_QWORD *)&v26 + 1);
        (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v17 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
      }
    }
  }
  if ( v20 && !_InterlockedDecrement(v20 + 2) )
  {
    v18 = v20;
    (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
    if ( !_InterlockedDecrement(v18 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  }
}
