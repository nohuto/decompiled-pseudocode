/*
 * XREFs of HvlMarkHiberPhase @ 0x14028AB80
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x14028B238 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14028B308 (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    result = HvlpMarkHypervisorPagesForHibernation();
  if ( HvlHypervisorConnected )
    return HvlpMarkHvlPagesForHibernation();
  return result;
}
