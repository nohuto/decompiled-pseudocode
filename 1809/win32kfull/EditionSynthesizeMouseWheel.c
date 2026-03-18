/*
 * XREFs of EditionSynthesizeMouseWheel @ 0x1C01C8FF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendInput @ 0x1C00AE874 (xxxSendInput.c)
 */

__int64 __fastcall EditionSynthesizeMouseWheel(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-20h]

  v4 = *a1;
  v7 = 0;
  v5 = a1[1];
  v8 = v4;
  v9 = v5;
  return xxxSendInput(1u, (__int64)&v7, a3, a4);
}
