/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x140298E20
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1400D1CD0 (KiIdleSchedule.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)a1[24];
  result = a1[3115];
  if ( (result & v2[1]) != 0 )
  {
    v7 = 0LL;
    v6 = -1;
    v4 = a1[25];
    result = *v2;
    v5 = v2[26];
    if ( (*v2 & v4) != 0 && (v5 & v4) != 0 )
    {
      result = KiSendHeteroRescheduleIntRequestHelper(v2[10] & ~v2[2] & (v5 ^ v2[17]), &v7, &v6, a1);
      if ( (_BYTE)result )
      {
        result = KiSendHeteroRescheduleIntRequestHelper(1LL << v6, 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return KiSendHeteroRescheduleIntRequestHelper(v7 ^ (1LL << v6), 0LL, 0LL, a1);
      }
    }
  }
  return result;
}
