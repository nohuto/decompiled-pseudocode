/*
 * XREFs of ?GetFailureInfo@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAPEBUFailureInfo@2@XZ @ 0x1800AB574
 * Callers:
 *     ?StopActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x180337490 (-StopActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::GetFailureInfo(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  result = 0LL;
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    return v1 + 80;
  return result;
}
