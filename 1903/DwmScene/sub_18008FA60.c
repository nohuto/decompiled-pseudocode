/*
 * XREFs of sub_18008FA60 @ 0x18008FA60
 * Callers:
 *     sub_180090B78 @ 0x180090B78 (sub_180090B78.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800E0320 @ 0x1800E0320 (sub_1800E0320.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008FA60(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(float *)(a1 + 12) == *(float *)(a2 + 12)
      && *(float *)(a1 + 16) == *(float *)(a2 + 16)
      && *(float *)(a1 + 20) == *(float *)(a2 + 20)
      && *(_BYTE *)(a1 + 24) == *(_BYTE *)(a2 + 24)
      && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28)
      && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
      && *(_DWORD *)(a1 + 36) == *(_DWORD *)(a2 + 36)
      && *(_DWORD *)(a1 + 40) == *(_DWORD *)(a2 + 40)
      && *(_DWORD *)(a1 + 44) == *(_DWORD *)(a2 + 44)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48)
      && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52)
      && *(_DWORD *)(a1 + 56) == *(_DWORD *)(a2 + 56)
      && *(_BYTE *)(a1 + 60) == *(_BYTE *)(a2 + 60)
      && *(_BYTE *)(a1 + 61) == *(_BYTE *)(a2 + 61)
      && *(_BYTE *)(a1 + 62) == *(_BYTE *)(a2 + 62)
      && *(_BYTE *)(a1 + 63) == *(_BYTE *)(a2 + 63)
      && *(_BYTE *)(a1 + 64) == *(_BYTE *)(a2 + 64)
      && *(_DWORD *)(a1 + 68) == *(_DWORD *)(a2 + 68);
}
