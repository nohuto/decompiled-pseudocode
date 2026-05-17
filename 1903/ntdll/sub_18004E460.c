/*
 * XREFs of sub_18004E460 @ 0x18004E460
 * Callers:
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 * Callees:
 *     sub_18004E6DC @ 0x18004E6DC (sub_18004E6DC.c)
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

void *__fastcall sub_18004E460(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  void *v5; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = (void *)((a2 << v3) + *(_QWORD *)(a1 + 24));
  if ( (int)sub_18004E6F8(a1 + 16, 8 * (a2 << v3) / 0x8000, v7, &v8) < 0 )
    return 0LL;
  memmove(v5, a3, (unsigned int)(1 << v3));
  sub_18004E6DC(v7);
  return v5;
}
