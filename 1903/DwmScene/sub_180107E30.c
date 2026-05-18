/*
 * XREFs of sub_180107E30 @ 0x180107E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180107A64 @ 0x180107A64 (sub_180107A64.c)
 *     sub_180107B54 @ 0x180107B54 (sub_180107B54.c)
 *     sub_180108078 @ 0x180108078 (sub_180108078.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180107E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v8; // r8
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 *v20; // rax
  char v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h] BYREF
  int v34; // [rsp+110h] [rbp+10h]

  v24 = -2LL;
  v4 = a4;
  v25 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(a4 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v8 = *(_QWORD *)(a4 + 56);
        v9 = *(volatile signed __int32 **)(a4 + 64);
        break;
      }
    }
  }
  v26 = v8;
  v27 = v9;
  sub_180083DF0(v8, (__int64)&v33);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v32 = 0LL;
  v31 = 0LL;
  v22 = v33;
  v23 = v34;
  sub_180108078(a1, v4, (unsigned int)&v22, (unsigned int)&v31, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      sub_18000E498(v29);
      v20 = sub_18000E498(v28);
      sub_18006575C(pExceptionObject, v20, 44LL, (__int64)v29, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_180107A64((char *)v31, *((char **)&v31 + 1), v21);
  }
  else
  {
    sub_180107B54((char *)v31, *((char **)&v31 + 1), v21);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v12 = (_QWORD *)*((_QWORD *)&v31 + 1);
  v13 = v31;
  if ( (_QWORD)v31 != *((_QWORD *)&v31 + 1) )
  {
    v14 = (_QWORD *)(v31 + 8);
    do
    {
      v15 = *(_BYTE **)(a2 + 8);
      if ( *(_BYTE **)(a2 + 16) == v15 )
      {
        sub_180016A10((const void **)a2, v15, v14);
      }
      else
      {
        *(_QWORD *)v15 = *v14;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      v14 += 2;
    }
    while ( v14 - 1 != v12 );
    v13 = v31;
  }
  if ( v13 )
  {
    v16 = (v32 - v13) & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = v13;
    if ( v16 >= 0x1000 )
    {
      v18 = v16 + 39;
      v13 = *(_QWORD *)(v13 - 8);
      if ( (unsigned __int64)(v17 - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v18);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return a2;
}
