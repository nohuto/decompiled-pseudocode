/*
 * XREFs of sub_18004AED4 @ 0x18004AED4
 * Callers:
 *     sub_18004AFB0 @ 0x18004AFB0 (sub_18004AFB0.c)
 * Callees:
 *     sub_18004AF48 @ 0x18004AF48 (sub_18004AF48.c)
 */

int __fastcall sub_18004AED4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rax

  sub_18004AF48(a1, a2, 0xFFFFFFFFLL);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)(a1 + 80) = 0LL;
  v6 = (unsigned __int16)word_180121270[v5];
  if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
  {
    v7 = (unsigned __int16)word_180121270[v5];
    _BitScanForward(&v8, *(unsigned __int16 *)(a3 + 60));
    LOBYTE(v8) = v8 + 18;
    *(_BYTE *)(a1 + 76) = v8;
    v9 = (v6 - 1 + (1LL << v8)) / v7;
    *(_DWORD *)(a1 + 72) = v9;
  }
  else
  {
    _BitScanForward((unsigned int *)&v9, v6);
    *(_BYTE *)(a1 + 76) = v9;
  }
  return v9;
}
