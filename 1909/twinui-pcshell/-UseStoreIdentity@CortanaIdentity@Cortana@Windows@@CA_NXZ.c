/*
 * XREFs of ?UseStoreIdentity@CortanaIdentity@Cortana@Windows@@CA_NXZ @ 0x1801EB6C4
 * Callers:
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6ECC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::Cortana::CortanaIdentity::UseStoreIdentity(void)
{
  bool v0; // dl
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  if ( Windows::Cortana::CortanaIdentity::m_initialized )
    return Windows::Cortana::CortanaIdentity::m_useStoreIdentity;
  v2 = 0;
  Windows::Cortana::CortanaIdentity::m_initialized = 1;
  v3 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"CortanaIdentityOverride",
         0x10u,
         0LL,
         &v2,
         &v3) )
  {
    return Windows::Cortana::CortanaIdentity::m_useStoreIdentity;
  }
  v0 = ((v2 - 1) & 0xFFFFFFFD) == 0;
  Windows::Cortana::CortanaIdentity::m_useStoreIdentity = v0;
  Windows::Cortana::CortanaIdentity::m_initialized = (unsigned int)(v2 - 2) > 1;
  return v0;
}
