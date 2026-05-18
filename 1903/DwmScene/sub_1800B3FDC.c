/*
 * XREFs of sub_1800B3FDC @ 0x1800B3FDC
 * Callers:
 *     sub_1800B37CC @ 0x1800B37CC (sub_1800B37CC.c)
 *     sub_1800B4C90 @ 0x1800B4C90 (sub_1800B4C90.c)
 * Callees:
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127538 (_Cnd_wait.c)
 *     _Cnd_signal @ 0x180127544 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B3FDC(__int64 a1, _Mtx_t *a2)
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
