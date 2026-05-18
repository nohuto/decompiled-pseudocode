/*
 * XREFs of sub_1800A9000 @ 0x1800A9000
 * Callers:
 *     sub_18009031C @ 0x18009031C (sub_18009031C.c)
 *     sub_180090804 @ 0x180090804 (sub_180090804.c)
 *     sub_1800988A0 @ 0x1800988A0 (sub_1800988A0.c)
 *     sub_18009A7C0 @ 0x18009A7C0 (sub_18009A7C0.c)
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A9000(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 464);
  }
  *a2 = *(_QWORD *)(a1 + 456);
  result = a2;
  a2[1] = v2;
  return result;
}
