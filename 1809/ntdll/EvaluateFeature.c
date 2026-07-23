/*
 * XREFs of EvaluateFeature @ 0x18009F24C
 * Callers:
 *     EvaluateCurrentState @ 0x18009F1A4 (EvaluateCurrentState.c)
 * Callees:
 *     EvaluateCurrentStateFromRegistry @ 0x18009F1CC (EvaluateCurrentStateFromRegistry.c)
 */

__int64 __fastcall EvaluateFeature(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = *(unsigned int *)g_Feature_2683562299_61252281_FeatureDescriptorDetails;
  if ( !(_DWORD)result && g_Feature_2683562299_cachedvariant == 0x80000000 )
  {
    LOBYTE(v2) = 0;
    _InterlockedCompareExchange(
      (volatile signed __int32 *)g_Feature_2683562299_61252281_FeatureDescriptorDetails,
      EvaluateCurrentStateFromRegistry(61252281, 0LL, 2, 0, &v2) + 1,
      0);
    return (unsigned int)_InterlockedCompareExchange(
                           &g_Feature_2683562299_cachedvariant,
                           (unsigned __int8)v2,
                           0x80000000);
  }
  return result;
}
