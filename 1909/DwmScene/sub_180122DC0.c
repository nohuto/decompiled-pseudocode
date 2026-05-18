/*
 * XREFs of sub_180122DC0 @ 0x180122DC0
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 *     sub_18011F16C @ 0x18011F16C (sub_18011F16C.c)
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_18011FA28 @ 0x18011FA28 (sub_18011FA28.c)
 * Callees:
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     sub_180121FA4 @ 0x180121FA4 (sub_180121FA4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180122DC0(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // r14
  struct _Mtx_internal_imp_t *v4; // rsi
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  int v12; // eax
  volatile __int32 *v13[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF

  v13[1] = (volatile __int32 *)-2LL;
  v2 = (const wchar_t *)a2;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 256), 0) )
  {
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v2 = *(const wchar_t **)a2;
    sub_18011DA98(
      &qword_18025F1C0,
      4,
      "A recursive call to TriggerHandlers() with property name '%ls' was ignored.",
      v2);
  }
  else
  {
    v14 = a1;
    v13[0] = (volatile __int32 *)&v14;
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
    v13[2] = (volatile __int32 *)(a1 + 160);
    v5 = Mtx_lock((_Mtx_t)(a1 + 160));
    if ( v5 )
      std::_Throw_C_error(v5);
    v6 = *(_QWORD **)(a1 + 240);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v8 = v7[12];
      if ( !v8 )
      {
        std::_Xbad_function_call();
        JUMPOUT(0x180122F01LL);
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v8 + 16LL))(v8, v2);
      v9 = (__int64 **)v7[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    v12 = Mtx_unlock(v4);
    if ( v12 )
      std::_Throw_C_error(v12);
    sub_180121FA4(v13);
  }
}
