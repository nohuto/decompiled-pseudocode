/*
 * XREFs of sub_1800E25F0 @ 0x1800E25F0
 * Callers:
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800E25F0(__int64 a1, unsigned __int64 a2)
{
  int v4; // eax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rax
  int v8; // eax

  v4 = Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(__int64 **)(a1 + 200);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_10;
  do
  {
    if ( v7[4] >= a2 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || a2 < v6[4] )
LABEL_10:
    v6 = *(__int64 **)(a1 + 200);
  if ( v6 != v5 )
    a2 = v6[5];
  v8 = Mtx_unlock((_Mtx_t)(a1 + 104));
  if ( v8 )
    std::_Throw_C_error(v8);
  return a2;
}
