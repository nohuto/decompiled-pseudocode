/*
 * XREFs of ViXdvGetFuncAddress @ 0x140929730
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140929510 (ViXdvDriverLoadImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViXdvGetFuncAddress(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // ecx

  v4 = *(unsigned __int16 *)(a1 + (unsigned int)a2[9] + 2LL * a3);
  if ( v4 < a2[5] )
    return a1 + *(unsigned int *)(a1 + (unsigned int)a2[7] + 4LL * (unsigned __int16)v4);
  else
    return 0LL;
}
