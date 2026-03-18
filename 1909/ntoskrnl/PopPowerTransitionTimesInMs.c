/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x14015E68C
 * Callers:
 *     PopDiagTracePowerTransitionTime @ 0x140726908 (PopDiagTracePowerTransitionTime.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408A717C (PopCalculateWakeTimeAdjustment.c)
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
    result = PopQpcTimeInMs(&qword_140443468, &qword_140443470);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140443488, &qword_140443490);
    *a2 = result;
  }
  if ( a5 )
  {
    v13 = 0LL;
    result = PopQpcTimeInMs(&v13, &qword_1404434A8);
    *v12 = result;
    if ( dword_1404436B0 )
    {
      result = (unsigned int)(qword_140443528 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_1404434F0 / v11;
    *a3 = qword_1404434F0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140443628 + qword_140443560) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_1404434D0 / v11;
    *a6 = qword_1404434D0 / v11;
  }
  return result;
}
