/*
 * XREFs of PopDirectedDripsBuildPs4BroadcastTree @ 0x14087D478
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 * Callees:
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x14087D118 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x14087D5DC (PopDirectedDripsFindPs4RootDevice.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x14087D5FC (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x14087D634 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsVisitPs4Device @ 0x14087D6EC (PopDirectedDripsVisitPs4Device.c)
 */

__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 Ps4RootDevice; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int v18; // r8d
  _QWORD v20[2]; // [rsp+20h] [rbp-10h] BYREF

  v20[1] = v20;
  v20[0] = v20;
  PopDirectedDripsInsertQueueDevice(v20, a1 + 728);
  while ( 1 )
  {
    v5 = v20[0];
    if ( (_QWORD *)v20[0] == v20 )
      return 0;
    if ( *(_QWORD **)(v20[0] + 8LL) != v20 || (v6 = *(_QWORD *)v20[0], *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) != v20[0]) )
      __fastfail(3u);
    v20[0] = *(_QWORD *)v20[0];
    *(_QWORD *)(v6 + 8) = v20;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    if ( (*(_DWORD *)(v5 + 32) & 0x20000) == 0 )
    {
      Ps4RootDevice = PopDirectedDripsFindPs4RootDevice(v5 - 728);
      v10 = (_QWORD *)Ps4RootDevice;
      if ( !Ps4RootDevice )
      {
        *(_DWORD *)(v8 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v9, 3);
        v13 = 3221225659LL;
LABEL_20:
        PopDirectedDripsFlushDeviceQueue(v20, v12, v13);
        return v18;
      }
      v11 = PopDirectedDripsVisitPs4Device(Ps4RootDevice, v20, a2, a3);
      v13 = (unsigned int)v11;
      if ( v11 < 0 )
        goto LABEL_20;
      v14 = (_QWORD *)v10[1];
      v15 = v10;
      while ( v14 )
      {
        v15 = v14;
        v14 = (_QWORD *)v14[1];
      }
      while ( v15 != v10 )
      {
        v16 = PopDirectedDripsVisitPs4Device(v15, v20, a2, a3);
        v13 = (unsigned int)v16;
        if ( v16 < 0 )
          goto LABEL_20;
        v17 = (_QWORD *)*v15;
        if ( *v15 )
        {
          do
          {
            v15 = v17;
            v17 = (_QWORD *)v17[1];
          }
          while ( v17 );
        }
        else
        {
          v15 = (_QWORD *)v15[2];
        }
      }
    }
  }
}
