/*
 * XREFs of DrvSetMDEVPowerState @ 0x1C00D5B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DrvSetMDEVPowerState(__int64 a1, int a2)
{
  __int64 i; // r9
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // eax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); *(_DWORD *)(v3 + 160) = v5 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40 * i + 32) + 2568LL);
    v4 = *(_DWORD *)(v3 + 160);
    if ( a2 )
      v5 = v4 & 0x7FFFFFFF;
    else
      v5 = v4 | 0x80000000;
    i = (unsigned int)(i + 1);
  }
}
