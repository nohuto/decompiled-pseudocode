/*
 * XREFs of sub_1800B40EC @ 0x1800B40EC
 * Callers:
 *     sub_1800B38DC @ 0x1800B38DC (sub_1800B38DC.c)
 *     sub_1800B4DA0 @ 0x1800B4DA0 (sub_1800B4DA0.c)
 * Callees:
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127648 (_Cnd_wait.c)
 *     _Cnd_signal @ 0x180127654 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B40EC(__int64 a1, _Mtx_t *a2)
{
  int v4; // eax
  int v5; // eax
  char result; // al

  *(_BYTE *)(a1 + 425) = 0;
  *(_BYTE *)(a1 + 424) = 0;
  v4 = Cnd_signal((_Cnd_t)(a1 + 208));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Cnd_signal((_Cnd_t)(a1 + 280));
  if ( v5 )
LABEL_4:
    std::_Throw_C_error(v5);
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 426);
    if ( result )
      return result;
    v5 = Cnd_wait((_Cnd_t)(a1 + 352), *a2);
    if ( v5 )
      goto LABEL_4;
  }
}
