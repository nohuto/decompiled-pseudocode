/*
 * XREFs of ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18000A050
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003D300 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x1800420A0 (-_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::AgileRef *__fastcall Microsoft::WRL::AgileRef::AgileRef(Microsoft::WRL::AgileRef *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
