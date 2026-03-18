/*
 * XREFs of sfac_ComputeIndex2 @ 0x1C02BEF1C
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C02BEC78 (InvokeGlyphMappingF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sfac_ComputeIndex2(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // r9
  __int64 v4; // r8
  __int16 v5; // ax
  __int64 v6; // r11
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // dx
  __int16 v9; // cx

  v3 = 0;
  v4 = HIBYTE(a2);
  v5 = *(_WORD *)(a1 + 2 * v4);
  a2 = (unsigned __int8)a2;
  if ( !v5 )
    a2 = v4;
  v6 = (unsigned __int16)__ROR2__(v5, 8);
  v7 = __ROR2__(*(_WORD *)(v6 + a1 + 512), 8);
  if ( a2 >= v7 )
  {
    v8 = a2 - v7;
    if ( v8 < __ROR2__(*(_WORD *)(v6 + a1 + 514), 8) )
    {
      v9 = __ROR2__(*(_WORD *)(v6 + a1 + 518 + (unsigned __int16)__ROR2__(*(_WORD *)(v6 + a1 + 518), 8) + 2LL * v8), 8);
      if ( v9 )
        return (unsigned __int16)(__ROR2__(v9, 8) + __ROR2__(*(_WORD *)(v6 + a1 + 516), 8));
    }
  }
  return v3;
}
