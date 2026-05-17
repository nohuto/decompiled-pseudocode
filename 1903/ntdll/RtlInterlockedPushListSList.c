/*
 * XREFs of RtlInterlockedPushListSList @ 0x1800A0260
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 *     sub_1800E6AAC @ 0x1800E6AAC (sub_1800E6AAC.c)
 *     RtlInterlockedPushListSListEx @ 0x1800F8E20 (RtlInterlockedPushListSListEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedPushListSList(_QWORD *a1, signed __int64 a2, _QWORD *a3, __int16 a4)
{
  __int128 v6; // rax
  __int64 v7; // r10
  signed __int64 v8; // rbx
  __int128 v9; // rt0
  unsigned __int8 v10; // tt

  _m_prefetchw(a1);
  *(_QWORD *)&v6 = *a1;
  *((_QWORD *)&v6 + 1) = a1[1];
  do
  {
    v7 = *((_QWORD *)&v6 + 1);
    LOBYTE(v7) = BYTE8(v6) & 0xF0;
    *a3 = v7;
    v8 = v6 + 0x10000;
    LOWORD(v8) = v6 + a4;
    v9 = v6;
    v10 = _InterlockedCompareExchange128(a1, a2, v8, (signed __int64 *)&v9);
    v6 = v9;
  }
  while ( !v10 );
  return v7;
}
