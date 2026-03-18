/*
 * XREFs of InvokeRoundValue @ 0x1C02C5448
 * Callers:
 *     itrp_MDAP @ 0x1C02CB080 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CB730 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_ROUND @ 0x1C02CD7A0 (itrp_ROUND.c)
 * Callees:
 *     itrp_RoundDownToGrid @ 0x1C02CDB6C (itrp_RoundDownToGrid.c)
 *     itrp_RoundDownToGridSP @ 0x1C02CDB98 (itrp_RoundDownToGridSP.c)
 *     itrp_RoundOff @ 0x1C02CDBF8 (itrp_RoundOff.c)
 *     itrp_RoundOffSP @ 0x1C02CDC20 (itrp_RoundOffSP.c)
 *     itrp_RoundToGrid @ 0x1C02CDC54 (itrp_RoundToGrid.c)
 *     itrp_Super45Round @ 0x1C02D0460 (itrp_Super45Round.c)
 *     itrp_SuperRound @ 0x1C02D0528 (itrp_SuperRound.c)
 */

__int64 __fastcall InvokeRoundValue(int a1, int a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  bool v12; // cc
  unsigned int v13; // r8d
  bool v14; // sf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax

  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
      return itrp_Super45Round((unsigned int)a2, a3);
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
        return itrp_RoundDownToGrid((unsigned int)a2, a3);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return itrp_RoundToGrid((unsigned int)a2, a3);
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
            return itrp_RoundOff((unsigned int)a2, a3);
          if ( v8 == 1 )
            return itrp_SuperRound((unsigned int)a2, a3);
          goto LABEL_42;
        }
        v10 = -32;
        if ( a2 < 0 )
          v11 = -32 - ((a3 - a2) & 0xFFFFFFC0);
        else
          v11 = ((a2 + a3) & 0xFFFFFFC0) + 32;
        if ( ((a2 ^ v11) & 0x80000000) == 0 )
          return v11;
        v12 = a2 <= 0;
        if ( !a2 )
          return v11;
        v11 = 32;
LABEL_18:
        if ( v12 )
          return v10;
        return v11;
      }
      if ( a2 < 0 )
        v13 = -((a3 - a2 + 63) & 0xFFFFFFC0);
      else
        v13 = (a2 + a3 + 63) & 0xFFFFFFC0;
      v14 = ((a2 ^ v13) & 0x80000000) != 0;
    }
    else
    {
      if ( a2 < 0 )
        v13 = -((a3 - a2 + 16) & 0xFFFFFFE0);
      else
        v13 = (a2 + a3 + 16) & 0xFFFFFFE0;
      v14 = ((a2 ^ v13) & 0x80000000) != 0;
    }
    if ( v14 && a2 )
      return 0;
    return v13;
  }
  v15 = a1 - 9;
  if ( !v15 )
  {
    v26 = (int)a3 / 2;
    if ( a2 >= 0 )
    {
      result = (a2 + v26 + 1) & 0xFFFFFFFE;
      goto LABEL_63;
    }
    v24 = (v26 - a2 + 1) & 0xFFFFFFFE;
LABEL_62:
    result = -v24;
    goto LABEL_63;
  }
  v16 = v15 - 1;
  if ( !v16 )
    return itrp_RoundDownToGridSP((unsigned int)a2, a3);
  v17 = v16 - 1;
  if ( !v17 )
  {
    v25 = (int)a3 / 2;
    if ( a2 >= 0 )
    {
      v22 = v25 + 3;
      goto LABEL_52;
    }
    v23 = v25 - a2 + 3;
    goto LABEL_54;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = (int)a3 / 2;
    if ( a2 >= 0 )
    {
      v22 = v21 + 2;
LABEL_52:
      result = (a2 + v22) & 0xFFFFFFFC;
LABEL_63:
      if ( (int)(a2 ^ result) < 0 && a2 )
        return 0LL;
      return result;
    }
    v23 = v21 - a2 + 2;
LABEL_54:
    v24 = v23 & 0xFFFFFFFC;
    goto LABEL_62;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v20 = (int)a3 / 2;
    v10 = -2;
    if ( a2 < 0 )
      v11 = -2 - ((v20 - a2) & 0xFFFFFFFC);
    else
      v11 = ((v20 + a2) & 0xFFFFFFFC) + 2;
    if ( ((a2 ^ v11) & 0x80000000) == 0 )
      return v11;
    v12 = a2 <= 0;
    if ( !a2 )
      return v11;
    v11 = 2;
    goto LABEL_18;
  }
  if ( v19 != 1 )
  {
LABEL_42:
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return itrp_RoundOffSP((unsigned int)a2, a3);
}
