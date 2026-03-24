/*
 * XREFs of PopPepProcessEvent @ 0x1400FF5B4
 * Callers:
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PopPluginDevicePower @ 0x1400FF334 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x1400FF3B8 (PopPluginComponentActive.c)
 *     PopPluginComponentIdleState @ 0x1401764F4 (PopPluginComponentIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DC8E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x14086DF1C (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepTryPowerDownDevice @ 0x1400FEF1C (PopPepTryPowerDownDevice.c)
 *     PopPepCountReadyActivities @ 0x1400FF704 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400FF74C (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400FF7C4 (PopPepRequestWork.c)
 *     PopPepComponentGetWork @ 0x1400FF7F0 (PopPepComponentGetWork.c)
 *     PopPepPromoteActivities @ 0x1400FF954 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400FFAA0 (PopPepLockActivityLink.c)
 *     PopPepCompleteActivity @ 0x1400FFC40 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400FFD18 (PopPepTriggerActivity.c)
 */

char __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int ready; // r15d
  char Work; // r14
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  char v19; // [rsp+70h] [rbp+18h]

  v6 = (int)a3;
  v10 = PopPepLockActivityLink(a1, a2, a3);
  if ( (_DWORD)v6 == 6 || (v11 = *((_DWORD *)&unk_14034FD3C + 34 * v6), (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( a4 != 6 )
    PopPepTriggerActivity(a1, a2, a4, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
