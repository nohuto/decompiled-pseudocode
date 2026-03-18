/*
 * XREFs of scl_ScaleOldCharPoints @ 0x1C02B57B4
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_Scale @ 0x1C02B50E0 (scl_Scale.c)
 */

__int64 __fastcall scl_ScaleOldCharPoints(__int64 a1, __int64 a2)
{
  int *v4; // r9
  __int64 v5; // r8
  int v6; // r10d
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-18h]

  v4 = *(int **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 32);
  v9 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_Scale((int *)(a2 + 264), *(_DWORD *)(a2 + 184), v5, v4, v9);
    v6 = *(_DWORD *)(a2 + 188);
    v7 = 280LL;
  }
  else
  {
    scl_Scale((int *)(a2 + 232), *(_DWORD *)(a2 + 176), v5, v4, v9);
    v6 = *(_DWORD *)(a2 + 180);
    v7 = 248LL;
  }
  return scl_Scale(
           (int *)(v7 + a2),
           v6,
           *(_QWORD *)(a1 + 40),
           *(int **)(a1 + 24),
           (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1));
}
