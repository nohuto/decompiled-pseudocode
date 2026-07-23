/*
 * XREFs of PopPepComponentSetWakeHint @ 0x1402DCD8C
 * Callers:
 *     PoFxSetComponentWake @ 0x1402D7580 (PoFxSetComponentWake.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x1400FF784 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400FF7CC (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400FF844 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400FF9D4 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x1400FFFE4 (PopPepUpdateIdleState.c)
 */

__int64 __fastcall PopPepComponentSetWakeHint(unsigned int *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdx
  __int64 v6; // rdi
  int v7; // ebx
  char v8; // al
  char v9; // r14
  unsigned int ready; // ebx
  unsigned int v11; // eax
  KIRQL v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = 50LL * a2;
  v6 = (__int64)&a1[v3 + 46];
  if ( a3 )
    v7 = *(_DWORD *)(v6 + 148);
  else
    v7 = *(_DWORD *)(v6 + 188) - 1;
  v8 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)&a1[v3 + 46], 6u, 1u, &v13);
  *(_BYTE *)(v6 + 144) = a3;
  v9 = v8;
  if ( *(_DWORD *)(v6 + 164) != v7 )
  {
    *(_DWORD *)(v6 + 164) = v7;
    ready = PopPepCountReadyActivities(a1, v6, 2);
    PopPepUpdateIdleState((__int64)a1, v6, 1);
    PopPepPromoteActivities((__int64)a1, v6, 2);
    v11 = PopPepCountReadyActivities(a1, v6, 2);
    PopPepRequestWork(ready, v11);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v6, v9, v13);
}
