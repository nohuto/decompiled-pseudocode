/*
 * XREFs of MiGetValidAweProtection @ 0x1402B0F80
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetValidAweProtection(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return (a1 & 0x800) != 0LL ? 4 : 1;
  else
    return 24LL;
}
