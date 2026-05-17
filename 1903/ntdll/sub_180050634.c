/*
 * XREFs of sub_180050634 @ 0x180050634
 * Callers:
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 * Callees:
 *     sub_18004F808 @ 0x18004F808 (sub_18004F808.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180050634(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = a2;
  v6 = sub_18004F808(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v8 = *(_QWORD *)(v6 + 24);
    else
      v8 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v8 << 20;
    v9 = *(unsigned __int8 *)(v6 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v9 + 46) >> 1) & 3;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v9 + 45);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    return 0LL;
  }
  else
  {
    sub_18010A694(22, v3, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
}
