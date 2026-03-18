/*
 * XREFs of PopDirectedDripsBuildPs4BroadcastTree @ 0x1408B8C9C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B89CC (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408B82D4 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x1408B8E14 (PopDirectedDripsFindPs4RootDevice.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1408B8E34 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1408B8E6C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x1408B9004 (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1408B9058 (PopDirectedDripsVisitPs4Device.c)
 */

__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 Ps4RootDevice; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // r8d
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF

  v18[1] = v18;
  v18[0] = v18;
  PopDirectedDripsInsertQueueDevice(v18);
  while ( 1 )
  {
    v5 = v18[0];
    if ( (_QWORD *)v18[0] == v18 )
      return 0;
    if ( *(_QWORD **)(v18[0] + 8LL) != v18 || (v6 = *(_QWORD *)v18[0], *(_QWORD *)(*(_QWORD *)v18[0] + 8LL) != v18[0]) )
      __fastfail(3u);
    v18[0] = *(_QWORD *)v18[0];
    *(_QWORD *)(v6 + 8) = v18;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    if ( (*(_DWORD *)(v5 + 32) & 0x20000) == 0 )
    {
      PopDirectedDripsVisitDevice(a2, v5, a3, 4LL);
      Ps4RootDevice = PopDirectedDripsFindPs4RootDevice(v5 - 728);
      v8 = (_QWORD *)Ps4RootDevice;
      if ( !Ps4RootDevice )
      {
        *(_DWORD *)(v5 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v5 - 728, 3);
        v11 = 3221225659LL;
LABEL_20:
        PopDirectedDripsFlushDeviceQueue(v18, v10, v11);
        return v16;
      }
      v9 = PopDirectedDripsVisitPs4Device(Ps4RootDevice, v18, a2, a3);
      v11 = (unsigned int)v9;
      if ( v9 < 0 )
        goto LABEL_20;
      v12 = (_QWORD *)v8[1];
      v13 = v8;
      while ( v12 )
      {
        v13 = v12;
        v12 = (_QWORD *)v12[1];
      }
      while ( v13 != v8 )
      {
        v14 = PopDirectedDripsVisitPs4Device(v13, v18, a2, a3);
        v11 = (unsigned int)v14;
        if ( v14 < 0 )
          goto LABEL_20;
        v15 = (_QWORD *)*v13;
        if ( *v13 )
        {
          do
          {
            v13 = v15;
            v15 = (_QWORD *)v15[1];
          }
          while ( v15 );
        }
        else
        {
          v13 = (_QWORD *)v13[2];
        }
      }
    }
  }
}
