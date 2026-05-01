/*
 * XREFs of _HamConnectForExtendedExecution@8 @ 0x1000B2B0
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionInitialize@12 @ 0x1000B090 (_HampConnectionInitialize@12.c)
 *     _HampConnectionAllocateState@16 @ 0x1000B340 (_HampConnectionAllocateState@16.c)
 *     _RmpClientWnfCreateSubscription@16 @ 0x1000C072 (_RmpClientWnfCreateSubscription@16.c)
 */

int __stdcall HamConnectForExtendedExecution(int a1, char **a2)
{
  char *v2; // edi
  char *Heap; // eax
  char *v4; // esi
  int State; // ebx
  int Subscription; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  _DWORD v12[2]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  if ( !a1 )
    return -1073741585;
  v12[0] = a1;
  v12[1] = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x44u);
  v4 = Heap;
  if ( !Heap )
    return -1073741801;
  HampConnectionInitialize(v12, dword_10003528, Heap);
  State = HampConnectionAllocateState(v4, dword_10003528, 0, 0);
  if ( State >= 0 )
  {
    if ( *((_DWORD *)v4 + 16) != 6
      || (Subscription = RmpClientWnfCreateSubscription(v4, v4 + 12),
          State = Subscription >= 0 ? 0 : Subscription,
          State >= 0) )
    {
      v2 = v4;
      State = 0;
      goto LABEL_6;
    }
  }
  v8 = *((_DWORD *)v4 + 16);
  if ( v8 == 2 )
  {
LABEL_18:
    HamIpcChannelRundown((int)(v4 + 12));
    goto LABEL_19;
  }
  if ( v8 >= 0 )
  {
    if ( v8 > 3 )
    {
      if ( v8 == 6 )
      {
        v9 = (_DWORD *)*((_DWORD *)v4 + 3);
        if ( v9 )
          RmpClientWnfDestroySubscription(v9);
      }
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  HampConnectionCleanup(v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
LABEL_6:
  if ( State < 0 )
  {
    if ( !v2 )
      return State;
    v10 = *((_DWORD *)v2 + 16);
    if ( v10 != 2 )
    {
      if ( v10 < 0 )
      {
LABEL_28:
        HampConnectionCleanup(v2);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
        return State;
      }
      if ( v10 > 3 )
      {
        if ( v10 == 6 )
        {
          v11 = (_DWORD *)*((_DWORD *)v2 + 3);
          if ( v11 )
            RmpClientWnfDestroySubscription(v11);
        }
        goto LABEL_28;
      }
    }
    HamIpcChannelRundown((int)(v2 + 12));
    goto LABEL_28;
  }
  *a2 = v2;
  return 0;
}
