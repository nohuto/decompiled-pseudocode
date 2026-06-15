/*
 * XREFs of ?UpdateLicenseStatus@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013C780
 * Callers:
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013B55C (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z @ 0x180139408 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z.c)
 */

void __fastcall AtmosCheck::UpdateLicenseStatus(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int *a4,
        bool *a5)
{
  bool *v5; // rax
  int LicenseStatusForEndpointId; // eax

  v5 = a5;
  *a5 = 0;
  *a4 = -2147023728;
  if ( *((_BYTE *)this + 184) )
  {
    LOBYTE(a5) = 0;
    LicenseStatusForEndpointId = AtmosCheck::GetLicenseStatusForEndpointId(this, a2, a3, (bool *)&a5, v5);
    if ( LicenseStatusForEndpointId < 0 )
      *a4 = LicenseStatusForEndpointId;
    else
      *a4 = (_BYTE)a5 == 0 ? 0x80070490 : 0;
  }
}
