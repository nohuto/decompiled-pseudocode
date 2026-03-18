/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801A833C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801A83AC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801AA438 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CNaturalAnimation *this)
{
  LONGLONG v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL)
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 92) / 1000000
     - *((_QWORD *)this + 44)
     - Time::s_luBegin.QuadPart;
  return TimeDelta::ToSeconds((TimeDelta *)&v2);
}
