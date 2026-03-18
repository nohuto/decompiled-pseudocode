/*
 * XREFs of unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00D6B50
 * Callers:
 *     SetDialogPointer @ 0x1C00D6A20 (SetDialogPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_zero_to_PDIALOG(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_WORD *)(v1 + 42) & 0x3FFF;
  if ( !v2 )
    return *(_QWORD *)(v1 + 296);
  if ( v2 != 676 )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(v1 + 296);
  return *(_QWORD *)(a1 + 280);
}
