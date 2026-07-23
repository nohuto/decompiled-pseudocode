/*
 * XREFs of MiGetPageForEnclave @ 0x1402BE1BC
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiGetEnclavePage @ 0x1402BDF38 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiGetPageForEnclave(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    return MiGetEnclavePage(a2, 0, 0LL);
  v3 = *(_QWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = *v3;
  *(_QWORD *)(a1 + 104) = v2 - 1;
  v4 = (__int64)((unsigned __int128)((__int64)(v3 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  return v4 + (v4 >> 63);
}
