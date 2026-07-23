/*
 * XREFs of sub_1800846F0 @ 0x1800846F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 */

__int64 __fastcall sub_1800846F0(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rcx

  if ( !*(_DWORD *)(a2 + 16) )
  {
    v4 = *(void **)(a2 + 8);
    *(_DWORD *)a2 = a3;
    if ( v4 )
      ZwSetEvent(v4, 0LL);
    *(_DWORD *)(a2 + 16) = 1;
  }
  return 0LL;
}
