/*
 * XREFs of DCompositionIsShellProcess @ 0x1C003AB88
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00394CC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  bool v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v4; // edx

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v0 = PsGetCurrentProcess(v2, v1) == *((_QWORD *)DefaultConnection + 29);
    DirectComposition::CConnection::Release(DefaultConnection, v4);
  }
  return v0;
}
