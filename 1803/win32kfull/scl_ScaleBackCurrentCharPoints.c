/*
 * XREFs of scl_ScaleBackCurrentCharPoints @ 0x1C02B532C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ScaleBack @ 0x1C02B52B8 (scl_ScaleBack.c)
 */

void __fastcall scl_ScaleBackCurrentCharPoints(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rdx
  int *v7; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD **)a1;
  v8 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleBack((int *)(a2 + 264), a2, v4, v5, v8);
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
    v7 = (int *)(a2 + 280);
  }
  else
  {
    scl_ScaleBack((int *)(a2 + 232), a2, v4, v5, v8);
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
    v7 = (int *)(a2 + 248);
  }
  LOWORD(v6) = v6 + 1;
  scl_ScaleBack(v7, v6, *(_QWORD *)(a1 + 8), *(_DWORD **)(a1 + 8), (unsigned __int16)v6);
}
