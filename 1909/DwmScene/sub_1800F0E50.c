/*
 * XREFs of sub_1800F0E50 @ 0x1800F0E50
 * Callers:
 *     sub_18008E640 @ 0x18008E640 (sub_18008E640.c)
 *     sub_18009C650 @ 0x18009C650 (sub_18009C650.c)
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 *     sub_180101FD0 @ 0x180101FD0 (sub_180101FD0.c)
 * Callees:
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

bool __fastcall sub_1800F0E50(__int64 a1, __int64 a2)
{
  size_t *v2; // rax
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // r8

  v2 = (size_t *)(a2 + 24);
  v5 = (const void *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
    v5 = *(const void **)(a1 + 24);
  v6 = v2;
  if ( v2[3] >= 0x10 )
    v6 = (const void *)*v2;
  v7 = v2[2];
  return v7 == *(_QWORD *)(a1 + 40)
      && !memcmp(v6, v5, v7)
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
