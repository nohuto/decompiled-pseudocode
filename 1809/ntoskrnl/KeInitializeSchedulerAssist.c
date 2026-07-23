/*
 * XREFs of KeInitializeSchedulerAssist @ 0x1409AC188
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeSchedulerAssist(__int64 a1)
{
  BOOL v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 25016) )
  {
LABEL_2:
    KiSchedulerAssistThreadFlagEnabled = v1;
    if ( !v1 )
      goto LABEL_3;
    goto LABEL_9;
  }
  if ( KiSchedulerAssistThreadFlagOverride != 1 )
  {
    v1 = KiSchedulerAssistThreadFlagOverride != 2;
    goto LABEL_2;
  }
  KiSchedulerAssistThreadFlagEnabled = 1;
LABEL_9:
  _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 24), 0x16u);
LABEL_3:
  result = (unsigned int)(KiVpThreadSystemWorkPriority - 1);
  if ( (unsigned int)result > 0x1E )
    KiVpThreadSystemWorkPriority = 1;
  if ( *(_QWORD *)(a1 + 25016) )
    KiIrqlFlags |= 1u;
  return result;
}
