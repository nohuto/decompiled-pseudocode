/*
 * XREFs of scl_AdjustOldSideBearingPoints @ 0x1C02B3D04
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_AdjustOldSideBearingPoints(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  int v5; // r9d
  unsigned int v6; // r8d
  __int64 result; // rax
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  v5 = *(_DWORD *)(v3 + 4 * v4);
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v6 = (v5 + 2) & 0xFFFFFFFC;
  else
    v6 = (v5 + 32) & 0xFFFFFFC0;
  *(_DWORD *)(v3 + 4 * v4) = v6;
  result = *(_QWORD *)(a1 + 16);
  v8 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 2);
  *(_DWORD *)(result + 4 * v8) += v6 - v5;
  return result;
}
