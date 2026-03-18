/*
 * XREFs of DCompositionDDAChange @ 0x1C019FDB0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00B719C (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 DCompositionDDAChange()
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v1 = DefaultConnection;
  if ( DefaultConnection )
  {
    v2 = DirectComposition::CConnection::ForceRender((__int64)DefaultConnection, 0, 1, 0, 0);
    DirectComposition::CConnection::Release(v1, v3);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
