/*
 * XREFs of scl_ShiftOldPoints @ 0x1C02B5AA8
 * Callers:
 *     scl_AdjustOldCharSideBearing @ 0x1C02B3C30 (scl_AdjustOldCharSideBearing.c)
 *     scl_AdjustOldPhantomSideBearing @ 0x1C02B3C98 (scl_AdjustOldPhantomSideBearing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ShiftOldPoints(__int64 a1, int a2, __int64 a3, unsigned __int16 a4, unsigned __int16 a5)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx

  if ( a2 )
  {
    v7 = a5;
    result = a5 + (unsigned int)a4;
    if ( a4 < (unsigned int)result )
    {
      v9 = 4LL * a4;
      do
      {
        result = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v9 + result) += a2;
        v9 += 4LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
