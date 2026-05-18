/*
 * XREFs of sub_18009B2C0 @ 0x18009B2C0
 * Callers:
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 * Callees:
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_180099840 @ 0x180099840 (sub_180099840.c)
 *     sub_1800F0ED4 @ 0x1800F0ED4 (sub_1800F0ED4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009B2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 result; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  int v17; // [rsp+70h] [rbp-98h]
  __int64 v18; // [rsp+1C8h] [rbp+C0h]
  __int64 v19; // [rsp+1E8h] [rbp+E0h]
  volatile signed __int32 *v20; // [rsp+1F0h] [rbp+E8h]
  __int128 v21; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v22; // [rsp+208h] [rbp+100h] BYREF
  __int64 v23; // [rsp+368h] [rbp+260h] BYREF
  volatile signed __int32 *v24; // [rsp+370h] [rbp+268h]
  __int64 v25; // [rsp+378h] [rbp+270h] BYREF
  int v26; // [rsp+380h] [rbp+278h] BYREF
  __int64 v27; // [rsp+384h] [rbp+27Ch]
  int v28; // [rsp+38Ch] [rbp+284h]

  v18 = -2LL;
  v4 = a1;
  result = 8454144LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x810000) == 0x810000 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(a1 + 56);
          v7 = *(volatile signed __int32 **)(a1 + 64);
          break;
        }
      }
    }
    v19 = v6;
    v20 = v7;
    result = (__int64)sub_180012630(v6, &v23);
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v10 = v23;
    if ( v23 )
    {
      v11 = 8LL;
      v12 = &v26;
      do
      {
        *(v12 - 2) = 0;
        *(v12 - 1) = 0;
        *v12 = 0;
        v12 += 3;
        --v11;
      }
      while ( v11 );
      sub_180099840((unsigned __int64 *)(v10 + 88), &v25);
      v21 = xmmword_1801EEDE0;
      v22 = xmmword_1801EEDE0;
      v14 = v27;
      LODWORD(v15) = v28;
      v16 = v25;
      v17 = v26;
      sub_1800F0ED4(v4, (unsigned int)&v16, (unsigned int)&v14, (unsigned int)&v22, (__int64)&v21, 1077936128);
    }
    v13 = v24;
    if ( v24 )
    {
      result = (unsigned int)_InterlockedDecrement(v24 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        result = (unsigned int)_InterlockedDecrement(v13 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  return result;
}
