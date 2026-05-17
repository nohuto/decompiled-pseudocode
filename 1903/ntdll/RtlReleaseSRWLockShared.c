/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18001AAF0
 * Callers:
 *     sub_1800019C8 @ 0x1800019C8 (sub_1800019C8.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000835C @ 0x18000835C (sub_18000835C.c)
 *     sub_1800097B0 @ 0x1800097B0 (sub_1800097B0.c)
 *     sub_18000A060 @ 0x18000A060 (sub_18000A060.c)
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18001ABAC @ 0x18001ABAC (sub_18001ABAC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180046F54 @ 0x180046F54 (sub_180046F54.c)
 *     sub_180049F08 @ 0x180049F08 (sub_180049F08.c)
 *     sub_18004DDEC @ 0x18004DDEC (sub_18004DDEC.c)
 *     sub_18004E6DC @ 0x18004E6DC (sub_18004E6DC.c)
 *     sub_18004F318 @ 0x18004F318 (sub_18004F318.c)
 *     sub_18004F3A8 @ 0x18004F3A8 (sub_18004F3A8.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 *     sub_18006B980 @ 0x18006B980 (sub_18006B980.c)
 *     sub_18006BAC0 @ 0x18006BAC0 (sub_18006BAC0.c)
 *     sub_18006CCF0 @ 0x18006CCF0 (sub_18006CCF0.c)
 *     sub_18006E194 @ 0x18006E194 (sub_18006E194.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_180073F4C @ 0x180073F4C (sub_180073F4C.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 *     sub_18007E7CC @ 0x18007E7CC (sub_18007E7CC.c)
 *     RtlQueryProtectedPolicy @ 0x18007FAE0 (RtlQueryProtectedPolicy.c)
 *     sub_180083D40 @ 0x180083D40 (sub_180083D40.c)
 *     sub_180084338 @ 0x180084338 (sub_180084338.c)
 *     sub_18008BC70 @ 0x18008BC70 (sub_18008BC70.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 *     sub_1800D5668 @ 0x1800D5668 (sub_1800D5668.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800E02E0 @ 0x1800E02E0 (sub_1800E02E0.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E6890 (RtlQueryCriticalSectionOwner.c)
 *     RtlBarrier_0 @ 0x1800EA614 (RtlBarrier_0.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 *     sub_180102800 @ 0x180102800 (sub_180102800.c)
 *     EtwEnumerateProcessRegGuids @ 0x18010CA10 (EtwEnumerateProcessRegGuids.c)
 *     sub_180114B68 @ 0x180114B68 (sub_180114B68.c)
 *     sub_1801155A4 @ 0x1801155A4 (sub_1801155A4.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8
  signed __int64 v4; // rtt
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  _QWORD *i; // rcx
  __int64 v11; // rdx

  result = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  if ( result != 17 )
  {
    if ( (result & 1) == 0 )
      RtlRaiseStatus(3221226084LL);
    while ( (result & 2) == 0 )
    {
      v3 = 0LL;
      if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v3 = result - 16;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, v3, result);
      if ( v4 == result )
        return result;
    }
    if ( (result & 8) != 0 )
    {
      for ( i = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
      {
        v11 = i[1];
        if ( v11 )
          break;
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)(v11 + 32)) > 0 )
        return result;
      v5 = -9LL;
    }
    else
    {
      v5 = -1LL;
    }
    do
    {
      v6 = v5 + 4;
      v7 = result & 6;
      if ( v7 != 2 )
        v6 = v5;
      v8 = result + v6;
      v9 = result;
      result = _InterlockedCompareExchange64(a1, v8, result);
    }
    while ( v9 != result );
    if ( v7 == 2 )
      return sub_180035E30(a1, v8, 0LL);
  }
  return result;
}
