/*
 * XREFs of ?ReleaseCreatedRef@WindowingEnvironmentConfig@@UEAAIXZ @ 0x1800853A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentConfig::ReleaseCreatedRef(WindowingEnvironmentConfig *this)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 4);
}
