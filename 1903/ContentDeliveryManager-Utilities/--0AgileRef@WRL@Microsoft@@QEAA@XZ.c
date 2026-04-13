/*
 * XREFs of ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x180004850
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180054BF0 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054CC4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::AgileRef *__fastcall Microsoft::WRL::AgileRef::AgileRef(Microsoft::WRL::AgileRef *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
