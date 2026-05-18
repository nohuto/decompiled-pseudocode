/*
 * XREFs of sub_1800B4AF0 @ 0x1800B4AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127538 (_Cnd_wait.c)
 *     _Cnd_signal @ 0x180127544 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800B4AF0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbp
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  char v5; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct _Mtx_internal_imp_t *v11; // [rsp+20h] [rbp-38h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v11 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  do
  {
    v4 = Mtx_lock(v3);
    if ( v4 )
      std::_Throw_C_error(v4);
    v5 = *(_BYTE *)(a1 + 425);
    if ( *(_BYTE *)(a1 + 120) )
    {
      *(_BYTE *)(a1 + 120) = 0;
      sub_1800B4384(a1);
      v3 = v11;
      v6 = Mtx_unlock(v11);
      if ( v6 )
        std::_Throw_C_error(v6);
    }
    else
    {
      v7 = Mtx_unlock(v11);
      if ( v7 )
        std::_Throw_C_error(v7);
      v8 = Mtx_lock(v2);
      if ( v8 )
LABEL_11:
        std::_Throw_C_error(v8);
      while ( !*(_BYTE *)(a1 + 120) && *(_BYTE *)(a1 + 425) )
      {
        v8 = Cnd_wait((_Cnd_t)(a1 + 208), v2);
        if ( v8 )
          goto LABEL_11;
      }
      v9 = Mtx_unlock(v2);
      if ( v9 )
        std::_Throw_C_error(v9);
      v3 = v11;
    }
  }
  while ( v5 );
  *(_BYTE *)(a1 + 426) = 1;
  v10 = Cnd_signal((_Cnd_t)(a1 + 352));
  if ( v10 )
    std::_Throw_C_error(v10);
}
