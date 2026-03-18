/*
 * XREFs of KiIntSteerVerifyDestination @ 0x14013445C
 * Callers:
 *     KiIntSteerSetDestination @ 0x1401343E0 (KiIntSteerSetDestination.c)
 *     KiIntSteerComputeCpuSet @ 0x1402B1C30 (KiIntSteerComputeCpuSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerVerifyDestination(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 72) == *(_WORD *)(a2 + 8) && *(_QWORD *)a2 )
    return *(_QWORD *)(a1 + 64) != (*(_QWORD *)a2 | *(_QWORD *)(a1 + 64)) ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
