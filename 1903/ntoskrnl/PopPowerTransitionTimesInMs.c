/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x14015DFEC
 * Callers:
 *     PopDiagTracePowerTransitionTime @ 0x140724A68 (PopDiagTracePowerTransitionTime.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408A791C (PopCalculateWakeTimeAdjustment.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r11
  _DWORD *v12; // r10
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_1404434E8, &qword_1404434F0);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140443508, &qword_140443510);
    *a2 = result;
  }
  if ( a5 )
  {
    v13 = 0LL;
    result = PopQpcTimeInMs(&v13, &qword_140443528);
    *v12 = result;
    if ( dword_140443730 )
    {
      result = (unsigned int)(qword_1404435A8 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140443570 / v11;
    *a3 = qword_140443570 / v11;
  }
  if ( a4 )
  {
    result = (qword_1404436A8 + qword_1404435E0) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140443550 / v11;
    *a6 = qword_140443550 / v11;
  }
  return result;
}
