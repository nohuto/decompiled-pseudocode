/*
 * XREFs of PopDirectedDripsVisitPs4Device @ 0x1408B9058
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1408B8C9C (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408B82D4 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1408B8E6C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x1408B8EAC (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x1408B9004 (PopDirectedDripsVisitDevice.c)
 */

__int64 __fastcall PopDirectedDripsVisitPs4Device(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  _QWORD *v11; // rsi
  _QWORD *i; // rdi
  __int64 v13; // rbx

  v5 = a1 + 728;
  PopDirectedDripsVisitDevice(a3, a1 + 728, a4, 5);
  v10 = 0;
  if ( PopDirectedDripsIsLikelySpecialDevice(a1) || (*(_DWORD *)(v5 + 32) & 8) != 0 )
  {
    *(_DWORD *)(v5 + 32) |= 0x40000u;
    PopDirectedDripsDiagTraceProblemDevice(v9, 0);
    return (unsigned int)-1073741637;
  }
  else
  {
    v11 = (_QWORD *)(a1 + 160);
    *(_DWORD *)(v5 + 32) |= 0x20000u;
    for ( i = *(_QWORD **)(a1 + 160); i != v11; i = (_QWORD *)*i )
    {
      v13 = *(i - 1);
      PopDirectedDripsVisitDevice(a3, v13 + 584, a4, 6);
      PopDirectedDripsInsertQueueDevice(a2, (_QWORD *)(v13 + 584));
    }
  }
  return v10;
}
