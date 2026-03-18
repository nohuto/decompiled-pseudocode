/*
 * XREFs of DCompositionIsShellProcess @ 0x1C0013398
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  bool v0; // bl
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v2; // edx

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v0 = PsGetCurrentProcess() == *((_QWORD *)DefaultConnection + 29);
    DirectComposition::CConnection::Release(DefaultConnection, v2);
  }
  return v0;
}
