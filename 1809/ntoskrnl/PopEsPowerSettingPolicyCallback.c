/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140763590
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopEsQueueStateEvaluation @ 0x14071A4C0 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( *a2 == 1 )
    {
      if ( !byte_140418114 )
      {
        v5 = 1;
        byte_140418114 = 1;
      }
    }
    else if ( !*a2 && byte_140418114 )
    {
      v5 = 1;
      byte_140418114 = 0;
    }
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
