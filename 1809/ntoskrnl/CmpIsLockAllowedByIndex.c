/*
 * XREFs of CmpIsLockAllowedByIndex @ 0x1407F1AB4
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsLockAllowedByIndex(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // ecx

  v5 = *(_DWORD *)(a1 + 1668);
  v6 = *(_DWORD *)(a3 + 1668);
  *a5 = 0;
  if ( v5 < v6 )
    return 1;
  if ( v5 <= v6 )
  {
    if ( a2 < a4 )
      return 1;
    if ( a2 == a4 )
    {
      *a5 = 1;
      return 1;
    }
  }
  return 0;
}
