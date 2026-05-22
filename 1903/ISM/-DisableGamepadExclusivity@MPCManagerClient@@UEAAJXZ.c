/*
 * XREFs of ?DisableGamepadExclusivity@MPCManagerClient@@UEAAJXZ @ 0x180110C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::DisableGamepadExclusivity(MPCManagerClient *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 205) + 152LL);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  else
    return 0LL;
}
