/*
 * XREFs of sub_1800058F4 @ 0x1800058F4
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800058F4(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  int v3; // eax
  __int64 result; // rax

  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 324);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 320);
  *(_DWORD *)(a1 + 68) = *(_QWORD *)(a2 + 344) / -10000000LL;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 208) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 392);
  v3 = *(_DWORD *)(a2 + 388);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = v3;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 368);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 16);
  if ( a3 )
    *(_DWORD *)(a1 + 164) = *a3;
  result = *(unsigned __int16 *)(a2 + 20);
  *(_WORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 11) = 1;
  return result;
}
