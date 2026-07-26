/*
 * XREFs of ndisSetRemoveWakeUpPattern @ 0x1C00E8D20
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00E7220 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // r8d
  int v5; // edx
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // ecx

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x29u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = 24;
  *a2 = 1;
  if ( v4 < 0x18 )
    goto LABEL_10;
  v6 = *(_DWORD **)(a1 + 40);
  v7 = 0;
  v8 = v6[2];
  if ( !v8 || (v9 = v8 + 24, v9 < 0x18) || (v10 = v6[3], v10 < v9) || (v11 = v10 + v6[4], v11 < v10) )
  {
    v7 = -1073676267;
    goto LABEL_13;
  }
  v5 = v11;
  if ( v4 >= v11 )
  {
    *a2 = 0;
  }
  else
  {
LABEL_10:
    *(_DWORD *)(a1 + 56) = v5;
    v7 = -1073676268;
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_q(0x2Au, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
  }
LABEL_13:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x2Bu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
  return v7;
}
