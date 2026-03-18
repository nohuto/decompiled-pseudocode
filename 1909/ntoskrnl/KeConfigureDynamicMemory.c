/*
 * XREFs of KeConfigureDynamicMemory @ 0x1402A4394
 * Callers:
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 * Callees:
 *     VslConfigureDynamicMemory @ 0x14028EF68 (VslConfigureDynamicMemory.c)
 *     HvlpAddPhysicalMemory @ 0x14034CD68 (HvlpAddPhysicalMemory.c)
 */

NTSTATUS __fastcall KeConfigureDynamicMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdx
  NTSTATUS result; // eax

  if ( a1 > a2 )
    goto LABEL_9;
  v6 = a2 - a1;
  if ( v6 == -1LL )
    goto LABEL_9;
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    if ( !a3 )
    {
      result = HvlpAddPhysicalMemory(a1, v6 + 1);
      goto LABEL_10;
    }
    if ( a3 - 1 <= 1 )
    {
      result = 0;
      goto LABEL_10;
    }
LABEL_9:
    result = -1073741811;
LABEL_10:
    if ( result < 0 )
      return result;
  }
  return VslConfigureDynamicMemory(a1, a2, a3);
}
