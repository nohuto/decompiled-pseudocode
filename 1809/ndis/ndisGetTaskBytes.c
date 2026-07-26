/*
 * XREFs of ndisGetTaskBytes @ 0x1C00452FC
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C0047F64 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetTaskBytes(__int64 a1)
{
  _DWORD *v1; // rbx
  int v3; // r8d
  int v4; // ecx
  unsigned int v5; // ebx

  v1 = *(_DWORD **)(a1 + 4128);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xE5u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
  v3 = v1[58] != 0 ? 64 : 28;
  if ( v1[52] || v1[50] || v1[56] || v1[54] )
    v3 = v1[58] != 0 ? 100 : 64;
  v4 = v1[62];
  v5 = v3 + 44;
  if ( !v4 )
    v5 = v3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0xE6u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, v5);
  return v5;
}
