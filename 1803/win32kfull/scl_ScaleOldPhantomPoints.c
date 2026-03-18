/*
 * XREFs of scl_ScaleOldPhantomPoints @ 0x1C02B5880
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_Scale @ 0x1C02B50E0 (scl_Scale.c)
 */

__int64 __fastcall scl_ScaleOldPhantomPoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int *v5; // r9
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx

  v4 = 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  v5 = (int *)(v4 + *(_QWORD *)(a1 + 16));
  v6 = v4 + *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_Scale((int *)(a2 + 264), *(_DWORD *)(a2 + 184), v6, v5, 8);
    v7 = *(_DWORD *)(a2 + 188);
    v8 = 280LL;
  }
  else
  {
    scl_Scale((int *)(a2 + 232), *(_DWORD *)(a2 + 176), v6, v5, 8);
    v7 = *(_DWORD *)(a2 + 180);
    v8 = 248LL;
  }
  return scl_Scale((int *)(a2 + v8), v7, v4 + *(_QWORD *)(a1 + 40), (int *)(v4 + *(_QWORD *)(a1 + 24)), 8);
}
