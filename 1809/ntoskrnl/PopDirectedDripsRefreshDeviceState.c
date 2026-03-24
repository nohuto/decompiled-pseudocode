/*
 * XREFs of PopDirectedDripsRefreshDeviceState @ 0x1408685BC
 * Callers:
 *     PopDirectedDripsEngageDfx @ 0x140867B34 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsProcessWork @ 0x140868438 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsNotifyDrivers @ 0x140868158 (PopDirectedDripsNotifyDrivers.c)
 */

void __fastcall PopDirectedDripsRefreshDeviceState(signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r8

  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    _m_prefetchw(a1);
    v5 = *a1;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange(a1, v5, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x10) != 0 )
    {
      v7 = (__int64)(a1 + 58);
      LOBYTE(a4) = 1;
      PopDirectedDripsNotifyDrivers(a1, (__int64)(a1 + 58), 0LL, a4);
      LOBYTE(v8) = 1;
      LOBYTE(v9) = 1;
      PopDirectedDripsNotifyDrivers(a1, v7, v9, v8);
    }
  }
}
