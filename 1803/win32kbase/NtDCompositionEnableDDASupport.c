/*
 * XREFs of NtDCompositionEnableDDASupport @ 0x1C01435A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0144D80 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall NtDCompositionEnableDDASupport(__int64 a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v2; // r8
  DirectComposition::CConnection *v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    LOBYTE(v2) = 1;
    v4 = DirectComposition::CConnection::ForceRender(DefaultConnection, 0LL, v2, 0LL, 0);
    DirectComposition::CConnection::Release(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
