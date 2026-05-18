/*
 * XREFs of sub_180124F10 @ 0x180124F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E434 @ 0x18006E434 (sub_18006E434.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180124F10(__int64 a1, int a2)
{
  int v4; // eax
  __int64 **v5; // rcx
  __int64 *v6; // r8
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v4 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = (__int64 **)(a1 + 96);
  v6 = *(__int64 **)(a1 + 96);
  v7 = (__int64 *)v6[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_10;
  do
  {
    if ( *((_DWORD *)v7 + 8) >= a2 )
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
  if ( v6 == *v5 || a2 < *((_DWORD *)v6 + 8) )
LABEL_10:
    v6 = *v5;
  if ( v6 != *v5 )
    sub_18006E434(v5, &v9, v6);
  v8 = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v8 )
    std::_Throw_C_error(v8);
}
