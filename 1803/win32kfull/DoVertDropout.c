/*
 * XREFs of DoVertDropout @ 0x1C02C2B04
 * Callers:
 *     LookForDropouts @ 0x1C02C2EC0 (LookForDropouts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GetBitAbs @ 0x1C02C2D50 (GetBitAbs.c)
 *     HorizCrossings @ 0x1C02C2E30 (HorizCrossings.c)
 *     SetBitAbs @ 0x1C02C3050 (SetBitAbs.c)
 *     VertCrossings @ 0x1C02C30BC (VertCrossings.c)
 */

__int64 __fastcall DoVertDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebp
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r11d
  int v14; // edi
  __int64 v15; // rcx
  int v16; // edi
  int v17; // esi

  v5 = *a1;
  if ( (int)v5 < dword_1C032FE48 )
    return 0LL;
  if ( (int)v5 > dword_1C032FE44 )
    return 0LL;
  v10 = v5 - 1;
  if ( (a5 & 1) != 0 )
  {
    VertCrossings(a3 - 1, v5);
    HorizCrossings(a3, v5);
    v12 = HorizCrossings(v11, (unsigned int)v10);
    if ( v12 + v13 < 2 )
      return 0LL;
    v14 = HorizCrossings(a3 + 1, v5);
    v16 = VertCrossings(v15, v5) + v14;
    if ( (int)(HorizCrossings(a3 + 1, (unsigned int)v10) + v16) < 2 )
      return 0LL;
  }
  if ( (int)v5 > dword_1C032FE34 && (unsigned int)GetBitAbs(a4, a3, (unsigned int)v10)
    || (int)v5 < dword_1C032FE30 && (unsigned int)GetBitAbs(a4, a3, v5) )
  {
    return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (a1[1] & 3) + 60])(
            a3,
            qword_1C032FF18 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2),
            qword_1C032FF20 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2))
        - 1;
    v10 = (int)((*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2
                                                                                            * (*(_WORD *)(a2 + 2) & 3)
                                                                                            + 60])(
                  a3,
                  qword_1C032FF18 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2),
                  qword_1C032FF20 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2))
              + v17) >> 7;
  }
  if ( v10 < dword_1C032FE34 )
    v10 = dword_1C032FE34;
  if ( v10 >= dword_1C032FE30 )
    v10 = dword_1C032FE30 - 1;
  if ( v10 < dword_1C032FE48 || v10 >= dword_1C032FE44 )
    return 0LL;
  else
    return SetBitAbs(a4, a3, (unsigned int)v10);
}
