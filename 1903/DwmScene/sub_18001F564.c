/*
 * XREFs of sub_18001F564 @ 0x18001F564
 * Callers:
 *     sub_180020B24 @ 0x180020B24 (sub_180020B24.c)
 *     sub_180020BD8 @ 0x180020BD8 (sub_180020BD8.c)
 *     sub_180020C8C @ 0x180020C8C (sub_180020C8C.c)
 *     sub_180020D40 @ 0x180020D40 (sub_180020D40.c)
 *     sub_180020DF4 @ 0x180020DF4 (sub_180020DF4.c)
 *     sub_180020EA8 @ 0x180020EA8 (sub_180020EA8.c)
 *     sub_180020F5C @ 0x180020F5C (sub_180020F5C.c)
 *     sub_180021010 @ 0x180021010 (sub_180021010.c)
 *     sub_1800210C4 @ 0x1800210C4 (sub_1800210C4.c)
 *     sub_180021178 @ 0x180021178 (sub_180021178.c)
 *     sub_18002122C @ 0x18002122C (sub_18002122C.c)
 *     sub_1800212E0 @ 0x1800212E0 (sub_1800212E0.c)
 *     sub_180021394 @ 0x180021394 (sub_180021394.c)
 *     sub_180021448 @ 0x180021448 (sub_180021448.c)
 *     sub_1800214FC @ 0x1800214FC (sub_1800214FC.c)
 *     sub_1800215B0 @ 0x1800215B0 (sub_1800215B0.c)
 *     sub_180021664 @ 0x180021664 (sub_180021664.c)
 *     sub_1800B5E48 @ 0x1800B5E48 (sub_1800B5E48.c)
 *     sub_1800B5EFC @ 0x1800B5EFC (sub_1800B5EFC.c)
 *     sub_1800B5FB0 @ 0x1800B5FB0 (sub_1800B5FB0.c)
 *     sub_1800B6064 @ 0x1800B6064 (sub_1800B6064.c)
 *     sub_1800B6118 @ 0x1800B6118 (sub_1800B6118.c)
 *     sub_1800B61CC @ 0x1800B61CC (sub_1800B61CC.c)
 *     sub_1800B6280 @ 0x1800B6280 (sub_1800B6280.c)
 *     sub_1800B6334 @ 0x1800B6334 (sub_1800B6334.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F564(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = a2[1];
    }
    *a1 = v2;
    a1[1] = v3;
  }
  return a1;
}
