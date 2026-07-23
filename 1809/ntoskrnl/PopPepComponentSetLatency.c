/*
 * XREFs of PopPepComponentSetLatency @ 0x1402DCBB4
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402D74E0 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x1400FF784 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400FF7CC (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400FF844 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400FF9D4 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x1400FFFE4 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140179948 (PopPepComponentGetLatencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = (__int64)&a1[50 * a2 + 46];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v5, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v12);
  *(_QWORD *)(v5 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v5 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v5 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v10 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v5, v8, v12);
}
