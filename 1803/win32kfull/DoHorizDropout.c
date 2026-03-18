/*
 * XREFs of DoHorizDropout @ 0x1C02C2974
 * Callers:
 *     LookForDropouts @ 0x1C02C2EC0 (LookForDropouts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GetBitAbs @ 0x1C02C2D50 (GetBitAbs.c)
 *     HorizCrossings @ 0x1C02C2E30 (HorizCrossings.c)
 *     SetBitAbs @ 0x1C02C3050 (SetBitAbs.c)
 *     VertCrossings @ 0x1C02C30BC (VertCrossings.c)
 */

__int64 __fastcall DoHorizDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v6; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // edi
  int v13; // edi
  __int64 v14; // rcx
  int v16; // ebx
  int v17; // ebx
  int v18; // esi

  v6 = *a1;
  v10 = v6 - 1;
  if ( (a5 & 1) != 0 )
  {
    v11 = a3 + 1;
    v12 = VertCrossings(v10, a3 + 1);
    v13 = VertCrossings(v6, v11) + v12;
    if ( (int)(HorizCrossings(v6, v11) + v13) < 2 )
      return 0LL;
    v16 = HorizCrossings(v14, a3 - 1);
    v17 = VertCrossings(v10, a3) + v16;
    if ( (int)(VertCrossings(v6, a3) + v17) < 2 )
      return 0LL;
  }
  if ( (int)v6 > dword_1C032FE28 && (unsigned int)GetBitAbs(a4, v10, a3)
    || (int)v6 < dword_1C032FE2C && (unsigned int)GetBitAbs(a4, v6, a3) )
  {
    return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (a1[1] & 3) + 54])(
            a3,
            qword_1C032FF18 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2),
            qword_1C032FF20 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2))
        - 1;
    v10 = (int)((*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2
                                                                                            * (*(_WORD *)(a2 + 2) & 3)
                                                                                            + 54])(
                  a3,
                  qword_1C032FF18 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2),
                  qword_1C032FF20 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2))
              + v18) >> 7;
  }
  if ( (int)v10 < dword_1C032FE28 )
    v10 = dword_1C032FE28;
  if ( (int)v10 >= dword_1C032FE2C )
    v10 = dword_1C032FE2C - 1;
  return SetBitAbs(a4, v10, a3);
}
