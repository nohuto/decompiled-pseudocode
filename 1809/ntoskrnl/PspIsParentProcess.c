/*
 * XREFs of PspIsParentProcess @ 0x140091CE8
 * Callers:
 *     PspThreadOpen @ 0x14060A090 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x14060A150 (PspProcessOpen.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsParentProcess(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 992) == *(_QWORD *)(a1 + 736) )
    return *(_QWORD *)(a2 + 1864) > *(_QWORD *)(a1 + 1864);
  return result;
}
