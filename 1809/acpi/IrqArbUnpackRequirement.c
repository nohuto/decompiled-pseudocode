/*
 * XREFs of IrqArbUnpackRequirement @ 0x1C009EFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbUnpackRequirement(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 1) != 2 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
  {
    *a3 = 4294967294LL;
    v5 = 4293918720LL;
  }
  else
  {
    *a3 = *(unsigned int *)(a1 + 12);
    v5 = *(unsigned int *)(a1 + 8);
  }
  *a2 = v5;
  *a4 = 1LL;
  *a5 = 1LL;
  return 0LL;
}
