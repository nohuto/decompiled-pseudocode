/*
 * XREFs of ?InternalRelease@?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180064018
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PolicyConfig__ @ 0x1800749D0 (_dynamic_atexit_destructor_for__g_PolicyConfig__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPolicyConfig>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
