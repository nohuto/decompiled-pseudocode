/*
 * XREFs of QDIV @ 0x1C02A6498
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02A6578 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QDIV(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rtt

  v3 = 0LL;
  v4 = -(__int64)*a2;
  v5 = *a2 >> 63;
  if ( (*a2 & 0x8000000000000000uLL) == 0LL )
    v4 = *a2;
  v8 = v4;
  result = v4 / a3;
  v7 = v8 % a3;
  *a1 = result;
  if ( (_BYTE)v5 )
  {
    result = -(__int64)result;
    *a1 = result;
    if ( v7 )
    {
      *a1 = --result;
      v3 = a3 - v7;
    }
  }
  else
  {
    v3 = v7;
  }
  a1[1] = v3;
  return result;
}
