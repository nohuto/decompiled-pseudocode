/*
 * XREFs of PopDirectedDripsVisitPs4Device @ 0x14087D6EC
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14087D478 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x14087D118 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x14087D634 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x14087D674 (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x14087D6A0 (PopDirectedDripsVisitDevice.c)
 */

__int64 __fastcall PopDirectedDripsVisitPs4Device(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  bool IsLikelySpecialDevice; // al
  __int64 v8; // rcx
  unsigned int v9; // r11d
  __int64 v10; // r10
  __int64 i; // r9
  __int64 *v12; // r9

  v4 = a1 + 728;
  PopDirectedDripsVisitDevice(a3, a1 + 728, a4);
  IsLikelySpecialDevice = PopDirectedDripsIsLikelySpecialDevice(a1);
  v9 = 0;
  if ( IsLikelySpecialDevice || (*(_DWORD *)(v4 + 32) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 32) |= 0x40000u;
    PopDirectedDripsDiagTraceProblemDevice(v8, 0);
    return (unsigned int)-1073741637;
  }
  else
  {
    v10 = a1 + 160;
    *(_DWORD *)(v4 + 32) |= 0x20000u;
    for ( i = *(_QWORD *)(a1 + 160); i != v10; i = *v12 )
      PopDirectedDripsInsertQueueDevice(a2, (_QWORD *)(*(_QWORD *)(i - 8) + 584LL));
  }
  return v9;
}
