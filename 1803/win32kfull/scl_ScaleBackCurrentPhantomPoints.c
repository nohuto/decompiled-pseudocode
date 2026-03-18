/*
 * XREFs of scl_ScaleBackCurrentPhantomPoints @ 0x1C02B53E8
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ScaleBack @ 0x1C02B52B8 (scl_ScaleBack.c)
 */

void __fastcall scl_ScaleBackCurrentPhantomPoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _DWORD *v5; // r8
  __int64 v6; // rdx
  int *v7; // rcx

  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  v5 = (_DWORD *)(*(_QWORD *)a1 + 4 * v4);
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleBack((int *)(a2 + 264), a2, (__int64)v5, v5, 8);
    v7 = (int *)(a2 + 280);
  }
  else
  {
    scl_ScaleBack((int *)(a2 + 232), a2, (__int64)v5, v5, 8);
    v7 = (int *)(a2 + 248);
  }
  scl_ScaleBack(v7, v6, *(_QWORD *)(a1 + 8) + 4 * v4, (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4), 8);
}
