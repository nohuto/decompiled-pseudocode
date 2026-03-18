/*
 * XREFs of MiGetWsleProtection @ 0x14005A5D0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiGetPfnProtection @ 0x14008DC70 (MiGetPfnProtection.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx

  v2 = (a2 >> 4) & 7;
  if ( v2 )
  {
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v3 & 0x18) == 8 )
    {
      v2 |= 0x18u;
    }
    else if ( (v3 & 0x10) != 0 )
    {
      v2 |= 8u;
    }
  }
  return v2;
}
