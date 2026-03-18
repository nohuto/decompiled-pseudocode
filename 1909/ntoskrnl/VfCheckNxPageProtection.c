/*
 * XREFs of VfCheckNxPageProtection @ 0x140327110
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140965A64 (VfCheckPageProtection.c)
 */

__int64 __fastcall VfCheckNxPageProtection(int a1, int a2)
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection(a1, a2);
  return result;
}
