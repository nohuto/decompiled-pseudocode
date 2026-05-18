/*
 * XREFs of sub_1800B37CC @ 0x1800B37CC
 * Callers:
 *     sub_18007DF70 @ 0x18007DF70 (sub_18007DF70.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_1800B3FDC @ 0x1800B3FDC (sub_1800B3FDC.c)
 *     sub_1800B4F74 @ 0x1800B4F74 (sub_1800B4F74.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x180127532 (_Cnd_destroy_in_situ.c)
 *     _Thrd_detach @ 0x1801275E6 (_Thrd_detach.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800B37CC(__int64 a1)
{
  __int64 v1; // rdi
  struct _Mtx_internal_imp_t *v2; // r14
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  volatile signed __int32 *v11; // rcx
  const char *v12; // rax
  struct _Mtx_internal_imp_t *v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  struct _Mtx_internal_imp_t *v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+40h] [rbp-28h]
  const std::system_error *v18; // [rsp+48h] [rbp-20h] BYREF
  _Thrd_t v19; // [rsp+50h] [rbp-18h] BYREF

  v17 = -2LL;
  v1 = a1;
  v16 = a1;
  v14 = 0LL;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v15 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v13 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  try
  {
    if ( v4 )
      std::_Throw_C_error(v4);
    v5 = 1;
    LOBYTE(v14) = 1;
    if ( *(_DWORD *)(v1 + 36) == 1 )
    {
      sub_1800B3FDC(v1, &v13);
      v5 = v14;
      v3 = v13;
    }
    if ( v5 )
    {
      v6 = Mtx_unlock(v3);
      if ( v6 )
        std::_Throw_C_error(v6);
    }
  }
  catch ( const std::system_error *v18 )
  {
    v12 = (const char *)(*(__int64 (__fastcall **)(const std::system_error *))(*(_QWORD *)v18 + 8LL))(v18);
    sub_18011D988(&unk_18025C830, 3LL, "Exception in Display Destructor, message=%s", v12);
    v1 = v16;
    v2 = v15;
  }
  if ( *(_DWORD *)(v1 + 112) )
  {
    v19 = *(_Thrd_t *)(v1 + 104);
    v7 = Thrd_detach(&v19);
    if ( v7 )
      std::_Throw_C_error(v7);
    *(_QWORD *)(v1 + 104) = 0LL;
    *(_DWORD *)(v1 + 112) = 0;
  }
  Cnd_destroy_in_situ((_Cnd_t)(v1 + 352));
  Cnd_destroy_in_situ((_Cnd_t)(v1 + 280));
  Cnd_destroy_in_situ((_Cnd_t)(v1 + 208));
  Mtx_destroy_in_situ(v2);
  if ( *(_DWORD *)(v1 + 112) )
    _o_terminate(v9, v8);
  sub_1800B4F74(v1 + 88, &v15, **(_QWORD **)(v1 + 88));
  j_j__o_free(*(_QWORD *)(v1 + 88));
  sub_180063530((__int64 *)(v1 + 64));
  result = sub_180011388((__int64 *)(v1 + 40));
  v11 = *(volatile signed __int32 **)(v1 + 8);
  if ( v11 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
