/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x1C017BB54
 * Callers:
 *     DpEvalAcpiMethod @ 0x1C0148560 (DpEvalAcpiMethod.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C017B9A4 (DpiFdoCreateChildDescriptor.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C017BBB8 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rdx

  v4 = DpiAcpiPrepareAcpiChildNameList(a1);
  v5 = 0;
  if ( v4 < 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3280);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 3296);
  while ( a2 != *(_DWORD *)(v7 + 16LL * v5) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return *(_QWORD *)(v7 + 16LL * v5 + 8);
}
