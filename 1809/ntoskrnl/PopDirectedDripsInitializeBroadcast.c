/*
 * XREFs of PopDirectedDripsInitializeBroadcast @ 0x14086905C
 * Callers:
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140135440 (IoControlPnpDeviceActionQueue.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402D76D4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D8070 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 */

__int64 __fastcall PopDirectedDripsInitializeBroadcast(unsigned __int32 *a1)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v2; // ett
  unsigned int v3; // esi
  ULONG_PTR v4; // rdx
  ULONG_PTR i; // rax
  int v6; // eax
  ULONG_PTR v7; // rax
  struct _KEVENT *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edi
  ULONG_PTR v11; // rcx
  ULONG_PTR j; // rax
  ULONG_PTR v13; // rax
  struct _KEVENT *v15[3]; // [rsp+20h] [rbp-18h] BYREF

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v1, v1);
  }
  while ( v2 != v1 );
  v3 = (v1 >> 10) & 1 | 2;
  if ( (v1 & 0x800) == 0 )
    v3 = (v1 >> 10) & 1;
  IoControlPnpDeviceActionQueue(1);
  v4 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v4 = i;
  while ( v4 != IopRootDeviceNode )
  {
    *(_DWORD *)(v4 + 296) &= ~0x100u;
    *(_QWORD *)(v4 + 736) = v4 + 728;
    *(_QWORD *)(v4 + 728) = v4 + 728;
    *(_QWORD *)(v4 + 752) = v4 + 744;
    *(_QWORD *)(v4 + 744) = v4 + 744;
    v6 = *(_DWORD *)(v4 + 760);
    *(_DWORD *)(v4 + 764) = 0;
    *(_DWORD *)(v4 + 760) = v6 & 0xFFF8FFFF;
    v7 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 )
    {
      do
      {
        v4 = v7;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v7 );
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
  PopFxBuildDirectedDripsCandidateDeviceList(v15);
  v8 = v15[0];
  if ( (struct _KEVENT **)v15[0] == v15 )
  {
LABEL_18:
    v11 = IopRootDeviceNode;
    for ( j = *(_QWORD *)(IopRootDeviceNode + 8); j; j = *(_QWORD *)(j + 8) )
      v11 = j;
    while ( v11 != IopRootDeviceNode )
    {
      if ( (*(_DWORD *)(v11 + 760) & 0x10000) != 0 || (*(_DWORD *)(v11 + 760) & 0x20000) != 0 )
        *(_DWORD *)(v11 + 296) |= 0x100u;
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        do
        {
          v11 = v13;
          v13 = *(_QWORD *)(v13 + 8);
        }
        while ( v13 );
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
    }
    v10 = PoInitializeBroadcast();
  }
  else
  {
    while ( 1 )
    {
      v9 = PopDirectedDripsBuildBroadcastTree(v8[-34].Header.WaitListHead.Flink, v3);
      v10 = v9;
      if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741637 )
        break;
      v8 = *(struct _KEVENT **)&v8->Header.Lock;
      if ( v8 == (struct _KEVENT *)v15 )
        goto LABEL_18;
    }
  }
  PopFxDestroyDirectedDripsCandidateDeviceList(v15);
  return v10;
}
