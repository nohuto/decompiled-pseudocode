/*
 * XREFs of PopDirectedDripsInitializeBroadcast @ 0x1408A3B54
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x1408A4498 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140159598 (IoControlPnpDeviceActionQueue.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F1DD4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402F2D40 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PoInitializeBroadcast @ 0x140728DE4 (PoInitializeBroadcast.c)
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408B8BC8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 */

__int64 __fastcall PopDirectedDripsInitializeBroadcast(struct _KEVENT *a1)
{
  volatile LONG Lock; // r9d
  signed __int32 LockNV; // eax
  signed __int32 v4; // ett
  __int16 v5; // r8
  BOOL v6; // edx
  bool v7; // cl
  int v8; // eax
  char v9; // cl
  char v10; // r14
  int v11; // r8d
  unsigned int v12; // r15d
  int v13; // ebx
  _DWORD *v14; // rdx
  _QWORD *i; // rax
  int v16; // eax
  _QWORD *v17; // rax
  struct _KEVENT *v18; // rsi
  int v19; // ebp
  int v20; // eax
  char v21; // si
  _QWORD *v22; // rcx
  _QWORD *j; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  struct _KEVENT *v28[5]; // [rsp+20h] [rbp-28h] BYREF
  int v29; // [rsp+50h] [rbp+8h] BYREF

  Lock = a1[2].Header.Lock;
  v28[0] = 0LL;
  v28[1] = 0LL;
  _m_prefetchw(a1);
  LockNV = a1->Header.LockNV;
  do
  {
    v4 = LockNV;
    LockNV = _InterlockedCompareExchange(&a1->Header.Lock, LockNV, LockNV);
  }
  while ( v4 != LockNV );
  v5 = LockNV;
  v6 = (LockNV & 0x1000) != 0 && (Lock & 1) != 0;
  v7 = (Lock & 2) != 0 && (LockNV & 0x2000) != 0;
  v8 = v6 | 2;
  if ( !v7 )
    v8 = v6;
  v9 = 0;
  if ( (v5 & 0x400) != 0 )
  {
    v8 |= 1u;
    v9 = 1;
  }
  v10 = v9 | 2;
  v11 = v5 & 0x800;
  if ( !v11 )
    v10 = v9;
  v12 = v8 | 2;
  if ( !v11 )
    v12 = v8;
  if ( v12 )
  {
    IoControlPnpDeviceActionQueue(1);
    v14 = IopRootDeviceNode;
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
      v14 = i;
    while ( v14 != IopRootDeviceNode )
    {
      v14[74] &= ~0x100u;
      *((_QWORD *)v14 + 92) = v14 + 182;
      *((_QWORD *)v14 + 91) = v14 + 182;
      *((_QWORD *)v14 + 94) = v14 + 186;
      *((_QWORD *)v14 + 93) = v14 + 186;
      v16 = v14[190];
      v14[191] = 0;
      v14[190] = v16 & 0xFFF8FFFF;
      v17 = *(_QWORD **)v14;
      if ( *(_QWORD *)v14 )
      {
        do
        {
          v14 = v17;
          v17 = (_QWORD *)v17[1];
        }
        while ( v17 );
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)v14 + 2);
      }
    }
    PopFxBuildDirectedDripsCandidateDeviceList(v28);
    v18 = v28[0];
    v19 = 0;
    v29 = 0;
    if ( (struct _KEVENT **)v28[0] == v28 )
      goto LABEL_52;
    do
    {
      v20 = PopDirectedDripsBuildBroadcastTreePartial(*(_QWORD *)&v18[-34].Header.Lock, v12, &v29);
      v13 = v20;
      if ( v20 < 0 )
      {
        if ( v20 != -1073741637 )
          goto LABEL_53;
      }
      else
      {
        ++v19;
      }
      v18 = *(struct _KEVENT **)&v18->Header.Lock;
    }
    while ( v18 != (struct _KEVENT *)v28 );
    if ( v19 && (v21 = v29, v29) )
    {
      v13 = 0;
      if ( (v10 & 1) == 0 && (v29 & 1) != 0 )
      {
        PopQueueDirectedDripsWork(a1, 0x200uLL);
        v13 = -1073741267;
      }
      if ( (v10 & 2) == 0 && (v21 & 2) != 0 )
      {
        PopQueueDirectedDripsWork(a1, 0x100uLL);
        v13 = -1073741267;
      }
      if ( v13 >= 0 )
      {
        v22 = IopRootDeviceNode;
        for ( j = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); j; j = (_QWORD *)j[1] )
          v22 = j;
        while ( v22 != IopRootDeviceNode )
        {
          if ( (v22[95] & 0x30000) != 0 )
          {
            if ( (v22[95] & 0x20000) != 0 )
            {
              v24 = v22[97];
              if ( v24 )
                ++*(_DWORD *)(v24 + 132);
            }
            else if ( (v22[95] & 0x10000) != 0 )
            {
              v25 = v22[97];
              if ( v25 )
                ++*(_DWORD *)(v25 + 128);
            }
            *((_DWORD *)v22 + 74) |= 0x100u;
          }
          v26 = (_QWORD *)*v22;
          if ( *v22 )
          {
            do
            {
              v22 = v26;
              v26 = (_QWORD *)v26[1];
            }
            while ( v26 );
          }
          else
          {
            v22 = (_QWORD *)v22[2];
          }
        }
        v13 = PoInitializeBroadcast();
      }
    }
    else
    {
LABEL_52:
      v13 = -1073741823;
    }
LABEL_53:
    PopFxDestroyDirectedDripsCandidateDeviceList(v28);
    if ( v13 < 0 )
      IoControlPnpDeviceActionQueue(0);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
