/*
 * XREFs of PopDirectedDripsMarkDfxDevice @ 0x1408B9608
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B90FC (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsInsertQueueDevice @ 0x1408B959C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x1408B9734 (PopDirectedDripsVisitDevice.c)
 */

unsigned __int64 __fastcall PopDirectedDripsMarkDfxDevice(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  __int64 v9; // r8
  bool v10; // bp
  __int16 v11; // cx
  _QWORD *i; // rdi
  _QWORD **v13; // rsi
  _QWORD *j; // rdi
  __int64 v15; // rbx

  *(_DWORD *)(a3 + 32) |= 0x10000u;
  PopDirectedDripsVisitDevice(a2, a3, a4, 1LL);
  result = *(unsigned int *)(a3 + 32);
  v9 = *(_QWORD *)(a3 - 648);
  v10 = 0;
  if ( (result & 4) == 0 )
  {
    if ( !v9
      || (v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 816), 0, 0),
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 816), 0, 0),
          v10 = (result & 0x400) != 0,
          (v11 & 0x200) == 0) )
    {
      for ( i = *(_QWORD **)(a3 - 720); i; i = (_QWORD *)*i )
      {
        PopDirectedDripsVisitDevice(a2, i + 91, a4, 2LL);
        result = (unsigned __int64)PopDirectedDripsInsertQueueDevice(a1, i + 91);
      }
    }
    if ( !v10 )
    {
      v13 = (_QWORD **)(a3 - 568);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        v15 = *(j - 1);
        PopDirectedDripsVisitDevice(a2, v15 + 584, a4, 3LL);
        result = (unsigned __int64)PopDirectedDripsInsertQueueDevice(a1, (_QWORD *)(v15 + 584));
      }
    }
  }
  return result;
}
